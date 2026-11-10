/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f92d60; name: FUN_02f92d60
 */


undefined8
FUN_02f92d60(undefined8 param_1,long param_2,long param_3,long param_4,undefined8 *param_5)

{
  long lVar1;
  undefined1 (*pauVar2) [12];
  undefined1 (*pauVar3) [12];
  undefined1 auVar4 [16];
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [12];
  undefined1 auVar10 [12];
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  undefined1 auVar13 [12];
  undefined1 auVar14 [12];
  undefined *puVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined8 uVar28;
  float fVar29;
  float fVar30;
  undefined8 uVar31;
  float fVar32;
  undefined8 uVar33;
  undefined1 auVar34 [16];
  undefined8 uVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 local_80 [8];
  float fStack_78;
  undefined1 auStack_70 [8];
  float fStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  float local_50;
  float fStack_4c;
  undefined8 uStack_48;
  
  lVar1 = *(long *)(param_3 + 0x28);
  pauVar2 = *(undefined1 (**) [12])(param_3 + 0x30);
  param_5[6] = lVar1;
  uVar19 = (undefined4)((ulong)*(undefined8 *)(*pauVar2 + 8) >> 0x20);
  uVar16 = *(undefined8 *)*pauVar2;
  auVar10 = *pauVar2;
  auVar9 = *pauVar2;
  pauVar3 = (undefined1 (*) [12])(pauVar2[1] + 4);
  uVar6 = *(undefined8 *)pauVar2[2];
  uVar23 = (undefined4)((ulong)uVar6 >> 0x20);
  uVar5 = *(undefined8 *)*pauVar3;
  auVar12 = *pauVar3;
  auVar11 = *pauVar3;
  param_5[1] = *(undefined8 *)(*pauVar2 + 8);
  *param_5 = uVar16;
  param_5[3] = uVar6;
  param_5[2] = uVar5;
  pauVar3 = (undefined1 (*) [12])(pauVar2[2] + 8);
  uVar35 = *(undefined8 *)(pauVar2[3] + 4);
  uVar24 = (undefined4)((ulong)uVar35 >> 0x20);
  uVar6 = *(undefined8 *)*pauVar3;
  auVar14 = *pauVar3;
  auVar13 = *pauVar3;
  fVar20 = (float)((ulong)uVar6 >> 0x20);
  param_5[0x12] = 0x3d8888893d888889;
  param_5[0x16] = param_1;
  param_5[5] = uVar35;
  param_5[4] = uVar6;
  uVar28 = *(undefined8 *)(*(long *)(param_3 + 8) + 0x68);
  uVar35 = *(undefined8 *)(*(long *)(param_3 + 8) + 0x60);
  uVar33 = *(undefined8 *)(*(long *)(param_4 + 8) + 0x68);
  uVar31 = *(undefined8 *)(*(long *)(param_4 + 8) + 0x60);
  fVar25 = (float)uVar35 - (float)uVar31;
  fVar26 = (float)((ulong)uVar35 >> 0x20) - (float)((ulong)uVar31 >> 0x20);
  fVar27 = (float)uVar28 - (float)uVar33;
  fVar30 = fVar25 * fVar25 + fVar26 * fVar26 + fVar27 * fVar27;
  fVar32 = fVar25 * fVar25 + fVar26 * fVar26 + fVar27 * fVar27;
  if (0.004444445 <= fVar30) {
    auVar34._12_4_ = uVar19;
    auVar34._0_12_ = auVar9;
    auVar36._12_4_ = uVar19;
    auVar36._0_12_ = auVar10;
    auVar34 = NEON_ext(auVar34,auVar36,8,1);
    auVar37._12_4_ = uVar23;
    auVar37._0_12_ = auVar11;
    auVar4._12_4_ = uVar23;
    auVar4._0_12_ = auVar12;
    auVar36 = NEON_ext(auVar37,auVar4,8,1);
    auVar7._12_4_ = uVar24;
    auVar7._0_12_ = auVar13;
    auVar8._12_4_ = uVar24;
    auVar8._0_12_ = auVar14;
    auVar37 = NEON_ext(auVar7,auVar8,8,1);
    uVar35 = NEON_fmov(0x3f800000,4);
    fVar21 = (float)uVar35 / SQRT(fVar30);
    fVar22 = (float)((ulong)uVar35 >> 0x20) / SQRT(fVar32);
    fVar32 = fVar32 * fVar22;
    param_5[0xc] = CONCAT44(fVar32,fVar30 * fVar21);
    local_50 = (auVar34._0_4_ * fVar27 +
               (float)uVar16 * fVar25 + (float)((ulong)uVar16 >> 0x20) * fVar26) * fVar21;
    fStack_4c = (auVar36._0_4_ * fVar27 +
                (float)uVar5 * fVar25 + (float)((ulong)uVar5 >> 0x20) * fVar26) * fVar22;
    fVar17 = (auVar37._0_4_ * fVar27 + (float)uVar6 * fVar25 + fVar20 * fVar26) * fVar21;
    fVar20 = (auVar37._4_4_ * fVar27 + fVar20 * fVar25 + auVar37._4_4_ * fVar26) * fVar22;
    fVar29 = ((float)((ulong)uVar28 >> 0x20) - (float)((ulong)uVar33 >> 0x20)) * fVar22;
    uStack_48 = CONCAT44(fVar20,fVar17);
    param_5[9] = CONCAT44(fVar29,fVar27 * fVar21);
    param_5[8] = CONCAT44(fVar26 * fVar22,fVar25 * fVar21);
    puVar15 = PTR_DAT_047d19f0;
    uStack_58 = CONCAT44(-fVar20,-fVar17);
    local_60 = CONCAT44(-fStack_4c,-local_50);
    (**(code **)(*(long *)PTR_DAT_047d19f0 + (ulong)*(byte *)(lVar1 + 0x18) * 0x200 + 0x68))
              (lVar1,&local_50,auStack_70);
    (**(code **)(*(long *)puVar15 + (ulong)*(byte *)(*(long *)(param_3 + 0x28) + 0x18) * 0x200 +
                0x68))(*(long *)(param_3 + 0x28),&local_60,local_80);
    local_50 = (auStack_70._0_4_ - local_80._0_4_) * local_50;
    fStack_4c = (auStack_70._4_4_ - local_80._4_4_) * fStack_4c;
    fVar18 = (fStack_68 - fStack_78) * (float)uStack_48;
    fVar20 = *(float *)(*(long *)(param_3 + 0x28) + 0x20);
    fVar17 = (local_50 + fStack_4c + fVar18) * 0.5 + fVar20;
    fVar20 = (local_50 + fStack_4c + fVar18) * 0.5 + fVar20;
    fVar30 = fVar30 * fVar21 * (float)*(undefined8 *)(param_2 + 0x10);
    fVar32 = fVar32 * (float)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20);
    uVar16 = 0;
    param_5[0xd] = CONCAT44(fVar32 + fVar20,fVar30 + fVar17);
    param_5[0xe] = CONCAT44(fVar20,fVar17);
    param_5[0x15] = CONCAT44(fVar29 * fVar32,fVar27 * fVar21 * fVar30);
    param_5[0x14] = CONCAT44(fVar26 * fVar22 * fVar32,fVar25 * fVar21 * fVar30);
  }
  else {
    uVar16 = 0x80040200;
  }
  return uVar16;
}


