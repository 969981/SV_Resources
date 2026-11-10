/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f524bc; name: FUN_02f524bc
 */


long FUN_02f524bc(undefined8 param_1,long param_2)

{
  long lVar1;
  
  if (*(int *)(param_2 + 0x18) < 0xf81) {
    lVar1 = *(long *)(param_2 + 0x10) + (long)*(int *)(param_2 + 0x18) + 0x20;
  }
  else {
    lVar1 = FUN_031c36f4(param_2);
  }
  FUN_02f5252c(lVar1,param_1);
  *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 0x20;
  *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
  return lVar1;
}


