/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 011b9f98; name: FUN_011b9f98
 */


void FUN_011b9f98(char *param_1)

{
  char cVar1;
  
  cVar1 = *param_1;
  if (cVar1 == '\x01') {
    FUN_011ba074(param_1 + 8);
    return;
  }
  if (cVar1 == '\x03') {
    FUN_011ba490(param_1 + 8);
    return;
  }
  if (cVar1 == '\x02') {
    FUN_011ba328(param_1 + 8);
    return;
  }
  if (cVar1 == '\0') {
    FUN_011ba1d0(*(undefined8 *)(param_1 + 8));
    return;
  }
  return;
}


