/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ebfc74; name: FUN_01ebfc74
 */


void FUN_01ebfc74(long param_1)

{
  ulong *puVar1;
  short *psVar2;
  int *piVar3;
  short sVar4;
  long *plVar5;
  byte bVar6;
  char cVar7;
  bool bVar8;
  ulong *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined4 uVar12;
  int iVar13;
  undefined8 uVar14;
  size_t sVar15;
  ulong **ppuVar16;
  undefined1 *puVar17;
  code *pcVar18;
  long lVar19;
  byte *pbVar20;
  long lVar21;
  byte *pbVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  ulong *local_388;
  undefined4 local_380;
  undefined4 local_37c;
  undefined4 uStack_378;
  undefined4 local_374;
  undefined4 uStack_370;
  undefined4 local_36c;
  undefined4 uStack_368;
  undefined4 local_364;
  undefined1 *local_360;
  code *local_358;
  undefined1 *local_350;
  undefined1 *puStack_348;
  undefined1 auStack_340 [96];
  undefined1 *local_2e0;
  code *local_2d8;
  undefined1 *local_2d0;
  undefined1 *puStack_2c8;
  undefined1 auStack_2c0 [96];
  undefined8 *local_260;
  undefined4 local_258;
  ulong local_250;
  undefined4 local_248;
  ulong local_240;
  undefined4 local_238;
  undefined4 local_234;
  undefined1 *local_230;
  code *local_228;
  undefined1 *local_220;
  undefined1 *puStack_218;
  undefined1 auStack_210 [104];
  ulong *local_1a8;
  undefined4 local_1a0;
  undefined8 *local_198;
  ulong local_190;
  byte *local_188;
  ulong *local_180;
  ulong local_178;
  undefined1 *local_170;
  code *local_168;
  undefined1 *local_160;
  undefined1 *local_158;
  undefined1 auStack_150 [96];
  undefined1 *local_f0;
  code *local_e8;
  undefined1 *local_e0;
  undefined1 *puStack_d8;
  undefined1 auStack_d0 [104];
  long *local_68 [4];
  undefined8 local_48;
  
  if (*(long *)(param_1 + 0x58) == 0) {
    return;
  }
  lVar21 = *(long *)(*(long *)(param_1 + 0x58) + 0x10);
  if (lVar21 == 0) {
    return;
  }
  FUN_01267a34(local_68);
  if (local_68[0] == (long *)0x0) goto switchD_01ebfd0c_default;
  lVar21 = lVar21 + -0x28;
  lVar19 = local_68[0][2];
  bVar6 = *(byte *)(*local_68[0] + lVar19);
  local_68[0][2] = lVar19 + 1;
  if (0x80 < bVar6) goto switchD_01ebfd0c_default;
  if (bVar6 == 0x80) {
    bVar6 = *(byte *)(*local_68[0] + lVar19 + 1);
    local_68[0][2] = lVar19 + 2;
  }
  switch(bVar6) {
  case 1:
    local_1a8 = (ulong *)((ulong)local_1a8 & 0xffffffff00000000);
    FUN_01ec0ba4(&local_388,&local_1a8);
    if ((int)local_388 != 0) break;
    local_190 = local_190 & 0xffffffff00000000;
    local_198 = (undefined8 *)0x0;
    if (local_68[0] == (long *)0x0) break;
    FUN_01eb4af8(&local_388,&local_198);
    if ((int)local_388 != 0) break;
    local_f0 = &LAB_00b1fa08;
    local_e8 = FUN_00b1fa8c;
    local_e0 = &LAB_00b1fa90;
    puStack_d8 = &LAB_00b1fa94;
    FUN_01e3cc70(&local_388,CONCAT44(*(undefined4 *)((ulong)&local_198 | 4),(int)local_198),lVar21,
                 (ulong)local_1a8 & 0xffffffff,&local_f0);
    FUN_01535fd0(param_1 + 0x68,&local_388);
    puVar9 = local_388;
    if (local_388 != (ulong *)0x0) {
      puVar1 = local_388 + 3;
      do {
        sVar4 = (short)*puVar1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar8) {
          *(short *)puVar1 = sVar4 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (sVar4 == 1) {
        piVar3 = (int *)((long)local_388 + 0x1c);
        do {
          iVar13 = *piVar3;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar8) {
            *piVar3 = -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar13 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar21 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar21;
          local_180 = (ulong *)*puVar9;
          FUN_00c44438(lVar21 + 0x8040,&local_180);
        }
      }
      else if (sVar4 == 0) goto LAB_01ec04c8;
    }
    pcVar18 = local_e8;
    if (local_e8 == (code *)0x0) break;
    puVar17 = auStack_d0;
    local_e0 = (undefined1 *)0x0;
    puStack_d8 = (undefined1 *)0x0;
    local_f0 = (undefined1 *)0x0;
    local_e8 = (code *)0x0;
    goto LAB_01ebfdd0;
  case 2:
    local_240 = local_240 & 0xffffffff00000000;
    FUN_01ec0ba4(&local_388,&local_240);
    if ((int)local_388 != 0) break;
    local_178 = local_178 & 0xffffffff00000000;
    local_180 = (ulong *)0x0;
    if (local_68[0] == (long *)0x0) break;
    FUN_01eb4af8(&local_388,&local_180);
    if ((int)local_388 != 0) break;
    local_388 = (ulong *)0x0;
    local_380 = 0;
    local_37c = 0;
    if (local_68[0] == (long *)0x0) break;
    FUN_01eb6748(&local_198,&local_388);
    if ((int)local_198 != 0) break;
    local_1a0 = 0;
    local_1a8 = (ulong *)0x0;
    if (local_68[0] == (long *)0x0) break;
    FUN_01eb4af8(&local_198,&local_1a8);
    if ((int)local_198 != 0) break;
    local_170 = &LAB_00b1fa08;
    local_158 = &LAB_00b1fa94;
    local_168 = FUN_00b1fa8c;
    local_160 = &LAB_00b1fa90;
    FUN_01e22628(&local_198,lVar21,local_240 & 0xffffffff,&local_170);
    FUN_01535fd0(param_1 + 0x68,&local_198);
    puVar10 = local_198;
    if (local_198 != (undefined8 *)0x0) {
      psVar2 = (short *)(local_198 + 3);
      do {
        sVar4 = *psVar2;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar8) {
          *psVar2 = sVar4 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (sVar4 == 1) {
        piVar3 = (int *)((long)local_198 + 0x1c);
        do {
          iVar13 = *piVar3;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar8) {
            *piVar3 = -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar13 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar21 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar21;
          local_260 = (undefined8 *)*puVar10;
          FUN_00c44438(lVar21 + 0x8040,&local_260);
        }
      }
      else if (sVar4 == 0) goto LAB_01ec04c8;
    }
    pcVar18 = local_168;
    if (local_168 == (code *)0x0) break;
    puVar17 = auStack_150;
    local_158 = (undefined1 *)0x0;
    local_160 = (undefined1 *)0x0;
    local_168 = (code *)0x0;
    local_170 = (undefined1 *)0x0;
LAB_01ebfdd0:
    (*pcVar18)(puVar17);
    break;
  case 3:
    local_250 = local_250 & 0xffffffff00000000;
    FUN_01ec0ba4(&local_388,&local_250);
    if ((int)local_388 != 0) break;
    local_258 = 0;
    local_260 = (undefined8 *)0x0;
    if (local_68[0] == (long *)0x0) break;
    FUN_01eb4af8(&local_388,&local_260);
    if ((int)local_388 != 0) break;
    uVar14 = FUN_0126a9c0();
    FUN_0135d328(&local_180,uVar14,0);
    local_188 = (byte *)0x0;
    local_190 = 0;
    local_198 = (undefined8 *)0x0;
    if (local_68[0] != (long *)0x0) {
      FUN_015f9e88(&local_388,&local_198);
      uVar11 = local_250;
      if ((int)local_388 == 0) {
        uVar14 = CONCAT44(*(undefined4 *)((ulong)&local_260 | 4),local_260._0_4_);
        local_230 = &LAB_00b1fa08;
        local_228 = FUN_00b1fa8c;
        local_220 = &LAB_00b1fa90;
        puStack_218 = &LAB_00b1fa94;
        if (((ulong)local_198 & 1) == 0) {
          pbVar22 = (byte *)((ulong)&local_198 | 1);
LAB_01ec0404:
          sVar15 = strlen((char *)pbVar22);
          bVar6 = *pbVar22;
          if (bVar6 == 0) {
            local_388 = (ulong *)&DAT_cbf29ce484222645;
          }
          else {
            local_388 = (ulong *)&DAT_cbf29ce484222645;
            pbVar20 = pbVar22;
            do {
              pbVar20 = pbVar20 + 1;
              local_388 = (ulong *)(((ulong)local_388 ^ (ulong)bVar6) * 0x100000001b3);
              bVar6 = *pbVar20;
            } while (bVar6 != 0);
          }
          local_380 = SUB84(pbVar22,0);
          local_37c = (undefined4)((ulong)pbVar22 >> 0x20);
          uStack_378 = (undefined4)sVar15;
          local_374 = (undefined4)(sVar15 >> 0x20);
          uStack_370 = 0;
          local_36c = 0;
        }
        else {
          pbVar22 = local_188;
          if (local_188 != (byte *)0x0) goto LAB_01ec0404;
          if (((*PTR_DAT_047d3e28 & 1) == 0) &&
             (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar13 != 0)) {
            FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3e28);
          }
          local_388 = *(ulong **)PTR_DAT_047d3e30;
          local_380 = (undefined4)*(undefined8 *)(PTR_DAT_047d3e30 + 8);
          local_37c = (undefined4)((ulong)*(undefined8 *)(PTR_DAT_047d3e30 + 8) >> 0x20);
          plVar5 = *(long **)(PTR_DAT_047d3e30 + 0x18);
          uStack_378 = (undefined4)*(undefined8 *)(PTR_DAT_047d3e30 + 0x10);
          local_374 = (undefined4)((ulong)*(undefined8 *)(PTR_DAT_047d3e30 + 0x10) >> 0x20);
          uStack_370 = SUB84(plVar5,0);
          local_36c = (undefined4)((ulong)plVar5 >> 0x20);
          if (plVar5 != (long *)0x0) {
            (**(code **)(*plVar5 + 0x18))();
          }
        }
        FUN_01534c34(&local_1a8,uVar14,lVar21,uVar11 & 0xffffffff,&local_230,&local_388);
        FUN_01535fd0(param_1 + 0x68,&local_1a8);
        puVar9 = local_1a8;
        if (local_1a8 != (ulong *)0x0) {
          puVar1 = local_1a8 + 3;
          do {
            sVar4 = (short)*puVar1;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar8) {
              *(short *)puVar1 = sVar4 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (sVar4 == 1) {
            piVar3 = (int *)((long)local_1a8 + 0x1c);
            do {
              iVar13 = *piVar3;
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(piVar3,0x10);
              if (bVar8) {
                *piVar3 = -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (iVar13 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar21 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar21;
              local_240 = *puVar9;
              FUN_00c44438(lVar21 + 0x8040,&local_240);
            }
          }
          else if (sVar4 == 0) {
LAB_01ec04c8:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x33,"Reference counter underflows.");
          }
        }
        if ((long *)CONCAT44(local_36c,uStack_370) != (long *)0x0) {
          (**(code **)(*(long *)CONCAT44(local_36c,uStack_370) + 0x20))();
        }
        pcVar18 = local_228;
        if (local_228 != (code *)0x0) {
          local_220 = (undefined1 *)0x0;
          puStack_218 = (undefined1 *)0x0;
          local_230 = (undefined1 *)0x0;
          local_228 = (code *)0x0;
          (*pcVar18)(auStack_210);
        }
      }
    }
    if (((ulong)local_198 & 1) != 0) {
      operator_delete(local_188);
    }
    ppuVar16 = &local_180;
    goto LAB_01ec0060;
  case 4:
    local_234 = 0;
    FUN_01ec0ba4(&local_388,&local_234);
    if ((int)local_388 != 0) break;
    local_238 = 0;
    local_240 = 0;
    if (local_68[0] == (long *)0x0) break;
    FUN_01eb4af8(&local_388,&local_240);
    if ((int)local_388 != 0) break;
    local_178 = 0;
    local_180 = (ulong *)0x0;
    if (local_68[0] == (long *)0x0) break;
    FUN_01eb6748(&local_388,&local_180);
    if ((int)local_388 != 0) break;
    local_248 = 0;
    local_250 = 0;
    if (local_68[0] == (long *)0x0) break;
    FUN_01eb4af8(&local_388,&local_250);
    if ((int)local_388 != 0) break;
    uVar14 = FUN_0126a9c0();
    FUN_0135d328(&local_1a8,uVar14,0);
    local_188 = (byte *)0x0;
    local_190 = 0;
    local_198 = (undefined8 *)0x0;
    if (local_68[0] != (long *)0x0) {
      FUN_015f9e88(&local_388,&local_198);
      uVar12 = local_234;
      if ((int)local_388 == 0) {
        uVar23 = CONCAT44(*(undefined4 *)((ulong)&local_240 | 4),(undefined4)local_240);
        uVar24 = CONCAT44(*(undefined4 *)((ulong)&local_180 | 4),local_180._0_4_);
        uVar14 = CONCAT44(*(undefined4 *)((ulong)&local_250 | 4),(undefined4)local_250);
        local_2e0 = &LAB_00b1fa08;
        local_2d8 = FUN_00b1fa8c;
        local_2d0 = &LAB_00b1fa90;
        puStack_2c8 = &LAB_00b1fa94;
        if (((ulong)local_198 & 1) == 0) {
          pbVar22 = (byte *)((ulong)&local_198 | 1);
LAB_01ec05dc:
          sVar15 = strlen((char *)pbVar22);
          bVar6 = *pbVar22;
          local_388 = (ulong *)&DAT_cbf29ce484222645;
          pbVar20 = pbVar22;
          while (bVar6 != 0) {
            pbVar20 = pbVar20 + 1;
            local_388 = (ulong *)(((ulong)local_388 ^ (ulong)bVar6) * 0x100000001b3);
            bVar6 = *pbVar20;
          }
          local_380 = SUB84(pbVar22,0);
          local_37c = (undefined4)((ulong)pbVar22 >> 0x20);
          uStack_378 = (undefined4)sVar15;
          local_374 = (undefined4)(sVar15 >> 0x20);
          uStack_370 = 0;
          local_36c = 0;
        }
        else {
          pbVar22 = local_188;
          if (local_188 != (byte *)0x0) goto LAB_01ec05dc;
          if (((*PTR_DAT_047d3e28 & 1) == 0) &&
             (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar13 != 0)) {
            FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3e28);
          }
          local_388 = *(ulong **)PTR_DAT_047d3e30;
          local_380 = (undefined4)*(undefined8 *)(PTR_DAT_047d3e30 + 8);
          local_37c = (undefined4)((ulong)*(undefined8 *)(PTR_DAT_047d3e30 + 8) >> 0x20);
          plVar5 = *(long **)(PTR_DAT_047d3e30 + 0x18);
          uStack_378 = (undefined4)*(undefined8 *)(PTR_DAT_047d3e30 + 0x10);
          local_374 = (undefined4)((ulong)*(undefined8 *)(PTR_DAT_047d3e30 + 0x10) >> 0x20);
          uStack_370 = SUB84(plVar5,0);
          local_36c = (undefined4)((ulong)plVar5 >> 0x20);
          if (plVar5 != (long *)0x0) {
            (**(code **)(*plVar5 + 0x18))();
          }
        }
        FUN_01e0e440(&local_260,uVar23,uVar24,uVar14,lVar21,uVar12,&local_2e0,&local_388);
        FUN_01535fd0(param_1 + 0x68,&local_260);
        puVar10 = local_260;
        if (local_260 != (undefined8 *)0x0) {
          psVar2 = (short *)(local_260 + 3);
          do {
            sVar4 = *psVar2;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar8) {
              *psVar2 = sVar4 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (sVar4 == 1) {
            piVar3 = (int *)((long)local_260 + 0x1c);
            do {
              iVar13 = *piVar3;
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(piVar3,0x10);
              if (bVar8) {
                *piVar3 = -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (iVar13 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar21 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar21;
              local_48 = *puVar10;
              FUN_00c44438(lVar21 + 0x8040,&local_48);
            }
          }
          else if (sVar4 == 0) goto LAB_01ec04c8;
        }
        if ((long *)CONCAT44(local_36c,uStack_370) != (long *)0x0) {
          (**(code **)(*(long *)CONCAT44(local_36c,uStack_370) + 0x20))();
        }
        pcVar18 = local_2d8;
        if (local_2d8 != (code *)0x0) {
          puVar17 = auStack_2c0;
          local_2d0 = (undefined1 *)0x0;
          puStack_2c8 = (undefined1 *)0x0;
          local_2e0 = (undefined1 *)0x0;
          local_2d8 = (code *)0x0;
LAB_01ec0678:
          (*pcVar18)(puVar17);
        }
      }
    }
    goto LAB_01ec0128;
  case 5:
    local_234 = 0;
    FUN_01ec0ba4(&local_388,&local_234);
    if ((int)local_388 != 0) break;
    local_238 = 0;
    local_240 = 0;
    if (local_68[0] == (long *)0x0) break;
    FUN_01eb4af8(&local_388,&local_240);
    if ((int)local_388 != 0) break;
    local_178 = 0;
    local_180 = (ulong *)0x0;
    if (local_68[0] == (long *)0x0) break;
    FUN_01eb6748(&local_388,&local_180);
    if ((int)local_388 != 0) break;
    local_248 = 0;
    local_250 = 0;
    if (local_68[0] == (long *)0x0) break;
    FUN_01eb4af8(&local_388,&local_250);
    if ((int)local_388 != 0) break;
    uVar14 = FUN_0126a9c0();
    FUN_0135d328(&local_1a8,uVar14,0);
    local_188 = (byte *)0x0;
    local_190 = 0;
    local_198 = (undefined8 *)0x0;
    if (local_68[0] != (long *)0x0) {
      FUN_015f9e88(&local_388,&local_198);
      uVar12 = local_234;
      if ((int)local_388 == 0) {
        uVar23 = CONCAT44(*(undefined4 *)((ulong)&local_240 | 4),(undefined4)local_240);
        uVar24 = CONCAT44(*(undefined4 *)((ulong)&local_180 | 4),local_180._0_4_);
        uVar14 = CONCAT44(*(undefined4 *)((ulong)&local_250 | 4),(undefined4)local_250);
        local_360 = &LAB_00b1fa08;
        local_358 = FUN_00b1fa8c;
        local_350 = &LAB_00b1fa90;
        puStack_348 = &LAB_00b1fa94;
        if (((ulong)local_198 & 1) == 0) {
          pbVar22 = (byte *)((ulong)&local_198 | 1);
LAB_01ebff3c:
          sVar15 = strlen((char *)pbVar22);
          bVar6 = *pbVar22;
          local_388 = (ulong *)&DAT_cbf29ce484222645;
          pbVar20 = pbVar22;
          while (bVar6 != 0) {
            pbVar20 = pbVar20 + 1;
            local_388 = (ulong *)(((ulong)local_388 ^ (ulong)bVar6) * 0x100000001b3);
            bVar6 = *pbVar20;
          }
          local_380 = SUB84(pbVar22,0);
          local_37c = (undefined4)((ulong)pbVar22 >> 0x20);
          uStack_378 = (undefined4)sVar15;
          local_374 = (undefined4)(sVar15 >> 0x20);
          uStack_370 = 0;
          local_36c = 0;
        }
        else {
          pbVar22 = local_188;
          if (local_188 != (byte *)0x0) goto LAB_01ebff3c;
          if (((*PTR_DAT_047d3e28 & 1) == 0) &&
             (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar13 != 0)) {
            FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3e28);
          }
          local_388 = *(ulong **)PTR_DAT_047d3e30;
          local_380 = (undefined4)*(undefined8 *)(PTR_DAT_047d3e30 + 8);
          local_37c = (undefined4)((ulong)*(undefined8 *)(PTR_DAT_047d3e30 + 8) >> 0x20);
          plVar5 = *(long **)(PTR_DAT_047d3e30 + 0x18);
          uStack_378 = (undefined4)*(undefined8 *)(PTR_DAT_047d3e30 + 0x10);
          local_374 = (undefined4)((ulong)*(undefined8 *)(PTR_DAT_047d3e30 + 0x10) >> 0x20);
          uStack_370 = SUB84(plVar5,0);
          local_36c = (undefined4)((ulong)plVar5 >> 0x20);
          if (plVar5 != (long *)0x0) {
            (**(code **)(*plVar5 + 0x18))();
          }
        }
        FUN_01e16218(&local_260,uVar23,uVar24,uVar14,lVar21,uVar12,&local_360,&local_388);
        FUN_01535fd0(param_1 + 0x68,&local_260);
        puVar10 = local_260;
        if (local_260 != (undefined8 *)0x0) {
          psVar2 = (short *)(local_260 + 3);
          do {
            sVar4 = *psVar2;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar8) {
              *psVar2 = sVar4 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (sVar4 == 1) {
            piVar3 = (int *)((long)local_260 + 0x1c);
            do {
              iVar13 = *piVar3;
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(piVar3,0x10);
              if (bVar8) {
                *piVar3 = -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (iVar13 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar21 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar21;
              local_48 = *puVar10;
              FUN_00c44438(lVar21 + 0x8040,&local_48);
            }
          }
          else if (sVar4 == 0) goto LAB_01ec04c8;
        }
        if ((long *)CONCAT44(local_36c,uStack_370) != (long *)0x0) {
          (**(code **)(*(long *)CONCAT44(local_36c,uStack_370) + 0x20))();
        }
        pcVar18 = local_358;
        if (local_358 != (code *)0x0) {
          local_350 = (undefined1 *)0x0;
          puStack_348 = (undefined1 *)0x0;
          puVar17 = auStack_340;
          local_360 = (undefined1 *)0x0;
          local_358 = (code *)0x0;
          goto LAB_01ec0678;
        }
      }
    }
LAB_01ec0128:
    if (((ulong)local_198 & 1) != 0) {
      operator_delete(local_188);
    }
    ppuVar16 = &local_1a8;
LAB_01ec0060:
    FUN_0135d2ec(ppuVar16);
    break;
  case 6:
    local_198 = (undefined8 *)((ulong)local_198 & 0xffffffff00000000);
    FUN_01ec0ba4(&local_388,&local_198);
    if (((int)local_388 == 0) && (local_68[0] != (long *)0x0)) {
      bVar6 = *(byte *)(*local_68[0] + local_68[0][2]);
      local_68[0][2] = local_68[0][2] + 1;
      if (bVar6 < 2) {
        FUN_015214ac(lVar21,(ulong)local_198 & 0xffffffff,bVar6 != 0);
      }
    }
    break;
  case 7:
    local_178 = local_178 & 0xffffffff00000000;
    local_180 = (ulong *)0x0;
    FUN_01eb4af8(&local_388,&local_180);
    if ((int)local_388 == 0) {
      local_190 = 0;
      local_198 = (undefined8 *)0x0;
      if (local_68[0] != (long *)0x0) {
        FUN_01eb6748(&local_388,&local_198);
        if ((int)local_388 == 0) {
          local_1a0 = 0;
          local_1a8 = (ulong *)0x0;
          if (local_68[0] != (long *)0x0) {
            FUN_01eb4af8(&local_388,&local_1a8);
            if ((int)local_388 == 0) {
              local_388 = local_180;
              local_37c = SUB84(local_198,0);
              uStack_378 = (undefined4)((ulong)local_198 >> 0x20);
              local_374 = (undefined4)local_190;
              uStack_370 = (undefined4)(local_190 >> 0x20);
              local_36c = SUB84(local_1a8,0);
              uStack_368 = (undefined4)((ulong)local_1a8 >> 0x20);
              local_380 = (undefined4)local_178;
              local_364 = local_1a0;
              FUN_01ec0bf4(param_1 + 0xa0,&local_388);
            }
          }
        }
      }
    }
  }
switchD_01ebfd0c_default:
  FUN_01267b4c(local_68);
  return;
}


