/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0352297c; name: FUN_0352297c
 */


void FUN_0352297c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x330);
  if (*(long *)(lVar1 + 0x30) == 0) {
    *(long *)(lVar1 + 0x30) = param_1 + 800;
    *(undefined8 *)(param_1 + 0x328) = 0;
  }
  else {
    *(long *)(param_1 + 0x328) = *(long *)(lVar1 + 0x30);
    *(long *)(lVar1 + 0x30) = param_1 + 800;
  }
  *(int *)(lVar1 + 0x48) = *(int *)(lVar1 + 0x48) + 1;
  FUN_034a2154();
  return;
}


