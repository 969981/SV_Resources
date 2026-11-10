/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01de1c90; name: FUN_01de1c90
 */


void FUN_01de1c90(long param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  bool bVar10;
  short sVar11;
  
  lVar8 = *(long *)(param_1 + 0x68);
  if ((lVar8 != 0) && (*(short *)(lVar8 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar8 + 0x1a);
    sVar11 = *(short *)(lVar8 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar11) {
        cVar3 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar10) {
          *psVar1 = sVar11 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_01de1cec;
        bVar10 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01de1cec:
        bVar10 = false;
      }
      if (bVar10) {
        lVar8 = *(long *)(lVar8 + 0x10);
        plVar9 = (long *)(lVar8 + -0x28);
        if (lVar8 != 0) {
          uVar5 = FUN_01dcd22c(plVar9);
          iVar4 = FUN_014a24ec();
          iVar7 = 8;
          if (iVar4 != 2) {
            iVar7 = 4;
          }
          iVar7 = (int)uVar5 + ((int)((ulong)uVar5 >> 0x20) + -1) * iVar7;
          if (((*PTR_DAT_047d4c98 & 1) == 0) &&
             (iVar4 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar4 != 0)) {
            FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d4c98);
          }
          *(undefined8 *)PTR_DAT_047d4ca8 = *(undefined8 *)PTR_DAT_047d4ca0;
          lVar6 = FUN_01dd68a8();
          if ((lVar6 != 0) && (*(int *)(lVar6 + 0x48) != 0)) {
            if (*(int *)(lVar6 + 0x40) == *(int *)(param_1 + 0x16cc)) {
              *(int *)(lVar6 + 0x40) = iVar7;
            }
            else if (*(int *)(lVar6 + 0x40) == iVar7) {
              *(int *)(lVar6 + 0x40) = *(int *)(param_1 + 0x16cc);
            }
          }
          lVar6 = FUN_01195854();
          if (lVar6 != 0) {
            FUN_01de1e8c(lVar6,iVar7,*(undefined4 *)(param_1 + 0x16cc));
          }
          lVar6 = FUN_01dcc2a4();
          if (lVar6 != 0) {
            FUN_01de1fd8(lVar6,iVar7,*(undefined4 *)(param_1 + 0x16cc),*(undefined8 *)(param_1 + 8))
            ;
          }
          FUN_014e5120(param_1,iVar7,0);
          *(int *)(param_1 + 0x16cc) = iVar7;
          lVar8 = *(long *)(lVar8 + 8);
          psVar1 = (short *)(lVar8 + 0x1a);
          do {
            sVar11 = *psVar1;
            cVar3 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar10) {
              *psVar1 = sVar11 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (sVar11 == 1) {
            *(undefined8 *)(lVar8 + 0x10) = 0;
            (**(code **)(*plVar9 + 0x50))(plVar9);
          }
          else if (sVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
        }
        break;
      }
      sVar11 = sVar2;
    } while (sVar2 != 0);
  }
  FUN_01ddf434(param_1);
  return;
}


