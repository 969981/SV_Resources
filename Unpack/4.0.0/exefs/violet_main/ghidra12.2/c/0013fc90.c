/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0013fc90; name: FUN_0013fc90
 */


long FUN_0013fc90(long *param_1,long param_2)

{
  byte bVar1;
  code *pcVar2;
  uint uVar3;
  long lVar4;
  byte *pbVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined1 auStack_68 [40];
  
  lVar8 = *param_1;
  uVar9 = 0;
  do {
    lVar7 = *(long *)param_1[1];
    *(long *)param_1[1] = lVar7 + -1;
    if (lVar7 == 0) {
      uVar3 = FUN_00145730();
      if (uVar3 == 0xffffffff) goto LAB_0013fdf4;
    }
    else {
      pbVar5 = *(byte **)(param_1[1] + 8);
      *(byte **)(param_1[1] + 8) = pbVar5 + 1;
      uVar3 = (uint)*pbVar5;
    }
    if (0x1fffffffffffffe < uVar9) {
      FUN_0013fc50(param_1,"integer overflow");
      goto LAB_0013fdf4;
    }
    uVar9 = (ulong)(uVar3 & 0x7f) | uVar9 << 7;
  } while ((uVar3 >> 7 & 1) == 0);
  if (uVar9 == 0) {
    lVar7 = 0;
  }
  else {
    uVar9 = uVar9 - 1;
    if (uVar9 < 0x29) {
      lVar7 = FUN_001457a0(param_1[1],auStack_68,uVar9);
      if (lVar7 != 0) {
LAB_0013fdf4:
        FUN_0013fc50(param_1,"truncated chunk");
                    /* WARNING: Does not return */
        pcVar2 = (code *)UndefinedInstructionException(0,0x13fe04);
        (*pcVar2)();
      }
      lVar7 = FUN_0013be00(lVar8,auStack_68,uVar9);
      bVar1 = *(byte *)(param_2 + 9);
    }
    else {
      lVar7 = FUN_0013c050(lVar8,uVar9);
      plVar6 = *(long **)(lVar8 + 0x10);
      *plVar6 = lVar7;
      *(byte *)(plVar6 + 1) = *(byte *)(lVar7 + 8) | 0x40;
      FUN_00126fc0(lVar8);
      lVar4 = FUN_001457a0(param_1[1],lVar7 + 0x18,uVar9);
      if (lVar4 != 0) goto LAB_0013fdf4;
      *(long *)(lVar8 + 0x10) = *(long *)(lVar8 + 0x10) + -0x10;
      bVar1 = *(byte *)(param_2 + 9);
    }
    if (((bVar1 >> 5 & 1) != 0) && ((*(byte *)(lVar7 + 9) & 0x18) != 0)) {
      FUN_00129d70(lVar8,param_2,lVar7);
    }
  }
  return lVar7;
}


