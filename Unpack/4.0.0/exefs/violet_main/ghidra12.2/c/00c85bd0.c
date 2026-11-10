/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c85bd0; name: FUN_00c85bd0
 */


long FUN_00c85bd0(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  if (param_2 == 0) {
    lVar3 = 0;
    *(undefined1 *)(*(long *)(param_1 + 0x10) + 8) = 0;
  }
  else {
    lVar1 = FUN_0013c0f0(param_1);
    plVar2 = *(long **)(param_1 + 0x10);
    *plVar2 = lVar1;
    lVar3 = lVar1 + 0x18;
    *(byte *)(plVar2 + 1) = *(byte *)(lVar1 + 8) | 0x40;
  }
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
  if (0 < *(long *)(*(long *)(param_1 + 0x18) + 0x18)) {
    FUN_0012ac30(param_1);
  }
  return lVar3;
}


