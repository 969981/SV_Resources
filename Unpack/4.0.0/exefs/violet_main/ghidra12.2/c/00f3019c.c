/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f3019c; name: FUN_00f3019c
 */


void FUN_00f3019c(long param_1,ulong param_2)

{
  short *psVar1;
  int *piVar2;
  ushort uVar3;
  short sVar4;
  char cVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  byte bVar8;
  byte bVar9;
  undefined8 *puVar10;
  long lVar11;
  uint *puVar12;
  bool bVar13;
  long lVar14;
  ulong uVar15;
  ushort *puVar16;
  short sVar17;
  uint uVar18;
  int *piVar19;
  undefined1 auVar20 [16];
  float fVar21;
  float extraout_s0;
  float extraout_var;
  float extraout_var_00;
  undefined1 auVar22 [16];
  float extraout_var_01;
  undefined8 uVar23;
  float fVar26;
  float fVar27;
  float fVar29;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined8 uVar28;
  undefined1 uVar30;
  undefined1 uVar31;
  undefined1 uVar32;
  undefined1 uVar33;
  float fVar34;
  float local_b0;
  undefined8 local_a0;
  undefined *puStack_98;
  undefined8 local_90;
  long *local_88;
  int *local_80;
  int *piStack_78;
  char *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  if ((param_2 & 1) == 0) {
    puVar10 = (undefined8 *)FUN_00da75d8();
  }
  else {
    puVar10 = (undefined8 *)FUN_00d3ccd4();
  }
  lVar11 = FUN_00e06b88(param_1);
  if ((puVar10 != (undefined8 *)0x0) && (lVar11 != 0)) {
    if (*(char *)(param_1 + 0x150) == '\0') {
      uVar30 = 0;
      bVar8 = 0;
      uVar23 = 0;
      uVar28 = 0;
      bVar9 = 0;
      bVar13 = false;
    }
    else {
      auVar22 = FUN_00e644b0("CAMERA_ROTATION_STICK");
      local_a0 = 0x19db18274a49907a;
      puStack_98 = &DAT_03c5d81b;
      local_90 = 3;
      local_88 = (long *)0x0;
      lVar11 = *(long *)(lVar11 + 0x40);
      if (lVar11 == 0) {
        uVar30 = 0;
        uVar31 = 0;
        uVar32 = 0;
        uVar33 = 0;
      }
      else {
        local_b0 = 0.0;
        if (*(short *)(lVar11 + 0x1a) != 0) {
          psVar1 = (short *)(lVar11 + 0x1a);
          sVar17 = *(short *)(lVar11 + 0x1a);
          do {
            sVar4 = *psVar1;
            if (sVar4 == sVar17) {
              cVar5 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar13) {
                *psVar1 = sVar17 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
              if (cVar5 != '\0') goto LAB_00f30378;
              bVar13 = true;
            }
            else {
              ClearExclusiveLocal();
LAB_00f30378:
              bVar13 = false;
            }
            if (bVar13) {
              lVar11 = *(long *)(lVar11 + 0x10);
              if (lVar11 != 0) {
                if (*(char *)(lVar11 + 0xf2) == '\0') {
                  local_60 = 0;
                  uStack_58 = 0;
                  local_68 = (char *)0x0;
                }
                else {
                  local_68 = *(char **)(lVar11 + 0xf8);
                  local_60 = *(undefined8 *)(lVar11 + 0x100);
                  uStack_58 = *(undefined8 *)(lVar11 + 0x108);
                }
                FUN_00d996a8(&local_80,&local_68,&local_a0);
                lVar14 = *(long *)(lVar11 + 0x70);
                psVar1 = (short *)(lVar14 + 0x1a);
                do {
                  sVar17 = *psVar1;
                  cVar5 = '\x01';
                  bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                  if (bVar13) {
                    *psVar1 = sVar17 + -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (sVar17 == 1) {
                  *(undefined8 *)(lVar14 + 0x10) = 0;
                  (**(code **)(*(long *)(lVar11 + -0x28) + 0x50))((long *)(lVar11 + -0x28));
                }
                else if (sVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                  nn::diag::detail::AbortImpl
                            ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                             "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                             ,0x60,"Reference counter underflows.");
                }
                if (((piStack_78 != (int *)0x0) &&
                    (6 < *(ushort *)((long)piStack_78 - (long)*piStack_78))) &&
                   (uVar15 = (ulong)((ushort *)((long)piStack_78 - (long)*piStack_78))[3],
                   uVar15 != 0)) {
                  puVar12 = (uint *)((long)piStack_78 + uVar15);
                  puVar12 = (uint *)((long)puVar12 + (ulong)*puVar12);
                  local_68 = "StickTolerance";
                  puVar12 = bsearch(&local_68,puVar12 + 1,(ulong)*puVar12,4,
                                    (__compar_fn_t)PTR_LAB_047d5600);
                  if ((puVar12 != (uint *)0x0) && (local_80 != (int *)0x0)) {
                    piVar2 = (int *)((long)puVar12 + (ulong)*puVar12);
                    puVar16 = (ushort *)((long)piVar2 - (long)*piVar2);
                    uVar3 = *puVar16;
                    if (uVar3 < 7) {
                      piVar19 = (int *)0x0;
                    }
                    else {
                      piVar19 = (int *)0x0;
                      if ((ulong)puVar16[3] != 0) {
                        puVar12 = (uint *)((long)piVar2 + (ulong)puVar16[3]);
                        piVar19 = (int *)((long)puVar12 + (ulong)*puVar12);
                      }
                    }
                    if ((*(ushort *)((long)piVar19 - (long)*piVar19) < 5) ||
                       (uVar15 = (ulong)((ushort *)((long)piVar19 - (long)*piVar19))[2], uVar15 == 0
                       )) {
                      uVar15 = 0;
                    }
                    else {
                      uVar15 = (long)*(char *)((long)piVar19 + uVar15) & 0xffffffff;
                    }
                    if (*(long *)(PTR_DAT_047d5608 + uVar15 * 8) == 4) {
                      local_b0 = 0.0;
                      if (uVar3 < 0xb) {
                        uVar18 = 0;
                      }
                      else {
                        uVar18 = 0;
                        if ((ulong)puVar16[5] != 0) {
                          uVar18 = (uint)*(ushort *)((long)piVar2 + (ulong)puVar16[5]);
                        }
                        if ((0xe < uVar3) && ((ulong)puVar16[7] != 0)) {
                          local_b0 = (float)*(double *)((long)piVar2 + (ulong)puVar16[7]);
                        }
                      }
                      if ((uVar18 < *(ushort *)((long)local_80 - (long)*local_80)) &&
                         (uVar15 = (ulong)*(ushort *)
                                           (((long)local_80 - (long)*local_80) + (ulong)uVar18),
                         uVar15 != 0)) {
                        local_b0 = *(float *)((long)local_80 + uVar15);
                      }
                    }
                    else if ((0xe < uVar3) && ((ulong)puVar16[7] != 0)) {
                      local_b0 = (float)*(double *)((long)piVar2 + (ulong)puVar16[7]);
                    }
                  }
                }
              }
              break;
            }
            sVar17 = sVar4;
          } while (sVar4 != 0);
        }
        if (local_88 != (long *)0x0) {
          (**(code **)(*local_88 + 0x20))();
        }
        uVar30 = SUB41(local_b0,0);
        uVar31 = (undefined1)((uint)local_b0 >> 8);
        uVar32 = (undefined1)((uint)local_b0 >> 0x10);
        uVar33 = (undefined1)((uint)local_b0 >> 0x18);
      }
      fVar21 = auVar22._0_4_;
      fVar26 = auVar22._4_4_ * auVar22._4_4_;
      fVar27 = auVar22._8_4_ * auVar22._8_4_;
      fVar29 = auVar22._12_4_ * auVar22._12_4_;
      fVar34 = (float)CONCAT13(uVar33,CONCAT12(uVar32,CONCAT11(uVar31,uVar30))) *
               (float)CONCAT13(uVar33,CONCAT12(uVar32,CONCAT11(uVar31,uVar30)));
      auVar24._0_4_ = fVar21 * fVar21 + fVar26;
      auVar24._4_4_ = fVar27 + fVar29;
      auVar24._8_4_ = fVar21 * fVar21 + fVar26;
      auVar24._12_4_ = fVar27 + fVar29;
      auVar24 = NEON_ext(auVar24,auVar24,4,1);
      if (fVar34 <= auVar24._0_4_ + auVar24._4_4_) {
        auVar25[0] = -(*(char *)(param_1 + 0x152) == '\0');
        auVar25[9] = auVar25[0];
        auVar25[8] = auVar25[0];
        auVar25[10] = auVar25[0];
        auVar25[0xb] = auVar25[0];
        auVar25[0xc] = auVar25[0];
        auVar25[0xd] = auVar25[0];
        auVar25[0xe] = auVar25[0];
        auVar25[0xf] = auVar25[0];
        auVar25[1] = auVar25[0];
        auVar25[2] = auVar25[0];
        auVar25[3] = auVar25[0];
        auVar25[4] = auVar25[0];
        auVar25[5] = auVar25[0];
        auVar25[6] = auVar25[0];
        auVar25[7] = auVar25[0];
        auVar6[4] = auVar22[4];
        auVar6._0_4_ = -fVar21;
        auVar6[5] = auVar22[5];
        auVar6[6] = auVar22[6];
        auVar6[7] = auVar22[7];
        auVar6[8] = auVar22[8];
        auVar6[9] = auVar22[9];
        auVar6[10] = auVar22[10];
        auVar6[0xb] = auVar22[0xb];
        auVar6[0xc] = auVar22[0xc];
        auVar6[0xd] = auVar22[0xd];
        auVar6[0xe] = auVar22[0xe];
        auVar6[0xf] = auVar22[0xf];
        auVar7[4] = auVar22[4];
        auVar7._0_4_ = -fVar21;
        auVar7[5] = auVar22[5];
        auVar7[6] = auVar22[6];
        auVar7[7] = auVar22[7];
        auVar7[8] = auVar22[8];
        auVar7[9] = auVar22[9];
        auVar7[10] = auVar22[10];
        auVar7[0xb] = auVar22[0xb];
        auVar7[0xc] = auVar22[0xc];
        auVar7[0xd] = auVar22[0xd];
        auVar7[0xe] = auVar22[0xe];
        auVar7[0xf] = auVar22[0xf];
        auVar22 = auVar7 ^ (auVar6 ^ auVar22) & auVar25;
        if (*(char *)(param_1 + 0x153) != '\0') {
          auVar22._4_4_ = -auVar22._4_4_;
        }
        uVar30 = 1;
      }
      else {
        uVar30 = 0;
        auVar22 = ZEXT816(0);
      }
      uVar28 = auVar22._8_8_;
      uVar23 = auVar22._0_8_;
      if (*(char *)(param_1 + 0x151) == '\0') {
        bVar8 = 0;
      }
      else {
        bVar8 = FUN_00f33290("CAMERA_RESET");
        bVar8 = bVar8 & 1;
      }
      bVar9 = FUN_00f33290("CAMERA_ANGLE");
      bVar9 = bVar9 & 1;
      FUN_00e644b0("MAIN_STICK");
      auVar20._0_4_ = extraout_s0 * extraout_s0 + extraout_var * extraout_var;
      auVar20._4_4_ = extraout_var_00 * extraout_var_00 + extraout_var_01 * extraout_var_01;
      auVar20._8_4_ = extraout_s0 * extraout_s0 + extraout_var * extraout_var;
      auVar20._12_4_ = extraout_var_00 * extraout_var_00 + extraout_var_01 * extraout_var_01;
      auVar22 = NEON_ext(auVar20,auVar20,4,1);
      bVar13 = fVar34 < auVar22._0_4_ + auVar22._4_4_;
    }
    *(undefined1 *)(puVar10 + 2) = uVar30;
    *(byte *)((long)puVar10 + 0x11) = bVar8;
    *(byte *)((long)puVar10 + 0x12) = bVar9;
    *(bool *)((long)puVar10 + 0x13) = bVar13;
    puVar10[1] = uVar28;
    *puVar10 = uVar23;
  }
  return;
}


