/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 024a8e50; name: FUN_024a8e50
 */


void FUN_024a8e50(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x18) = param_3;
  if (*(long *)(param_1 + 8) == param_3) {
    if (*(long *)(lVar1 + 0x128) != 0) {
      FUN_024a65bc();
    }
    *(undefined8 *)(lVar1 + 0x128) = 0;
  }
  else {
    lVar2 = *(long *)(param_3 + 0x10);
    if (*(long *)(lVar1 + 0x128) != 0) {
      FUN_024a65bc();
    }
    *(long *)(lVar1 + 0x128) = lVar2;
    if (lVar2 != 0) {
      *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
    }
  }
  return;
}


