/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02ef6ac4; name: FUN_02ef6ac4
 */


long FUN_02ef6ac4(long param_1,int param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  ushort uVar4;
  int iVar5;
  undefined1 auVar6 [16];
  long lVar7;
  int *piVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  float fVar16;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar21 [16];
  float fVar22;
  float fVar24;
  undefined8 uVar23;
  float fVar25;
  float fVar26;
  undefined8 uVar27;
  
  lVar7 = param_1 + 0x160 + (long)param_2 * 0x30;
  uVar4 = *(ushort *)(param_1 + 0x160 + (long)param_2 * 2 + 0xa30);
  uVar12 = *(undefined8 *)(lVar7 + 0x850);
  fVar10 = *(float *)(lVar7 + 0x858);
  uVar15 = *(undefined8 *)(lVar7 + 0x85c);
  uVar9 = *(undefined8 *)(lVar7 + 0x874);
  fVar20 = (float)((ulong)uVar15 >> 0x20);
  fVar14 = *(float *)(lVar7 + 0x864);
  uVar3 = *(undefined4 *)(lVar7 + 0x87c);
  uVar17 = *(undefined8 *)(lVar7 + 0x868);
  fVar16 = *(float *)(lVar7 + 0x870);
  fVar11 = (float)uVar12;
  fVar25 = (float)uVar17 - fVar11;
  fVar13 = (float)((ulong)uVar12 >> 0x20);
  fVar19 = (float)((ulong)uVar17 >> 0x20);
  fVar26 = fVar19 - fVar13;
  piVar8 = (int *)(param_3 + 0x40);
  iVar5 = *(int *)(param_3 + 0x48);
  puVar1 = (undefined8 *)0x0;
  if (*piVar8 != 0) {
    puVar1 = (undefined8 *)((long)*piVar8 + (long)piVar8);
  }
  fVar22 = (float)uVar15 - fVar11;
  fVar24 = fVar20 - fVar13;
  uVar27 = NEON_ext(CONCAT44(fVar24,fVar22),(ulong)(uint)(fVar14 - fVar10),4,1);
  uVar23 = NEON_ext(CONCAT44(fVar26,fVar25),(ulong)(uint)(fVar16 - fVar10),4,1);
  puVar2 = (undefined8 *)0x0;
  if (iVar5 != 0) {
    puVar2 = (undefined8 *)((long)iVar5 + param_3 + 0x48);
  }
  fVar18 = ((float)uVar15 - fVar11) * (float)uVar23 - ((float)uVar17 - fVar11) * (float)uVar27;
  fVar19 = (fVar20 - fVar13) * (float)((ulong)uVar23 >> 0x20) -
           (fVar19 - fVar13) * (float)((ulong)uVar27 >> 0x20);
  fVar20 = (fVar14 - fVar10) * fVar25 - (fVar16 - fVar10) * fVar22;
  fVar25 = (fVar14 - fVar10) * fVar26 - (fVar16 - fVar10) * fVar24;
  auVar21._4_4_ = fVar19;
  auVar21._0_4_ = fVar18;
  auVar21._8_4_ = fVar20;
  auVar21._12_4_ = fVar25;
  auVar6._4_4_ = fVar19;
  auVar6._0_4_ = fVar18;
  auVar6._8_4_ = fVar20;
  auVar6._12_4_ = fVar25;
  auVar21 = NEON_ext(auVar21,auVar6,4,1);
  fVar19 = auVar21._0_4_;
  fVar25 = auVar21._4_4_;
  fVar20 = fVar19 * fVar19 + fVar25 * fVar25 + fVar18 * fVar18;
  if (fVar20 == 0.0) {
    fVar26 = 0.0;
    fVar20 = 0.0;
  }
  else {
    uVar23 = NEON_fmov(0x3f800000,4);
    fVar26 = (float)uVar23 / SQRT(fVar20);
    fVar20 = (float)((ulong)uVar23 >> 0x20) /
             SQRT(fVar19 * fVar19 + fVar25 * fVar25 + fVar18 * fVar18);
  }
  *(float *)(puVar1 + 1) = fVar10;
  *(float *)((long)puVar1 + 0x14) = fVar14;
  puVar1[3] = uVar17;
  *puVar1 = uVar12;
  *(undefined8 *)((long)puVar1 + 0xc) = uVar15;
  fVar14 = fVar26 * fVar19;
  fVar22 = fVar20 * fVar25;
  fVar20 = fVar20 * -(fVar10 * fVar18 + fVar11 * fVar19 + fVar13 * fVar25);
  uVar12 = CONCAT44(fVar20,fVar26 * fVar18);
  *(float *)(puVar1 + 4) = fVar16;
  *(undefined8 *)((long)puVar1 + 0x24) = uVar9;
  *(undefined4 *)((long)puVar1 + 0x2c) = uVar3;
  iVar5 = *(int *)(param_3 + 0x58);
  *(undefined4 *)(param_3 + 0x44) = 4;
  lVar7 = 0;
  if (iVar5 != 0) {
    lVar7 = (long)iVar5 + param_3 + 0x58;
  }
  *(undefined1 *)(lVar7 + 3) = 3;
  *(undefined1 *)(lVar7 + 7) = 3;
  puVar2[1] = uVar12;
  *puVar2 = CONCAT44(fVar22,fVar14);
  puVar2[3] = CONCAT44(-fVar20,-(fVar26 * fVar18));
  puVar2[2] = CONCAT44(-fVar22,-fVar14);
  puVar2[5] = uVar12;
  puVar2[4] = CONCAT44(fVar22,fVar14);
  puVar2[7] = uVar12;
  puVar2[6] = CONCAT44(fVar22,fVar14);
  *(ushort *)(param_3 + 0x1a) = uVar4;
  *(undefined4 *)(param_3 + 0x20) = *(undefined4 *)(param_1 + 0xc0c);
  *(undefined8 *)(param_3 + 0x28) = *(undefined8 *)(param_1 + (long)param_2 * 8 + 0xba8);
  if ((uVar4 >> 10 & 1) == 0) {
    lVar7 = 0;
    if (*(int *)(param_3 + 0x40) != 0) {
      lVar7 = (long)*(int *)(param_3 + 0x40) + (long)piVar8;
    }
    *(undefined8 *)(lVar7 + 0x24) = *(undefined8 *)(lVar7 + 0x18);
    *(undefined4 *)(lVar7 + 0x2c) = *(undefined4 *)(lVar7 + 0x20);
    *(undefined4 *)(param_3 + 0x44) = 3;
  }
  return param_3;
}


