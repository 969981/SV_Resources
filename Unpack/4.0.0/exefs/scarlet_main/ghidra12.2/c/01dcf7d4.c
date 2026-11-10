/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01dcf7d4; name: FUN_01dcf7d4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01dcf7d4(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  long lVar6;
  short sVar7;
  long *plVar8;
  uint unaff_w20;
  char local_38 [8];
  char acStack_30 [7];
  undefined4 local_29;
  
  lVar6 = *param_1;
  if ((lVar6 == 0) || (*(short *)(lVar6 + 0x1a) == 0)) {
LAB_01dcf7ec:
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
        if (cVar3 != '\0') goto LAB_01dcf84c;
        bVar4 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01dcf84c:
        bVar4 = false;
      }
      if (bVar4) {
        lVar6 = *(long *)(lVar6 + 0x10);
        unaff_w20 = 0;
        if (lVar6 != 0) {
          plVar8 = (long *)(lVar6 + -0x28);
          local_38[0] = s_F2ABEABEAC4307023_03d300a7[0];
          local_38[1] = s_F2ABEABEAC4307023_03d300a7[1];
          local_38[2] = s_F2ABEABEAC4307023_03d300a7[2];
          local_38[3] = s_F2ABEABEAC4307023_03d300a7[3];
          local_38[4] = s_F2ABEABEAC4307023_03d300a7[4];
          local_38[5] = s_F2ABEABEAC4307023_03d300a7[5];
          local_38[6] = s_F2ABEABEAC4307023_03d300a7[6];
          local_38[7] = s_F2ABEABEAC4307023_03d300a7[7];
          acStack_30[0] = s_F2ABEABEAC4307023_03d300a7[8];
          acStack_30[1] = s_F2ABEABEAC4307023_03d300a7[9];
          acStack_30[2] = s_F2ABEABEAC4307023_03d300a7[10];
          acStack_30[3] = s_F2ABEABEAC4307023_03d300a7[0xb];
          acStack_30[4] = s_F2ABEABEAC4307023_03d300a7[0xc];
          acStack_30[5] = s_F2ABEABEAC4307023_03d300a7[0xd];
          acStack_30[6] = s_F2ABEABEAC4307023_03d300a7[0xe];
          local_29 = ram0x03d300b6;
          uVar5 = FUN_01dcf904(plVar8,local_38,param_2,param_3,param_4);
          lVar6 = *(long *)(lVar6 + 0x70);
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
          unaff_w20 = uVar5 >> 8 & 0xff;
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
        goto LAB_01dcf7ec;
      }
      uVar5 = 0;
      sVar7 = sVar2;
    } while (sVar2 != 0);
  }
  return uVar5 & 0xff | (unaff_w20 & 0xff) << 8;
}


