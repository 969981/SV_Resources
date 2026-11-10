/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017bc0b8; name: FUN_017bc0b8
 */


void FUN_017bc0b8(long *param_1,long *param_2)

{
  short *psVar1;
  int *piVar2;
  long *plVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  int iVar8;
  char *pcVar9;
  ulong uVar10;
  char *pcVar11;
  undefined8 uVar12;
  long lVar13;
  byte *pbVar14;
  undefined1 *puVar15;
  long *plVar16;
  long *plVar17;
  long lVar18;
  long *local_420;
  long local_418;
  undefined8 *local_410;
  undefined8 uStack_408;
  long *local_400;
  long *local_3f8;
  long *local_3f0 [4];
  long *local_3d0;
  long alStack_3c0 [32];
  char *local_2c0;
  char acStack_2b8 [256];
  byte local_1b8 [256];
  char *local_b8;
  long *local_b0 [4];
  long *local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long *local_68;
  undefined8 *local_60 [2];
  undefined8 local_38;
  
  lVar13 = *param_2;
  local_80 = *(undefined8 *)(lVar13 + 0x1d0);
  uStack_78 = *(undefined8 *)(lVar13 + 0x1d8);
  lVar18 = *param_1;
  local_70 = *(undefined8 *)(lVar13 + 0x1e0);
  local_68 = *(long **)(lVar13 + 0x1e8);
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x18))();
  }
  FUN_017bc954(local_b0,*(undefined8 *)param_1[2],&local_80);
  if ((local_b0[0] != (long *)0x0) && (*(char *)local_b0[0][7] != '\0')) {
    pcVar9 = strrchr((char *)local_b0[0][7],0x2f);
    pcVar11 = (char *)0x0;
    if (pcVar9 != (char *)0x0) {
      pcVar11 = pcVar9 + 1;
    }
    pcVar9 = strrchr(pcVar11,0x2e);
    local_b8 = pcVar9;
    if (pcVar9 == (char *)0x0) goto LAB_017bc43c;
    puVar15 = &DAT_cbf29ce484222645;
    memset(local_1b8,0,0x100);
    strncpy((char *)local_1b8,pcVar11,(long)pcVar9 - (long)pcVar11);
    if (local_1b8[0] != 0) {
      pbVar14 = (byte *)((ulong)local_1b8 | 1);
      do {
        puVar15 = (undefined1 *)(((ulong)puVar15 ^ (ulong)local_1b8[0]) * 0x100000001b3);
        local_1b8[0] = *pbVar14;
        pbVar14 = pbVar14 + 1;
      } while (local_1b8[0] != 0);
    }
    uVar10 = FUN_017bd458(*(undefined4 *)param_1[3],puVar15);
    if ((uVar10 & 1) == 0) goto LAB_017bc43c;
    plVar16 = (long *)PTR_PTR_047d4508;
    if (local_b0[0] != (long *)0x0) {
      plVar16 = local_b0[0] + 7;
    }
    pcVar9 = (char *)*plVar16;
    pcVar11 = strrchr(pcVar9,0x2f);
    if (pcVar11 == (char *)0x0) goto LAB_017bc43c;
    memset(acStack_2b8,0,0x100);
    strncpy(acStack_2b8,pcVar9,(long)pcVar11 - (long)pcVar9);
    local_2c0 = strrchr(acStack_2b8,0x2f);
    if (local_2c0 == (char *)0x0) goto LAB_017bc43c;
    memset(alStack_3c0,0,0x100);
    FUN_017bc840(alStack_3c0,&local_2c0,local_1b8,param_1[6],&local_b8);
    local_420 = alStack_3c0;
    FUN_0119aad4(local_3f0,local_b0,&local_420,&DAT_03c886bc);
    local_3f8 = (long *)FUN_014110ec(&local_420,*(undefined8 *)(lVar18 + 8));
    if (local_3f8 != (long *)0x0) {
      lVar13 = local_3f8[6];
      if (*(long *)(lVar13 + 0x10) == 0) goto LAB_017bc7d0;
      psVar1 = (short *)(lVar13 + 0x1a);
      do {
        sVar4 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar4 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar4 == 0) {
        uVar12 = (**(code **)**(undefined8 **)(lVar13 + 0x10))();
        *(undefined8 *)(lVar13 + 8) = uVar12;
        *(undefined4 *)(lVar13 + 0x1c) = 0xfffffffe;
      }
      else if (sVar4 == -1) goto LAB_017bc588;
    }
    plVar16 = local_3f8;
    *(undefined1 *)(local_3f8 + 8) = 1;
    uVar10 = FUN_01200570(local_3f8 + 10,1,local_3f0,0,0);
    if ((uVar10 & 1) == 0) {
      plVar16 = (long *)0x0;
    }
    else {
      plVar16 = (long *)plVar16[0xe];
      if (plVar16 != (long *)0x0) {
        lVar13 = plVar16[6];
        if (*(long *)(lVar13 + 0x10) == 0) goto LAB_017bc7d0;
        psVar1 = (short *)(lVar13 + 0x1a);
        do {
          sVar4 = *psVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar6) {
            *psVar1 = sVar4 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar4 == 0) {
          uVar12 = (**(code **)**(undefined8 **)(lVar13 + 0x10))();
          *(undefined8 *)(lVar13 + 8) = uVar12;
          *(undefined4 *)(lVar13 + 0x1c) = 0xfffffffe;
        }
        else if (sVar4 == -1) goto LAB_017bc588;
      }
    }
    local_420 = local_3f8;
    if (local_3f8 != (long *)0x0) {
      lVar13 = local_3f8[6];
      if (*(long *)(lVar13 + 0x10) == 0) {
LAB_017bc7d0:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("m_object != nullptr","AddReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x3d);
      }
      psVar1 = (short *)(lVar13 + 0x1a);
      do {
        sVar4 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar4 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar4 == 0) {
        uVar12 = (**(code **)**(undefined8 **)(lVar13 + 0x10))();
        *(undefined8 *)(lVar13 + 8) = uVar12;
        *(undefined4 *)(lVar13 + 0x1c) = 0xfffffffe;
      }
      else if (sVar4 == -1) {
LAB_017bc588:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","AddReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x58,"Reference counter overflows.");
      }
    }
    plVar17 = *(long **)param_1[4];
    local_418 = lVar18;
    (**(code **)(*plVar17 + 0x18))(local_60,plVar17);
    local_410 = (undefined8 *)0x0;
    uStack_408 = 0;
    plVar3 = (long *)0x0;
    if (plVar17 != (long *)0x0) {
      plVar3 = plVar17 + 5;
    }
    if ((long *)local_60[0][2] == plVar3) {
      FUN_00c9ea00(&local_410,local_60);
    }
    puVar7 = local_60[0];
    if (local_60[0] != (undefined8 *)0x0) {
      psVar1 = (short *)(local_60[0] + 3);
      do {
        sVar4 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar4 == 1) {
        piVar2 = (int *)((long)local_60[0] + 0x1c);
        do {
          iVar8 = *piVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar13 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar13;
          local_38 = *puVar7;
          FUN_00c44438(lVar13 + 0x8040,&local_38);
        }
      }
      else if (sVar4 == 0) goto LAB_017bc4b4;
    }
    FUN_017bdc18(&local_400,&local_420,plVar16);
    if (local_400 != (long *)0x0) {
      lVar13 = local_400[6];
      psVar1 = (short *)(lVar13 + 0x1a);
      do {
        sVar4 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar4 == 1) {
        *(undefined8 *)(lVar13 + 0x10) = 0;
        (**(code **)(*local_400 + 0x50))();
      }
      else if (sVar4 == 0) goto LAB_017bc500;
    }
    puVar7 = local_410;
    if (local_410 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_410 + 3);
      do {
        sVar4 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar4 == 1) {
        piVar2 = (int *)((long)local_410 + 0x1c);
        do {
          iVar8 = *piVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar13 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar13;
          local_60[0] = (undefined8 *)*puVar7;
          FUN_00c44438(lVar13 + 0x8040,local_60);
        }
      }
      else if (sVar4 == 0) {
LAB_017bc4b4:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
    if (local_420 != (long *)0x0) {
      lVar13 = local_420[6];
      psVar1 = (short *)(lVar13 + 0x1a);
      do {
        sVar4 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar4 == 1) {
        *(undefined8 *)(lVar13 + 0x10) = 0;
        (**(code **)(*local_420 + 0x50))();
      }
      else if (sVar4 == 0) goto LAB_017bc500;
    }
    if (plVar16 != (long *)0x0) {
      lVar13 = plVar16[6];
      psVar1 = (short *)(lVar13 + 0x1a);
      do {
        sVar4 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar4 == 1) {
        *(undefined8 *)(lVar13 + 0x10) = 0;
        (**(code **)(*plVar16 + 0x50))(plVar16);
      }
      else if (sVar4 == 0) goto LAB_017bc500;
    }
    FUN_017bc7f0(*(undefined8 *)param_1[5],&local_3f8);
    if (local_3f8 != (long *)0x0) {
      lVar13 = local_3f8[6];
      psVar1 = (short *)(lVar13 + 0x1a);
      do {
        sVar4 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar4 == 1) {
        *(undefined8 *)(lVar13 + 0x10) = 0;
        (**(code **)(*local_3f8 + 0x50))();
      }
      else if (sVar4 == 0) {
LAB_017bc500:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
    if (local_3d0 != (long *)0x0) {
      (**(code **)(*local_3d0 + 0x20))();
    }
    if (local_3f0[0] != (long *)0x0) {
      (**(code **)(*local_3f0[0] + 0x20))();
    }
  }
LAB_017bc43c:
  if (local_90 != (long *)0x0) {
    (**(code **)(*local_90 + 0x20))();
  }
  if (local_b0[0] != (long *)0x0) {
    (**(code **)(*local_b0[0] + 0x20))();
  }
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  return;
}


