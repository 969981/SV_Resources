/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e5cfa4; name: FUN_00e5cfa4
 */


void FUN_00e5cfa4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                 undefined8 *param_5,undefined8 *param_6,long param_7)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined1 (*pauVar5) [16];
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  float fVar11;
  undefined1 auVar10 [16];
  float fVar12;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar13 [16];
  undefined1 auVar17 [16];
  float fVar20;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar21;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 auStack_100 [2];
  undefined1 auStack_f0 [40];
  undefined8 local_c8;
  float local_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float local_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float local_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  undefined8 local_80;
  undefined8 uStack_78;
  long *local_70;
  
  lVar7 = tpidr_el0;
  lVar3 = *(long *)(lVar7 + 0x1000b8);
  if (lVar3 == 0) {
    lVar3 = FUN_00e5d3b4();
    *(long *)(lVar7 + 0x1000b8) = lVar3;
  }
  plVar9 = *(long **)(lVar3 + 0x3e0);
  if (plVar9 != (long *)0x0) {
    lVar7 = *plVar9;
    if (*(code **)(lVar7 + 0x18) != (code *)0x0) {
      (**(code **)(lVar7 + 0x18))("GetClosestPoints",0x10,*(undefined8 *)(lVar7 + 0x28));
    }
    puVar6 = (undefined8 *)plVar9[2];
    uVar4 = (long)puVar6 + 0x17U & 0xfffffffffffffff8;
    if ((uVar4 <= (ulong)plVar9[3]) && (plVar9[2] = uVar4, puVar6 != (undefined8 *)0x0)) {
      *puVar6 = "TtGetClosestPoints";
      uVar2 = nn::os::GetSystemTick();
      puVar6[1] = uVar2;
    }
    if (((*(byte *)(lVar7 + 0x38) & 1) != 0) && (plVar9[6] != 0)) {
      puVar6 = (undefined8 *)plVar9[2];
      uVar4 = (long)puVar6 + 0x17U & 0xfffffffffffffff8;
      if ((uVar4 <= (ulong)plVar9[3]) && (plVar9[2] = uVar4, puVar6 != (undefined8 *)0x0)) {
        *puVar6 = &DAT_03c4e575;
        puVar6[1] = *(undefined8 *)(plVar9[6] + 8);
      }
    }
  }
  pauVar5 = (undefined1 (*) [16])param_6[4];
  NEON_ext(pauVar5[1],pauVar5[1],8,1);
  NEON_ext(*pauVar5,*pauVar5,8,1);
  NEON_ext(pauVar5[2],pauVar5[2],8,1);
  puVar6 = (undefined8 *)param_3[4];
  auVar10 = pauVar5[2];
  auVar1 = *pauVar5;
  auVar13 = pauVar5[1];
  auVar18 = NEON_ext(auVar13,auVar13,8,1);
  auVar17 = NEON_ext(auVar1,auVar1,8,1);
  auVar19 = NEON_ext(auVar10,auVar10,8,1);
  fVar12 = *(float *)(puVar6 + 4);
  fVar14 = *(float *)((long)puVar6 + 0x24);
  fVar16 = *(float *)(puVar6 + 5);
  local_90 = auVar17._0_4_ * fVar16 + auVar1._0_4_ * fVar12 + auVar1._4_4_ * fVar14;
  fStack_8c = auVar18._0_4_ * fVar16 + auVar13._0_4_ * fVar12 + auVar13._4_4_ * fVar14;
  fStack_88 = auVar19._0_4_ * fVar16 + auVar10._0_4_ * fVar12 + auVar10._4_4_ * fVar14;
  fStack_84 = auVar19._4_4_ * fVar16 + auVar10._4_4_ * fVar12 + auVar19._4_4_ * fVar14;
  auVar10 = pauVar5[2];
  auVar1 = *pauVar5;
  auVar13 = pauVar5[1];
  auVar17 = NEON_ext(auVar10,auVar10,8,1);
  auVar18 = NEON_ext(auVar1,auVar1,8,1);
  auVar19 = NEON_ext(auVar13,auVar13,8,1);
  fVar11 = auVar10._4_4_;
  fVar21 = auVar17._4_4_;
  fVar12 = *(float *)(puVar6 + 2);
  fVar14 = *(float *)((long)puVar6 + 0x14);
  fVar16 = *(float *)(puVar6 + 3);
  fVar20 = auVar10._0_4_;
  fVar15 = auVar17._0_4_;
  local_a0 = auVar18._0_4_ * fVar16 + auVar1._0_4_ * fVar12 + auVar1._4_4_ * fVar14;
  fStack_9c = auVar19._0_4_ * fVar16 + auVar13._0_4_ * fVar12 + auVar13._4_4_ * fVar14;
  fStack_98 = fVar15 * fVar16 + fVar20 * fVar12 + fVar11 * fVar14;
  fStack_94 = fVar21 * fVar16 + fVar11 * fVar12 + fVar21 * fVar14;
  auVar10 = *pauVar5;
  auVar1 = pauVar5[1];
  auVar17 = NEON_ext(auVar1,auVar1,8,1);
  auVar13 = NEON_ext(auVar10,auVar10,8,1);
  fVar12 = (float)*puVar6;
  fVar14 = (float)((ulong)*puVar6 >> 0x20);
  fVar16 = (float)puVar6[1];
  local_b0 = auVar13._0_4_ * fVar16 + auVar10._0_4_ * fVar12 + auVar10._4_4_ * fVar14;
  fStack_ac = auVar17._0_4_ * fVar16 + auVar1._0_4_ * fVar12 + auVar1._4_4_ * fVar14;
  fStack_a8 = fVar15 * fVar16 + fVar20 * fVar12 + fVar11 * fVar14;
  fStack_a4 = fVar21 * fVar16 + fVar11 * fVar12 + fVar21 * fVar14;
  fVar12 = *(float *)(puVar6 + 6) - *(float *)pauVar5[3];
  fVar14 = *(float *)((long)puVar6 + 0x34) - *(float *)(pauVar5[3] + 4);
  fVar16 = *(float *)(puVar6 + 7) - *(float *)(pauVar5[3] + 8);
  auVar10 = *pauVar5;
  auVar13 = NEON_ext(auVar10,auVar10,8,1);
  auVar10._0_8_ =
       CONCAT44(auVar17._0_4_ * fVar16 + auVar1._0_4_ * fVar12 + auVar1._4_4_ * fVar14,
                auVar13._0_4_ * fVar16 + auVar10._0_4_ * fVar12 + auVar10._4_4_ * fVar14);
  auVar10._8_4_ = fVar15 * fVar16 + fVar20 * fVar12 + fVar11 * fVar14;
  auVar10._12_4_ = fVar21 * fVar16 + fVar11 * fVar12 + fVar21 * fVar14;
  uStack_78 = auVar10._8_8_;
  uVar2 = NEON_fmin(*(undefined8 *)(param_7 + 0x10),
                    CONCAT44(*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 8)),4);
  *(undefined8 *)(param_7 + 0x10) = uVar2;
  plVar8 = (long *)*param_2;
  local_80 = auVar10._0_8_;
  local_70 = plVar9;
  if ((plVar8 == (long *)0x0) || ((*(byte *)(plVar8 + 3) & 1) == 0)) {
    uVar2 = *param_1;
  }
  else {
    memcpy(auStack_100,param_2,0x50);
    local_110 = *param_5;
    uStack_108 = param_5[1];
    (**(code **)(*plVar8 + 0x38))(plVar8,5,*param_3,local_c8,auStack_f0);
    (**(code **)(*plVar8 + 0x38))(plVar8,5,*param_6,param_4,&local_110);
    uVar2 = *param_1;
    param_2 = auStack_100;
    param_5 = &local_110;
  }
  FUN_02ea2bc4(uVar2,param_1,param_2,param_3,param_4,param_5,param_6,&local_b0,0,param_7);
  if (plVar9 != (long *)0x0) {
    lVar7 = *plVar9;
    if (((*(byte *)(lVar7 + 0x38) & 1) != 0) && (plVar9[6] != 0)) {
      puVar6 = (undefined8 *)plVar9[2];
      uVar4 = (long)puVar6 + 0x17U & 0xfffffffffffffff8;
      if ((uVar4 <= (ulong)plVar9[3]) && (plVar9[2] = uVar4, puVar6 != (undefined8 *)0x0)) {
        *puVar6 = &DAT_03c4e575;
        puVar6[1] = *(undefined8 *)(plVar9[6] + 8);
      }
    }
    puVar6 = (undefined8 *)plVar9[2];
    uVar4 = (long)puVar6 + 0x17U & 0xfffffffffffffff8;
    if ((uVar4 <= (ulong)plVar9[3]) && (plVar9[2] = uVar4, puVar6 != (undefined8 *)0x0)) {
      *puVar6 = &DAT_03c2d363;
      uVar2 = nn::os::GetSystemTick();
      puVar6[1] = uVar2;
    }
    if (*(code **)(lVar7 + 0x20) != (code *)0x0) {
      (**(code **)(lVar7 + 0x20))(*(undefined8 *)(lVar7 + 0x28));
    }
  }
  return;
}


