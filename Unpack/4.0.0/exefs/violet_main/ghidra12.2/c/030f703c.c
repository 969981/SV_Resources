/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030f703c; name: FUN_030f703c
 */


void FUN_030f703c(long param_1,int param_2,char param_3,undefined8 *param_4)

{
  undefined4 *puVar1;
  char cVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  long *plVar7;
  undefined8 uVar8;
  int iVar9;
  int *piVar10;
  undefined **ppuVar11;
  code *pcVar12;
  ulong uVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined **ppuVar19;
  undefined8 *puVar20;
  long lVar21;
  int *piVar22;
  float fVar23;
  float fVar24;
  undefined4 uVar25;
  float fVar27;
  float fVar28;
  undefined1 auVar26 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined *local_150;
  undefined1 uStack_148;
  char cStack_147;
  undefined6 uStack_146;
  undefined *local_140;
  undefined *puStack_138;
  int local_130;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long local_100;
  undefined4 *puStack_f8;
  undefined *local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  
  lVar18 = *(long *)(param_1 + 0xb0);
  piVar10 = (int *)(lVar18 + (long)param_2 * 0x60);
  lVar15 = (long)piVar10[1];
  uVar8 = *param_4;
  lVar21 = *(long *)(param_1 + 0x90);
  lVar16 = *(long *)(param_1 + 0xa0);
  *(undefined8 *)(piVar10 + 0xe) = param_4[1];
  *(undefined8 *)(piVar10 + 0xc) = uVar8;
  uVar8 = param_4[2];
  *(undefined8 *)(piVar10 + 0x12) = param_4[3];
  *(undefined8 *)(piVar10 + 0x10) = uVar8;
  piVar22 = piVar10 + 2;
  if ((char)*piVar22 == '\0') {
    auVar31._8_4_ = 0x7f7fffee;
    auVar31._0_8_ = 0x7f7fffee7f7fffee;
    auVar31._12_4_ = 0x7f7fffee;
    auVar29._8_4_ = 0xff7fffee;
    auVar29._0_8_ = 0xff7fffeeff7fffee;
    auVar29._12_4_ = 0xff7fffee;
    uStack_98 = auVar31._8_8_;
    local_a0 = 0x7f7fffee7f7fffee;
  }
  else {
    lVar17 = lVar18 + (long)param_2 * 0x60;
    auVar31 = *(undefined1 (*) [16])(lVar17 + 0x10);
    uStack_98 = auVar31._8_8_;
    local_a0 = auVar31._0_8_;
    auVar29 = *(undefined1 (*) [16])(lVar17 + 0x20);
  }
  puVar20 = (undefined8 *)(lVar16 + (long)*piVar10 * 0x60);
  uStack_88 = auVar29._8_8_;
  local_90 = auVar29._0_8_;
  if (param_3 != '\0') {
    iVar9 = piVar10[1];
    lVar16 = *(long *)(param_1 + 0x90);
    plVar7 = *(long **)(*(long *)(param_1 + 0xa0) + (long)*piVar10 * 0x60);
    (**(code **)(*plVar7 + 0x48))(plVar7,param_4,param_1 + 0x150,&local_150);
    fVar27 = *(float *)(param_1 + (long)*(int *)(lVar16 + (long)iVar9 * 0xd0 + 0xa0) * 4 + 200);
    fVar23 = -fVar27;
    fVar27 = -fVar27;
    fVar24 = fVar23 * *(float *)(param_1 + 0x150);
    fVar28 = fVar27 * *(float *)(param_1 + 0x154);
    fVar23 = fVar23 * *(float *)(param_1 + 0x158);
    fVar27 = fVar27 * *(float *)(param_1 + 0x15c);
    auVar32[8] = uStack_148;
    auVar32._0_8_ = local_150;
    auVar32[9] = cStack_147;
    auVar32._10_6_ = uStack_146;
    auVar4._8_8_ = puStack_138;
    auVar4._0_8_ = local_140;
    auVar30._0_4_ = SUB84(local_140,0) + fVar24;
    auVar30._4_4_ = (float)((ulong)local_140 >> 0x20) + fVar28;
    auVar30._8_4_ = SUB84(puStack_138,0) + fVar23;
    auVar30._12_4_ = (float)((ulong)puStack_138 >> 0x20) + fVar27;
    auVar26._0_4_ = SUB84(local_150,0) + fVar24;
    auVar26._4_4_ = (float)((ulong)local_150 >> 0x20) + fVar28;
    auVar26._8_4_ = auVar32._8_4_ + fVar23;
    auVar26._12_4_ = (float)((uint6)uStack_146 >> 0x10) + fVar27;
    auVar31 = NEON_fmax(auVar4,auVar30,4);
    auVar32 = NEON_fmin(auVar32,auVar26,4);
    auVar5._8_8_ = uStack_98;
    auVar5._0_8_ = local_a0;
    auVar6._8_8_ = uStack_88;
    auVar6._0_8_ = local_90;
    auVar29 = NEON_fmax(auVar6,auVar31,4);
    uStack_168 = auVar32._8_8_;
    local_170 = auVar32._0_8_;
    uStack_158 = auVar31._8_8_;
    local_160 = auVar31._0_8_;
    auVar31 = NEON_fmin(auVar5,auVar32,4);
    uStack_98 = auVar31._8_8_;
    local_a0 = auVar31._0_8_;
    uStack_88 = auVar29._8_8_;
    local_90 = auVar29._0_8_;
  }
  if (*(int *)(param_1 + 0x188) < 1) {
    uVar25 = 0x3f800000;
    goto LAB_030f7284;
  }
  local_140 = (undefined *)0x1;
  local_150 = PTR_DAT_047e51e0 + 0x10;
  uStack_148 = 0xff;
  cStack_147 = 0xff;
  uStack_146 = 0xffff;
  ppuVar19 = *(undefined ***)(param_1 + 400);
  if (ppuVar19 == (undefined **)0x0) {
    ppuVar11 = &local_140;
    ppuVar19 = &local_150;
LAB_030f71e4:
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
      if (bVar3) {
        *ppuVar11 = *ppuVar11 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  else if (ppuVar19[1] != (undefined *)0x0) {
    ppuVar11 = ppuVar19 + 2;
    goto LAB_030f71e4;
  }
  if (ppuVar19[1] != (undefined *)0x0) {
    ppuVar11 = ppuVar19 + 2;
    do {
      puVar14 = *ppuVar11;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
      if (bVar3) {
        *ppuVar11 = puVar14 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (puVar14 + -1 == (undefined *)0x0) {
      (**(code **)(*ppuVar19 + 0x18))(ppuVar19);
    }
  }
  uVar8 = *puVar20;
  if ((char)*piVar22 == '\0') {
    pcVar12 = *(code **)(*ppuVar19 + 0x20);
LAB_030f7270:
    uVar25 = (*pcVar12)(ppuVar19,uVar8,&local_a0,param_1 + 0x150);
  }
  else {
    if (param_3 == '\0') {
      pcVar12 = *(code **)(*ppuVar19 + 0x28);
      goto LAB_030f7270;
    }
    uVar25 = (**(code **)(*ppuVar19 + 0x30))
                       (ppuVar19,uVar8,&local_a0,param_1 + 0x150,piVar10 + 0xc,param_4);
  }
  auVar31._8_8_ = uStack_98;
  auVar31._0_8_ = local_a0;
  auVar29._8_8_ = uStack_88;
  auVar29._0_8_ = local_90;
LAB_030f7284:
  local_e8 = 0xffffffff;
  local_e0 = 0;
  uStack_d8 = 0;
  local_f0 = PTR_DAT_047e4fa0 + 0x10;
  local_d0 = *puVar20;
  uStack_b8 = auVar31._8_8_;
  local_c0 = auVar31._0_8_;
  uStack_a8 = auVar29._8_8_;
  uStack_b0 = auVar29._0_8_;
  lVar17 = lVar21 + lVar15 * 0xd0;
  piVar10 = (int *)(lVar17 + 0xc0);
  iVar9 = *piVar10;
  lVar16 = (long)iVar9;
  if ((int)(*(uint *)(lVar17 + 0xc4) & 0x7fffffff) <= iVar9) {
    FUN_030fdd38((long *)(lVar17 + 0xb8),lVar16 + 1);
    iVar9 = *piVar10;
  }
  puVar1 = (undefined4 *)(*(long *)(lVar17 + 0xb8) + (long)iVar9 * 0x40);
  *piVar10 = (int)(lVar16 + 1);
  *(undefined8 *)(puVar1 + 0xc) = 0;
  *(undefined8 *)(puVar1 + 0xe) = 0x8000000000000000;
  *puVar1 = uVar25;
  *(undefined8 *)(puVar1 + 6) = uStack_98;
  *(undefined8 *)(puVar1 + 4) = local_a0;
  *(undefined8 *)(puVar1 + 10) = uStack_88;
  *(undefined8 *)(puVar1 + 8) = local_90;
  lVar16 = tpidr_el0;
  lVar17 = *(long *)(lVar16 + 0x1000b8);
  if (lVar17 == 0) {
    lVar17 = FUN_00e5d3b4();
    *(long *)(lVar16 + 0x1000b8) = lVar17;
  }
  plVar7 = *(long **)(lVar17 + 0x3e0);
  if (plVar7 != (long *)0x0) {
    lVar17 = *plVar7;
    if (*(code **)(lVar17 + 0x18) != (code *)0x0) {
      (**(code **)(lVar17 + 0x18))("queryAabb",9,*(undefined8 *)(lVar17 + 0x28));
    }
    puVar20 = (undefined8 *)plVar7[2];
    uVar13 = (long)puVar20 + 0x17U & 0xfffffffffffffff8;
    if ((uVar13 <= (ulong)plVar7[3]) && (plVar7[2] = uVar13, puVar20 != (undefined8 *)0x0)) {
      *puVar20 = "TtqueryAabb";
      uVar8 = nn::os::GetSystemTick();
      puVar20[1] = uVar8;
    }
    if (((*(byte *)(lVar17 + 0x38) & 1) != 0) && (plVar7[6] != 0)) {
      puVar20 = (undefined8 *)plVar7[2];
      uVar13 = (long)puVar20 + 0x17U & 0xfffffffffffffff8;
      if ((uVar13 <= (ulong)plVar7[3]) && (plVar7[2] = uVar13, puVar20 != (undefined8 *)0x0)) {
        *puVar20 = &DAT_03c4e575;
        puVar20[1] = *(undefined8 *)(plVar7[6] + 8);
      }
    }
  }
  uStack_148 = 0;
  local_150 = &DAT_0464dd48;
  local_140 = *(undefined **)(param_1 + 0xb0);
  puStack_138 = local_140 + (long)*(int *)(param_1 + 0xb8) * 0x60;
  uStack_118 = uStack_168;
  local_120 = local_170;
  uStack_108 = uStack_158;
  uStack_110 = local_160;
  plVar7 = *(long **)(lVar21 + lVar15 * 0xd0 + 0x10);
  cStack_147 = param_3;
  local_130 = param_2;
  local_100 = lVar21 + lVar15 * 0xd0;
  puStack_f8 = puVar1;
  (**(code **)(*plVar7 + 0x48))(plVar7,&local_f0,&local_150);
  lVar15 = *(long *)(lVar16 + 0x1000b8);
  if (lVar15 == 0) {
    lVar15 = FUN_00e5d3b4();
    *(long *)(lVar16 + 0x1000b8) = lVar15;
  }
  plVar7 = *(long **)(lVar15 + 0x3e0);
  if (plVar7 != (long *)0x0) {
    lVar15 = *plVar7;
    if (((*(byte *)(lVar15 + 0x38) & 1) != 0) && (plVar7[6] != 0)) {
      puVar20 = (undefined8 *)plVar7[2];
      uVar13 = (long)puVar20 + 0x17U & 0xfffffffffffffff8;
      if ((uVar13 <= (ulong)plVar7[3]) && (plVar7[2] = uVar13, puVar20 != (undefined8 *)0x0)) {
        *puVar20 = &DAT_03c4e575;
        puVar20[1] = *(undefined8 *)(plVar7[6] + 8);
      }
    }
    puVar20 = (undefined8 *)plVar7[2];
    uVar13 = (long)puVar20 + 0x17U & 0xfffffffffffffff8;
    if ((uVar13 <= (ulong)plVar7[3]) && (plVar7[2] = uVar13, puVar20 != (undefined8 *)0x0)) {
      *puVar20 = &DAT_03c2d363;
      uVar8 = nn::os::GetSystemTick();
      puVar20[1] = uVar8;
    }
    if (*(code **)(lVar15 + 0x20) != (code *)0x0) {
      (**(code **)(lVar15 + 0x20))(*(undefined8 *)(lVar15 + 0x28));
    }
  }
  *(char *)piVar22 = param_3;
  lVar18 = lVar18 + (long)param_2 * 0x60;
  *(undefined8 *)(lVar18 + 0x18) = uStack_168;
  *(undefined8 *)(lVar18 + 0x10) = local_170;
  *(undefined8 *)(lVar18 + 0x28) = uStack_158;
  *(undefined8 *)(lVar18 + 0x20) = local_160;
  return;
}


