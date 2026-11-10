/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0262bda8; name: FUN_0262bda8
 */


void FUN_0262bda8(undefined4 param_1,undefined4 param_2,long *param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  short sVar6;
  long *plVar7;
  long *local_70;
  undefined8 *puStack_68;
  undefined8 *local_60;
  undefined8 *puStack_58;
  undefined4 *local_50;
  undefined4 *puStack_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  lVar5 = *param_3;
  if ((lVar5 != 0) && (*(short *)(lVar5 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar5 + 0x1a);
    sVar6 = *(short *)(lVar5 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar6) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar6 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_0262be10;
        bVar4 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_0262be10:
        bVar4 = false;
      }
      if (bVar4) {
        lVar5 = *(long *)(lVar5 + 0x10);
        if (lVar5 == 0) {
          return;
        }
        local_70 = param_3 + 2;
        puStack_68 = &uStack_28;
        plVar7 = (long *)(lVar5 + -0x28);
        local_60 = &local_30;
        puStack_58 = &local_38;
        local_50 = &uStack_3c;
        puStack_48 = &local_40;
        local_40 = param_2;
        uStack_3c = param_1;
        local_38 = param_6;
        local_30 = param_5;
        uStack_28 = param_4;
        FUN_0262bec4(plVar7,&local_70);
        lVar5 = *(long *)(lVar5 + 8);
        psVar1 = (short *)(lVar5 + 0x1a);
        do {
          sVar6 = *psVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar6 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (sVar6 == 1) {
          *(undefined8 *)(lVar5 + 0x10) = 0;
          (**(code **)(*plVar7 + 0x50))(plVar7);
          return;
        }
        if (sVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
        return;
      }
      sVar6 = sVar2;
    } while (sVar2 != 0);
  }
  return;
}


