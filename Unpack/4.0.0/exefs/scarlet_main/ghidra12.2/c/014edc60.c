/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014edc60; name: FUN_014edc60
 */


void FUN_014edc60(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  short *psVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  long lVar8;
  undefined4 local_34;
  long *local_18;
  
  local_34 = 0x8000;
  FUN_014ede94(&local_18,*(undefined8 *)(*(long *)PTR_DAT_047d3a88 + 8),&local_34);
  FUN_014eddf8(&DAT_0483b3a0,&local_18);
  if (local_18 != (long *)0x0) {
    lVar8 = local_18[6];
    psVar3 = (short *)(lVar8 + 0x1a);
    do {
      sVar4 = *psVar3;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar6) {
        *psVar3 = sVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 1) {
      *(undefined8 *)(lVar8 + 0x10) = 0;
      (**(code **)(*local_18 + 0x50))();
    }
    else if (sVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  pcVar7 = DAT_0483b328;
  if (DAT_0483b3a0 != 0) {
    if (DAT_0483b328 != (code *)0x0) {
      DAT_0483b330 = 0;
      DAT_0483b338 = 0;
      DAT_0483b320 = 0;
      DAT_0483b328 = (code *)0x0;
      (*pcVar7)(&DAT_0483b340);
    }
    if ((code *)param_1[2] != (code *)0x0) {
      (*(code *)param_1[2])(param_1 + 4,&DAT_0483b340);
      DAT_0483b338 = param_1[3];
      DAT_0483b328 = (code *)param_1[1];
      DAT_0483b320 = *param_1;
      DAT_0483b330 = param_1[2];
    }
    lVar8 = DAT_0483b3a0;
    pcVar7 = *(code **)(DAT_0483b3a0 + 0x368);
    if (pcVar7 != (code *)0x0) {
      puVar1 = (undefined8 *)(DAT_0483b3a0 + 0x360);
      lVar2 = DAT_0483b3a0 + 0x380;
      *(undefined8 *)(DAT_0483b3a0 + 0x370) = 0;
      *(undefined8 *)(lVar8 + 0x378) = 0;
      *puVar1 = 0;
      *(undefined8 *)(lVar8 + 0x368) = 0;
      (*pcVar7)(lVar2);
    }
    lVar2 = DAT_0483b3a0;
    *(code **)(lVar8 + 0x360) = FUN_02a430f4;
    *(undefined1 **)(lVar8 + 0x368) = &LAB_02a4317c;
    *(undefined1 **)(lVar8 + 0x370) = &LAB_02a43180;
    *(undefined1 **)(lVar8 + 0x378) = &LAB_02a43184;
    FUN_012e43f8(lVar2,"keyboard_applet",0xffffffff,0x10);
  }
  return;
}


