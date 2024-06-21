#!/usr/bin/node

const args = process.argv.slice(2).map(Number);

if (args.length === 0 || args.length === 1) {
  console.log('0');
} else {
  const uniq = [...new Set(args)];
  const ord = uniq.sort((a, b) => b - a);
  console.log(ord[1]);
}
