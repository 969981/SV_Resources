/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029a2758; name: FUN_029a2758
 */


void FUN_029a2758(long *param_1)

{
  short *psVar1;
  long *plVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  short sVar9;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x25));
  *(undefined1 *)((long)param_1 + 0x463) = 0;
  if (((char)param_1[0xb] != -0x7e) || (*(char *)((long)param_1 + 0x59) != -0x7e)) {
    lVar7 = param_1[0xb];
    plVar6 = param_1 + 7;
    *(undefined2 *)(param_1 + 0xb) = 0x8282;
    if (param_1[9] != 0) {
      FUN_00c6a584(param_1[9],plVar6);
    }
    (**(code **)(*plVar6 + 0x20))(plVar6,(short)lVar7);
  }
  if ((char)param_1[0x7e] != '\0') {
    (**(code **)(*param_1 + 0x198))(param_1);
  }
  if ((*(int *)((long)param_1 + 0x3f4) == 0) &&
     (plVar6 = (long *)param_1[0x7f], plVar6 != (long *)0x0)) {
    plVar2 = (long *)plVar6[1];
    for (plVar6 = (long *)*plVar6; plVar6 != plVar2; plVar6 = plVar6 + 2) {
      lVar7 = *plVar6;
      if ((lVar7 != 0) && (*(short *)(lVar7 + 0x1a) != 0)) {
        psVar1 = (short *)(lVar7 + 0x1a);
        sVar9 = *(short *)(lVar7 + 0x1a);
LAB_029a2844:
        sVar3 = *psVar1;
        if (sVar3 == sVar9) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar9 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_029a2868;
          bVar5 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_029a2868:
          bVar5 = false;
        }
        if (!bVar5) goto code_r0x029a2870;
        lVar7 = *(long *)(lVar7 + 0x10);
        if (lVar7 != 0) {
          *(undefined1 *)(lVar7 + 0x49) = 0;
          lVar8 = *(long *)(lVar7 + 8);
          psVar1 = (short *)(lVar8 + 0x1a);
          do {
            sVar9 = *psVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar5) {
              *psVar1 = sVar9 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar9 == 1) {
            *(undefined8 *)(lVar8 + 0x10) = 0;
            (**(code **)(*(long *)(lVar7 + -0x28) + 0x50))();
          }
          else if (sVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
          goto LAB_029a27f4;
        }
      }
LAB_029a27f0:
      DAT_00000071 = 0;
LAB_029a27f4:
    }
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x25));
  return;
code_r0x029a2870:
  sVar9 = sVar3;
  if (sVar3 == 0) goto LAB_029a27f0;
  goto LAB_029a2844;
}


