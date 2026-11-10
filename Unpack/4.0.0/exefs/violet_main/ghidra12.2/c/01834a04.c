/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01834a04; name: FUN_01834a04
 */


void FUN_01834a04(undefined8 *param_1,undefined8 *param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  bool bVar11;
  long lVar12;
  undefined8 *local_50 [2];
  undefined8 local_28;
  
  if ((*(long *)*param_2 != 0) && (lVar12 = *(long *)(*(long *)*param_2 + 0x10), lVar12 != 0)) {
    plVar7 = (long *)(lVar12 + 0xe8);
    lVar8 = *plVar7;
    lVar6 = nn::os::GetCurrentThread();
    if (lVar6 != lVar8) {
      lVar6 = nn::os::GetCurrentThread();
LAB_01834a50:
      if (*plVar7 == 0) goto code_r0x01834a58;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(lVar12 + 0xf0));
      do {
        if (*plVar7 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(lVar12 + 0xf0));
            while (*plVar7 == 0) {
              cVar4 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(plVar7,0x10);
              if (bVar11) {
                *plVar7 = lVar6;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 == '\0') goto LAB_01834a60;
            }
          } while( true );
        }
        cVar4 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar11) {
          *plVar7 = lVar6;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
LAB_01834a60:
      bVar11 = false;
      goto LAB_01834a64;
    }
    bVar11 = true;
LAB_01834a64:
    plVar7 = (long *)FUN_01834c60(*(undefined8 *)(lVar12 + 0x100),*(undefined8 *)(lVar12 + 0x108));
    if ((*(long **)(lVar12 + 0x108) == plVar7) || (*plVar7 == 0)) {
      plVar7 = (long *)FUN_01834c60(*(undefined8 *)(lVar12 + 0x138),*(undefined8 *)(lVar12 + 0x140))
      ;
      if (*(long **)(lVar12 + 0x140) == plVar7) {
        plVar9 = (long *)0x0;
      }
      else {
        plVar9 = (long *)0x0;
        if (*plVar7 != 0) {
          plVar9 = (long *)(*plVar7 + -0x20);
        }
      }
    }
    else {
      plVar9 = (long *)(*plVar7 + -0x20);
    }
    if (!bVar11) {
      *(undefined8 *)(lVar12 + 0xe8) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar12 + 0xf0));
    }
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x18))(local_50,plVar9);
      *param_1 = 0;
      param_1[1] = 0;
      puVar10 = local_50[0];
      if ((long *)local_50[0][2] == plVar9 + 5) {
        FUN_014c78e4(param_1,local_50);
        puVar10 = local_50[0];
      }
      if (puVar10 == (undefined8 *)0x0) {
        return;
      }
      psVar1 = (short *)(puVar10 + 3);
      do {
        sVar3 = *psVar1;
        cVar4 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar11) {
          *psVar1 = sVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar3 != 1) {
        if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x33,"Reference counter underflows.");
        }
        return;
      }
      piVar2 = (int *)((long)puVar10 + 0x1c);
      do {
        iVar5 = *piVar2;
        cVar4 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar11) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar5 == -1) {
        return;
      }
      if (((*PTR_DAT_047d3908 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar5 != 0)) {
        FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3908);
      }
      lVar12 = *(long *)PTR_DAT_047d3910;
      *(long *)PTR_DAT_047d3918 = lVar12;
      local_28 = *puVar10;
      FUN_00c44438(lVar12 + 0x8040,&local_28);
      return;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
code_r0x01834a58:
  cVar4 = '\x01';
  bVar11 = (bool)ExclusiveMonitorPass(plVar7,0x10);
  if (bVar11) {
    *plVar7 = lVar6;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_01834a60;
  goto LAB_01834a50;
}


