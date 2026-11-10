/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0253b95c; name: FUN_0253b95c
 */


void FUN_0253b95c(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 byte param_5,undefined4 param_6,undefined4 param_7)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  short sVar6;
  long *plVar7;
  long *local_80;
  undefined8 *puStack_78;
  undefined8 *local_70;
  undefined8 *puStack_68;
  byte *local_60;
  undefined4 *puStack_58;
  undefined4 *local_50;
  undefined4 local_44;
  undefined4 uStack_40;
  byte local_3c [4];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_3c[0] = param_5 & 1;
  lVar5 = *param_1;
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
        if (cVar3 != '\0') goto LAB_0253b9cc;
        bVar4 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_0253b9cc:
        bVar4 = false;
      }
      if (bVar4) {
        lVar5 = *(long *)(lVar5 + 0x10);
        if (lVar5 == 0) {
          return;
        }
        local_80 = param_1 + 2;
        puStack_78 = &uStack_28;
        plVar7 = (long *)(lVar5 + -0x28);
        local_70 = &local_30;
        puStack_68 = &local_38;
        local_60 = local_3c;
        puStack_58 = &uStack_40;
        local_50 = &local_44;
        local_44 = param_7;
        uStack_40 = param_6;
        local_38 = param_4;
        local_30 = param_3;
        uStack_28 = param_2;
        FUN_0253ba88(plVar7,&local_80);
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


