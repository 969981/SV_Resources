/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00477de0; name: FUN_00477de0
 */


long FUN_00477de0(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar3 = FUN_003eb5b0();
  lVar4 = FUN_003eb5b0();
  lVar5 = FUN_003eb5b0();
  lVar6 = 0;
  if (((lVar3 != 0) && (lVar4 != 0)) && (lVar5 != 0)) {
    iVar2 = FUN_0040d6e0(param_1,lVar3,lVar4,lVar5,0);
    if (iVar2 == 0) {
      lVar6 = 0;
    }
    else {
      iVar2 = FUN_003eb2b0(lVar3);
      uVar1 = iVar2 + 0xe;
      if (-1 < (int)(iVar2 + 7U)) {
        uVar1 = iVar2 + 7U;
      }
      lVar6 = (long)((ulong)uVar1 << 0x20) >> 0x23;
    }
  }
  FUN_003eb520(lVar3);
  FUN_003eb520(lVar4);
  FUN_003eb520(lVar5);
  return lVar6;
}


