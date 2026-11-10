/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0013a450; name: FUN_0013a450
 */


ulong FUN_0013a450(uint *param_1)

{
  ulong uVar1;
  uint uVar2;
  byte bVar3;
  code *pcVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  byte *pbVar9;
  ulong uVar10;
  long *plVar11;
  
  plVar11 = *(long **)(param_1 + 0x12);
  uVar2 = *param_1;
  lVar8 = plVar11[1];
  uVar1 = plVar11[2];
  uVar10 = lVar8 + 1;
  if (uVar1 < uVar10) {
    if (0x3ffffffffffffffe < uVar1) {
LAB_0013a5e8:
      FUN_00138780(param_1,"lexical element too long",0);
                    /* WARNING: Does not return */
      pcVar4 = (code *)UndefinedInstructionException(0,0x13a5fc);
      (*pcVar4)();
    }
    lVar6 = FUN_0012d4f0(*(undefined8 *)(param_1 + 0xe),*plVar11,uVar1,uVar1 << 1);
    lVar8 = plVar11[1];
    uVar10 = lVar8 + 1;
    *plVar11 = lVar6;
    plVar11[2] = uVar1 << 1;
  }
  else {
    lVar6 = *plVar11;
  }
  plVar11[1] = uVar10;
  *(char *)(lVar6 + lVar8) = (char)uVar2;
  lVar8 = **(long **)(param_1 + 0x10);
  **(long **)(param_1 + 0x10) = lVar8 + -1;
  if (lVar8 == 0) {
    uVar5 = FUN_00145730();
    *param_1 = uVar5;
  }
  else {
    pbVar9 = *(byte **)(*(long *)(param_1 + 0x10) + 8);
    *(byte **)(*(long *)(param_1 + 0x10) + 8) = pbVar9 + 1;
    uVar5 = (uint)*pbVar9;
    *param_1 = uVar5;
  }
  if (uVar5 == 0x3d) {
    lVar8 = 0;
    do {
      while( true ) {
        plVar11 = *(long **)(param_1 + 0x12);
        lVar6 = plVar11[1];
        uVar1 = plVar11[2];
        uVar10 = lVar6 + 1;
        if (uVar1 < uVar10) {
          if (0x3ffffffffffffffe < uVar1) goto LAB_0013a5e8;
          lVar7 = FUN_0012d4f0(*(undefined8 *)(param_1 + 0xe),*plVar11,uVar1,uVar1 << 1);
          lVar6 = plVar11[1];
          uVar10 = lVar6 + 1;
          *plVar11 = lVar7;
          plVar11[2] = uVar1 << 1;
        }
        else {
          lVar7 = *plVar11;
        }
        plVar11[1] = uVar10;
        *(undefined1 *)(lVar7 + lVar6) = 0x3d;
        lVar6 = **(long **)(param_1 + 0x10);
        **(long **)(param_1 + 0x10) = lVar6 + -1;
        if (lVar6 == 0) break;
        pbVar9 = *(byte **)(*(long *)(param_1 + 0x10) + 8);
        *(byte **)(*(long *)(param_1 + 0x10) + 8) = pbVar9 + 1;
        bVar3 = *pbVar9;
        uVar5 = (uint)bVar3;
        lVar8 = lVar8 + 1;
        *param_1 = (uint)bVar3;
        if (bVar3 != 0x3d) goto LAB_0013a5bc;
      }
      uVar5 = FUN_00145730();
      lVar8 = lVar8 + 1;
      *param_1 = uVar5;
    } while (uVar5 == 0x3d);
  }
  else {
    lVar8 = 0;
  }
LAB_0013a5bc:
  uVar10 = lVar8 + 2;
  if (uVar5 != uVar2) {
    uVar10 = (ulong)(lVar8 == 0);
  }
  return uVar10;
}


