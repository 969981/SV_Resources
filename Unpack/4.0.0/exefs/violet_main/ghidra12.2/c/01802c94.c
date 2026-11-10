/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01802c94; name: FUN_01802c94
 */


void FUN_01802c94(long param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  short sVar7;
  long *plVar8;
  long lVar9;
  char local_58 [8];
  undefined1 auStack_50 [24];
  long *local_38;
  long local_30 [2];
  
  if (((*PTR_DAT_047d8918 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047d8918), iVar5 != 0))
  {
    FUN_00100190(PTR_LAB_047dcdc8,PTR_DAT_047d8920,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8918);
  }
  uVar6 = *(undefined8 *)PTR_DAT_047d8920;
  *(undefined8 *)PTR_DAT_047d8928 = uVar6;
  FUN_017df8a0(local_30,uVar6,*(undefined4 *)(param_1 + 0x1c0));
  if (local_30[0] != 0) {
    if ((*(short *)(local_30[0] + 0x1a) != 0) &&
       (FUN_01340a44(local_58,param_1,1), local_58[0] != '\0')) {
      if ((local_30[0] != 0) && (*(short *)(local_30[0] + 0x1a) != 0)) {
        psVar1 = (short *)(local_30[0] + 0x1a);
        sVar7 = *(short *)(local_30[0] + 0x1a);
LAB_01802db8:
        sVar2 = *psVar1;
        if (sVar2 == sVar7) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar7 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 != '\0') goto LAB_01802ddc;
          bVar4 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_01802ddc:
          bVar4 = false;
        }
        if (!bVar4) goto code_r0x01802de4;
        lVar9 = *(long *)(local_30[0] + 0x10);
        if (lVar9 != 0) {
          plVar8 = (long *)(lVar9 + -0x28);
          FUN_01802eb4(plVar8,auStack_50);
          lVar9 = *(long *)(lVar9 + 8);
          psVar1 = (short *)(lVar9 + 0x1a);
          do {
            sVar7 = *psVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar4) {
              *psVar1 = sVar7 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (sVar7 == 1) {
            *(undefined8 *)(lVar9 + 0x10) = 0;
            (**(code **)(*plVar8 + 0x50))(plVar8);
          }
          else if (sVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
          goto LAB_01802d24;
        }
      }
LAB_01802d14:
      FUN_01802eb4(0,auStack_50);
LAB_01802d24:
      if (local_58[0] != '\0') {
        if (local_38 != (long *)0x0) {
          (**(code **)(*local_38 + 0x20))();
        }
        local_58[0] = '\0';
      }
    }
    if (local_30[0] != 0) {
      psVar1 = (short *)(local_30[0] + 0x18);
      do {
        sVar7 = *psVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar7 == 1) {
        FUN_0116e168();
      }
      else if (sVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
  }
  return;
code_r0x01802de4:
  sVar7 = sVar2;
  if (sVar2 == 0) goto LAB_01802d14;
  goto LAB_01802db8;
}


