/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00da6fd8; name: FUN_00da6fd8
 */


undefined1  [16] FUN_00da6fd8(undefined8 param_1,long *param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  undefined8 *puVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  short sVar12;
  long *plVar13;
  long lVar14;
  bool bVar15;
  undefined8 uVar16;
  undefined8 uVar19;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined8 *local_88;
  char *pcStack_80;
  undefined8 local_78;
  long *local_70;
  undefined8 *local_68;
  char *pcStack_60;
  undefined8 local_58;
  long *local_50;
  undefined8 local_48;
  
  uVar16 = 0;
  uVar19 = 0;
  if (((param_2 != (long *)0x0) && (lVar10 = *param_2, lVar10 != 0)) &&
     (*(short *)(lVar10 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar10 + 0x1a);
    sVar12 = *(short *)(lVar10 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar12) {
        cVar4 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar15) {
          *psVar1 = sVar12 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_00da7050;
        bVar15 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_00da7050:
        bVar15 = false;
      }
      if (bVar15) {
        lVar10 = *(long *)(lVar10 + 0x10);
        if (lVar10 != 0) {
          plVar13 = (long *)(lVar10 + -0x28);
          lVar7 = FUN_00e06b88(0);
          if (lVar7 == 0) {
            auVar17 = ZEXT816(0);
          }
          else {
            local_68 = (undefined8 *)0xeb4d6f93ab7214dc;
            pcStack_60 = "tracking";
            local_58 = 8;
            local_50 = (long *)0x0;
            local_88 = (undefined8 *)0x6a6de43665c99427;
            pcStack_80 = "trackingOffset";
            local_78 = 0xe;
            local_70 = (long *)0x0;
            auVar17 = FUN_01bca110(lVar7,&local_68,&local_88);
            if (local_70 != (long *)0x0) {
              (**(code **)(*local_70 + 0x20))();
            }
            if (local_50 != (long *)0x0) {
              (**(code **)(*local_50 + 0x20))();
            }
          }
          lVar7 = param_2[4];
          if ((lVar7 == 0) || (**(char **)(lVar7 + 0x38) == '\0')) goto LAB_00da70f8;
          plVar11 = param_2 + 2;
          lVar7 = *plVar11;
          if ((lVar7 == 0) || (*(short *)(lVar7 + 0x1a) == 0)) goto LAB_00da7178;
          psVar1 = (short *)(lVar7 + 0x1a);
          sVar12 = *(short *)(lVar7 + 0x1a);
          goto LAB_00da7440;
        }
        break;
      }
      sVar12 = sVar3;
    } while (sVar3 != 0);
  }
  goto LAB_00da7000;
code_r0x00da719c:
  cVar4 = '\x01';
  bVar15 = (bool)ExclusiveMonitorPass(plVar8,0x10);
  if (bVar15) {
    *plVar8 = lVar7;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_00da71a4;
  goto LAB_00da7194;
  while (sVar12 = sVar3, sVar3 != 0) {
LAB_00da7440:
    sVar3 = *psVar1;
    if (sVar3 == sVar12) {
      cVar4 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar15) {
        *psVar1 = sVar12 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 != '\0') goto LAB_00da7464;
      bVar15 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_00da7464:
      bVar15 = false;
    }
    if (bVar15) {
      if (*(long *)(lVar7 + 0x10) != 0) {
        plVar8 = (long *)(*(long *)(lVar7 + 0x10) + -0x28);
        goto LAB_00da724c;
      }
      break;
    }
  }
LAB_00da7178:
  plVar8 = (long *)(lVar10 + 0xe8);
  lVar14 = *plVar8;
  lVar7 = nn::os::GetCurrentThread();
  if (lVar7 != lVar14) {
    lVar7 = nn::os::GetCurrentThread();
LAB_00da7194:
    if (*plVar8 == 0) goto code_r0x00da719c;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(lVar10 + 0xf0));
    do {
      if (*plVar8 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(lVar10 + 0xf0));
          while (*plVar8 == 0) {
            cVar4 = '\x01';
            bVar15 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar15) {
              *plVar8 = lVar7;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') goto LAB_00da71a4;
          }
        } while( true );
      }
      cVar4 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar15) {
        *plVar8 = lVar7;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
LAB_00da71a4:
    bVar15 = false;
    goto LAB_00da71a8;
  }
  bVar15 = true;
LAB_00da71a8:
  plVar8 = (long *)FUN_01f98690(*(undefined8 *)(lVar10 + 0x100),*(undefined8 *)(lVar10 + 0x108));
  if ((*(long **)(lVar10 + 0x108) == plVar8) || (*plVar8 == 0)) {
    plVar9 = (long *)FUN_01f98690(*(undefined8 *)(lVar10 + 0x138),*(undefined8 *)(lVar10 + 0x140));
    if (*(long **)(lVar10 + 0x140) == plVar9) {
      plVar8 = (long *)0x0;
    }
    else {
      plVar8 = (long *)0x0;
      if (*plVar9 != 0) {
        plVar8 = (long *)(*plVar9 + -0x20);
      }
    }
  }
  else {
    plVar8 = (long *)(*plVar8 + -0x20);
  }
  if (!bVar15) {
    *(undefined8 *)(lVar10 + 0xe8) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar10 + 0xf0));
  }
  if (plVar8 == (long *)0x0) {
LAB_00da70f8:
    lVar10 = (**(code **)(*plVar13 + 0x68))(plVar13);
    auVar18._8_8_ = *(ulong *)(lVar10 + 0x38) & 0xffffffff;
    auVar18._0_8_ = *(undefined8 *)(lVar10 + 0x30);
  }
  else {
    (**(code **)(*plVar8 + 0x58))(plVar8);
    local_68 = (undefined8 *)0x0;
    pcStack_60 = (char *)0x0;
    FUN_00c43ef0(&local_68,plVar8 + 0x13);
    local_88 = (undefined8 *)0x0;
    pcStack_80 = (char *)0x0;
    if ((long *)local_68[2] == plVar8 + 5) {
      FUN_00c953a8(&local_88,&local_68);
    }
    puVar5 = local_68;
    if (local_68 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_68 + 3);
      do {
        sVar12 = *psVar1;
        cVar4 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar15) {
          *psVar1 = sVar12 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar12 == 1) {
        piVar2 = (int *)((long)local_68 + 0x1c);
        do {
          iVar6 = *piVar2;
          cVar4 = '\x01';
          bVar15 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar15) {
            *piVar2 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar6 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar10 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar10;
          local_48 = *puVar5;
          FUN_00c44438(lVar10 + 0x8040,&local_48);
        }
      }
      else if (sVar12 == 0) goto LAB_00da7330;
    }
    FUN_00cacc64(plVar11,&local_88);
    puVar5 = local_88;
    if (local_88 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_88 + 3);
      do {
        sVar12 = *psVar1;
        cVar4 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar15) {
          *psVar1 = sVar12 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar12 == 1) {
        piVar2 = (int *)((long)local_88 + 0x1c);
        do {
          iVar6 = *piVar2;
          cVar4 = '\x01';
          bVar15 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar15) {
            *piVar2 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar6 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar10 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar10;
          local_68 = (undefined8 *)*puVar5;
          FUN_00c44438(lVar10 + 0x8040,&local_68);
        }
      }
      else if (sVar12 == 0) {
LAB_00da7330:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
LAB_00da724c:
    FUN_0135d26c(&local_68,param_2 + 4);
    auVar18 = FUN_01f92e8c(plVar11,&local_68);
    if (local_50 != (long *)0x0) {
      (**(code **)(*local_50 + 0x20))();
    }
    (**(code **)(*plVar8 + 0x60))(plVar8);
  }
  uVar16 = CONCAT44(auVar17._4_4_ + auVar18._4_4_,auVar17._0_4_ + auVar18._0_4_);
  uVar19 = CONCAT44(auVar17._12_4_ + auVar18._12_4_,auVar17._8_4_ + auVar18._8_4_);
  (**(code **)(*plVar13 + 0x60))(plVar13);
LAB_00da7000:
  auVar17._8_8_ = uVar19;
  auVar17._0_8_ = uVar16;
  return auVar17;
}


