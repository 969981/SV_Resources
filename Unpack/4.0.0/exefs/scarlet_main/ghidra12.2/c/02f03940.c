/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f03940; name: FUN_02f03940
 */


void FUN_02f03940(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                 undefined8 *param_5,undefined8 *param_6,long param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined1 (*pauVar7) [16];
  long *plVar8;
  long lVar9;
  long *plVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar16;
  undefined1 auVar15 [16];
  float fVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar21;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 auStack_200 [2];
  undefined1 auStack_1f0 [40];
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined1 auStack_190 [64];
  float local_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float local_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float local_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined1 *local_f0;
  undefined8 uStack_e8;
  undefined1 local_e0;
  undefined4 local_dc;
  undefined4 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 local_b0 [8];
  float fStack_a8;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float local_90;
  float fStack_8c;
  float fStack_88;
  undefined8 uStack_80;
  float fStack_78;
  long *local_70;
  
  lVar9 = tpidr_el0;
  lVar5 = *(long *)(lVar9 + 0x1000b8);
  if (lVar5 == 0) {
    lVar5 = FUN_00e5d3b4();
    *(long *)(lVar9 + 0x1000b8) = lVar5;
  }
  plVar10 = *(long **)(lVar5 + 0x3e0);
  if (plVar10 != (long *)0x0) {
    lVar9 = *plVar10;
    if (*(code **)(lVar9 + 0x18) != (code *)0x0) {
      (**(code **)(lVar9 + 0x18))("CastShape",9,*(undefined8 *)(lVar9 + 0x28));
    }
    puVar1 = (undefined8 *)plVar10[2];
    uVar6 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
    if ((uVar6 <= (ulong)plVar10[3]) && (plVar10[2] = uVar6, puVar1 != (undefined8 *)0x0)) {
      *puVar1 = "TtCastShape";
      uVar4 = nn::os::GetSystemTick();
      puVar1[1] = uVar4;
    }
    if (((*(byte *)(lVar9 + 0x38) & 1) != 0) && (plVar10[6] != 0)) {
      puVar1 = (undefined8 *)plVar10[2];
      uVar6 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
      if ((uVar6 <= (ulong)plVar10[3]) && (plVar10[2] = uVar6, puVar1 != (undefined8 *)0x0)) {
        *puVar1 = &DAT_03c4e575;
        puVar1[1] = *(undefined8 *)(plVar10[6] + 8);
      }
    }
  }
  local_70 = plVar10;
  memcpy(local_b0,(void *)param_3[4],0x40);
  local_110 = *param_3;
  uStack_108 = param_3[1];
  local_100 = param_3[2];
  local_f8 = *(undefined4 *)(param_3 + 3);
  uStack_f4 = *(undefined4 *)((long)param_3 + 0x1c);
  uStack_e8 = 0;
  local_e0 = *(undefined1 *)(param_3 + 6);
  local_d0 = param_3[8];
  uStack_c8 = param_3[9];
  uStack_b8 = param_3[0xb];
  uStack_c0 = param_3[10];
  local_dc = *(undefined4 *)((long)param_3 + 0x34);
  uStack_d8 = *(undefined4 *)(param_3 + 7);
  pauVar7 = (undefined1 (*) [16])param_6[4];
  uVar13 = (undefined4)((ulong)*(undefined8 *)(*pauVar7 + 8) >> 0x20);
  NEON_ext(pauVar7[1],pauVar7[1],8,1);
  auVar2._12_4_ = uVar13;
  auVar2._0_12_ = *(undefined1 (*) [12])*pauVar7;
  auVar3._12_4_ = uVar13;
  auVar3._0_12_ = *(undefined1 (*) [12])*pauVar7;
  NEON_ext(auVar2,auVar3,8,1);
  NEON_ext(pauVar7[2],pauVar7[2],8,1);
  auVar2 = *pauVar7;
  auVar3 = pauVar7[1];
  auVar15 = pauVar7[2];
  auVar19 = NEON_ext(auVar3,auVar3,8,1);
  auVar18 = NEON_ext(auVar2,auVar2,8,1);
  auVar20 = NEON_ext(auVar15,auVar15,8,1);
  local_130 = auVar18._0_4_ * fStack_88 + auVar2._0_4_ * local_90 + auVar2._4_4_ * fStack_8c;
  fStack_12c = auVar19._0_4_ * fStack_88 + auVar3._0_4_ * local_90 + auVar3._4_4_ * fStack_8c;
  fStack_128 = auVar20._0_4_ * fStack_88 + auVar15._0_4_ * local_90 + auVar15._4_4_ * fStack_8c;
  fStack_124 = auVar20._4_4_ * fStack_88 + auVar15._4_4_ * local_90 + auVar20._4_4_ * fStack_8c;
  auVar2 = *pauVar7;
  auVar3 = pauVar7[1];
  auVar15 = pauVar7[2];
  auVar20 = NEON_ext(auVar2,auVar2,8,1);
  auVar18 = NEON_ext(auVar15,auVar15,8,1);
  auVar19 = NEON_ext(auVar3,auVar3,8,1);
  fVar14 = auVar15._4_4_;
  fVar21 = auVar18._4_4_;
  fVar17 = auVar15._0_4_;
  fVar16 = auVar18._0_4_;
  local_140 = auVar20._0_4_ * fStack_98 + auVar2._0_4_ * fStack_a0 + auVar2._4_4_ * fStack_9c;
  fStack_13c = auVar19._0_4_ * fStack_98 + auVar3._0_4_ * fStack_a0 + auVar3._4_4_ * fStack_9c;
  fStack_138 = fVar16 * fStack_98 + fVar17 * fStack_a0 + fVar14 * fStack_9c;
  fStack_134 = fVar21 * fStack_98 + fVar14 * fStack_a0 + fVar21 * fStack_9c;
  auVar2 = *pauVar7;
  auVar3 = pauVar7[1];
  auVar18 = NEON_ext(auVar3,auVar3,8,1);
  auVar15 = NEON_ext(auVar2,auVar2,8,1);
  fVar11 = local_b0._0_4_;
  fVar12 = local_b0._4_4_;
  local_150 = auVar15._0_4_ * fStack_a8 + auVar2._0_4_ * fVar11 + auVar2._4_4_ * fVar12;
  fStack_14c = auVar18._0_4_ * fStack_a8 + auVar3._0_4_ * fVar11 + auVar3._4_4_ * fVar12;
  fStack_148 = fVar16 * fStack_a8 + fVar17 * fVar11 + fVar14 * fVar12;
  fStack_144 = fVar21 * fStack_a8 + fVar14 * fVar11 + fVar21 * fVar12;
  fVar11 = (float)uStack_80 - *(float *)pauVar7[3];
  fVar12 = (float)((ulong)uStack_80 >> 0x20) - *(float *)(pauVar7[3] + 4);
  fStack_78 = fStack_78 - *(float *)(pauVar7[3] + 8);
  auVar2 = *pauVar7;
  auVar15 = NEON_ext(auVar2,auVar2,8,1);
  uStack_118 = CONCAT44(fVar21 * fStack_78 + fVar14 * fVar11 + fVar21 * fVar12,
                        fVar16 * fStack_78 + fVar17 * fVar11 + fVar14 * fVar12);
  local_120 = CONCAT44(auVar18._0_4_ * fStack_78 + auVar3._0_4_ * fVar11 + auVar3._4_4_ * fVar12,
                       auVar15._0_4_ * fStack_78 + auVar2._0_4_ * fVar11 + auVar2._4_4_ * fVar12);
  uVar13 = (undefined4)((ulong)param_2[0xb] >> 0x20);
  uVar4 = NEON_fmin(*(undefined8 *)(param_7 + 0x10),CONCAT44(uVar13,uVar13),4);
  *(undefined8 *)(param_7 + 0x10) = uVar4;
  plVar8 = (long *)*param_2;
  local_f0 = local_b0;
  if ((plVar8 == (long *)0x0) || ((*(byte *)(plVar8 + 3) & 1) == 0)) {
    uVar4 = *param_1;
  }
  else {
    memcpy(auStack_200,param_2,0x38);
    uVar4 = param_2[7];
    local_1c0 = param_2[8];
    uStack_1b8 = param_2[9];
    uStack_1a8 = param_2[0xb];
    uStack_1b0 = param_2[10];
    uStack_198 = param_2[0xd];
    local_1a0 = param_2[0xc];
    local_1c8 = uVar4;
    memcpy(auStack_190,param_2 + 0xe,0x40);
    local_210 = *param_5;
    uStack_208 = param_5[1];
    (**(code **)(*plVar8 + 0x38))(plVar8,2,local_110,uVar4,auStack_1f0);
    (**(code **)(*plVar8 + 0x38))(plVar8,2,*param_6,param_4,&local_210);
    param_2 = auStack_200;
    uVar4 = *param_1;
    param_5 = &local_210;
  }
  FUN_02ea2d14(uVar4,param_1,param_2,&local_110,param_4,param_5,param_6,&local_150,0,param_7,param_8
              );
  if (plVar10 != (long *)0x0) {
    lVar9 = *plVar10;
    if (((*(byte *)(lVar9 + 0x38) & 1) != 0) && (plVar10[6] != 0)) {
      puVar1 = (undefined8 *)plVar10[2];
      uVar6 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
      if ((uVar6 <= (ulong)plVar10[3]) && (plVar10[2] = uVar6, puVar1 != (undefined8 *)0x0)) {
        *puVar1 = &DAT_03c4e575;
        puVar1[1] = *(undefined8 *)(plVar10[6] + 8);
      }
    }
    puVar1 = (undefined8 *)plVar10[2];
    uVar6 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
    if ((uVar6 <= (ulong)plVar10[3]) && (plVar10[2] = uVar6, puVar1 != (undefined8 *)0x0)) {
      *puVar1 = &DAT_03c2d363;
      uVar4 = nn::os::GetSystemTick();
      puVar1[1] = uVar4;
    }
    if (*(code **)(lVar9 + 0x20) != (code *)0x0) {
      (**(code **)(lVar9 + 0x20))(*(undefined8 *)(lVar9 + 0x28));
    }
  }
  return;
}


