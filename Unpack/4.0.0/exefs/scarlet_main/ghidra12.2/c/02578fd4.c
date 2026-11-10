/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02578fd4; name: FUN_02578fd4
 */


void FUN_02578fd4(long *param_1,undefined8 param_2,undefined8 param_3,byte param_4,
                 undefined4 param_5,undefined4 param_6)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  short sVar8;
  long lVar9;
  undefined8 uVar10;
  undefined4 local_5c;
  undefined4 uStack_58;
  byte local_54 [4];
  undefined8 local_50;
  undefined8 local_48;
  
  local_54[0] = param_4 & 1;
  lVar7 = *param_1;
  if ((lVar7 != 0) && (*(short *)(lVar7 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar7 + 0x1a);
    sVar8 = *(short *)(lVar7 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar8) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_02579058;
        bVar4 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_02579058:
        bVar4 = false;
      }
      puVar5 = PTR_DAT_047d38f8;
      if (bVar4) {
        lVar7 = *(long *)(lVar7 + 0x10);
        if (lVar7 == 0) {
          return;
        }
        lVar9 = *(long *)PTR_DAT_047d38f8;
        local_5c = param_6;
        uStack_58 = param_5;
        local_50 = param_3;
        local_48 = param_2;
        lVar6 = nn::os::GetCurrentThread();
        if (lVar6 == lVar9) {
          uVar10 = *(undefined8 *)(lVar7 + 0x48);
          FUN_025791d0(uVar10,param_1[2],&local_48,&local_50,local_54,&uStack_58,&local_5c);
          FUN_00c5db00(uVar10,0);
          goto LAB_025790c4;
        }
        uVar10 = nn::os::GetCurrentThread();
        goto LAB_02579118;
      }
      sVar8 = sVar2;
    } while (sVar2 != 0);
  }
  return;
LAB_02579118:
  if (*(long *)puVar5 != 0) {
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(puVar5 + 8));
    do {
      if (*(long *)puVar5 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(puVar5 + 8));
          while (*(long *)puVar5 == 0) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar5,0x10);
            if (bVar4) {
              *(undefined8 *)puVar5 = uVar10;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_02579128;
          }
        } while( true );
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar5,0x10);
      if (bVar4) {
        *(undefined8 *)puVar5 = uVar10;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
LAB_02579128:
    uVar10 = *(undefined8 *)(lVar7 + 0x48);
    FUN_025791d0(uVar10,param_1[2],&local_48,&local_50,local_54,&uStack_58,&local_5c);
    FUN_00c5db00(uVar10,0);
    *(undefined8 *)puVar5 = 0;
    nn::os::SignalLightEvent((LightEventType *)(puVar5 + 8));
LAB_025790c4:
    lVar6 = *(long *)(lVar7 + 8);
    psVar1 = (short *)(lVar6 + 0x1a);
    do {
      sVar8 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar8 == 1) {
      *(undefined8 *)(lVar6 + 0x10) = 0;
      (**(code **)(*(long *)(lVar7 + -0x28) + 0x50))((long *)(lVar7 + -0x28));
      return;
    }
    if (sVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
    return;
  }
  cVar3 = '\x01';
  bVar4 = (bool)ExclusiveMonitorPass(puVar5,0x10);
  if (bVar4) {
    *(undefined8 *)puVar5 = uVar10;
    cVar3 = ExclusiveMonitorsStatus();
  }
  if (cVar3 == '\0') goto LAB_02579128;
  goto LAB_02579118;
}


