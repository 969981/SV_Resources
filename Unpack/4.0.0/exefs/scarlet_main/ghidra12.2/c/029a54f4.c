/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029a54f4; name: FUN_029a54f4
 */


void FUN_029a54f4(long param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  short sVar8;
  long *plVar9;
  long *plVar10;
  
  if (*(char *)(param_1 + 0x149) == '\0') {
    FUN_00c6a514(param_1 + 0x38,0x82);
    return;
  }
  lVar5 = *(long *)(param_1 + 0x120);
  if ((lVar5 != 0) && (*(short *)(lVar5 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar5 + 0x1a);
    sVar8 = *(short *)(lVar5 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar8) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_029a5580;
        bVar4 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_029a5580:
        bVar4 = false;
      }
      if (bVar4) {
        lVar5 = *(long *)(lVar5 + 0x10);
        if (lVar5 == 0) {
          return;
        }
        if ((*(char *)(lVar5 + 0x50) == '\0') && (*(char *)(lVar5 + 0x51) == '\0')) {
          nn::os::LockMutex((MutexType *)&DAT_0486ac70);
          if ((DAT_0486ac50 != (long *)0x0) &&
             (plVar9 = (long *)*DAT_0486ac50, plVar7 = DAT_0486ac50,
             plVar9 != (long *)DAT_0486ac50[1])) {
            do {
              if (*(char *)(*plVar9 + 0x461) != '\0') {
                FUN_029a56c4();
                plVar7 = DAT_0486ac50;
              }
              plVar9 = plVar9 + 1;
            } while (plVar9 != (long *)plVar7[1]);
            plVar10 = (long *)*plVar7;
            if (plVar10 != plVar9) {
              do {
                if (*(char *)(*plVar10 + 0x460) != '\0') {
                  FUN_029a572c();
                  plVar7 = DAT_0486ac50;
                }
                plVar10 = plVar10 + 1;
              } while (plVar10 != (long *)plVar7[1]);
            }
          }
          nn::os::UnlockMutex((MutexType *)&DAT_0486ac70);
          FUN_00c6a514(param_1 + 0x38,0x82);
          *(undefined1 *)(param_1 + 0x149) = 0;
        }
        lVar6 = *(long *)(lVar5 + 8);
        psVar1 = (short *)(lVar6 + 0x1a);
        do {
          sVar8 = *psVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (sVar8 == 1) {
          *(undefined8 *)(lVar6 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x029a5618. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*(long *)(lVar5 + -0x28) + 0x50))((long *)(lVar5 + -0x28));
          return;
        }
        if (sVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
        return;
      }
      sVar8 = sVar2;
    } while (sVar2 != 0);
  }
  return;
}


