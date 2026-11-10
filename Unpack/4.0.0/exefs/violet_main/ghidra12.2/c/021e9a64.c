/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021e9a64; name: FUN_021e9a64
 */


undefined8 FUN_021e9a64(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  FUN_021e9a74(*param_1);
  plVar2 = (long *)FUN_02b6c700();
  lVar4 = *plVar2;
  if (*(long *)(lVar4 + 0x180) != 0) {
    lVar3 = *(long *)(*(long *)(lVar4 + 0x180) + 0x20);
    if ((lVar3 == 0) || ((*(byte *)(lVar3 + 0x24a) & 1) == 0)) {
      return 1;
    }
    iVar1 = FUN_0157f718(lVar4,plVar2 + 1);
    if (iVar1 == 2) {
      FUN_0157f7bc(lVar4,plVar2 + 1);
    }
    FUN_0157f828(lVar4);
  }
  return 0;
}


