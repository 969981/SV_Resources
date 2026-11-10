/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029f7db0; name: FUN_029f7db0
 */


void FUN_029f7db0(undefined8 *param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined4 uVar10;
  long lVar11;
  short sVar12;
  undefined8 local_18;
  
  *param_1 = &PTR_FUN_0460c408;
  param_1[4] = &PTR_LAB_0460c568;
  param_1[5] = &DAT_0460c690;
  lVar7 = param_1[0x24];
  param_1[6] = &PTR_LAB_0460c6e8;
  param_1[7] = &PTR_LAB_0460c710;
  if (lVar7 != 0) {
    if (*(short *)(lVar7 + 0x1a) != 0) {
      psVar1 = (short *)(lVar7 + 0x1a);
      sVar12 = *(short *)(lVar7 + 0x1a);
LAB_029f7e04:
      sVar3 = *psVar1;
      if (sVar3 == sVar12) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar12 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_029f7e28;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_029f7e28:
        bVar5 = false;
      }
      if (!bVar5) goto code_r0x029f7e30;
      lVar7 = *(long *)(lVar7 + 0x10);
      if (lVar7 == 0) goto LAB_029f7e38;
      lVar11 = *(long *)(lVar7 + 8);
      psVar1 = (short *)(lVar11 + 0x1a);
      do {
        sVar12 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar12 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar12 == 1) {
        *(undefined8 *)(lVar11 + 0x10) = 0;
        (**(code **)(*(long *)(lVar7 + -0x28) + 0x50))((long *)(lVar7 + -0x28));
      }
      else if (sVar12 == 0) goto LAB_029f7efc;
      lVar7 = param_1[0x24];
      if (lVar7 == 0) {
        plVar9 = (long *)0x0;
      }
      else if (*(short *)(lVar7 + 0x1a) == 0) {
        plVar9 = (long *)0x0;
      }
      else {
        psVar1 = (short *)(lVar7 + 0x1a);
        sVar12 = *(short *)(lVar7 + 0x1a);
        do {
          sVar3 = *psVar1;
          if (sVar3 == sVar12) {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar5) {
              *psVar1 = sVar12 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 != '\0') goto LAB_029f801c;
            bVar5 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_029f801c:
            bVar5 = false;
          }
          if (bVar5) {
            plVar9 = (long *)0x0;
            if (*(long *)(lVar7 + 0x10) != 0) {
              plVar9 = (long *)(*(long *)(lVar7 + 0x10) + -0x28);
            }
            break;
          }
          plVar9 = (long *)0x0;
          sVar12 = sVar3;
        } while (sVar3 != 0);
      }
      if ((int)plVar9[8] == 2) {
        uVar10 = 3;
LAB_029f7ed4:
        *(undefined4 *)(plVar9 + 8) = uVar10;
LAB_029f7ed8:
        lVar7 = plVar9[6];
        psVar1 = (short *)(lVar7 + 0x1a);
        do {
          sVar12 = *psVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar12 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar12 == 1) {
          *(undefined8 *)(lVar7 + 0x10) = 0;
          (**(code **)(*plVar9 + 0x50))(plVar9);
        }
        else if (sVar12 == 0) {
LAB_029f7efc:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
      else {
        if ((int)plVar9[8] == 1) {
          uVar10 = 4;
          goto LAB_029f7ed4;
        }
        if (plVar9 != (long *)0x0) goto LAB_029f7ed8;
      }
    }
LAB_029f7e38:
    puVar8 = (undefined8 *)param_1[0x24];
    if (puVar8 != (undefined8 *)0x0) {
      psVar1 = (short *)(puVar8 + 3);
      do {
        sVar12 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar12 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar12 == 1) {
        piVar2 = (int *)((long)puVar8 + 0x1c);
        do {
          iVar6 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
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
          local_18 = *puVar8;
          FUN_00c44438(lVar7 + 0x8040,&local_18);
        }
      }
      else if (sVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
  }
  FUN_00e6bfa4(param_1);
  return;
code_r0x029f7e30:
  sVar12 = sVar3;
  if (sVar3 == 0) goto LAB_029f7e38;
  goto LAB_029f7e04;
}


