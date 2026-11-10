/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 015be3cc; name: FUN_015be3cc
 */


void FUN_015be3cc(undefined8 *param_1,undefined8 *param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  undefined8 *puVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  bool bVar9;
  long lVar10;
  long lVar11;
  undefined8 *local_50;
  undefined8 uStack_48;
  undefined8 local_28;
  
  lVar11 = *(long *)*param_2;
  plVar8 = (long *)(lVar11 + 0x110);
  lVar10 = *plVar8;
  lVar7 = nn::os::GetCurrentThread();
  if (lVar7 == lVar10) {
    bVar9 = true;
LAB_015be420:
    plVar8 = (long *)FUN_01837520(*(undefined8 *)(lVar11 + 0x128),*(undefined8 *)(lVar11 + 0x130));
    if ((*(long **)(lVar11 + 0x130) == plVar8) || (*plVar8 == 0)) {
      plVar8 = (long *)FUN_01837520(*(undefined8 *)(lVar11 + 0x160),*(undefined8 *)(lVar11 + 0x168))
      ;
      if (*(long **)(lVar11 + 0x168) == plVar8) {
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
    if (!bVar9) {
      *(undefined8 *)(lVar11 + 0x110) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar11 + 0x118));
    }
    if (lVar7 == 0) {
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      local_50 = (undefined8 *)0x0;
      uStack_48 = 0;
      FUN_00c43ef0(&local_50,lVar7 + 0x98);
      *param_1 = 0;
      param_1[1] = 0;
      if (local_50[2] == lVar7 + 0x28) {
        FUN_00c953a8(param_1,&local_50);
      }
      puVar5 = local_50;
      if (local_50 != (undefined8 *)0x0) {
        psVar1 = (short *)(local_50 + 3);
        do {
          sVar3 = *psVar1;
          cVar4 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar9) {
            *psVar1 = sVar3 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar3 == 1) {
          piVar2 = (int *)((long)local_50 + 0x1c);
          do {
            iVar6 = *piVar2;
            cVar4 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar9) {
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
            lVar7 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar7;
            local_28 = *puVar5;
            FUN_00c44438(lVar7 + 0x8040,&local_28);
          }
        }
        else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x33,"Reference counter underflows.");
        }
      }
    }
    return;
  }
  lVar7 = nn::os::GetCurrentThread();
  while (*plVar8 == 0) {
    cVar4 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar9) {
      *plVar8 = lVar7;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_015be41c;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x118));
  do {
    if (*plVar8 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x118));
        while (*plVar8 == 0) {
          cVar4 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar9) {
            *plVar8 = lVar7;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_015be41c;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar9) {
      *plVar8 = lVar7;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_015be41c:
  bVar9 = false;
  goto LAB_015be420;
}


