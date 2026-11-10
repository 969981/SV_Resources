/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00a86c58; name: FUN_00a86c58
 */


/* WARNING: Control flow encountered bad instruction data */

void FUN_00a86c58(ulong param_1)

{
  int *piVar1;
  ulong *puVar2;
  short *psVar3;
  undefined1 uVar4;
  short sVar5;
  char cVar6;
  char cVar7;
  long *plVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  bool bVar13;
  ushort uVar14;
  short sVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  undefined4 uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong *puVar22;
  undefined4 uVar23;
  undefined8 uVar24;
  ushort *puVar25;
  code *pcVar26;
  long lVar27;
  ulong *puVar28;
  long lVar29;
  undefined8 uVar30;
  long *plVar31;
  ulong *puVar32;
  undefined1 *local_2c0;
  code *local_2b8;
  undefined1 *local_2b0;
  undefined1 *local_2a8;
  ulong auStack_2a0 [12];
  undefined1 *local_240;
  code *local_238;
  undefined1 *local_230;
  undefined1 *local_228;
  ulong auStack_220 [12];
  undefined1 *local_1c0;
  code *local_1b8;
  undefined1 *local_1b0;
  undefined1 *local_1a8;
  ulong auStack_1a0 [12];
  undefined8 *local_140;
  undefined8 uStack_138;
  ulong *local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  char *pcStack_118;
  undefined8 local_110;
  long *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined1 *local_f0;
  undefined1 *local_e8;
  ulong local_e0 [12];
  undefined8 *local_80;
  undefined8 uStack_78;
  ulong local_70 [2];
  
  if (*(char *)(param_1 + 0x40) == '\0') {
    switch(*(undefined4 *)(param_1 + 0x44)) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
switchD_00a86ca4_caseD_0:
      if (*(long *)(*(long *)(param_1 + 0x30) + 0x1c8) == 0) {
LAB_00a86d3c:
        iVar16 = 1;
LAB_00a86d40:
        FUN_01dd589c(*(undefined8 *)(param_1 + 0x30),iVar16);
        *(undefined1 *)(param_1 + 0x41) = 1;
        uVar24 = 8;
LAB_00a86d58:
        *(undefined8 *)(param_1 + 0x44) = uVar24;
      }
      else {
        FUN_00cbd720(&local_100);
        if ((int)local_100 != 0) {
LAB_00a86cc4:
          iVar16 = 2;
          goto LAB_00a86d40;
        }
        uVar20 = FUN_01de2620(*(undefined8 *)(param_1 + 0x30));
        if ((uVar20 & 1) != 0) {
          uVar24 = 7;
          goto LAB_00a86d58;
        }
      }
      break;
    case 5:
      switch(*(undefined4 *)(param_1 + 0x48)) {
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
      case 8:
      case 9:
      case 0x17:
      case 0x18:
        goto switchD_00a86ca4_caseD_0;
      case 5:
      case 6:
      case 7:
      case 0x19:
        goto switchD_00a86ca4_caseD_6;
      case 10:
        iVar16 = FUN_01dd5838(*(undefined8 *)(param_1 + 0x30),1);
        lVar27 = *(long *)(*(long *)(param_1 + 0x30) + 0x1c8);
        if (lVar27 == 0) goto LAB_00a86d40;
        if (*(long *)(lVar27 + 0x60) == 0) break;
        uVar20 = FUN_00b69b7c();
        if ((uVar20 & 1) == 0) {
          if (((iVar16 != 0) && (*(long *)(lVar27 + 0x60) != 0)) &&
             (uVar20 = FUN_01df4590(), (uVar20 & 1) != 0)) {
            if (*(long *)(lVar27 + 0x60) != 0) {
              FUN_01df4578();
            }
            goto LAB_00a86d40;
          }
          break;
        }
        if (iVar16 == 0) break;
        local_140 = (undefined8 *)0x0;
        uStack_138 = 0;
        FUN_01084328(&local_140,*(long *)(param_1 + 0x30) + 0x130);
        FUN_0199332c(&local_140,s_F4E4CBC7CF3117205_04542da0);
        puVar12 = local_140;
        if (local_140 != (undefined8 *)0x0) {
          psVar3 = (short *)(local_140 + 3);
          do {
            sVar15 = *psVar3;
            cVar6 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(psVar3,0x10);
            if (bVar13) {
              *psVar3 = sVar15 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (sVar15 == 1) {
            piVar1 = (int *)((long)local_140 + 0x1c);
            do {
              iVar16 = *piVar1;
              cVar6 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar13) {
                *piVar1 = -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar16 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar16 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar16 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar27 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar27;
              local_100 = (ulong *)*puVar12;
              FUN_00c44438(lVar27 + 0x8040,&local_100);
            }
          }
          else if (sVar15 == 0) goto LAB_00a87adc;
        }
        uVar24 = 9;
        goto LAB_00a86d58;
      case 0x14:
        if (*(long *)(*(long *)(param_1 + 0x30) + 0x1c8) != 0) {
          FUN_00cbd720(&local_100);
          if ((int)local_100 == 0) break;
          goto LAB_00a86cc4;
        }
        goto LAB_00a86d3c;
      }
      break;
    case 6:
    case 10:
switchD_00a86ca4_caseD_6:
      iVar16 = FUN_01dd5838(*(undefined8 *)(param_1 + 0x30),1);
      if (iVar16 != 0) goto LAB_00a86d40;
    }
  }
  switch(*(undefined4 *)(param_1 + 0x44)) {
  case 0:
    lVar29 = *(long *)(param_1 + 0x30);
    lVar27 = *(long *)(lVar29 + 0x1c8);
    if (lVar27 == 0) {
      return;
    }
    if (*(int *)(lVar27 + 0xc0) < 2) {
      return;
    }
    memmove((void *)(lVar29 + 0xcd0),(void *)(lVar27 + 0xae0),0x9fc);
    *(undefined1 *)(lVar29 + 0x2d3) = 1;
    goto switchD_00a8702c_caseD_4;
  case 1:
    if (((*PTR_DAT_047d8658 & 1) == 0) &&
       (iVar16 = __cxa_guard_acquire(PTR_DAT_047d8658), iVar16 != 0)) {
      FUN_00100190(PTR_LAB_047d8db0,PTR_DAT_047d8660,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8658);
    }
    lVar27 = *(long *)PTR_DAT_047d8660;
    *(long *)PTR_DAT_047d8668 = lVar27;
    if (*(int *)(lVar27 + 0x48) == 0) {
      uVar18 = FUN_01defefc(param_1);
      FUN_015d82d8(*(undefined8 *)(param_1 + 0x38),4,uVar18 & 1);
      lVar27 = FUN_0119579c(*(undefined8 *)(param_1 + 0x30));
      FUN_015d82d8(*(undefined8 *)(param_1 + 0x38),0xc,lVar27 != 0);
      FUN_012977e0(param_1);
      lVar27 = *(long *)(*(long *)(param_1 + 0x38) + 0x80);
      if ((lVar27 != 0) && (*(short *)(lVar27 + 0x1a) != 0)) {
        lVar27 = *(long *)(*(long *)(param_1 + 0x38) + 0x80);
        cVar6 = DAT_00000381;
        if ((lVar27 != 0) && (*(short *)(lVar27 + 0x1a) != 0)) {
          psVar3 = (short *)(lVar27 + 0x1a);
          sVar15 = *(short *)(lVar27 + 0x1a);
LAB_00a88644:
          sVar5 = *psVar3;
          if (sVar5 == sVar15) {
            cVar6 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(psVar3,0x10);
            if (bVar13) {
              *psVar3 = sVar15 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 != '\0') goto LAB_00a88668;
            bVar13 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_00a88668:
            bVar13 = false;
          }
          cVar6 = DAT_00000381;
          if (!bVar13) goto code_r0x00a88670;
          lVar27 = *(long *)(lVar27 + 0x10);
          if (lVar27 != 0) {
            cVar6 = *(char *)(lVar27 + 0x359);
            lVar29 = *(long *)(lVar27 + 8);
            psVar3 = (short *)(lVar29 + 0x1a);
            do {
              sVar15 = *psVar3;
              cVar7 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(psVar3,0x10);
              if (bVar13) {
                *psVar3 = sVar15 + -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (sVar15 == 1) {
              *(undefined8 *)(lVar29 + 0x10) = 0;
              (**(code **)(*(long *)(lVar27 + -0x28) + 0x50))();
            }
            else if (sVar15 == 0) goto LAB_00a88e48;
          }
        }
joined_r0x00a88b18:
        if (cVar6 != '\0') {
          lVar27 = FUN_0119579c(*(undefined8 *)(param_1 + 0x30));
          if (lVar27 != 0) {
            FUN_01967d8c(*(undefined8 *)(param_1 + 0x30));
            FUN_01967bd8(*(undefined8 *)(param_1 + 0x30),1);
            *(undefined4 *)(param_1 + 0x44) = 3;
            return;
          }
          uVar20 = FUN_01defd7c(param_1);
          if ((uVar20 & 1) != 0) {
            *(undefined4 *)(*(long *)(param_1 + 0x30) + 0x171c) = 3;
            lVar27 = *(long *)(*(long *)(param_1 + 0x30) + 0x1b8);
            if (lVar27 == 0) {
              return;
            }
            *(undefined4 *)(*(long *)(param_1 + 0x30) + 0x170) = 0x14;
            *(undefined4 *)(lVar27 + 0x30) = 0x14;
            return;
          }
          uVar20 = FUN_01defbfc(param_1);
          if ((uVar20 & 1) != 0) {
            *(undefined4 *)(*(long *)(param_1 + 0x30) + 0x171c) = 6;
            FUN_01dd0a5c(*(undefined8 *)(param_1 + 0x30));
            return;
          }
        }
      }
      lVar27 = *(long *)(*(long *)(param_1 + 0x38) + 0x90);
      if ((lVar27 != 0) && (*(short *)(lVar27 + 0x1a) != 0)) {
        lVar27 = *(long *)(*(long *)(param_1 + 0x38) + 0x90);
        cVar6 = DAT_00000381;
        if ((lVar27 != 0) && (*(short *)(lVar27 + 0x1a) != 0)) {
          psVar3 = (short *)(lVar27 + 0x1a);
          sVar15 = *(short *)(lVar27 + 0x1a);
LAB_00a88814:
          sVar5 = *psVar3;
          if (sVar5 == sVar15) {
            cVar6 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(psVar3,0x10);
            if (bVar13) {
              *psVar3 = sVar15 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 != '\0') goto LAB_00a88838;
            bVar13 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_00a88838:
            bVar13 = false;
          }
          cVar6 = DAT_00000381;
          if (!bVar13) goto code_r0x00a88840;
          lVar27 = *(long *)(lVar27 + 0x10);
          if (lVar27 != 0) {
            cVar6 = *(char *)(lVar27 + 0x359);
            lVar29 = *(long *)(lVar27 + 8);
            psVar3 = (short *)(lVar29 + 0x1a);
            do {
              sVar15 = *psVar3;
              cVar7 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(psVar3,0x10);
              if (bVar13) {
                *psVar3 = sVar15 + -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (sVar15 == 1) {
              *(undefined8 *)(lVar29 + 0x10) = 0;
              (**(code **)(*(long *)(lVar27 + -0x28) + 0x50))();
            }
            else if (sVar15 == 0) goto LAB_00a88e48;
          }
        }
joined_r0x00a88b30:
        if (cVar6 != '\0') {
          local_1c0 = &LAB_01df5070;
          local_1b8 = FUN_00a894ac;
          local_1b0 = &LAB_00a894b0;
          local_1a8 = &LAB_00a894bc;
          auStack_1a0[0] = param_1;
          FUN_01ddac6c(*(undefined8 *)(param_1 + 0x30),0x33,&local_1c0);
          pcVar26 = local_1b8;
          if (local_1b8 != (code *)0x0) {
            local_1b0 = (undefined1 *)0x0;
            local_1a8 = (undefined1 *)0x0;
            local_1c0 = (undefined1 *)0x0;
            local_1b8 = (code *)0x0;
            (*pcVar26)(auStack_1a0);
          }
          *(undefined8 *)(param_1 + 0x44) = 2;
        }
      }
      lVar27 = *(long *)(*(long *)(param_1 + 0x38) + 0xa0);
      if ((lVar27 != 0) && (*(short *)(lVar27 + 0x1a) != 0)) {
        lVar27 = *(long *)(*(long *)(param_1 + 0x38) + 0xa0);
        cVar6 = DAT_00000381;
        if ((lVar27 != 0) && (*(short *)(lVar27 + 0x1a) != 0)) {
          psVar3 = (short *)(lVar27 + 0x1a);
          sVar15 = *(short *)(lVar27 + 0x1a);
LAB_00a8885c:
          sVar5 = *psVar3;
          if (sVar5 == sVar15) {
            cVar6 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(psVar3,0x10);
            if (bVar13) {
              *psVar3 = sVar15 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 != '\0') goto LAB_00a88880;
            bVar13 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_00a88880:
            bVar13 = false;
          }
          cVar6 = DAT_00000381;
          if (!bVar13) goto code_r0x00a88888;
          lVar27 = *(long *)(lVar27 + 0x10);
          if (lVar27 != 0) {
            cVar6 = *(char *)(lVar27 + 0x359);
            lVar29 = *(long *)(lVar27 + 8);
            psVar3 = (short *)(lVar29 + 0x1a);
            do {
              sVar15 = *psVar3;
              cVar7 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(psVar3,0x10);
              if (bVar13) {
                *psVar3 = sVar15 + -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (sVar15 == 1) {
              *(undefined8 *)(lVar29 + 0x10) = 0;
              (**(code **)(*(long *)(lVar27 + -0x28) + 0x50))();
            }
            else if (sVar15 == 0) goto LAB_00a88e48;
          }
        }
joined_r0x00a88b48:
        if (cVar6 != '\0') {
          local_240 = &LAB_01df5098;
          local_238 = FUN_00a894c8;
          local_230 = &LAB_00a894cc;
          local_228 = &LAB_00a894d8;
          auStack_220[0] = param_1;
          FUN_00a6a24c(*(undefined8 *)(param_1 + 0x30),&local_240,0x31,1,1,0);
          pcVar26 = local_238;
          if (local_238 != (code *)0x0) {
            local_230 = (undefined1 *)0x0;
            local_228 = (undefined1 *)0x0;
            local_240 = (undefined1 *)0x0;
            local_238 = (code *)0x0;
            (*pcVar26)(auStack_220);
          }
          *(undefined4 *)(param_1 + 0x44) = 10;
          goto LAB_00a887e0;
        }
      }
      lVar27 = *(long *)(*(long *)(param_1 + 0x38) + 0x100);
      if (lVar27 == 0) {
        return;
      }
      if (*(short *)(lVar27 + 0x1a) == 0) {
        return;
      }
      lVar27 = *(long *)(*(long *)(param_1 + 0x38) + 0x100);
      cVar6 = DAT_00000381;
      if ((lVar27 != 0) && (*(short *)(lVar27 + 0x1a) != 0)) {
        psVar3 = (short *)(lVar27 + 0x1a);
        sVar15 = *(short *)(lVar27 + 0x1a);
        do {
          sVar5 = *psVar3;
          if (sVar5 == sVar15) {
            cVar6 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(psVar3,0x10);
            if (bVar13) {
              *psVar3 = sVar15 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 != '\0') goto LAB_00a88a04;
            bVar13 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_00a88a04:
            bVar13 = false;
          }
          cVar6 = DAT_00000381;
          if (bVar13) {
            lVar27 = *(long *)(lVar27 + 0x10);
            if (lVar27 != 0) {
              cVar6 = *(char *)(lVar27 + 0x359);
              lVar29 = *(long *)(lVar27 + 8);
              psVar3 = (short *)(lVar29 + 0x1a);
              do {
                sVar15 = *psVar3;
                cVar7 = '\x01';
                bVar13 = (bool)ExclusiveMonitorPass(psVar3,0x10);
                if (bVar13) {
                  *psVar3 = sVar15 + -1;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
              if (sVar15 == 1) {
                *(undefined8 *)(lVar29 + 0x10) = 0;
                (**(code **)(*(long *)(lVar27 + -0x28) + 0x50))();
              }
              else if (sVar15 == 0) {
LAB_00a88e48:
                    /* WARNING: Subroutine does not return */
                nn::diag::detail::AbortImpl
                          ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                           "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                           ,0x60,"Reference counter underflows.");
              }
            }
            break;
          }
          sVar15 = sVar5;
        } while (sVar5 != 0);
      }
      if (cVar6 == '\0') {
        return;
      }
      FUN_01dd58b8(*(undefined8 *)(param_1 + 0x30));
    }
    FUN_0129e8c0(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x150));
    break;
  case 3:
    lVar27 = *(long *)(param_1 + 0x30);
    if (*(char *)(lVar27 + 0x2ad) == '\0') {
      return;
    }
    iVar16 = *(int *)(lVar27 + 0x2c4);
    if (iVar16 == 0x10) {
      FUN_01df391c(param_1);
      return;
    }
    if (iVar16 != 7) {
      if (iVar16 != 1) {
        return;
      }
      local_2c0 = &LAB_00a894e4;
      local_2b8 = FUN_00a89508;
      local_2b0 = &LAB_00a8950c;
      local_2a8 = &LAB_00a89518;
      auStack_2a0[0] = param_1;
      FUN_01dd12f0(lVar27,&local_2c0);
      pcVar26 = local_2b8;
      if (local_2b8 != (code *)0x0) {
        local_2b0 = (undefined1 *)0x0;
        local_2a8 = (undefined1 *)0x0;
        local_2c0 = (undefined1 *)0x0;
        local_2b8 = (code *)0x0;
        (*pcVar26)(auStack_2a0);
      }
      *(undefined8 *)(param_1 + 0x44) = 6;
LAB_00a887e0:
      *(undefined1 *)(param_1 + 0x42) = 0;
      return;
    }
switchD_00a8702c_caseD_4:
    FUN_01df3778(param_1);
    break;
  case 5:
    iVar16 = *(int *)(param_1 + 0x48);
    if ((iVar16 - 3U < 5) || (iVar16 == 9)) {
      lVar29 = *(long *)(param_1 + 0x30);
      lVar27 = *(long *)(lVar29 + 0x1c8);
      if (lVar27 == 0) goto LAB_00a8700c;
      iVar17 = FUN_00b693fc(lVar27);
      if (iVar17 == 1) {
        FUN_01dda3e0(lVar29);
        FUN_01dda668(*(undefined8 *)(param_1 + 0x30));
        FUN_01df37c4(*(undefined8 *)(param_1 + 0x30),0);
        local_80 = (undefined8 *)0x0;
        uStack_78 = 0;
        FUN_01084328(&local_80,*(long *)(param_1 + 0x30) + 0x130);
        local_100 = (ulong *)((ulong)local_100 & 0xffffffffffffff00);
        FUN_01de0af4(&local_80,s_F52FFAAAD818F1846_04542db3,&local_100);
        puVar12 = local_80;
        if (local_80 != (undefined8 *)0x0) {
          psVar3 = (short *)(local_80 + 3);
          do {
            sVar15 = *psVar3;
            cVar6 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(psVar3,0x10);
            if (bVar13) {
              *psVar3 = sVar15 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (sVar15 == 1) {
            piVar1 = (int *)((long)local_80 + 0x1c);
            do {
              iVar16 = *piVar1;
              cVar6 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar13) {
                *piVar1 = -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar16 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar16 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar16 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar29 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar29;
              local_100 = (ulong *)*puVar12;
              FUN_00c44438(lVar29 + 0x8040,&local_100);
            }
          }
          else if (sVar15 == 0) goto LAB_00a87adc;
        }
        iVar16 = 8;
        *(undefined4 *)(param_1 + 0x48) = 8;
      }
      else if (iVar16 == 4) goto switchD_00a8702c_caseD_4;
      iVar17 = FUN_00b693fc(lVar27);
      if (iVar17 != 0) goto LAB_00a8700c;
      iVar16 = *(int *)(lVar27 + 0x14dc);
      FUN_01dda3e0(*(undefined8 *)(param_1 + 0x30));
      FUN_01dda668(*(undefined8 *)(param_1 + 0x30));
      FUN_01df37c4(*(undefined8 *)(param_1 + 0x30),0);
      local_120 = (ulong *)0x0;
      pcStack_118 = (char *)0x0;
      FUN_01084328(&local_120,*(long *)(param_1 + 0x30) + 0x130);
      local_100 = (ulong *)((ulong)local_100 & 0xffffffffffffff00);
      FUN_01de0af4(&local_120,s_F52FFAAAD818F1846_04542db3,&local_100);
      puVar28 = local_120;
      if (local_120 != (ulong *)0x0) {
        puVar22 = local_120 + 3;
        do {
          sVar15 = (short)*puVar22;
          cVar6 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(puVar22,0x10);
          if (bVar13) {
            *(short *)puVar22 = sVar15 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar15 == 1) {
          piVar1 = (int *)((long)local_120 + 0x1c);
          do {
            iVar17 = *piVar1;
            cVar6 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar13) {
              *piVar1 = -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar17 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar17 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar17 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar27 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar27;
            local_100 = (ulong *)*puVar28;
            FUN_00c44438(lVar27 + 0x8040,&local_100);
          }
        }
        else if (sVar15 == 0) goto LAB_00a87adc;
      }
      local_100 = (ulong *)&LAB_00a89524;
      local_f8 = FUN_00a89538;
      local_f0 = &LAB_00a8953c;
      uVar19 = 0x2e;
      if (iVar16 == 1) {
        uVar19 = 0x2f;
      }
      local_e8 = &LAB_00a89548;
      local_e0[0] = param_1;
      FUN_01dda320(*(undefined8 *)(param_1 + 0x30),uVar19,&local_100,0,0,1,0);
      pcVar26 = local_f8;
joined_r0x00a87154:
      if (pcVar26 != (code *)0x0) {
        local_f0 = (undefined1 *)0x0;
        local_e8 = (undefined1 *)0x0;
        local_100 = (ulong *)0x0;
        local_f8 = (code *)0x0;
        (*pcVar26)(local_e0);
      }
      uVar19 = 0x18;
      goto LAB_00a8716c;
    }
LAB_00a8700c:
    switch(iVar16) {
    case 0:
      FUN_01df37c4(*(undefined8 *)(param_1 + 0x30),1);
      lVar27 = *(long *)(*(long *)(param_1 + 0x30) + 0x1c8);
      if (lVar27 == 0) {
        return;
      }
      iVar16 = FUN_00b693fc(lVar27);
      if (iVar16 == 2) {
        FUN_00feea48(*(undefined8 *)(param_1 + 0x58),*(undefined8 *)(lVar27 + 0xb8));
        FUN_01df45a0(param_1,(undefined8 *)(param_1 + 0x58));
      }
      else {
        local_100 = (ulong *)0x0;
        FUN_01df45a0(param_1,&local_100);
        lVar27 = *(long *)(param_1 + 0x30);
LAB_00a87d30:
        FUN_01dcddfc(lVar27,0x2b,0,0,0,1);
      }
      goto LAB_00a87d44;
    case 1:
      lVar27 = *(long *)(param_1 + 0x30);
      if (*(long *)(lVar27 + 0x1c8) == 0) {
        return;
      }
      iVar16 = FUN_00b693fc();
      if (iVar16 != 2) goto LAB_00a87d30;
LAB_00a87d44:
      uVar19 = 2;
      break;
    case 2:
      uVar20 = FUN_01dda514(*(undefined8 *)(param_1 + 0x30));
      if ((uVar20 & 1) == 0) {
        return;
      }
      lVar27 = *(long *)(*(long *)(param_1 + 0x30) + 0x1c8);
      if (lVar27 == 0) {
        return;
      }
      uVar20 = FUN_00f33290("UI_CANCEL");
      if ((uVar20 & 1) == 0) {
        iVar16 = FUN_00b693fc(lVar27);
        if (iVar16 != 2) {
          return;
        }
        FUN_00feea48(*(undefined8 *)(param_1 + 0x58),*(undefined8 *)(lVar27 + 0xb8));
        FUN_01df45a0(param_1,(undefined8 *)(param_1 + 0x58));
        FUN_01de2690(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(lVar27 + 0xb8));
        uVar19 = 3;
      }
      else {
        FUN_00b69464(lVar27,0);
        FUN_01dda3e0(*(undefined8 *)(param_1 + 0x30));
        FUN_01dda668(*(undefined8 *)(param_1 + 0x30));
        FUN_01df37c4(*(undefined8 *)(param_1 + 0x30),0);
        uVar19 = 4;
      }
      break;
    case 3:
      lVar27 = *(long *)(param_1 + 0x30);
      if (*(char *)(lVar27 + 0x2ad) == '\0') {
        return;
      }
      iVar16 = *(int *)(lVar27 + 0x2c4);
      if (iVar16 < 0xc) {
        if (iVar16 != 1) {
          if (iVar16 != 7) {
            return;
          }
          lVar29 = *(long *)(lVar27 + 0x1c8);
          if (lVar29 == 0) {
            return;
          }
          FUN_01dda3e0(lVar27);
          FUN_01dda668(*(undefined8 *)(param_1 + 0x30));
          FUN_01df37c4(*(undefined8 *)(param_1 + 0x30),0);
          FUN_00b69464(lVar29,0);
          goto switchD_00a8702c_caseD_4;
        }
        local_120 = (ulong *)FUN_0119579c(lVar27);
        if (local_120 != (ulong *)0x0) {
          puVar28 = local_120 + 5;
          do {
            uVar20 = *puVar28;
            cVar6 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(puVar28,0x10);
            if (bVar13) {
              *(int *)puVar28 = (int)uVar20 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if ((int)uVar20 == -1) goto LAB_00a88378;
        }
        local_100 = (ulong *)&LAB_00a89554;
        local_f8 = FUN_00a89574;
        local_f0 = &LAB_00a89578;
        local_e8 = &LAB_00a89584;
        local_e0[0] = param_1;
        FUN_01dd137c(lVar27,&local_120,&local_100);
        pcVar26 = local_f8;
        if (local_f8 != (code *)0x0) {
          local_f0 = (undefined1 *)0x0;
          local_e8 = (undefined1 *)0x0;
          local_100 = (ulong *)0x0;
          local_f8 = (code *)0x0;
          (*pcVar26)(local_e0);
        }
        if (local_120 != (ulong *)0x0) {
          puVar28 = local_120 + 5;
          do {
            iVar16 = (int)*puVar28;
            iVar17 = iVar16 + -1;
            cVar6 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(puVar28,0x10);
            if (bVar13) {
              *(int *)puVar28 = iVar17;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          goto LAB_00a87e90;
        }
      }
      else {
        if (iVar16 == 0xc) {
          if (*(long *)(lVar27 + 0x1c8) == 0) {
            return;
          }
          *(undefined4 *)(param_1 + 0x48) = 9;
          FUN_01dda3e0(lVar27);
          local_100 = (ulong *)&LAB_01df50a8;
          local_f8 = FUN_00a89590;
          local_f0 = &LAB_00a89594;
          local_e8 = &LAB_00a895a0;
          local_e0[0] = param_1;
          FUN_01ddad00(*(undefined8 *)(param_1 + 0x30),0x30,&local_100);
          pcVar26 = local_f8;
          if (local_f8 == (code *)0x0) {
            return;
          }
          puVar28 = local_e0;
          local_f0 = (undefined1 *)0x0;
          local_e8 = (undefined1 *)0x0;
          local_100 = (ulong *)0x0;
          local_f8 = (code *)0x0;
LAB_00a87f1c:
          (*pcVar26)(puVar28);
          return;
        }
        if (iVar16 != 0x11) {
          return;
        }
        local_120 = *(ulong **)(param_1 + 0x58);
        if (local_120 != (ulong *)0x0) {
          puVar28 = local_120 + 5;
          do {
            uVar20 = *puVar28;
            cVar6 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(puVar28,0x10);
            if (bVar13) {
              *(int *)puVar28 = (int)uVar20 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if ((int)uVar20 == -1) goto LAB_00a88378;
        }
        local_100 = (ulong *)&LAB_00a895ac;
        local_f8 = FUN_00a895cc;
        local_f0 = &LAB_00a895d0;
        local_e8 = &LAB_00a895dc;
        local_e0[0] = param_1;
        FUN_01dd137c(lVar27,&local_120,&local_100);
        pcVar26 = local_f8;
        if (local_f8 != (code *)0x0) {
          local_f0 = (undefined1 *)0x0;
          local_e8 = (undefined1 *)0x0;
          local_100 = (ulong *)0x0;
          local_f8 = (code *)0x0;
          (*pcVar26)(local_e0);
        }
        if (local_120 != (ulong *)0x0) {
          puVar28 = local_120 + 5;
          do {
            iVar16 = (int)*puVar28;
            iVar17 = iVar16 + -1;
            cVar6 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(puVar28,0x10);
            if (bVar13) {
              *(int *)puVar28 = iVar17;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
LAB_00a87e90:
          if (iVar17 == 0) {
            (**(code **)(*local_120 + 0x10))();
          }
          else if (iVar16 == 0) {
LAB_00a88d0c:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                       ,0x58,"Reference counter underflows.");
          }
        }
      }
      FUN_01df37c4(*(undefined8 *)(param_1 + 0x30),0);
      uVar19 = 0x19;
      *(undefined1 *)(param_1 + 0x42) = 0;
      break;
    default:
      goto switchD_00a8702c_caseD_4;
    case 5:
      lVar27 = *(long *)(*(long *)(param_1 + 0x30) + 0x1c8);
      if (lVar27 == 0) {
        return;
      }
      local_100 = (ulong *)0x0;
      local_f8 = (code *)0x0;
      FUN_01084328(&local_100,*(long *)(param_1 + 0x30) + 0x130);
      local_120 = (ulong *)CONCAT71(local_120._1_7_,1);
      FUN_01de0af4(&local_100,s_F52FFAAAD818F1846_04542db3,&local_120);
      puVar28 = local_100;
      if (local_100 != (ulong *)0x0) {
        puVar22 = local_100 + 3;
        do {
          sVar15 = (short)*puVar22;
          cVar6 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(puVar22,0x10);
          if (bVar13) {
            *(short *)puVar22 = sVar15 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar15 == 1) {
          piVar1 = (int *)((long)local_100 + 0x1c);
          do {
            iVar16 = *piVar1;
            cVar6 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar13) {
              *piVar1 = -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar16 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar16 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar16 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar29 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar29;
            local_120 = (ulong *)*puVar28;
            FUN_00c44438(lVar29 + 0x8040,&local_120);
          }
        }
        else if (sVar15 == 0) goto LAB_00a87adc;
      }
      if (*(char *)(param_1 + 0x60) != '\0') {
        local_130 = (ulong *)FUN_0167513c(&local_120,*(undefined8 *)(param_1 + 8));
        if (local_130 == (ulong *)0x0) {
          puVar28 = (ulong *)0x0;
        }
        else {
          puVar28 = local_130 + 5;
          do {
            uVar20 = *puVar28;
            cVar6 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(puVar28,0x10);
            if (bVar13) {
              *(int *)puVar28 = (int)uVar20 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if ((int)uVar20 == -1) goto LAB_00a88378;
          puVar28 = local_130;
        }
        (**(code **)(*puVar28 + 0x28))(puVar28,*(undefined8 *)(param_1 + 0x50));
        (**(code **)(*puVar28 + 0x28))(puVar28,*(undefined8 *)(param_1 + 0x58));
        FUN_01d2016c(local_70);
        local_120 = *(ulong **)(param_1 + 0x68);
        *(undefined8 *)(param_1 + 0x68) = 0;
        FUN_01d1e3b8(&local_120);
        uVar20 = local_70[0];
        local_70[0] = 0;
        *(ulong *)(param_1 + 0x68) = uVar20;
        FUN_01d1e3b8(local_70);
        FUN_01e5f804(*(undefined8 *)(param_1 + 0x68),&local_130);
        *(undefined4 *)(param_1 + 0x48) = 6;
        if (puVar28 == (ulong *)0x0) {
          return;
        }
        puVar22 = puVar28 + 5;
        do {
          uVar20 = *puVar22;
          iVar16 = (int)uVar20 + -1;
          cVar6 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(puVar22,0x10);
          if (bVar13) {
            *(int *)puVar22 = iVar16;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar16 == 0) {
          pcVar26 = *(code **)(*puVar28 + 0x10);
          goto LAB_00a87f1c;
        }
        if ((int)uVar20 != 0) {
          return;
        }
        goto LAB_00a88d0c;
      }
      FUN_01f67a64(lVar27);
      uVar19 = 7;
      break;
    case 6:
      uVar24 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x1c8);
      FUN_00ada310(&local_100,*(undefined8 *)(param_1 + 0x68));
      if ((char)local_100 == '\0') {
        return;
      }
      if ((((local_100._4_1_ == '\0') || ((int)local_f8 != 0)) || (local_f8._4_4_ == 0)) ||
         ((99 < local_f8._4_4_ - 200U ||
          (lVar27 = *(long *)(param_1 + 0x68), *(char *)(lVar27 + 0x88) == '\0')))) {
        uVar23 = 0x2c;
        uVar19 = 0;
      }
      else {
        if (*(char *)(lVar27 + 0x8c) == '\0') {
          uVar20 = FUN_01f67a64(uVar24);
          if ((uVar20 & 1) == 0) {
            return;
          }
          uVar19 = 7;
          goto LAB_00a874bc;
        }
        bVar13 = *(int *)(lVar27 + 0x90) == 0;
        uVar19 = 1;
        if (bVar13) {
          uVar19 = 2;
        }
        uVar23 = 0x2e;
        if (!bVar13) {
          uVar23 = 0x2f;
        }
      }
      uVar20 = FUN_00a88e78(param_1,uVar24,uVar23,uVar19);
      if ((uVar20 & 1) == 0) {
        return;
      }
      uVar19 = 0x18;
LAB_00a874bc:
      *(undefined4 *)(param_1 + 0x48) = uVar19;
      return;
    case 7:
      lVar27 = *(long *)(*(long *)(param_1 + 0x30) + 0x1c8);
      if (lVar27 == 0) {
        return;
      }
      iVar16 = FUN_00b693fc(lVar27);
      if (iVar16 == 4) {
        uVar20 = FUN_01f67c14(lVar27);
        if ((uVar20 & 1) == 0) {
          return;
        }
        *(undefined4 *)(param_1 + 0x48) = 10;
        FUN_01dcddfc(*(undefined8 *)(param_1 + 0x30),0x32,0,0,0,1);
        return;
      }
      uVar20 = FUN_00f33290("UI_CANCEL");
      if ((uVar20 & 1) == 0) {
        return;
      }
      uVar20 = FUN_00b69464(lVar27,0);
      if ((uVar20 & 1) == 0) {
        return;
      }
      FUN_01df37c4(*(undefined8 *)(param_1 + 0x30),0);
      local_120 = (ulong *)0x0;
      pcStack_118 = (char *)0x0;
      FUN_01084328(&local_120,*(long *)(param_1 + 0x30) + 0x130);
      local_100 = (ulong *)((ulong)local_100 & 0xffffffffffffff00);
      FUN_01de0af4(&local_120,s_F52FFAAAD818F1846_04542db3,&local_100);
      puVar28 = local_120;
      if (local_120 != (ulong *)0x0) {
        puVar22 = local_120 + 3;
        do {
          sVar15 = (short)*puVar22;
          cVar6 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(puVar22,0x10);
          if (bVar13) {
            *(short *)puVar22 = sVar15 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar15 == 1) {
          piVar1 = (int *)((long)local_120 + 0x1c);
          do {
            iVar16 = *piVar1;
            cVar6 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar13) {
              *piVar1 = -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar16 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar16 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar16 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar27 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar27;
            local_100 = (ulong *)*puVar28;
            FUN_00c44438(lVar27 + 0x8040,&local_100);
          }
        }
        else if (sVar15 == 0) goto LAB_00a87adc;
      }
      local_100 = (ulong *)&LAB_01df50e8;
      local_f8 = FUN_00a895e8;
      local_f0 = &LAB_00a895ec;
      local_e8 = &LAB_00a895f8;
      local_e0[0] = param_1;
      FUN_01dda320(*(undefined8 *)(param_1 + 0x30),0x2c,&local_100,0,0,1,0);
      pcVar26 = local_f8;
      goto joined_r0x00a87154;
    case 8:
      if (*(char *)(*(long *)(param_1 + 0x30) + 0x2ac) == '\0') {
        return;
      }
      uVar20 = FUN_01dda514();
      if ((uVar20 & 1) == 0) {
        return;
      }
      FUN_01df37c4(*(undefined8 *)(param_1 + 0x30),0);
      uVar19 = 1;
      break;
    case 9:
    case 0xc:
    case 0xe:
    case 0x18:
    case 0x19:
      goto switchD_00a86d7c_caseD_2;
    case 10:
      lVar27 = *(long *)(*(long *)(param_1 + 0x30) + 0x1c8);
      if (lVar27 == 0) {
        return;
      }
      if ((*(long *)(lVar27 + 0x60) != 0) && (uVar20 = FUN_01df4590(), (uVar20 & 1) != 0)) {
        return;
      }
      iVar16 = FUN_00b693fc(lVar27);
      if (iVar16 != 5) {
        return;
      }
      FUN_00a6a95c(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x50));
      FUN_01df4670(&local_100,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x50));
      puVar28 = local_100;
      local_130 = (ulong *)((ulong)local_130 & 0xffffffffffff0000);
      local_120 = (ulong *)((ulong)local_120._4_4_ << 0x20);
      uVar30 = *(undefined8 *)(param_1 + 0x58);
      uVar24 = FUN_00cf40ac();
      uVar20 = FUN_01df494c(uVar24,&local_130,&local_120,puVar28,uVar30);
      if ((uVar20 & 1) != 0) {
        FUN_0196f62c(local_100,(ulong)local_120 & 0xffffffff);
        FUN_00a6a95c(*(undefined8 *)(param_1 + 0x30),local_100);
      }
      if (local_100 != (ulong *)0x0) {
        puVar28 = local_100 + 5;
        do {
          uVar20 = *puVar28;
          iVar16 = (int)uVar20 + -1;
          cVar6 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(puVar28,0x10);
          if (bVar13) {
            *(int *)puVar28 = iVar16;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar16 == 0) {
          (**(code **)(*local_100 + 0x10))();
        }
        else if ((int)uVar20 == 0) goto LAB_00a88d0c;
      }
      puVar28 = *(ulong **)(param_1 + 0x58);
      if (puVar28 == (ulong *)0x0) {
        return;
      }
      uVar20 = FUN_00cf4cfc(puVar28[0xe]);
      puVar9 = PTR_DAT_047d4568;
      uVar24 = *(undefined8 *)(param_1 + 0x30);
      if (((uVar20 & 1) == 0) && ((*(ushort *)(*(long *)(puVar28[0xe] + 0x10) + 4) >> 2 & 1) == 0))
      {
        if (((*PTR_DAT_047d4568 & 1) == 0) &&
           (iVar16 = __cxa_guard_acquire(PTR_DAT_047d4568), iVar16 != 0)) {
          FUN_00100190(&LAB_02ace3a0,PTR_DAT_047d4570,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d4568);
        }
        puVar11 = PTR_DAT_047d4578;
        puVar10 = PTR_DAT_047d4570;
        lVar27 = *(long *)PTR_DAT_047d4570;
        *(long *)PTR_DAT_047d4578 = lVar27;
        plVar31 = *(long **)(lVar27 + 0x50);
        if (plVar31 != (long *)0x0) {
          plVar8 = plVar31 + 5;
          do {
            lVar27 = *plVar8;
            cVar6 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar13) {
              *(int *)plVar8 = (int)lVar27 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if ((int)lVar27 == -1) goto LAB_00a88378;
        }
        puVar22 = puVar28 + 5;
        do {
          uVar20 = *puVar22;
          cVar6 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(puVar22,0x10);
          if (bVar13) {
            *(int *)puVar22 = (int)uVar20 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if ((int)uVar20 == -1) goto LAB_00a88378;
        uVar14 = FUN_00cf44f4(puVar28[0xe]);
        uVar19 = FUN_00cf41a8(puVar28[0xe]);
        if (uVar14 < 0x402) {
          puVar25 = (ushort *)((long)plVar31 + (ulong)uVar14 * 0x18 + 0x2c);
          uVar14 = *puVar25;
          uVar23 = 0;
          if ((uVar14 & 0xfffe) != 0x298 && uVar14 != 0x2e8) {
            uVar23 = uVar19;
          }
          uVar18 = FUN_00a65d24(puVar25,0,uVar23);
        }
        else {
          uVar18 = 0;
        }
        FUN_01dcf1ac(uVar24,~uVar18 & 1);
        do {
          uVar20 = *puVar22;
          iVar16 = (int)uVar20 + -1;
          cVar6 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(puVar22,0x10);
          if (bVar13) {
            *(int *)puVar22 = iVar16;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar16 == 0) {
          (**(code **)(*puVar28 + 0x10))(puVar28);
        }
        else if ((int)uVar20 == 0) goto LAB_00a88d0c;
        if (plVar31 != (long *)0x0) {
          plVar8 = plVar31 + 5;
          do {
            lVar27 = *plVar8;
            iVar16 = (int)lVar27 + -1;
            cVar6 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar13) {
              *(int *)plVar8 = iVar16;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar16 == 0) {
            (**(code **)(*plVar31 + 0x10))(plVar31);
          }
          else if ((int)lVar27 == 0) goto LAB_00a88d0c;
        }
        if (((*puVar9 & 1) == 0) && (iVar16 = __cxa_guard_acquire(PTR_DAT_047d4568), iVar16 != 0)) {
          FUN_00100190(&LAB_02ace3a0,PTR_DAT_047d4570,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d4568);
        }
        lVar27 = *(long *)puVar10;
        *(long *)puVar11 = lVar27;
        plVar31 = *(long **)(lVar27 + 0x50);
        if (plVar31 != (long *)0x0) {
          plVar8 = plVar31 + 5;
          do {
            lVar27 = *plVar8;
            cVar6 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar13) {
              *(int *)plVar8 = (int)lVar27 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if ((int)lVar27 == -1) goto LAB_00a88378;
        }
        do {
          uVar20 = *puVar22;
          cVar6 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(puVar22,0x10);
          if (bVar13) {
            *(int *)puVar22 = (int)uVar20 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        local_120 = puVar28;
        if ((int)uVar20 == -1) goto LAB_00a88378;
        FUN_01edce74(plVar31,&local_120,0,1);
        if (local_120 != (ulong *)0x0) {
          puVar32 = local_120 + 5;
          do {
            uVar20 = *puVar32;
            iVar16 = (int)uVar20 + -1;
            cVar6 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(puVar32,0x10);
            if (bVar13) {
              *(int *)puVar32 = iVar16;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar16 == 0) {
            (**(code **)(*local_120 + 0x10))();
          }
          else if ((int)uVar20 == 0) goto LAB_00a88d0c;
        }
        if (plVar31 != (long *)0x0) {
          plVar8 = plVar31 + 5;
          do {
            lVar27 = *plVar8;
            iVar16 = (int)lVar27 + -1;
            cVar6 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar13) {
              *(int *)plVar8 = iVar16;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar16 == 0) {
            (**(code **)(*plVar31 + 0x10))(plVar31);
          }
          else if ((int)lVar27 == 0) goto LAB_00a88d0c;
        }
        do {
          uVar20 = *puVar22;
          cVar6 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(puVar22,0x10);
          if (bVar13) {
            *(int *)puVar22 = (int)uVar20 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        local_100 = puVar28;
        if ((int)uVar20 == -1) goto LAB_00a88378;
        FUN_00a4c088(&local_100,2);
        if (local_100 != (ulong *)0x0) {
          puVar28 = local_100 + 5;
          do {
            uVar20 = *puVar28;
            iVar16 = (int)uVar20 + -1;
            cVar6 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(puVar28,0x10);
            if (bVar13) {
              *(int *)puVar28 = iVar16;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar16 == 0) {
            (**(code **)(*local_100 + 0x10))();
          }
          else if ((int)uVar20 == 0) goto LAB_00a88d0c;
        }
      }
      else {
        FUN_01dcf1ac(uVar24,0);
      }
      puVar28 = (ulong *)FUN_0119579c(*(undefined8 *)(param_1 + 0x30));
      if (puVar28 != (ulong *)0x0) {
        puVar22 = puVar28 + 5;
        do {
          uVar20 = *puVar22;
          cVar6 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(puVar22,0x10);
          if (bVar13) {
            *(int *)puVar22 = (int)uVar20 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        local_130 = puVar28;
        if ((int)uVar20 == -1) {
LAB_00a88378:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != 0","IncrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                     ,0x53,"Reference counter overflows.");
        }
        FUN_00a3a53c(&local_130,4,0x7532);
        if (local_130 != (ulong *)0x0) {
          puVar32 = local_130 + 5;
          do {
            uVar20 = *puVar32;
            iVar16 = (int)uVar20 + -1;
            cVar6 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(puVar32,0x10);
            if (bVar13) {
              *(int *)puVar32 = iVar16;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar16 == 0) {
            (**(code **)(*local_130 + 0x10))();
          }
          else if ((int)uVar20 == 0) goto LAB_00a88d0c;
        }
        do {
          uVar20 = *puVar22;
          cVar6 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(puVar22,0x10);
          if (bVar13) {
            *(int *)puVar22 = (int)uVar20 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if ((int)uVar20 == -1) goto LAB_00a88378;
        uVar20 = FUN_01195974(*(undefined8 *)(param_1 + 0x30));
        iVar16 = *(int *)(*(long *)(param_1 + 0x30) + 0x108);
        if (iVar16 == 0) {
          lVar27 = FUN_01195854();
          uVar4 = *(undefined1 *)(lVar27 + 0x570);
          if (((*PTR_DAT_047d4c98 & 1) == 0) &&
             (iVar16 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar16 != 0)) {
            FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d4c98);
          }
          lVar27 = *(long *)PTR_DAT_047d4ca0;
          *(long *)PTR_DAT_047d4ca8 = lVar27;
          plVar31 = *(long **)(lVar27 + 0x1c8);
          plVar8 = *(long **)(lVar27 + 0x1c0);
          do {
            if (plVar8 == plVar31) {
              lVar27 = 0;
              break;
            }
            lVar27 = *plVar8;
            uVar21 = FUN_01df4e98(lVar27 + 0x28);
            plVar8 = plVar8 + 1;
          } while ((uVar21 & 1) == 0);
          do {
            uVar21 = *puVar22;
            cVar6 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(puVar22,0x10);
            if (bVar13) {
              *(int *)puVar22 = (int)uVar21 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          local_100 = puVar28;
          if ((int)uVar21 == -1) goto LAB_00a88378;
          FUN_0152f420(lVar27,&local_100,uVar4,(int)uVar20 + (int)(uVar20 >> 0x20) * 6);
          if (local_100 != (ulong *)0x0) {
            puVar32 = local_100 + 5;
            do {
              iVar16 = (int)*puVar32;
              cVar6 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(puVar32,0x10);
              if (bVar13) {
                *(int *)puVar32 = iVar16 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar16 + -1 == 0) {
              uVar20 = *local_100;
              puVar32 = local_100;
              goto LAB_00a8851c;
            }
LAB_00a88204:
            if (iVar16 == 0) goto LAB_00a88d0c;
          }
        }
        else if (iVar16 == 1) {
          if (((*PTR_DAT_047d4568 & 1) == 0) &&
             (iVar16 = __cxa_guard_acquire(PTR_DAT_047d4568), iVar16 != 0)) {
            FUN_00100190(&LAB_02ace3a0,PTR_DAT_047d4570,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d4568);
          }
          lVar27 = *(long *)PTR_DAT_047d4570;
          *(long *)PTR_DAT_047d4578 = lVar27;
          puVar32 = *(ulong **)(lVar27 + 0x28);
          if (puVar32 == (ulong *)0x0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          puVar2 = puVar32 + 5;
          do {
            uVar21 = *puVar2;
            cVar6 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar13) {
              *(int *)puVar2 = (int)uVar21 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if ((int)uVar21 == -1) goto LAB_00a88378;
          (**(code **)(*puVar32 + 0x38))(puVar32,uVar20 >> 0x20,puVar28);
          do {
            iVar16 = (int)*puVar2;
            cVar6 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar13) {
              *(int *)puVar2 = iVar16 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar16 + -1 != 0) goto LAB_00a88204;
          uVar20 = *puVar32;
LAB_00a8851c:
          (**(code **)(uVar20 + 0x10))(puVar32);
        }
        do {
          uVar20 = *puVar22;
          iVar16 = (int)uVar20 + -1;
          cVar6 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(puVar22,0x10);
          if (bVar13) {
            *(int *)puVar22 = iVar16;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar16 == 0) {
          (**(code **)(*puVar28 + 0x10))(puVar28);
        }
        else if ((int)uVar20 == 0) goto LAB_00a88d0c;
      }
      uVar20 = FUN_017d1750(3);
      if ((uVar20 & 1) == 0) {
        return;
      }
      if (*(long *)(*(long *)(param_1 + 0x30) + 0x1c8) != 0) {
        FUN_01f670b8();
      }
      uVar19 = 0xb;
      break;
    case 0xb:
      if (((*PTR_DAT_047d4c80 & 1) == 0) &&
         (iVar16 = __cxa_guard_acquire(PTR_DAT_047d4c80), iVar16 != 0)) {
        FUN_00100190(&LAB_02acf048,PTR_DAT_047d4c88,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4c80);
      }
      *(undefined8 *)PTR_DAT_047d4c90 = *(undefined8 *)PTR_DAT_047d4c88;
      uVar20 = FUN_0157f5f4();
      if ((uVar20 & 1) == 0) {
        return;
      }
      FUN_01dda3e0(*(undefined8 *)(param_1 + 0x30));
      uVar24 = *(undefined8 *)(param_1 + 0x30);
      local_120 = *(ulong **)(param_1 + 0x50);
      if (local_120 != (ulong *)0x0) {
        puVar28 = local_120 + 5;
        do {
          uVar20 = *puVar28;
          cVar6 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(puVar28,0x10);
          if (bVar13) {
            *(int *)puVar28 = (int)uVar20 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if ((int)uVar20 == -1) goto LAB_00a88378;
      }
      local_130 = *(ulong **)(param_1 + 0x58);
      if (local_130 != (ulong *)0x0) {
        puVar28 = local_130 + 5;
        do {
          uVar20 = *puVar28;
          cVar6 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(puVar28,0x10);
          if (bVar13) {
            *(int *)puVar28 = (int)uVar20 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if ((int)uVar20 == -1) goto LAB_00a88378;
      }
      local_100 = (ulong *)&LAB_00a89604;
      local_f8 = FUN_00a89638;
      local_f0 = &LAB_00a8963c;
      local_e8 = &LAB_00a89648;
      local_e0[0] = param_1;
      FUN_01dcea04(uVar24,&local_120,&local_130,&local_100);
      pcVar26 = local_f8;
      if (local_f8 != (code *)0x0) {
        local_f0 = (undefined1 *)0x0;
        local_e8 = (undefined1 *)0x0;
        local_100 = (ulong *)0x0;
        local_f8 = (code *)0x0;
        (*pcVar26)(local_e0);
      }
      if (local_130 != (ulong *)0x0) {
        puVar28 = local_130 + 5;
        do {
          uVar20 = *puVar28;
          iVar16 = (int)uVar20 + -1;
          cVar6 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(puVar28,0x10);
          if (bVar13) {
            *(int *)puVar28 = iVar16;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar16 == 0) {
          (**(code **)(*local_130 + 0x10))();
        }
        else if ((int)uVar20 == 0) goto LAB_00a88d0c;
      }
      if (local_120 != (ulong *)0x0) {
        puVar28 = local_120 + 5;
        do {
          uVar20 = *puVar28;
          iVar16 = (int)uVar20 + -1;
          cVar6 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(puVar28,0x10);
          if (bVar13) {
            *(int *)puVar28 = iVar16;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar16 == 0) {
          (**(code **)(*local_120 + 0x10))();
        }
        else if ((int)uVar20 == 0) goto LAB_00a88d0c;
      }
      uVar19 = 0xc;
      break;
    case 0xd:
      local_120 = (ulong *)0x9778194a3162a086;
      pcStack_118 = "f_out";
      local_110 = 5;
      local_108 = (long *)0x0;
      uVar20 = FUN_01dd0670(*(undefined8 *)(param_1 + 0x30),&local_120);
      if (local_108 != (long *)0x0) {
        (**(code **)(*local_108 + 0x20))();
      }
      if ((uVar20 & 1) == 0) {
        return;
      }
      local_100 = (ulong *)&LAB_00a89654;
      local_f8 = FUN_00a89664;
      local_f0 = &LAB_00a89668;
      local_e8 = &LAB_00a89674;
      local_e0[0] = param_1;
      FUN_01dcfca8(*(undefined8 *)(param_1 + 0x30),&local_100);
      pcVar26 = local_f8;
      if (local_f8 != (code *)0x0) {
        local_f0 = (undefined1 *)0x0;
        local_e8 = (undefined1 *)0x0;
        local_100 = (ulong *)0x0;
        local_f8 = (code *)0x0;
        (*pcVar26)(local_e0);
      }
      *(undefined4 *)(param_1 + 0x48) = 0xe;
      local_130 = (ulong *)0x0;
      uStack_128 = 0;
      FUN_01084328(&local_130,*(long *)(param_1 + 0x30) + 0x130);
      local_70[0] = local_70[0] & 0xffffffffffffff00;
      FUN_01de0af4(&local_130,s_F52FFAAAD818F1846_04542db3,local_70);
      puVar28 = local_130;
      if (local_130 == (ulong *)0x0) {
        return;
      }
      puVar22 = local_130 + 3;
      do {
        sVar15 = (short)*puVar22;
        cVar6 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(puVar22,0x10);
        if (bVar13) {
          *(short *)puVar22 = sVar15 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar15 == 1) {
        piVar1 = (int *)((long)local_130 + 0x1c);
        do {
          iVar16 = *piVar1;
          cVar6 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar13) {
            *piVar1 = -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar16 == -1) {
          return;
        }
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar16 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar16 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        puVar22 = local_70;
        lVar27 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar27;
        local_70[0] = *puVar28;
        goto LAB_00a883f0;
      }
      goto LAB_00a87ad8;
    case 0xf:
      FUN_01b3c4d8(0x59,1);
      lVar29 = *(long *)(param_1 + 0x58);
      lVar27 = *(long *)(lVar29 + 0x70);
      if ((*(byte *)(*(long *)(lVar27 + 0x10) + 4) >> 2 & 1) == 0) {
        sVar15 = FUN_00cf44f4();
        if (sVar15 == 0) goto LAB_00a8841c;
        lVar29 = *(long *)(param_1 + 0x58);
        lVar27 = *(long *)(lVar29 + 0x70);
      }
      uVar20 = FUN_00cf4cfc(lVar27);
      if (((uVar20 & 1) != 0) ||
         ((*(ushort *)(*(long *)(*(long *)(lVar29 + 0x70) + 0x10) + 4) >> 2 & 1) != 0)) {
LAB_00a8841c:
        *(undefined4 *)(param_1 + 0x48) = 0x14;
        FUN_01dcf550(*(undefined8 *)(param_1 + 0x30));
        FUN_01ddb044(*(undefined8 *)(param_1 + 0x30),1,0);
        FUN_01dd06cc(*(undefined8 *)(param_1 + 0x30),0);
        return;
      }
      uVar24 = *(undefined8 *)(param_1 + 0x30);
      local_100 = *(ulong **)(param_1 + 0x58);
      if (local_100 != (ulong *)0x0) {
        puVar28 = local_100 + 5;
        do {
          uVar20 = *puVar28;
          cVar6 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(puVar28,0x10);
          if (bVar13) {
            *(int *)puVar28 = (int)uVar20 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if ((int)uVar20 == -1) goto LAB_00a88378;
      }
      uVar20 = FUN_01dcee38(uVar24,&local_100);
      if (local_100 != (ulong *)0x0) {
        puVar28 = local_100 + 5;
        do {
          uVar21 = *puVar28;
          iVar16 = (int)uVar21 + -1;
          cVar6 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(puVar28,0x10);
          if (bVar13) {
            *(int *)puVar28 = iVar16;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar16 == 0) {
          (**(code **)(*local_100 + 0x10))();
        }
        else if ((int)uVar21 == 0) goto LAB_00a88d0c;
      }
      if ((uVar20 & 1) == 0) {
        uVar20 = FUN_01df4818(param_1);
        if ((uVar20 & 1) != 0) {
          return;
        }
        goto LAB_00a8841c;
      }
      uVar19 = 0x10;
      break;
    case 0x10:
      uVar20 = FUN_01dcf408(*(undefined8 *)(param_1 + 0x30));
      if ((uVar20 & 1) != 0) {
        return;
      }
      uVar19 = 0x11;
      break;
    case 0x11:
      uVar20 = FUN_01df4818(param_1);
      if ((uVar20 & 1) == 0) {
        *(undefined4 *)(param_1 + 0x48) = 0x14;
        FUN_01dcf550(*(undefined8 *)(param_1 + 0x30));
        return;
      }
      return;
    case 0x12:
      uVar20 = FUN_01dcfa24(*(undefined8 *)(param_1 + 0x30));
      if ((uVar20 & 1) != 0) {
        return;
      }
      FUN_01df4a24(param_1,param_1 + 0x58);
      uVar19 = 0x13;
      break;
    case 0x13:
      FUN_01dcfb6c(*(undefined8 *)(param_1 + 0x30),1);
      uVar19 = 0x14;
      break;
    case 0x14:
      FUN_01df5028(param_1);
      uVar19 = 0x15;
      break;
    case 0x15:
      FUN_017d1750(3);
      FUN_01dcddfc(*(undefined8 *)(param_1 + 0x30),0x31,0,0,0,0);
      *(undefined4 *)(param_1 + 0x48) = 0x16;
      local_100 = (ulong *)0x0;
      local_f8 = (code *)0x0;
      FUN_01084328(&local_100,*(long *)(param_1 + 0x30) + 0x130);
      local_120 = (ulong *)CONCAT71(local_120._1_7_,1);
      FUN_01de0af4(&local_100,s_F52FFAAAD818F1846_04542db3,&local_120);
      if (local_100 == (ulong *)0x0) {
        return;
      }
      puVar28 = local_100 + 3;
      do {
        sVar15 = (short)*puVar28;
        cVar6 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(puVar28,0x10);
        if (bVar13) {
          *(short *)puVar28 = sVar15 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar15 == 1) {
        piVar1 = (int *)((long)local_100 + 0x1c);
        do {
          iVar16 = *piVar1;
          cVar6 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar13) {
            *piVar1 = -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
LAB_00a883b4:
        puVar28 = local_100;
        if (iVar16 == -1) {
          return;
        }
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar16 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar16 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        puVar22 = &local_120;
        lVar27 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar27;
        local_120 = (ulong *)*puVar28;
LAB_00a883f0:
        FUN_00c44438(lVar27 + 0x8040,puVar22);
        return;
      }
      goto LAB_00a87ad8;
    case 0x16:
      if (((*PTR_DAT_047d4c80 & 1) == 0) &&
         (iVar16 = __cxa_guard_acquire(PTR_DAT_047d4c80), iVar16 != 0)) {
        FUN_00100190(&LAB_02acf048,PTR_DAT_047d4c88,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4c80);
      }
      *(undefined8 *)PTR_DAT_047d4c90 = *(undefined8 *)PTR_DAT_047d4c88;
      uVar20 = FUN_0157f5f4();
      if ((uVar20 & 1) == 0) {
        return;
      }
      FUN_01dda3e0(*(undefined8 *)(param_1 + 0x30));
      uVar19 = 0x17;
      break;
    case 0x17:
      if (*(char *)(*(long *)(param_1 + 0x30) + 0x2ac) == '\0') {
        return;
      }
      FUN_01df3778(param_1);
      local_100 = (ulong *)0x0;
      local_f8 = (code *)0x0;
      FUN_01084328(&local_100,*(long *)(param_1 + 0x30) + 0x130);
      local_120 = (ulong *)((ulong)local_120 & 0xffffffffffffff00);
      FUN_01de0af4(&local_100,s_F52FFAAAD818F1846_04542db3,&local_120);
      if (local_100 == (ulong *)0x0) {
        return;
      }
      puVar28 = local_100 + 3;
      do {
        sVar15 = (short)*puVar28;
        cVar6 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(puVar28,0x10);
        if (bVar13) {
          *(short *)puVar28 = sVar15 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar15 == 1) {
        piVar1 = (int *)((long)local_100 + 0x1c);
        do {
          iVar16 = *piVar1;
          cVar6 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar13) {
            *piVar1 = -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        goto LAB_00a883b4;
      }
LAB_00a87ad8:
      if (sVar15 != 0) {
        return;
      }
LAB_00a87adc:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
LAB_00a8716c:
    *(undefined4 *)(param_1 + 0x48) = uVar19;
    break;
  case 7:
    FUN_01df3df0(param_1);
    break;
  case 8:
    FUN_01df4040(param_1);
    break;
  case 0xb:
    FUN_01df4190(param_1);
  }
switchD_00a86d7c_caseD_2:
  return;
code_r0x00a88670:
  sVar15 = sVar5;
  if (sVar5 == 0) goto joined_r0x00a88b18;
  goto LAB_00a88644;
code_r0x00a88840:
  sVar15 = sVar5;
  if (sVar5 == 0) goto joined_r0x00a88b30;
  goto LAB_00a88814;
code_r0x00a88888:
  sVar15 = sVar5;
  if (sVar5 == 0) goto joined_r0x00a88b48;
  goto LAB_00a8885c;
}


