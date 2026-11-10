/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00910b48; name: FUN_00910b48
 */


void FUN_00910b48(long *param_1,undefined8 *param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  short sVar9;
  long lVar10;
  undefined8 local_48;
  
  local_48 = *param_2;
  lVar8 = *param_1;
  if ((lVar8 != 0) && (*(short *)(lVar8 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar8 + 0x1a);
    sVar9 = *(short *)(lVar8 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar9) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar9 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_00910bc0;
        bVar4 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_00910bc0:
        bVar4 = false;
      }
      puVar5 = PTR_DAT_047d38f8;
      if (bVar4) {
        lVar8 = *(long *)(lVar8 + 0x10);
        if (lVar8 == 0) {
          return;
        }
        lVar10 = *(long *)PTR_DAT_047d38f8;
        lVar6 = nn::os::GetCurrentThread();
        if (lVar6 == lVar10) {
          FUN_00910e3c(*(undefined8 *)(lVar8 + 0x48),param_1[2],&local_48);
        }
        else {
          uVar7 = nn::os::GetCurrentThread();
          do {
            if (*(long *)puVar5 != 0) {
              do {
                ClearExclusiveLocal();
                nn::os::WaitLightEvent((LightEventType *)(puVar5 + 8));
                while (*(long *)puVar5 == 0) {
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(puVar5,0x10);
                  if (bVar4) {
                    *(undefined8 *)puVar5 = uVar7;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                  if (cVar3 == '\0') goto LAB_00910c94;
                }
              } while( true );
            }
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar5,0x10);
            if (bVar4) {
              *(undefined8 *)puVar5 = uVar7;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
LAB_00910c94:
          FUN_00910e3c(*(undefined8 *)(lVar8 + 0x48),param_1[2],&local_48);
          *(undefined8 *)puVar5 = 0;
          nn::os::SignalLightEvent((LightEventType *)(puVar5 + 8));
        }
        lVar6 = *(long *)(lVar8 + 8);
        psVar1 = (short *)(lVar6 + 0x1a);
        do {
          sVar9 = *psVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (sVar9 == 1) {
          *(undefined8 *)(lVar6 + 0x10) = 0;
          (**(code **)(*(long *)(lVar8 + -0x28) + 0x50))((long *)(lVar8 + -0x28));
          return;
        }
        if (sVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
        return;
      }
      sVar9 = sVar2;
    } while (sVar2 != 0);
  }
  return;
}


