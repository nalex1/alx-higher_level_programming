#!/usr/bin/node

const n = parseInt(process.argv[2], 10);

if (!Number.isInteger(n)) {
  console.log('Not a number');
} else {
  console.log('My number: ' + n);
}
