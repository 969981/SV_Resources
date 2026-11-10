/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00cfa2c4; name: FUN_00cfa2c4
 */


void FUN_00cfa2c4(undefined1 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  short *psVar1;
  short sVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  int extraout_var;
  ulong uVar7;
  uint *puVar8;
  undefined8 uVar9;
  long lVar10;
  long *local_88;
  undefined **local_80;
  long *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  int local_40 [2];
  long *local_38;
  
  FUN_00cfa714(*(undefined8 *)(param_2 + 0x308));
  FUN_00cfa960(local_40,*(undefined8 *)(param_2 + 0x360),param_3,param_4,extraout_var + 1);
  plVar6 = local_38;
  if (local_40[0] == 1) {
    uVar7 = FUN_00cfa62c(local_38 + 5);
    if ((uVar7 & 1) == 0) {
      *param_1 = 0;
    }
    else {
      if (plVar6 != (long *)0x0) {
        lVar10 = plVar6[6];
        if (*(long *)(lVar10 + 0x10) == 0) goto LAB_00cfa5e4;
        psVar1 = (short *)(lVar10 + 0x1a);
        do {
          sVar2 = *psVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar2 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar2 == 0) {
          uVar9 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
          *(undefined8 *)(lVar10 + 8) = uVar9;
          *(undefined4 *)(lVar10 + 0x1c) = 0xfffffffe;
        }
        else if (sVar2 == -1) goto LAB_00cfa408;
      }
      puVar8 = (uint *)(**(code **)(*plVar6 + 0x70))(plVar6);
      uVar3 = *puVar8;
      *(long **)(param_1 + 8) = plVar6;
      *(ulong *)(param_1 + 0x10) = (long)puVar8 + (ulong)uVar3;
      *param_1 = 1;
    }
  }
  else {
    local_50 = 0;
    uStack_48 = 0;
    local_60 = 0;
    uStack_58 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_80 = &PTR_FUN_045e5fc8;
    local_78 = (long *)0x0;
    FUN_00cfbaf4(&local_80,0,param_3,0,0);
    plVar6 = local_78;
    if (local_78 == (long *)0x0) {
      *param_1 = 0;
    }
    else {
      lVar10 = local_78[6];
      if (*(long *)(lVar10 + 0x10) == 0) {
LAB_00cfa5e4:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("m_object != nullptr","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x3d);
      }
      psVar1 = (short *)(lVar10 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar2 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar2 == 0) {
        uVar9 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
        *(undefined8 *)(lVar10 + 8) = uVar9;
        *(undefined4 *)(lVar10 + 0x1c) = 0xfffffffe;
      }
      else if (sVar2 == -1) goto LAB_00cfa408;
      local_88 = plVar6;
      FUN_00d0278c(*(undefined8 *)(param_2 + 0x360),&local_88,local_40[0]);
      if (local_88 != (long *)0x0) {
        lVar10 = local_88[6];
        psVar1 = (short *)(lVar10 + 0x1a);
        do {
          sVar2 = *psVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar2 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar2 == 1) {
          *(undefined8 *)(lVar10 + 0x10) = 0;
          (**(code **)(*local_88 + 0x50))();
        }
        else if (sVar2 == 0) goto LAB_00cfa390;
      }
      plVar6 = local_78;
      if (local_78 != (long *)0x0) {
        lVar10 = local_78[6];
        if (*(long *)(lVar10 + 0x10) == 0) goto LAB_00cfa5e4;
        psVar1 = (short *)(lVar10 + 0x1a);
        do {
          sVar2 = *psVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar2 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar2 == 0) {
          uVar9 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
          *(undefined8 *)(lVar10 + 8) = uVar9;
          *(undefined4 *)(lVar10 + 0x1c) = 0xfffffffe;
        }
        else if (sVar2 == -1) {
LAB_00cfa408:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != 0","AddReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x58,"Reference counter overflows.");
        }
      }
      puVar8 = (uint *)(**(code **)(*plVar6 + 0x70))(plVar6);
      uVar3 = *puVar8;
      *(long **)(param_1 + 8) = plVar6;
      *(ulong *)(param_1 + 0x10) = (long)puVar8 + (ulong)uVar3;
      *param_1 = 1;
    }
    FUN_00cfb194(&local_80);
  }
  if (local_38 != (long *)0x0) {
    lVar10 = local_38[6];
    psVar1 = (short *)(lVar10 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar2 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar10 + 0x10) = 0;
      (**(code **)(*local_38 + 0x50))();
    }
    else if (sVar2 == 0) {
LAB_00cfa390:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  return;
}


