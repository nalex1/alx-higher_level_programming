#!/usr/bin/node

const size = parseInt(process.argv[2]);
if (!Number.isInteger(size)) {
  console.log('Missing size');
} else {
  for (let i = 0; i < size; i++) {
    const letters = 'X'.repeat(size);
    console.log(letters);
  }
}
