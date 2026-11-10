/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00ff5058; name: FUN_00ff5058
 */


void FUN_00ff5058(undefined8 *param_1,long param_2,ulong param_3)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  undefined8 uVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  undefined8 *puVar12;
  bool bVar13;
  long *plVar14;
  undefined8 local_48;
  
  plVar14 = (long *)(param_2 + 8);
  lVar11 = *plVar14;
  lVar8 = nn::os::GetCurrentThread();
  if (lVar8 == lVar11) {
    plVar14 = (long *)0x0;
    bVar13 = true;
LAB_00ff50ac:
    plVar10 = (long *)(param_2 + 0x20);
    lVar8 = *plVar10 + param_3 * 0x28;
    *param_1 = 0;
    param_1[1] = 0;
    FUN_00dbefa4(param_1,lVar8);
    uVar4 = *(undefined8 *)(lVar8 + 0x10);
    uVar9 = *(undefined8 *)(lVar8 + 0x20);
    param_1[3] = *(undefined8 *)(lVar8 + 0x18);
    param_1[4] = uVar9;
    param_1[2] = uVar4;
    if (param_3 < *(ulong *)(param_2 + 200)) {
      lVar8 = *plVar10;
      puVar12 = *(undefined8 **)(lVar8 + param_3 * 0x28);
      *(undefined8 *)(lVar8 + param_3 * 0x28) = 0;
      if (puVar12 != (undefined8 *)0x0) {
        psVar1 = (short *)(puVar12 + 3);
        do {
          sVar3 = *psVar1;
          cVar6 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar3 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar3 == 1) {
          piVar2 = (int *)((long)puVar12 + 0x1c);
          do {
            iVar7 = *piVar2;
            cVar6 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar5) {
              *piVar2 = -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar7 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar11 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar11;
            local_48 = *puVar12;
            FUN_00c44438(lVar11 + 0x8040,&local_48);
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
      *(undefined8 *)(lVar8 + param_3 * 0x28 + 8) = 0;
      FUN_00ff5288(plVar10,param_3);
    }
    if (bVar13) {
      return;
    }
    *plVar14 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar14 + 1));
    return;
  }
  lVar8 = nn::os::GetCurrentThread();
  while (*plVar14 == 0) {
    cVar6 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(plVar14,0x10);
    if (bVar13) {
      *plVar14 = lVar8;
      cVar6 = ExclusiveMonitorsStatus();
    }
    if (cVar6 == '\0') goto LAB_00ff50a8;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x10));
  do {
    if (*plVar14 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x10));
        while (*plVar14 == 0) {
          cVar6 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar13) {
            *plVar14 = lVar8;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') goto LAB_00ff50a8;
        }
      } while( true );
    }
    cVar6 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(plVar14,0x10);
    if (bVar13) {
      *plVar14 = lVar8;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
LAB_00ff50a8:
  bVar13 = false;
  goto LAB_00ff50ac;
}


