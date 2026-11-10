/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001388e0; name: FUN_001388e0
 */


long FUN_001388e0(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x38);
  lVar1 = FUN_0013be00(lVar4);
  lVar2 = FUN_0013d320(*(undefined8 *)(param_1 + 0x50),lVar1);
  if ((*(byte *)(lVar2 + 8) & 0xf) == 0) {
    plVar3 = *(long **)(lVar4 + 0x10);
    *(long **)(lVar4 + 0x10) = plVar3 + 2;
    *plVar3 = lVar1;
    *(byte *)(plVar3 + 1) = *(byte *)(lVar1 + 8) | 0x40;
    FUN_0013d7c0(lVar4,*(undefined8 *)(param_1 + 0x50),plVar3,lVar2,plVar3);
    if (0 < *(long *)(*(long *)(lVar4 + 0x18) + 0x18)) {
      FUN_0012ac30(lVar4);
    }
    *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + -0x10;
  }
  else {
    lVar1 = *(long *)(lVar2 + 0x10);
  }
  return lVar1;
}


