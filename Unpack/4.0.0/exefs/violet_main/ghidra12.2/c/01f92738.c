/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f92738; name: FUN_01f92738
 */


void FUN_01f92738(undefined8 *param_1,long param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  undefined8 *puVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  short sVar10;
  long lVar11;
  long *plVar12;
  bool bVar13;
  undefined8 *local_68;
  undefined8 uStack_60;
  undefined8 *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  plVar12 = (long *)(param_2 + 0x18);
  if ((*plVar12 != 0) && (*(short *)(*plVar12 + 0x1a) != 0)) {
    *param_1 = 0;
    param_1[1] = 0;
    FUN_00c6c994(param_1,plVar12);
    return;
  }
  lVar9 = *(long *)(param_2 + 8);
  if ((lVar9 != 0) && (*(short *)(lVar9 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar9 + 0x1a);
    sVar10 = *(short *)(lVar9 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar10) {
        cVar4 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar13) {
          *psVar1 = sVar10 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_01f927ec;
        bVar13 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01f927ec:
        bVar13 = false;
      }
      if (bVar13) {
        lVar9 = *(long *)(lVar9 + 0x10);
        if (lVar9 != 0) {
          plVar8 = (long *)(lVar9 + 0xe8);
          lVar11 = *plVar8;
          lVar7 = nn::os::GetCurrentThread();
          if (lVar7 == lVar11) {
            bVar13 = true;
            goto LAB_01f92840;
          }
          lVar7 = nn::os::GetCurrentThread();
          goto LAB_01f9282c;
        }
        break;
      }
      sVar10 = sVar3;
    } while (sVar3 != 0);
  }
LAB_01f92798:
  *param_1 = 0;
  param_1[1] = 0;
  return;
LAB_01f9282c:
  if (*plVar8 != 0) {
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(lVar9 + 0xf0));
    do {
      if (*plVar8 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(lVar9 + 0xf0));
          while (*plVar8 == 0) {
            cVar4 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar13) {
              *plVar8 = lVar7;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') goto LAB_01f9283c;
          }
        } while( true );
      }
      cVar4 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar13) {
        *plVar8 = lVar7;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
LAB_01f9283c:
    bVar13 = false;
LAB_01f92840:
    plVar8 = (long *)FUN_01f92b30(*(undefined8 *)(lVar9 + 0x100),*(undefined8 *)(lVar9 + 0x108));
    if ((*(long **)(lVar9 + 0x108) == plVar8) || (*plVar8 == 0)) {
      plVar8 = (long *)FUN_01f92b30(*(undefined8 *)(lVar9 + 0x138),*(undefined8 *)(lVar9 + 0x140));
      if (*(long **)(lVar9 + 0x140) == plVar8) {
        lVar7 = 0;
      }
      else {
        lVar7 = 0;
        if (*plVar8 != 0) {
          lVar7 = *plVar8 + -0x20;
        }
      }
    }
    else {
      lVar7 = *plVar8 + -0x20;
    }
    plVar8 = (long *)(lVar9 + -0x28);
    if (!bVar13) {
      *(undefined8 *)(lVar9 + 0xe8) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar9 + 0xf0));
    }
    if (lVar7 != 0) {
      local_58 = (undefined8 *)0x0;
      uStack_50 = 0;
      FUN_00c43ef0(&local_58,lVar7 + 0x98);
      local_68 = (undefined8 *)0x0;
      uStack_60 = 0;
      if (local_58[2] == lVar7 + 0x28) {
        FUN_00c953a8(&local_68,&local_58);
      }
      puVar5 = local_58;
      if (local_58 != (undefined8 *)0x0) {
        psVar1 = (short *)(local_58 + 3);
        do {
          sVar10 = *psVar1;
          cVar4 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar13) {
            *psVar1 = sVar10 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar10 == 1) {
          piVar2 = (int *)((long)local_58 + 0x1c);
          do {
            iVar6 = *piVar2;
            cVar4 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar13) {
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
            lVar9 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar9;
            local_48 = *puVar5;
            FUN_00c44438(lVar9 + 0x8040,&local_48);
          }
        }
        else if (sVar10 == 0) goto LAB_01f929c0;
      }
      FUN_00cacc64(plVar12,&local_68);
      *param_1 = 0;
      param_1[1] = 0;
      FUN_00c6c994(param_1,plVar12);
      puVar5 = local_68;
      if (local_68 != (undefined8 *)0x0) {
        psVar1 = (short *)(local_68 + 3);
        do {
          sVar10 = *psVar1;
          cVar4 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar13) {
            *psVar1 = sVar10 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar10 == 1) {
          piVar2 = (int *)((long)local_68 + 0x1c);
          do {
            iVar6 = *piVar2;
            cVar4 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar13) {
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
            lVar9 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar9;
            local_58 = (undefined8 *)*puVar5;
            FUN_00c44438(lVar9 + 0x8040,&local_58);
          }
        }
        else if (sVar10 == 0) {
LAB_01f929c0:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x33,"Reference counter underflows.");
        }
      }
      (**(code **)(*plVar8 + 0x60))(plVar8);
      return;
    }
    (**(code **)(*plVar8 + 0x60))(plVar8);
    goto LAB_01f92798;
  }
  cVar4 = '\x01';
  bVar13 = (bool)ExclusiveMonitorPass(plVar8,0x10);
  if (bVar13) {
    *plVar8 = lVar7;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_01f9283c;
  goto LAB_01f9282c;
}


