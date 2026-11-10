/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029a258c; name: FUN_029a258c
 */


void FUN_029a258c(long param_1)

{
  short *psVar1;
  long *plVar2;
  int iVar3;
  undefined2 uVar4;
  short sVar5;
  char cVar6;
  bool bVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  short sVar11;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x128));
  *(undefined1 *)(param_1 + 0x463) = 1;
  iVar3 = *(int *)(param_1 + 0x3f4);
  if (iVar3 == 0) {
    plVar8 = *(long **)(param_1 + 0x3f8);
    if (plVar8 != (long *)0x0) {
      plVar2 = (long *)plVar8[1];
      for (plVar8 = (long *)*plVar8; plVar8 != plVar2; plVar8 = plVar8 + 2) {
        lVar9 = *plVar8;
        if ((lVar9 != 0) && (*(short *)(lVar9 + 0x1a) != 0)) {
          psVar1 = (short *)(lVar9 + 0x1a);
          sVar11 = *(short *)(lVar9 + 0x1a);
LAB_029a26a0:
          sVar5 = *psVar1;
          if (sVar5 == sVar11) {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar7) {
              *psVar1 = sVar11 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 != '\0') goto LAB_029a26c4;
            bVar7 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_029a26c4:
            bVar7 = false;
          }
          if (!bVar7) goto code_r0x029a26cc;
          lVar9 = *(long *)(lVar9 + 0x10);
          if (lVar9 != 0) {
            *(undefined1 *)(lVar9 + 0x49) = 1;
            lVar10 = *(long *)(lVar9 + 8);
            psVar1 = (short *)(lVar10 + 0x1a);
            do {
              sVar11 = *psVar1;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar7) {
                *psVar1 = sVar11 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (sVar11 == 1) {
              *(undefined8 *)(lVar10 + 0x10) = 0;
              (**(code **)(*(long *)(lVar9 + -0x28) + 0x50))();
            }
            else if (sVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                         "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                         ,0x60,"Reference counter underflows.");
            }
            goto LAB_029a25e4;
          }
        }
LAB_029a25e0:
        DAT_00000071 = 1;
LAB_029a25e4:
      }
    }
  }
  else {
    if (iVar3 - 2U < 3) {
      *(undefined1 *)(param_1 + 0x460) = 1;
      if ((*(char *)(param_1 + 0x58) == '\0') && (*(char *)(param_1 + 0x59) == '\0'))
      goto LAB_029a25f0;
      uVar4 = *(undefined2 *)(param_1 + 0x58);
      *(undefined2 *)(param_1 + 0x58) = 0;
    }
    else {
      if ((iVar3 != 1) ||
         ((*(char *)(param_1 + 0x58) == '\0' && (*(char *)(param_1 + 0x59) == '\b'))))
      goto LAB_029a25f0;
      uVar4 = *(undefined2 *)(param_1 + 0x58);
      *(undefined2 *)(param_1 + 0x58) = 0x800;
    }
    plVar8 = (long *)(param_1 + 0x38);
    if (*(long *)(param_1 + 0x48) != 0) {
      FUN_00c6a584(*(long *)(param_1 + 0x48),plVar8);
    }
    (**(code **)(*plVar8 + 0x20))(plVar8,uVar4);
  }
LAB_029a25f0:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x128));
  return;
code_r0x029a26cc:
  sVar11 = sVar5;
  if (sVar5 == 0) goto LAB_029a25e0;
  goto LAB_029a26a0;
}


