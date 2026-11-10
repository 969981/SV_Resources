/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012977e0; name: FUN_012977e0
 */


void FUN_012977e0(long param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  short sVar8;
  
  if ((*(long *)(param_1 + 0x30) != 0) && (lVar6 = *(long *)(param_1 + 0x38), lVar6 != 0)) {
    if ((*(long *)(lVar6 + 0xc0) != 0) && (*(short *)(*(long *)(lVar6 + 0xc0) + 0x1a) != 0)) {
      lVar6 = *(long *)(lVar6 + 0xc0);
      cVar4 = DAT_00000381;
      if ((lVar6 != 0) && (*(short *)(lVar6 + 0x1a) != 0)) {
        psVar1 = (short *)(lVar6 + 0x1a);
        sVar8 = *(short *)(lVar6 + 0x1a);
LAB_0129788c:
        sVar2 = *psVar1;
        if (sVar2 == sVar8) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar8 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_012978b0;
          bVar5 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_012978b0:
          bVar5 = false;
        }
        cVar4 = DAT_00000381;
        if (!bVar5) goto code_r0x012978b8;
        lVar6 = *(long *)(lVar6 + 0x10);
        if (lVar6 != 0) {
          cVar4 = *(char *)(lVar6 + 0x359);
          lVar7 = *(long *)(lVar6 + 8);
          psVar1 = (short *)(lVar7 + 0x1a);
          do {
            sVar8 = *psVar1;
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar5) {
              *psVar1 = sVar8 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (sVar8 == 1) {
            *(undefined8 *)(lVar7 + 0x10) = 0;
            (**(code **)(*(long *)(lVar6 + -0x28) + 0x50))();
          }
          else if (sVar8 == 0) goto LAB_012979b4;
        }
      }
joined_r0x01297940:
      if (cVar4 != '\0') {
        FUN_012979dc(*(undefined8 *)(param_1 + 0x30),0);
      }
    }
    lVar6 = *(long *)(*(long *)(param_1 + 0x38) + 0xd0);
    if ((lVar6 != 0) && (*(short *)(lVar6 + 0x1a) != 0)) {
      lVar6 = *(long *)(*(long *)(param_1 + 0x38) + 0xd0);
      cVar4 = DAT_00000381;
      if ((lVar6 != 0) && (*(short *)(lVar6 + 0x1a) != 0)) {
        psVar1 = (short *)(lVar6 + 0x1a);
        sVar8 = *(short *)(lVar6 + 0x1a);
        do {
          sVar2 = *psVar1;
          if (sVar2 == sVar8) {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar5) {
              *psVar1 = sVar8 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 != '\0') goto LAB_012978f8;
            bVar5 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_012978f8:
            bVar5 = false;
          }
          cVar4 = DAT_00000381;
          if (bVar5) {
            lVar6 = *(long *)(lVar6 + 0x10);
            if (lVar6 != 0) {
              cVar4 = *(char *)(lVar6 + 0x359);
              lVar7 = *(long *)(lVar6 + 8);
              psVar1 = (short *)(lVar7 + 0x1a);
              do {
                sVar8 = *psVar1;
                cVar3 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                if (bVar5) {
                  *psVar1 = sVar8 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (sVar8 == 1) {
                *(undefined8 *)(lVar7 + 0x10) = 0;
                (**(code **)(*(long *)(lVar6 + -0x28) + 0x50))();
              }
              else if (sVar8 == 0) {
LAB_012979b4:
                    /* WARNING: Subroutine does not return */
                nn::diag::detail::AbortImpl
                          ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                           "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                           ,0x60,"Reference counter underflows.");
              }
            }
            break;
          }
          sVar8 = sVar2;
        } while (sVar2 != 0);
      }
      if (cVar4 != '\0') {
        FUN_012979dc(*(undefined8 *)(param_1 + 0x30),1);
        return;
      }
    }
  }
  return;
code_r0x012978b8:
  sVar8 = sVar2;
  if (sVar2 == 0) goto joined_r0x01297940;
  goto LAB_0129788c;
}


