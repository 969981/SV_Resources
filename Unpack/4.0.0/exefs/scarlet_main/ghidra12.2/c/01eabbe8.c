/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01eabbe8; name: FUN_01eabbe8
 */


/* WARNING: Removing unreachable block (ram,0x01eabe2c) */
/* WARNING: Removing unreachable block (ram,0x01eabdcc) */
/* WARNING: Removing unreachable block (ram,0x01eabe24) */

void FUN_01eabbe8(undefined1 *param_1,undefined8 param_2,char *param_3)

{
  short *psVar1;
  undefined2 uVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  short sVar8;
  undefined2 uStack_1ea;
  undefined2 local_1c6;
  undefined1 auStack_1c4 [348];
  undefined2 uStack_68;
  undefined6 local_66;
  undefined2 uStack_60;
  undefined6 local_5e;
  undefined2 uStack_58;
  
  lVar7 = *(long *)(param_3 + 8);
  if ((lVar7 != 0) && (*(short *)(lVar7 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar7 + 0x1a);
    sVar8 = *(short *)(lVar7 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar8) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar8 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_01eabc68;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01eabc68:
        bVar5 = false;
      }
      if (bVar5) {
        lVar7 = *(long *)(lVar7 + 0x10);
        if (lVar7 != 0) {
          if (*param_3 != '\0') {
            if (*(int *)(param_3 + 0x40) == 3) {
              uStack_1ea = (undefined2)((ulong)param_2 >> 0x30);
              uVar2 = *(undefined2 *)(param_3 + 2);
              memset(auStack_1c4,0,0x158);
              local_1c6 = uVar2;
              if (*(long *)(param_3 + 0x58) != 0) {
                FUN_00f329b4(*(long *)(param_3 + 0x58),auStack_1c4);
              }
              *(ulong *)(param_1 + 0xe) = CONCAT26(uVar2,CONCAT42(3,uStack_1ea));
              *param_1 = 0;
              param_1[0x18] = 0;
              *(undefined8 *)(param_1 + 8) = param_2;
              param_1[0x30] = 0;
              memcpy(param_1 + 0x32,&local_1c6,0x15a);
              param_1[0x30] = 1;
              *param_1 = 1;
              goto LAB_01eabd08;
            }
            if (*(int *)(param_3 + 0x40) == 1) {
              uVar2 = *(undefined2 *)(param_3 + 2);
              local_66 = (undefined6)*(undefined8 *)(param_3 + 0x48);
              uStack_60 = (undefined2)((ulong)*(undefined8 *)(param_3 + 0x48) >> 0x30);
              local_5e = (undefined6)*(undefined8 *)(param_3 + 0x50);
              uStack_58 = (undefined2)((ulong)*(undefined8 *)(param_3 + 0x50) >> 0x30);
              *(undefined8 *)(param_1 + 8) = param_2;
              *(undefined4 *)(param_1 + 0x10) = 1;
              *(undefined2 *)(param_1 + 0x14) = uVar2;
              *(undefined2 *)(param_1 + 0x1c) = uVar2;
              *(undefined2 *)(param_1 + 0x2e) = uStack_58;
              *(ulong *)(param_1 + 0x26) = CONCAT62(local_5e,uStack_60);
              *(ulong *)(param_1 + 0x1e) = CONCAT62(local_66,uStack_68);
              param_1[0x18] = 1;
              param_1[0x30] = 0;
              *param_1 = 1;
              goto LAB_01eabd08;
            }
          }
          *param_1 = 0;
LAB_01eabd08:
          lVar6 = *(long *)(lVar7 + 8);
          psVar1 = (short *)(lVar6 + 0x1a);
          do {
            sVar8 = *psVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar5) {
              *psVar1 = sVar8 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar8 == 1) {
            *(undefined8 *)(lVar6 + 0x10) = 0;
            (**(code **)(*(long *)(lVar7 + -0x28) + 0x50))((long *)(lVar7 + -0x28));
            return;
          }
          if (sVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
          return;
        }
        break;
      }
      sVar8 = sVar3;
    } while (sVar3 != 0);
  }
  *param_1 = 0;
  return;
}


