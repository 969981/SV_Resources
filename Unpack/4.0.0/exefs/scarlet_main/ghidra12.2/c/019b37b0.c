/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019b37b0; name: FUN_019b37b0
 */


void FUN_019b37b0(long *param_1,long param_2,ulong param_3)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  short sVar9;
  long *plVar10;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 *local_68 [2];
  undefined8 local_58;
  undefined8 uStack_50;
  long *local_48;
  undefined8 local_28;
  
  if (*(char *)(param_2 + 0x68) == '\0') {
    plVar7 = (long *)FUN_019b3b80(*(undefined8 *)(param_2 + 0x40));
    local_48 = plVar7;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x58))(plVar7);
    }
    lVar8 = *(long *)(param_2 + 0x58);
    if ((lVar8 != 0) && (*(short *)(lVar8 + 0x1a) != 0)) {
      psVar1 = (short *)(lVar8 + 0x1a);
      sVar9 = *(short *)(lVar8 + 0x1a);
LAB_019b389c:
      sVar3 = *psVar1;
      if (sVar3 == sVar9) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar9 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_019b38c0;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_019b38c0:
        bVar5 = false;
      }
      if (!bVar5) goto code_r0x019b38c8;
      if (*(long *)(lVar8 + 0x10) != 0) {
        plVar10 = (long *)(*(long *)(lVar8 + 0x10) + -0x28);
        FUN_01aa3ecc(local_68,plVar7);
        local_78 = 0;
        uStack_70 = 0;
        FUN_026f4930(&local_78,local_68);
        FUN_01a6b5dc(plVar10,&local_78);
        FUN_026f4598(&local_78);
        if (local_68[0] != (undefined8 *)0x0) {
          psVar1 = (short *)(local_68[0] + 3);
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
            piVar2 = (int *)((long)local_68[0] + 0x1c);
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
              lVar8 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar8;
              local_28 = *local_68[0];
              FUN_00c44438(lVar8 + 0x8040,&local_28);
            }
          }
          else if (sVar9 == 0) goto LAB_019b39f4;
        }
        (**(code **)(*plVar10 + 0x60))(plVar10);
        plVar7 = local_48;
      }
    }
LAB_019b3808:
    FUN_019b3b78(plVar7,param_2 + 0x48);
    if ((param_3 & 1) != 0) {
      FUN_026f4c54(param_2,&local_48);
    }
  }
  else {
    plVar7 = (long *)FUN_026f3ff0(*(undefined8 *)(param_2 + 0x40));
    local_48 = plVar7;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x58))(plVar7);
    }
    lVar8 = *(long *)(param_2 + 0x58);
    if ((lVar8 != 0) && (*(short *)(lVar8 + 0x1a) != 0)) {
      psVar1 = (short *)(lVar8 + 0x1a);
      sVar9 = *(short *)(lVar8 + 0x1a);
      do {
        sVar3 = *psVar1;
        if (sVar3 == sVar9) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar9 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_019b3908;
          bVar5 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_019b3908:
          bVar5 = false;
        }
        if (bVar5) {
          if (*(long *)(lVar8 + 0x10) != 0) {
            plVar10 = (long *)(*(long *)(lVar8 + 0x10) + -0x28);
            FUN_026f4118(local_68,plVar7);
            local_58 = 0;
            uStack_50 = 0;
            FUN_026f4278(&local_58,local_68);
            FUN_01a6b5dc(plVar10,&local_58);
            FUN_026f4598(&local_58);
            if (local_68[0] != (undefined8 *)0x0) {
              psVar1 = (short *)(local_68[0] + 3);
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
                piVar2 = (int *)((long)local_68[0] + 0x1c);
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
                  lVar8 = *(long *)PTR_DAT_047d3910;
                  *(long *)PTR_DAT_047d3918 = lVar8;
                  local_28 = *local_68[0];
                  FUN_00c44438(lVar8 + 0x8040,&local_28);
                }
              }
              else if (sVar9 == 0) {
LAB_019b39f4:
                    /* WARNING: Subroutine does not return */
                nn::diag::detail::AbortImpl
                          ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                           "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                           ,0x33,"Reference counter underflows.");
              }
            }
            (**(code **)(*plVar10 + 0x60))(plVar10);
            plVar7 = local_48;
          }
          break;
        }
        sVar9 = sVar3;
      } while (sVar3 != 0);
    }
    FUN_019b3b78(plVar7,param_2 + 0x48);
    if ((param_3 & 1) != 0) {
      FUN_026f46a8(param_2,&local_48);
    }
  }
  *param_1 = (long)plVar7;
  return;
code_r0x019b38c8:
  sVar9 = sVar3;
  if (sVar3 == 0) goto LAB_019b3808;
  goto LAB_019b389c;
}


