/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02e9dd30; name: FUN_02e9dd30
 */


void FUN_02e9dd30(long param_1,void *param_2,undefined8 param_3,undefined8 param_4,
                 undefined2 *param_5,undefined8 param_6,undefined1 (*param_7) [12],uint param_8,
                 long param_9)

{
  undefined8 uVar1;
  undefined1 (*pauVar2) [12];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined *local_118;
  undefined1 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  undefined1 local_100;
  long local_f8;
  undefined1 auStack_f0 [16];
  undefined2 local_e0;
  undefined8 local_dc;
  undefined4 local_d4;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  uVar8 = (undefined4)((ulong)*(undefined8 *)(*param_7 + 8) >> 0x20);
  fVar6 = (float)*(undefined8 *)*param_7;
  fVar7 = (float)((ulong)*(undefined8 *)*param_7 >> 0x20);
  pauVar2 = (undefined1 (*) [12])(param_7[1] + 4);
  uVar15 = (undefined4)((ulong)*(undefined8 *)param_7[2] >> 0x20);
  fVar10 = (float)*(undefined8 *)*pauVar2;
  fVar12 = (float)((ulong)*(undefined8 *)*pauVar2 >> 0x20);
  auVar18._12_4_ = uVar15;
  auVar18._0_12_ = *pauVar2;
  auVar3._12_4_ = uVar15;
  auVar3._0_12_ = *pauVar2;
  auVar18 = NEON_ext(auVar18,auVar3,8,1);
  pauVar2 = (undefined1 (*) [12])(param_7[2] + 8);
  uVar15 = (undefined4)((ulong)*(undefined8 *)(param_7[3] + 4) >> 0x20);
  uStack_98 = *(undefined8 *)*pauVar2;
  fVar16 = (float)((ulong)uStack_98 >> 0x20);
  auVar17._12_4_ = uVar8;
  auVar17._0_12_ = *param_7;
  auVar19._12_4_ = uVar8;
  auVar19._0_12_ = *param_7;
  auVar17 = NEON_ext(auVar17,auVar19,8,1);
  uStack_80 = CONCAT44(auVar18._0_4_,auVar17._0_4_);
  auVar4._12_4_ = uVar15;
  auVar4._0_12_ = *pauVar2;
  auVar5._12_4_ = uVar15;
  auVar5._0_12_ = *pauVar2;
  auVar19 = NEON_ext(auVar4,auVar5,8,1);
  uStack_78 = auVar19._0_8_;
  local_a0 = CONCAT44(fVar10,fVar6);
  fVar9 = auVar19._4_4_;
  uStack_88 = CONCAT44(fVar9,fVar16);
  local_90 = CONCAT44(fVar12,fVar7);
  fVar11 = -(float)*(undefined8 *)param_7[4];
  fVar13 = -(float)((ulong)*(undefined8 *)param_7[4] >> 0x20);
  fVar14 = -(float)*(undefined8 *)(param_7[4] + 8);
  uStack_68 = CONCAT44(fVar9 * fVar14 + fVar16 * fVar11 + fVar9 * fVar13,
                       auVar19._0_4_ * fVar14 + (float)uStack_98 * fVar11 + fVar16 * fVar13);
  local_70 = CONCAT44(auVar18._0_4_ * fVar14 + fVar10 * fVar11 + fVar12 * fVar13,
                      auVar17._0_4_ * fVar14 + fVar6 * fVar11 + fVar7 * fVar13);
  memcpy(auStack_f0,param_2,0x48);
  local_e0 = *param_5;
  local_d4 = *(undefined4 *)(param_5 + 6);
  local_dc = *(undefined8 *)(param_5 + 2);
  local_a8 = 0;
  local_f8 = param_9;
  local_118 = PTR_DAT_047d1b48 + 0x10;
  local_110 = *(undefined1 *)(param_9 + 8);
  local_108 = NEON_fmin(*(undefined8 *)(param_9 + 0x10),0x5f7ffff05f7ffff0,4);
  local_100 = *(char *)(param_9 + 0x18) != '\0';
  local_10c = *(undefined4 *)(param_9 + 0xc);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  local_b8 = param_4;
  FUN_02e9d820(param_1,auStack_f0,param_6,*(undefined8 *)((long)param_2 + 0x38),(long)param_2 + 0x10
               ,param_3,&local_a0,~param_8 & 1,&local_118);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  return;
}


