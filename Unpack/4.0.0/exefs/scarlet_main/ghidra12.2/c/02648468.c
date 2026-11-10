/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02648468; name: FUN_02648468
 */


void FUN_02648468(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 byte param_5,undefined8 param_6)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  short sVar6;
  long *plVar7;
  long *local_78;
  undefined8 *puStack_70;
  undefined8 *local_68;
  undefined8 *puStack_60;
  byte *local_58;
  undefined8 *puStack_50;
  byte local_44 [4];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_44[0] = param_5 & 1;
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
        if (cVar3 != '\0') goto LAB_026484d4;
        bVar4 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_026484d4:
        bVar4 = false;
      }
      if (bVar4) {
        lVar5 = *(long *)(lVar5 + 0x10);
        if (lVar5 == 0) {
          return;
        }
        local_78 = param_1 + 2;
        puStack_70 = &local_30;
        plVar7 = (long *)(lVar5 + -0x28);
        local_68 = &uStack_38;
        puStack_60 = &local_40;
        local_58 = local_44;
        puStack_50 = &uStack_28;
        local_40 = param_4;
        uStack_38 = param_3;
        local_30 = param_2;
        uStack_28 = param_6;
        FUN_02648588(plVar7,&local_78);
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


