/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01df9928; name: FUN_01df9928
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_01df9928(undefined8 param_1,undefined8 param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  long *plVar8;
  long lVar9;
  short sVar10;
  ulong uVar12;
  undefined1 auVar11 [16];
  undefined8 uVar13;
  undefined1 in_q3 [16];
  undefined8 local_40;
  ulong uStack_38;
  long *local_30;
  long *local_28;
  
  uStack_38 = in_q3._8_8_;
  uVar13 = in_q3._0_8_;
  plVar8 = (long *)FUN_01df7498();
  lVar9 = *plVar8;
  local_40 = 0;
  uVar12 = 0;
  if ((lVar9 != 0) && (*(short *)(lVar9 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar9 + 0x1a);
    sVar10 = *(short *)(lVar9 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar10) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_01df9990;
        bVar4 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01df9990:
        bVar4 = false;
      }
      if (bVar4) {
        lVar9 = *(long *)(lVar9 + 0x10);
        if (lVar9 != 0) {
          uVar7 = FUN_00c8ea20(0,*(undefined8 *)(*(long *)(lVar9 + 0x110) + 0x70),param_2);
          if ((~uVar7 & 0xffff) == 0) {
            FUN_00c9e664(&local_30,lVar9 + 0xc0);
            if (local_30 == (long *)0x0) {
              uStack_38 = _UNK_03cabe58;
              local_40 = _DAT_03cabe50;
            }
            else {
              (**(code **)(*(long *)local_28[9] + 0xb0))();
              local_40 = uVar13;
            }
            if (local_28 != (long *)0x0) {
              plVar8 = local_28 + 5;
              do {
                lVar6 = *plVar8;
                iVar5 = (int)lVar6 + -1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
                if (bVar4) {
                  *(int *)plVar8 = iVar5;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar5 == 0) {
                (**(code **)(*local_28 + 0x10))();
              }
              else if ((int)lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                nn::diag::detail::AbortImpl
                          ("count != std::numeric_limits<uint32_t>::max()",
                           "DecrementReferenceInternal",
                           "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                           ,0x58,"Reference counter underflows.");
              }
            }
            if (local_30 != (long *)0x0) {
              (**(code **)(*local_30 + 0x60))();
            }
          }
          else {
            FUN_00d175d0(*(undefined8 *)(*(long *)(lVar9 + 0x110) + 0x70),uVar7);
            local_40 = uVar13;
          }
          uVar12 = uStack_38 & 0xffffffff;
          (**(code **)(*(long *)(lVar9 + -0x28) + 0x60))();
        }
        break;
      }
      sVar10 = sVar2;
    } while (sVar2 != 0);
  }
  auVar11._8_8_ = uVar12;
  auVar11._0_8_ = local_40;
  return auVar11;
}


