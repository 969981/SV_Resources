/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c7c5fc; name: FUN_00c7c5fc
 */


bool FUN_00c7c5fc(long param_1,undefined4 param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  long lVar6;
  short sVar7;
  long *plVar8;
  uint unaff_w21;
  undefined4 local_14;
  
  if ((((*(long *)(param_1 + 0x2f0) == 0) || (*(short *)(*(long *)(param_1 + 0x2f0) + 0x1a) == 0))
      || (lVar6 = *(long *)(param_1 + 0x2f0), lVar6 == 0)) || (*(short *)(lVar6 + 0x1a) == 0)) {
LAB_00c7c630:
    uVar5 = 0;
  }
  else {
    psVar1 = (short *)(lVar6 + 0x1a);
    sVar7 = *(short *)(lVar6 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar7) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar7 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_00c7c68c;
        bVar4 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_00c7c68c:
        bVar4 = false;
      }
      if (bVar4) {
        lVar6 = *(long *)(lVar6 + 0x10);
        unaff_w21 = 0;
        if (lVar6 != 0) {
          plVar8 = (long *)(lVar6 + -0x28);
          local_14 = param_2;
          uVar5 = FUN_00cc4b94(plVar8,"SED9FE76F833038F1",&local_14);
          lVar6 = *(long *)(lVar6 + 8);
          psVar1 = (short *)(lVar6 + 0x1a);
          do {
            sVar7 = *psVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar4) {
              *psVar1 = sVar7 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          unaff_w21 = uVar5 >> 8 & 0xff;
          if (sVar7 == 1) {
            *(undefined8 *)(lVar6 + 0x10) = 0;
            (**(code **)(*plVar8 + 0x50))(plVar8);
          }
          else if (sVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
          break;
        }
        goto LAB_00c7c630;
      }
      uVar5 = 0;
      sVar7 = sVar2;
    } while (sVar2 != 0);
  }
  return (unaff_w21 & 0xff) != 0 && (uVar5 & 0xff) != 0;
}


