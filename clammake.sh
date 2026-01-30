#!/usr/bin/env bash

repo=$(git rev-parse --show-toplevel)

fatal() {
	echo "Error: $1" 1>&2
	exit 1
}

cd "${repo}"/build || fatal "failed to go to \`build\` dir"

cmake .. || fatal "failed to run cmake"
make -j10 || fatal "failed to run make"

