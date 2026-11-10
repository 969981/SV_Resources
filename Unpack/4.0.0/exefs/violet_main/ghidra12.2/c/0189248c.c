/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0189248c; name: FUN_0189248c
 */


void FUN_0189248c(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  int *piVar4;
  short *psVar5;
  short sVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  long lVar10;
  short sVar11;
  long *plVar12;
  long *local_60;
  long local_58;
  undefined1 **ppuStack_50;
  undefined1 *local_48;
  
  *param_1 = (long)&DAT_046073a8;
  param_1[4] = (long)&PTR_LAB_04607478;
  param_1[5] = (long)&PTR_LAB_04607528;
  lVar10 = param_1[0x1b];
  if (lVar10 != 0) {
    if (*(short *)(lVar10 + 0x1a) != 0) {
      psVar5 = (short *)(lVar10 + 0x1a);
      sVar11 = *(short *)(lVar10 + 0x1a);
      do {
        sVar6 = *psVar5;
        if (sVar6 == sVar11) {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(psVar5,0x10);
          if (bVar8) {
            *psVar5 = sVar11 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 != '\0') goto LAB_0189260c;
          bVar8 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_0189260c:
          bVar8 = false;
        }
        if (bVar8) {
          lVar10 = *(long *)(lVar10 + 0x10);
          if (lVar10 != 0) {
            plVar12 = (long *)param_1[0x13];
            if (plVar12 != (long *)0x0) {
              do {
                local_60 = (long *)plVar12[3];
                if (local_60 != (long *)0x0) {
                  (**(code **)(*local_60 + 0x58))();
                }
                local_58 = lVar10 + 0xe0;
                ppuStack_50 = &local_48;
                local_48 = (undefined1 *)&local_60;
                FUN_029cbd4c(lVar10 + 0xe0,&local_58);
                if (local_60 != (long *)0x0) {
                  (**(code **)(*local_60 + 0x60))();
                }
                plVar12 = (long *)*plVar12;
              } while (plVar12 != (long *)0x0);
            }
            FUN_029cbc9c(param_1 + 0xd);
            (**(code **)(*(long *)(lVar10 + -0x28) + 0x60))((long *)(lVar10 + -0x28));
          }
          break;
        }
        sVar11 = sVar6;
      } while (sVar6 != 0);
    }
    plVar12 = (long *)param_1[0x1b];
    if (plVar12 != (long *)0x0) {
      plVar3 = plVar12 + 3;
      do {
        sVar11 = (short)*plVar3;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar8) {
          *(short *)plVar3 = sVar11 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (sVar11 == 1) {
        piVar4 = (int *)((long)plVar12 + 0x1c);
        do {
          iVar9 = *piVar4;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar4,0x10);
          if (bVar8) {
            *piVar4 = -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar9 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar10 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar10;
          local_58 = *plVar12;
          FUN_00c44438(lVar10 + 0x8040,&local_58);
        }
      }
      else if (sVar11 == 0) goto LAB_01892550;
    }
  }
  FUN_018927a4(param_1 + 0xd);
  puVar1 = PTR_DAT_047e3088;
  *param_1 = (long)(PTR_DAT_047e3088 + 0x10);
  param_1[4] = (long)(puVar1 + 0xc0);
  param_1[5] = (long)(puVar1 + 0x170);
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 9));
  puVar1 = PTR_DAT_047e3080 + 0x88;
  puVar2 = PTR_DAT_047e3080 + 0x138;
  *param_1 = (long)(PTR_DAT_047e3080 + 0x10);
  param_1[4] = (long)puVar1;
  param_1[5] = (long)puVar2;
  plVar12 = (long *)param_1[6];
  if (plVar12 != (long *)0x0) {
    plVar3 = plVar12 + 3;
    do {
      sVar11 = (short)*plVar3;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar8) {
        *(short *)plVar3 = sVar11 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar11 == 1) {
      piVar4 = (int *)((long)plVar12 + 0x1c);
      do {
        iVar9 = *piVar4;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar8) {
          *piVar4 = -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar10 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar10;
        local_58 = *plVar12;
        FUN_00c44438(lVar10 + 0x8040,&local_58);
      }
    }
    else if (sVar11 == 0) {
LAB_01892550:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}


