/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0294c9d0; name: FUN_0294c9d0
 */


bool FUN_0294c9d0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x48);
  if ((((*(int *)(lVar1 + 0x4c) < 1) && (*(int *)(lVar1 + 0x50) < 1)) &&
      (*(int *)(lVar1 + 0x54) < 1)) &&
     (((*(int *)(lVar1 + 0x58) < 1 && (*(int *)(lVar1 + 0x5c) < 1)) &&
      ((*(int *)(lVar1 + 0x60) < 1 && (*(int *)(lVar1 + 100) < 1)))))) {
    return 0 < *(int *)(lVar1 + 0x68);
  }
  return true;
}


