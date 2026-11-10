/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 009028c8; name: FUN_009028c8
 */


bool FUN_009028c8(long *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  short sVar10;
  long lVar11;
  undefined8 uVar12;
  bool bVar13;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  
  uStack_44 = *param_2;
  local_48 = *param_3;
  local_4c = *param_4;
  lVar9 = *param_1;
  if ((lVar9 != 0) && (*(short *)(lVar9 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar9 + 0x1a);
    sVar10 = *(short *)(lVar9 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar10) {
        cVar3 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar13) {
          *psVar1 = sVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_00902950;
        bVar13 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_00902950:
        bVar13 = false;
      }
      puVar4 = PTR_DAT_047d38f8;
      if (bVar13) {
        lVar9 = *(long *)(lVar9 + 0x10);
        if (lVar9 == 0) {
          return false;
        }
        lVar11 = *(long *)PTR_DAT_047d38f8;
        lVar7 = nn::os::GetCurrentThread();
        if (lVar7 == lVar11) {
          bVar13 = true;
        }
        else {
          uVar12 = nn::os::GetCurrentThread();
          do {
            if (*(long *)puVar4 != 0) {
              do {
                ClearExclusiveLocal();
                nn::os::WaitLightEvent((LightEventType *)(puVar4 + 8));
                while (*(long *)puVar4 == 0) {
                  cVar3 = '\x01';
                  bVar13 = (bool)ExclusiveMonitorPass(puVar4,0x10);
                  if (bVar13) {
                    *(undefined8 *)puVar4 = uVar12;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                  if (cVar3 == '\0') goto LAB_00902a78;
                }
              } while( true );
            }
            cVar3 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(puVar4,0x10);
            if (bVar13) {
              *(undefined8 *)puVar4 = uVar12;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
LAB_00902a78:
          bVar13 = false;
        }
        uVar12 = *(undefined8 *)(lVar9 + 0x48);
        uVar8 = FUN_00902420(uVar12,param_1[2],&uStack_44,&local_48,&local_4c);
        if ((uVar8 & 1) == 0) {
          bVar5 = false;
        }
        else {
          iVar6 = FUN_00cc4dc0(uVar12,0xffffffff);
          bVar5 = iVar6 != 0;
        }
        FUN_00c5db00(uVar12,0);
        if (!bVar13) {
          *(undefined8 *)puVar4 = 0;
          nn::os::SignalLightEvent((LightEventType *)(puVar4 + 8));
        }
        lVar7 = *(long *)(lVar9 + 8);
        psVar1 = (short *)(lVar7 + 0x1a);
        do {
          sVar10 = *psVar1;
          cVar3 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar13) {
            *psVar1 = sVar10 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (sVar10 == 1) {
          *(undefined8 *)(lVar7 + 0x10) = 0;
          (**(code **)(*(long *)(lVar9 + -0x28) + 0x50))((long *)(lVar9 + -0x28));
          return bVar5;
        }
        if (sVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
        return bVar5;
      }
      sVar10 = sVar2;
    } while (sVar2 != 0);
  }
  return false;
}


