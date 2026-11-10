/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f14884; name: FUN_02f14884
 */


void FUN_02f14884(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(long *)(param_1 + 0x3f0) != 0) {
    lVar1 = *(long *)(param_1 + 0x3f0) + param_1 + 0x3f0;
  }
  FUN_02f1008c(lVar1,*(undefined4 *)(param_1 + 0x3f8),param_2,*(undefined1 *)(param_1 + 0x21));
  *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 0x100;
  *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + 4;
  return;
}


