/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001234b0; name: FUN_001234b0
 */


void FUN_001234b0(long param_1,int param_2)

{
  long lVar1;
  long *plVar2;
  
  if (param_2 < 1) {
    plVar2 = *(long **)(param_1 + 0x10);
    lVar1 = FUN_0013be00(param_1,&DAT_03c886bc,0);
    *plVar2 = lVar1;
    *(byte *)(plVar2 + 1) = *(byte *)(lVar1 + 8) | 0x40;
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
    lVar1 = *(long *)(*(long *)(param_1 + 0x18) + 0x18);
  }
  else {
    FUN_00140b30(param_1);
    lVar1 = *(long *)(*(long *)(param_1 + 0x18) + 0x18);
  }
  if (lVar1 < 1) {
    return;
  }
  FUN_0012ac30(param_1);
  return;
}


