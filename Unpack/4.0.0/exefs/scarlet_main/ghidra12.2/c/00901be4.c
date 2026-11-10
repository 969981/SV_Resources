/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00901be4; name: FUN_00901be4
 */


undefined8 FUN_00901be4(long *param_1,undefined4 *param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  short sVar8;
  long lVar9;
  undefined8 uVar10;
  bool bVar11;
  undefined8 local_48;
  undefined4 local_24;
  
  local_24 = *param_2;
  lVar7 = *param_1;
  if ((lVar7 != 0) && (*(short *)(lVar7 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar7 + 0x1a);
    sVar8 = *(short *)(lVar7 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar8) {
        cVar3 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar11) {
          *psVar1 = sVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_00901c60;
        bVar11 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_00901c60:
        bVar11 = false;
      }
      puVar4 = PTR_DAT_047d38f8;
      if (bVar11) {
        lVar7 = *(long *)(lVar7 + 0x10);
        if (lVar7 == 0) {
          return 0;
        }
        lVar9 = *(long *)PTR_DAT_047d38f8;
        lVar5 = nn::os::GetCurrentThread();
        if (lVar5 == lVar9) {
          bVar11 = true;
        }
        else {
          uVar10 = nn::os::GetCurrentThread();
          do {
            if (*(long *)puVar4 != 0) {
              do {
                ClearExclusiveLocal();
                nn::os::WaitLightEvent((LightEventType *)(puVar4 + 8));
                while (*(long *)puVar4 == 0) {
                  cVar3 = '\x01';
                  bVar11 = (bool)ExclusiveMonitorPass(puVar4,0x10);
                  if (bVar11) {
                    *(undefined8 *)puVar4 = uVar10;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                  if (cVar3 == '\0') goto LAB_00901d84;
                }
              } while( true );
            }
            cVar3 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(puVar4,0x10);
            if (bVar11) {
              *(undefined8 *)puVar4 = uVar10;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
LAB_00901d84:
          bVar11 = false;
        }
        uVar10 = *(undefined8 *)(lVar7 + 0x48);
        uVar6 = FUN_01b21750(uVar10,param_1[2],1,&local_24);
        if ((uVar6 & 1) == 0) {
          local_48 = 0;
        }
        else {
          local_48 = FUN_00c92df0(uVar10,0xffffffff,0);
        }
        FUN_00c5db00(uVar10,0);
        if (!bVar11) {
          *(undefined8 *)puVar4 = 0;
          nn::os::SignalLightEvent((LightEventType *)(puVar4 + 8));
        }
        lVar5 = *(long *)(lVar7 + 8);
        psVar1 = (short *)(lVar5 + 0x1a);
        do {
          sVar8 = *psVar1;
          cVar3 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar11) {
            *psVar1 = sVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (sVar8 == 1) {
          *(undefined8 *)(lVar5 + 0x10) = 0;
          (**(code **)(*(long *)(lVar7 + -0x28) + 0x50))((long *)(lVar7 + -0x28));
          return local_48;
        }
        if (sVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
        return local_48;
      }
      sVar8 = sVar2;
    } while (sVar2 != 0);
  }
  return 0;
}


