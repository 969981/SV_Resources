/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02729848; name: FUN_02729848
 */


void FUN_02729848(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
                 undefined1 param_4 [16],undefined8 param_5,undefined8 param_6,undefined8 param_7,
                 undefined8 param_8,long param_9,int param_10,int param_11,int param_12,
                 long param_13)

{
  code *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined4 *puVar5;
  long lVar6;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  float fVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  undefined8 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auVar30 [16];
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  long local_148;
  int local_13c;
  int local_138;
  int local_134;
  undefined8 local_130 [2];
  undefined8 uStack_120;
  undefined8 local_110;
  undefined8 uStack_100;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined1 *local_b0;
  code *local_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined8 *local_90;
  undefined8 *puStack_88;
  int *local_80;
  int *local_78;
  int *local_70;
  long *local_68;
  
  uStack_b8 = param_4._8_8_;
  local_c0 = param_4._0_8_;
  uStack_c8 = param_3._8_8_;
  local_d0 = param_3._0_8_;
  uStack_d8 = param_2._8_8_;
  uStack_e0 = param_2._0_8_;
  uStack_e8 = param_1._8_8_;
  local_f0 = param_1._0_8_;
  local_90 = &local_f0;
  puStack_88 = local_130;
  local_78 = &local_138;
  lVar6 = *(long *)(param_9 + 0x38);
  local_80 = &local_134;
  local_70 = &local_13c;
  local_68 = &local_148;
  local_b0 = &LAB_02bbed5c;
  local_a8 = FUN_02bbeedc;
  local_a0 = &LAB_02bbeee0;
  puStack_98 = &LAB_02bbeef4;
  local_148 = param_13;
  local_13c = param_12;
  local_138 = param_11;
  local_134 = param_10;
  local_130[0] = param_5;
  uStack_120 = param_6;
  local_110 = param_7;
  uStack_100 = param_8;
  lVar2 = FUN_00ccbbb0(*(undefined8 *)(*(long *)(lVar6 + 0x70) + 0x110),lVar6 + 0x30);
  if (*(long *)(*(long *)(lVar2 + 8) + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("m_buffer","Map",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\gfx2/core_nvn/internal/resource.h"
               ,0x31);
  }
  puVar3 = (undefined8 *)(**(code **)PTR_DAT_047d8da8)();
  auVar30 = NEON_fmov(0x3f800000,4);
  puVar3[5] = uStack_c8;
  puVar3[4] = local_d0;
  puVar3[7] = uStack_b8;
  puVar3[6] = local_c0;
  puVar3[1] = uStack_e8;
  *puVar3 = local_f0;
  puVar3[3] = uStack_d8;
  puVar3[2] = uStack_e0;
  uVar8 = *puStack_88;
  uVar11 = puStack_88[3];
  uVar10 = puStack_88[2];
  uVar14 = puStack_88[5];
  uVar13 = puStack_88[4];
  uVar21 = puStack_88[7];
  uVar18 = puStack_88[6];
  puVar3[9] = puStack_88[1];
  puVar3[8] = uVar8;
  puVar3[0xb] = uVar11;
  puVar3[10] = uVar10;
  puVar3[0xd] = uVar14;
  puVar3[0xc] = uVar13;
  puVar3[0xf] = uVar21;
  puVar3[0xe] = uVar18;
  uVar13 = local_90[7];
  uVar11 = local_90[6];
  fVar7 = (float)(*local_80 - 1);
  fVar9 = (float)(*local_78 - 1);
  fVar12 = (float)(*local_70 - 1);
  fVar23 = fVar7 * 100.0;
  fVar24 = fVar9 * 100.0;
  fVar15 = fVar12 * 100.0;
  fVar29 = fVar9 * 0.5;
  fVar25 = fVar7 * 0.5;
  fVar16 = fVar12 * 0.5;
  fVar32 = (float)local_90[4];
  fVar33 = (float)((ulong)local_90[4] >> 0x20);
  fVar34 = (float)local_90[5];
  fVar31 = auVar30._12_4_;
  fVar35 = (float)((ulong)local_90[5] >> 0x20);
  uVar10 = local_90[3];
  uVar8 = local_90[2];
  fVar17 = (float)*local_90;
  fVar19 = (float)((ulong)*local_90 >> 0x20);
  fVar20 = (float)local_90[1];
  fVar22 = (float)((ulong)local_90[1] >> 0x20);
  *(float *)(puVar3 + 0x18) = fVar7;
  fVar7 = (float)uVar8;
  fVar26 = (float)((ulong)uVar8 >> 0x20);
  fVar27 = (float)uVar10;
  fVar28 = (float)((ulong)uVar10 >> 0x20);
  *(float *)((long)puVar3 + 0xc4) = fVar9;
  fVar9 = (float)uVar11;
  fVar36 = (float)((ulong)uVar11 >> 0x20);
  fVar37 = (float)uVar13;
  fVar38 = (float)((ulong)uVar13 >> 0x20);
  *(float *)(puVar3 + 0x19) = fVar12;
  puVar3[0x11] = CONCAT44(fVar17 * 0.0 + fVar19 * 0.0 + fVar20 * 0.0 + fVar31 * fVar22,
                          fVar17 * 0.0 + fVar19 * 0.0 + fVar15 * fVar20 + fVar16 * fVar22);
  puVar3[0x10] = CONCAT44(fVar17 * 0.0 + fVar24 * fVar19 + fVar20 * 0.0 + fVar29 * fVar22,
                          fVar23 * fVar17 + fVar19 * 0.0 + fVar20 * 0.0 + fVar25 * fVar22);
  puVar3[0x13] = CONCAT44(fVar7 * 0.0 + fVar26 * 0.0 + fVar27 * 0.0 + fVar31 * fVar28,
                          fVar7 * 0.0 + fVar26 * 0.0 + fVar15 * fVar27 + fVar16 * fVar28);
  puVar3[0x12] = CONCAT44(fVar7 * 0.0 + fVar24 * fVar26 + fVar27 * 0.0 + fVar29 * fVar28,
                          fVar23 * fVar7 + fVar26 * 0.0 + fVar27 * 0.0 + fVar25 * fVar28);
  *(undefined4 *)((long)puVar3 + 0xcc) = 0;
  puVar3[0x15] = CONCAT44(fVar32 * 0.0 + fVar33 * 0.0 + fVar34 * 0.0 + fVar31 * fVar35,
                          fVar32 * 0.0 + fVar33 * 0.0 + fVar15 * fVar34 + fVar16 * fVar35);
  puVar3[0x14] = CONCAT44(fVar32 * 0.0 + fVar24 * fVar33 + fVar34 * 0.0 + fVar29 * fVar35,
                          fVar23 * fVar32 + fVar33 * 0.0 + fVar34 * 0.0 + fVar25 * fVar35);
  puVar3[0x17] = CONCAT44(fVar9 * 0.0 + fVar36 * 0.0 + fVar37 * 0.0 + fVar31 * fVar38,
                          fVar9 * 0.0 + fVar36 * 0.0 + fVar15 * fVar37 + fVar16 * fVar38);
  puVar3[0x16] = CONCAT44(fVar9 * 0.0 + fVar24 * fVar36 + fVar37 * 0.0 + fVar29 * fVar38,
                          fVar23 * fVar9 + fVar36 * 0.0 + fVar37 * 0.0 + fVar25 * fVar38);
  if (*local_78 * *local_80 * *local_70 != 0) {
    uVar4 = 0;
    puVar5 = (undefined4 *)((long)puVar3 + 0x10c);
    do {
      puVar3 = (undefined8 *)(*local_68 + uVar4 * 0x10);
      uVar8 = puVar3[1];
      uVar4 = uVar4 + 1;
      *(undefined8 *)(puVar5 + -3) = *puVar3;
      puVar5[-1] = (int)uVar8;
      *puVar5 = 0;
      puVar5 = puVar5 + 4;
    } while (uVar4 < (uint)(*local_78 * *local_80 * *local_70));
  }
  FUN_00ccbbb0(*(undefined8 *)(*(long *)(lVar6 + 0x70) + 0x110),lVar6 + 0x30);
  pcVar1 = local_a8;
  if (local_a8 != (code *)0x0) {
    local_a0 = (undefined1 *)0x0;
    puStack_98 = (undefined1 *)0x0;
    local_b0 = (undefined1 *)0x0;
    local_a8 = (code *)0x0;
    (*pcVar1)(&local_90);
  }
  return;
}


