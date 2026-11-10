/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00cf0234; name: FUN_00cf0234
 */


long * FUN_00cf0234(long *param_1,long param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  bool bVar9;
  short sVar10;
  long lVar11;
  undefined8 *local_40 [2];
  undefined8 local_18;
  
  lVar11 = *(long *)(param_2 + 8);
  FUN_00cf0f98(local_40,lVar11);
  if ((local_40[0] != (undefined8 *)0x0) && (*(short *)((long)local_40[0] + 0x1a) != 0)) {
    psVar1 = (short *)((long)local_40[0] + 0x1a);
    sVar10 = *(short *)((long)local_40[0] + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar10) {
        cVar4 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar9) {
          *psVar1 = sVar10 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_00cf03bc;
        bVar9 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_00cf03bc:
        bVar9 = false;
      }
      if (bVar9) {
        lVar7 = local_40[0][2];
        if (lVar7 != 0) {
          plVar6 = (long *)*param_1;
          *param_1 = 0;
          if (plVar6 != (long *)0x0) {
            lVar8 = plVar6[6];
            psVar1 = (short *)(lVar8 + 0x1a);
            do {
              sVar10 = *psVar1;
              cVar4 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar9) {
                *psVar1 = sVar10 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (sVar10 == 1) {
              *(undefined8 *)(lVar8 + 0x10) = 0;
              (**(code **)(*plVar6 + 0x50))();
            }
            else if (sVar10 == 0) goto LAB_00cf041c;
          }
          *param_1 = lVar7 + -0x28;
          goto LAB_00cf0278;
        }
        break;
      }
      sVar10 = sVar3;
    } while (sVar3 != 0);
  }
  plVar6 = (long *)*param_1;
  lVar11 = 0;
  *param_1 = 0;
  if (plVar6 != (long *)0x0) {
    lVar11 = plVar6[6];
    psVar1 = (short *)(lVar11 + 0x1a);
    do {
      sVar10 = *psVar1;
      cVar4 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar9) {
        *psVar1 = sVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar10 == 1) {
      *(undefined8 *)(lVar11 + 0x10) = 0;
      (**(code **)(*plVar6 + 0x50))();
    }
    else if (sVar10 == 0) {
LAB_00cf041c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
    lVar11 = 0;
  }
LAB_00cf0278:
  param_1[1] = lVar11;
  if (local_40[0] != (undefined8 *)0x0) {
    psVar1 = (short *)(local_40[0] + 3);
    do {
      sVar10 = *psVar1;
      cVar4 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar9) {
        *psVar1 = sVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar10 == 1) {
      piVar2 = (int *)((long)local_40[0] + 0x1c);
      do {
        iVar5 = *piVar2;
        cVar4 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar9) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar5 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar5 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_18 = *local_40[0];
        FUN_00c44438(lVar11 + 0x8040,&local_18);
      }
    }
    else if (sVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return param_1;
}


