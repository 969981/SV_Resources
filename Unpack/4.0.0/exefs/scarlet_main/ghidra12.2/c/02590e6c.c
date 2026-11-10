/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02590e6c; name: FUN_02590e6c
 */


undefined8 FUN_02590e6c(char *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 == '\x01') {
    uVar1 = FUN_02592ba0(param_1 + 8);
  }
  else if (*param_1 == '\0') {
    uVar1 = FUN_02592b6c(*(undefined8 *)(param_1 + 8));
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


