/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028a2a14; name: FUN_028a2a14
 */


void FUN_028a2a14(undefined8 *param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  undefined8 local_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_28;
  
  *param_1 = &PTR_FUN_045e5f78;
  param_1[4] = &PTR_LAB_045e5fa8;
  nn::fs::Unmount("data");
  local_50 = 0;
  puStack_48 = &DAT_cbf29ce484222645;
  local_30 = 0;
  local_40 = &DAT_03c886bc;
  uStack_38 = 0;
  local_28 = 0;
  FUN_012e3ab4(&local_50);
  plVar5 = (long *)param_1[0x76];
  if (plVar5 != (long *)0x0) {
    lVar6 = plVar5[6];
    psVar1 = (short *)(lVar6 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar6 + 0x10) = 0;
      (**(code **)(*plVar5 + 0x50))();
    }
    else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  lVar6 = param_1[0x70];
  param_1[0x70] = 0;
  if (lVar6 != 0) {
    FUN_028a229c(param_1 + 0x71);
  }
  lVar6 = param_1[0x6c];
  param_1[0x6c] = 0;
  if (lVar6 != 0) {
    FUN_028a1ee0(param_1 + 0x6d);
  }
  lVar6 = param_1[0x68];
  param_1[0x68] = 0;
  if (lVar6 != 0) {
    FUN_028a2b84(param_1 + 0x69);
  }
  lVar6 = param_1[100];
  param_1[100] = 0;
  if (lVar6 != 0) {
    FUN_028a2658(param_1 + 0x65);
  }
  FUN_012e4320(param_1 + 0x61);
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x5f));
  FUN_028a2f40(param_1 + 0x51);
  FUN_012e3994(param_1 + 0x4d,0);
  FUN_028a2f80(param_1 + 0x3a);
  FUN_028a31b4(param_1 + 0x39);
  FUN_028a1788(param_1 + 6);
  return;
}


