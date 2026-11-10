/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02542490; name: FUN_02542490
 */


void FUN_02542490(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,long *param_8,
                 undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined4 param_12,
                 undefined4 param_13,undefined4 param_14)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  short sVar6;
  long *plVar7;
  long *local_d0;
  undefined8 *puStack_c8;
  undefined8 *local_c0;
  undefined8 *puStack_b8;
  undefined4 *local_b0;
  undefined4 *puStack_a8;
  undefined4 *local_a0;
  undefined4 *puStack_98;
  undefined4 *local_90;
  undefined4 *puStack_88;
  undefined4 *local_80;
  undefined4 *puStack_78;
  undefined4 *local_70;
  undefined4 *puStack_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  lVar5 = *param_8;
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
        if (cVar3 != '\0') goto LAB_0254250c;
        bVar4 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_0254250c:
        bVar4 = false;
      }
      if (bVar4) {
        lVar5 = *(long *)(lVar5 + 0x10);
        if (lVar5 == 0) {
          return;
        }
        local_d0 = param_8 + 2;
        puStack_c8 = &uStack_28;
        plVar7 = (long *)(lVar5 + -0x28);
        local_c0 = &local_30;
        puStack_b8 = &local_38;
        local_b0 = &uStack_3c;
        puStack_a8 = &local_40;
        local_a0 = &local_44;
        puStack_98 = &uStack_48;
        local_90 = &local_4c;
        puStack_88 = &uStack_50;
        local_80 = &local_54;
        puStack_78 = &uStack_58;
        local_70 = &local_5c;
        puStack_68 = &local_60;
        local_60 = param_7;
        local_5c = param_6;
        uStack_58 = param_5;
        local_54 = param_4;
        uStack_50 = param_3;
        local_4c = param_2;
        uStack_48 = param_1;
        local_44 = param_14;
        local_40 = param_13;
        uStack_3c = param_12;
        local_38 = param_11;
        local_30 = param_10;
        uStack_28 = param_9;
        FUN_025425f0(plVar7,&local_d0);
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


