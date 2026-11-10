/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008ad210; name: FUN_008ad210
 */


void FUN_008ad210(long param_1,long *param_2,undefined8 param_3,long param_4,long param_5,
                 undefined4 param_6)

{
  long lVar1;
  undefined4 uVar2;
  short *psVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  short *psVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  lVar10 = *(long *)(param_5 + 0x30);
  lVar1 = *(long *)(param_5 + 0x38);
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0x18) != 0)) {
    lVar10 = lVar1;
  }
  psVar3 = (short *)FUN_00892a30(lVar10,param_6);
  if (*psVar3 == 2) {
    puVar4 = (undefined8 *)FUN_00896e78(0x20);
    if (puVar4 != (undefined8 *)0x0) {
      puVar4[2] = 0;
      puVar4[3] = 0;
      *puVar4 = 0;
      puVar4[1] = 0;
    }
    *(undefined8 **)(param_1 + 0xf8) = puVar4;
    uVar2 = *(undefined4 *)(psVar3 + 2);
    plVar5 = (long *)FUN_00896e78(0x48);
    if (plVar5 != (long *)0x0) {
      FUN_008f00f8(plVar5,5,3,uVar2);
      *plVar5 = (long)(PTR_DAT_047d23c8 + 0x10);
    }
  }
  else {
    if (*psVar3 != 1) {
      *(undefined8 *)(param_1 + 0xf8) = 0;
      return;
    }
    fVar13 = *(float *)(param_4 + 0x4c);
    fVar15 = *(float *)(param_4 + 0x50);
    if (fVar13 <= fVar15) {
      fVar14 = (float)NEON_ucvtf(*(undefined4 *)(psVar3 + 2));
      fVar14 = fVar14 / fVar13;
      fVar16 = fVar14 / (fVar15 / fVar13);
      puVar4 = (undefined8 *)FUN_00896e78(0x20);
    }
    else {
      fVar16 = (float)NEON_ucvtf(*(undefined4 *)(psVar3 + 2));
      fVar16 = fVar16 / fVar15;
      fVar14 = fVar16 / (fVar13 / fVar15);
      puVar4 = (undefined8 *)FUN_00896e78(0x20);
    }
    if (puVar4 != (undefined8 *)0x0) {
      puVar4[2] = 0;
      puVar4[3] = 0;
      *puVar4 = 0;
      puVar4[1] = 0;
    }
    *(undefined8 **)(param_1 + 0xf8) = puVar4;
    uVar2 = *(undefined4 *)(psVar3 + 4);
    plVar5 = (long *)FUN_00896e78(0x50);
    if (plVar5 != (long *)0x0) {
      FUN_008b5434(ABS(fVar14),ABS(fVar16),plVar5,5,3,uVar2);
    }
  }
  *(long **)(*(long *)(param_1 + 0xf8) + 0x18) = plVar5;
  psVar11 = *(short **)(param_1 + 0xf8);
  if (psVar11 != (short *)0x0) {
    *(undefined1 *)(param_1 + 0xf0) = 4;
    *psVar11 = *psVar3;
    uVar6 = FUN_008f0034(*(undefined8 *)(*(long *)(param_1 + 0xf8) + 0x18));
    uVar7 = FUN_008f003c(*(undefined8 *)(*(long *)(param_1 + 0xf8) + 0x18));
    uVar12 = *(undefined8 *)(*(long *)(param_1 + 0xf8) + 0x18);
    uVar8 = FUN_00896e78(uVar6);
    uVar9 = FUN_00896e78(uVar7);
    FUN_008f0064(uVar12,uVar8,uVar6,uVar9,uVar7);
    if (param_2 != (long *)0x0) {
      lVar10 = FUN_008b4d30(param_3,4,uVar6);
      *param_2 = *param_2 + lVar10;
      lVar10 = FUN_008b4d30(param_3,8,uVar7);
      *param_2 = *param_2 + lVar10;
    }
  }
  return;
}


