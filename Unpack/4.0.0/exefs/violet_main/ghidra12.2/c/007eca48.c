/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007eca48; name: FUN_007eca48
 */


void FUN_007eca48(long param_1)

{
  int iVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x18) != param_1 + 0x10) {
    iVar1 = *(int *)(param_1 + 0x24);
    lVar2 = *(long *)(param_1 + 0x18) - (long)iVar1;
    do {
      FUN_007ec54c(lVar2,0);
      FUN_007ec55c(lVar2,0);
      lVar2 = *(long *)(lVar2 + *(int *)(param_1 + 0x24) + 8) - (long)*(int *)(param_1 + 0x24);
    } while (lVar2 != (param_1 + 0x10) - (long)iVar1);
  }
  *(undefined1 *)(param_1 + 0x28) = 0;
  return;
}


