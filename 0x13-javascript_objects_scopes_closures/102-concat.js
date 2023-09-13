#!/usr/bin/node
const fs = require('fs');

if (process.argv.length !== 5) {
  console.error('Usage: ./102-concat.js fileA fileB fileC');
  process.exit(1);
}

const fileAPath = process.argv[2];
const fileBPath = process.argv[3];
const fileCPath = process.argv[4];

try {
  const fileAContents = fs.readFileSync(fileAPath, 'utf8');
  const fileBContents = fs.readFileSync(fileBPath, 'utf8');
  const concatenatedContents = fileAContents + fileBContents;
  fs.writeFileSync(fileCPath, concatenatedContents);
  console.log(`Concatenated ${fileAPath} and ${fileBPath} into ${fileCPath}`);
} catch (err) {
  console.error(`Error: ${err.message}`);
  process.exit(1);
}
