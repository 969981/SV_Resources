/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01d749a0; name: FUN_01d749a0
 */


undefined8 FUN_01d749a0(long *param_1,long *param_2,long *param_3)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  short sVar15;
  bool bVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 *puVar19;
  float fVar20;
  float fVar21;
  undefined8 *local_70;
  undefined8 uStack_68;
  undefined8 local_38;
  
  if (((DAT_04837608 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04837608), iVar7 != 0)) {
    FUN_00100190(&LAB_00a92af8,&DAT_048375f8,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04837608);
  }
  uVar12 = DAT_048375f8;
  DAT_04837610 = DAT_048375f8;
  lVar13 = *param_1;
  if ((lVar13 == 0) || (*(short *)(lVar13 + 0x1a) == 0)) {
    DAT_04837610 = uVar12;
    return 0;
  }
  psVar1 = (short *)(lVar13 + 0x1a);
  sVar15 = *(short *)(lVar13 + 0x1a);
  do {
    sVar3 = *psVar1;
    if (sVar3 == sVar15) {
      cVar4 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar16) {
        *psVar1 = sVar15 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 != '\0') goto LAB_01d74ab8;
      bVar16 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_01d74ab8:
      bVar16 = false;
    }
    if (bVar16) {
      lVar13 = *(long *)(lVar13 + 0x10);
      if (lVar13 == 0) {
        return 0;
      }
      lVar14 = *param_2;
      if ((lVar14 == 0) || (*(short *)(lVar14 + 0x1a) == 0)) break;
      psVar1 = (short *)(lVar14 + 0x1a);
      sVar15 = *(short *)(lVar14 + 0x1a);
      goto LAB_01d74b0c;
    }
    sVar15 = sVar3;
    if (sVar3 == 0) {
      return 0;
    }
  } while( true );
LAB_01d74ae4:
  uVar17 = 0;
  goto LAB_01d74ae8;
LAB_01d74b74:
  if (*plVar10 == 0) {
    cVar4 = '\x01';
    bVar16 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar16) {
      *plVar10 = lVar9;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_01d74b84;
    goto LAB_01d74b74;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar13 + 0xf0));
  do {
    if (*plVar10 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar13 + 0xf0));
        while (*plVar10 == 0) {
          cVar4 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar16) {
            *plVar10 = lVar9;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_01d74b84;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar16 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar16) {
      *plVar10 = lVar9;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_01d74b84:
  bVar16 = false;
LAB_01d74b88:
  plVar10 = (long *)FUN_01174c30(*(undefined8 *)(lVar13 + 0x100),*(undefined8 *)(lVar13 + 0x108));
  if ((*(long **)(lVar13 + 0x108) == plVar10) || (*plVar10 == 0)) {
    plVar10 = (long *)FUN_01174c30(*(undefined8 *)(lVar13 + 0x138),*(undefined8 *)(lVar13 + 0x140));
    if (*(long **)(lVar13 + 0x140) == plVar10) {
      lVar9 = 0;
    }
    else {
      lVar9 = 0;
      if (*plVar10 != 0) {
        lVar9 = *plVar10 + -0x20;
      }
    }
  }
  else {
    lVar9 = *plVar10 + -0x20;
  }
  if (!bVar16) {
    *(undefined8 *)(lVar13 + 0xe8) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar13 + 0xf0));
  }
  puVar6 = PTR_DAT_047d6528;
  puVar5 = PTR_DAT_047d6520;
  if ((lVar9 == 0) || (*(char *)(lVar9 + 0x143) != '\0')) {
LAB_01d74de0:
    uVar17 = 0;
  }
  else {
    local_70 = (undefined8 *)0x0;
    uStack_68 = 0;
    if ((*param_1 != 0) && (puVar19 = *(undefined8 **)(*param_1 + 8), puVar19 != (undefined8 *)0x0))
    {
      if (((*PTR_DAT_047d6520 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_047d6520), iVar7 != 0)) {
        uVar17 = FUN_0151c130();
        *(undefined8 *)puVar6 = uVar17;
        __cxa_guard_release(PTR_DAT_047d6520);
      }
      do {
        if (puVar19 == (undefined8 *)puVar6) {
          FUN_00d7c390(&local_70,param_1);
          break;
        }
        puVar19 = (undefined8 *)*puVar19;
      } while (puVar19 != (undefined8 *)0x0);
    }
    uVar11 = FUN_01e08a14(&local_70);
    puVar19 = local_70;
    if (local_70 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_70 + 3);
      do {
        sVar15 = *psVar1;
        cVar4 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar16) {
          *psVar1 = sVar15 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar15 == 1) {
        piVar2 = (int *)((long)local_70 + 0x1c);
        do {
          iVar7 = *piVar2;
          cVar4 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar16) {
            *piVar2 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar7 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar9 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar9;
          local_38 = *puVar19;
          FUN_00c44438(lVar9 + 0x8040,&local_38);
        }
      }
      else if (sVar15 == 0) goto LAB_01d74e84;
    }
    if ((uVar11 & 1) != 0) goto LAB_01d74de0;
    local_70 = (undefined8 *)0x0;
    uStack_68 = 0;
    if ((*param_1 != 0) && (puVar19 = *(undefined8 **)(*param_1 + 8), puVar19 != (undefined8 *)0x0))
    {
      if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d6520), iVar7 != 0)) {
        uVar17 = FUN_0151c130();
        *(undefined8 *)puVar6 = uVar17;
        __cxa_guard_release(PTR_DAT_047d6520);
      }
      do {
        if (puVar19 == (undefined8 *)puVar6) {
          FUN_00d7c390(&local_70,param_1);
          break;
        }
        puVar19 = (undefined8 *)*puVar19;
      } while (puVar19 != (undefined8 *)0x0);
    }
    iVar7 = FUN_01e08aa8(&local_70);
    puVar19 = local_70;
    if (local_70 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_70 + 3);
      do {
        sVar15 = *psVar1;
        cVar4 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar16) {
          *psVar1 = sVar15 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar15 == 1) {
        piVar2 = (int *)((long)local_70 + 0x1c);
        do {
          iVar8 = *piVar2;
          cVar4 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar16) {
            *piVar2 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar9 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar9;
          local_38 = *puVar19;
          FUN_00c44438(lVar9 + 0x8040,&local_38);
        }
      }
      else if (sVar15 == 0) goto LAB_01d74e84;
    }
    if (iVar7 == 3) goto LAB_01d74de0;
    iVar7 = *(int *)(*param_3 + 0x7c);
    if ((*(int *)(*param_3 + 0x70) != 3) && (iVar7 != 3)) {
      fVar20 = (float)FUN_01e086a8(uVar12,param_2);
      local_70 = (undefined8 *)0x0;
      uStack_68 = 0;
      if ((*param_1 != 0) &&
         (puVar19 = *(undefined8 **)(*param_1 + 8), puVar19 != (undefined8 *)0x0)) {
        if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d6520), iVar8 != 0)) {
          uVar12 = FUN_0151c130();
          *(undefined8 *)puVar6 = uVar12;
          __cxa_guard_release(PTR_DAT_047d6520);
        }
        do {
          if (puVar19 == (undefined8 *)puVar6) {
            FUN_00d7c390(&local_70,param_1);
            break;
          }
          puVar19 = (undefined8 *)*puVar19;
        } while (puVar19 != (undefined8 *)0x0);
      }
      fVar21 = (float)FUN_01e08b3c(&local_70);
      puVar19 = local_70;
      if (local_70 != (undefined8 *)0x0) {
        psVar1 = (short *)(local_70 + 3);
        do {
          sVar15 = *psVar1;
          cVar4 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar16) {
            *psVar1 = sVar15 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar15 == 1) {
          piVar2 = (int *)((long)local_70 + 0x1c);
          do {
            iVar8 = *piVar2;
            cVar4 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar16) {
              *piVar2 = -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar8 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar9 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar9;
            local_38 = *puVar19;
            FUN_00c44438(lVar9 + 0x8040,&local_38);
          }
        }
        else if (sVar15 == 0) goto LAB_01d74e84;
      }
      if (fVar20 < fVar21) goto LAB_01d74de0;
    }
    if (iVar7 == 3) {
      local_70 = (undefined8 *)0x0;
      uStack_68 = 0;
      if ((*param_1 != 0) &&
         (puVar19 = *(undefined8 **)(*param_1 + 8), puVar19 != (undefined8 *)0x0)) {
        if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d6520), iVar7 != 0)) {
          uVar12 = FUN_0151c130();
          *(undefined8 *)puVar6 = uVar12;
          __cxa_guard_release(PTR_DAT_047d6520);
        }
        do {
          if (puVar19 == (undefined8 *)puVar6) {
            FUN_00d7c390(&local_70,param_1);
            break;
          }
          puVar19 = (undefined8 *)*puVar19;
        } while (puVar19 != (undefined8 *)0x0);
      }
      fVar20 = (float)FUN_01e08bd4(&local_70);
      puVar19 = local_70;
      if (local_70 != (undefined8 *)0x0) {
        psVar1 = (short *)(local_70 + 3);
        do {
          sVar15 = *psVar1;
          cVar4 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar16) {
            *psVar1 = sVar15 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar15 == 1) {
          piVar2 = (int *)((long)local_70 + 0x1c);
          do {
            iVar7 = *piVar2;
            cVar4 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar16) {
              *piVar2 = -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar7 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar9 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar9;
            local_38 = *puVar19;
            FUN_00c44438(lVar9 + 0x8040,&local_38);
          }
        }
        else if (sVar15 == 0) {
LAB_01d74e84:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x33,"Reference counter underflows.");
        }
      }
      if (2.0 < fVar20) goto LAB_01d74de0;
    }
    uVar17 = 1;
  }
  (**(code **)(*(long *)(lVar14 + -0x28) + 0x60))();
  goto LAB_01d74ae8;
  while( true ) {
    uVar17 = 0;
    sVar15 = sVar3;
    if (sVar3 == 0) break;
LAB_01d74b0c:
    sVar3 = *psVar1;
    if (sVar3 == sVar15) {
      cVar4 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar16) {
        *psVar1 = sVar15 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 != '\0') goto LAB_01d74b30;
      bVar16 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_01d74b30:
      bVar16 = false;
    }
    if (bVar16) {
      lVar14 = *(long *)(lVar14 + 0x10);
      if (lVar14 == 0) goto LAB_01d74ae4;
      if (*param_3 == 0) goto LAB_01d74de0;
      plVar10 = (long *)(lVar13 + 0xe8);
      lVar18 = *plVar10;
      lVar9 = nn::os::GetCurrentThread();
      if (lVar9 == lVar18) {
        bVar16 = true;
        goto LAB_01d74b88;
      }
      lVar9 = nn::os::GetCurrentThread();
      goto LAB_01d74b74;
    }
  }
LAB_01d74ae8:
  (**(code **)(*(long *)(lVar13 + -0x28) + 0x60))();
  return uVar17;
}


