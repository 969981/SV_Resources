/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 025911a0; name: FUN_025911a0
 */


undefined8 FUN_025911a0(char *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 == '\x01') {
    uVar1 = FUN_02592c10(param_1 + 8);
  }
  else if (*param_1 == '\0') {
    uVar1 = FUN_02592bdc(*(undefined8 *)(param_1 + 8));
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


