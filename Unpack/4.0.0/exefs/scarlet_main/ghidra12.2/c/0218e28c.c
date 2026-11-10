/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0218e28c; name: FUN_0218e28c
 */


void FUN_0218e28c(long *param_1,undefined8 *param_2,char *param_3)

{
  short *psVar1;
  long *plVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  short sVar10;
  long *plVar11;
  undefined8 uVar12;
  long *plVar13;
  
  if ((*param_3 != '\0') && (lVar8 = *param_1, lVar8 != 0)) {
    uVar12 = *param_2;
    if (*(short *)(lVar8 + 0x1a) != 0) {
      psVar1 = (short *)(lVar8 + 0x1a);
      sVar10 = *(short *)(lVar8 + 0x1a);
      do {
        sVar3 = *psVar1;
        if (sVar3 == sVar10) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar10 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_0218e2fc;
          bVar5 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_0218e2fc:
          bVar5 = false;
        }
        if (bVar5) {
          lVar8 = *(long *)(lVar8 + 0x10);
          if (lVar8 == 0) {
            return;
          }
          plVar11 = (long *)(lVar8 + -0x28);
          if (((DAT_048418a0 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_048418a0), iVar6 != 0))
          {
            DAT_04841880 = 0xfe2577dda2ce8f67;
            DAT_04841888 = "EnableChangeNotify";
            DAT_04841890 = 0x12;
            DAT_04841898 = 0;
            FUN_00100190(PTR_LAB_047d4118,&DAT_04841880,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_048418a0);
          }
          uVar7 = FUN_00cb86ec(plVar11,&DAT_04841880);
          if ((uVar7 & 1) != 0) {
            if (((*PTR_DAT_047d4df8 & 1) == 0) &&
               (iVar6 = __cxa_guard_acquire(PTR_DAT_047d4df8), iVar6 != 0)) {
              FUN_00100190(PTR_LAB_047d4e10,PTR_DAT_047d4e00,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d4df8);
            }
            lVar9 = *(long *)PTR_DAT_047d4e00;
            *(long *)PTR_DAT_047d4e08 = lVar9;
            plVar13 = *(long **)(*(long *)(*(long *)(lVar9 + 0x38) + 0x48) + 0x148);
            if (plVar13 == (long *)0x0) {
              FUN_00ff0050(0,uVar12);
            }
            else {
              plVar2 = plVar13 + 5;
              do {
                lVar9 = *plVar2;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar5) {
                  *(int *)plVar2 = (int)lVar9 + 1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if ((int)lVar9 == -1) {
                    /* WARNING: Subroutine does not return */
                nn::diag::detail::AbortImpl
                          ("count != 0","IncrementReferenceInternal",
                           "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                           ,0x53,"Reference counter overflows.");
              }
              FUN_00ff0050(plVar13,uVar12);
              do {
                lVar9 = *plVar2;
                iVar6 = (int)lVar9 + -1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar5) {
                  *(int *)plVar2 = iVar6;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar6 == 0) {
                (**(code **)(*plVar13 + 0x10))(plVar13);
              }
              else if ((int)lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                nn::diag::detail::AbortImpl
                          ("count != std::numeric_limits<uint32_t>::max()",
                           "DecrementReferenceInternal",
                           "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                           ,0x58,"Reference counter underflows.");
              }
            }
          }
          lVar8 = *(long *)(lVar8 + 8);
          psVar1 = (short *)(lVar8 + 0x1a);
          do {
            sVar10 = *psVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar5) {
              *psVar1 = sVar10 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar10 == 1) {
            *(undefined8 *)(lVar8 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x0218e44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar11 + 0x50))(plVar11);
            return;
          }
          if (sVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
          return;
        }
        sVar10 = sVar3;
      } while (sVar3 != 0);
    }
  }
  return;
}


