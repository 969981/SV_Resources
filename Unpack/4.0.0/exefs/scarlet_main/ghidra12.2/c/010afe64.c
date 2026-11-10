/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010afe64; name: FUN_010afe64
 */


void FUN_010afe64(long param_1,undefined8 param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  long *local_50;
  long local_48;
  long lStack_40;
  undefined8 local_38;
  
  local_50 = (long *)0x0;
  plVar8 = *(long **)(param_1 + 0x50);
  if (plVar8 != (long *)0x0) {
    lVar7 = plVar8[6];
    if (*(long *)(lVar7 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar7 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 0) {
      uVar5 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
      *(undefined8 *)(lVar7 + 8) = uVar5;
      *(undefined4 *)(lVar7 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
  }
  if (local_50 != (long *)0x0) {
    lVar7 = local_50[6];
    psVar1 = (short *)(lVar7 + 0x1a);
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
      *(undefined8 *)(lVar7 + 0x10) = 0;
      lVar7 = *local_50;
      local_50 = plVar8;
      (**(code **)(lVar7 + 0x50))();
      plVar8 = local_50;
    }
    else {
      local_50 = plVar8;
      if (sVar2 == 0) goto LAB_010b0070;
    }
  }
  local_50 = plVar8;
  local_48 = param_1 + 0x210;
  lStack_40 = param_1 + 0x208;
  local_38 = FUN_010a01f0(*(undefined8 *)(param_1 + 0x38));
  local_80 = FUN_010b00c8(*(undefined8 *)(param_1 + 0x468));
  local_78 = FUN_010b00d0(*(undefined8 *)(param_1 + 0x468));
  local_70 = FUN_014f5ef8(*(undefined8 *)(param_1 + 0x468));
  local_68 = FUN_010b00c0(*(undefined8 *)(param_1 + 0x468));
  local_60 = FUN_010b00b8(*(undefined8 *)(param_1 + 0x468));
  local_58 = FUN_010b00d8(*(undefined8 *)(param_1 + 0x468));
  FUN_010b00e0(&local_a0,param_2,&local_80);
  lVar7 = local_a0;
  local_a0 = 0;
  lVar6 = *(long *)(param_1 + 0x448);
  *(long *)(param_1 + 0x448) = lVar7;
  if (lVar6 == 0) {
    *(undefined8 *)(param_1 + 0x460) = local_88;
    *(undefined8 *)(param_1 + 0x458) = local_90;
    *(undefined8 *)(param_1 + 0x450) = local_98;
    local_a0 = 0;
  }
  else {
    FUN_010b03b0(param_1 + 0x450);
    lVar7 = local_a0;
    *(undefined8 *)(param_1 + 0x460) = local_88;
    *(undefined8 *)(param_1 + 0x458) = local_90;
    *(undefined8 *)(param_1 + 0x450) = local_98;
    local_a0 = 0;
    if (lVar7 != 0) {
      FUN_010b03b0(&local_98);
    }
  }
  if (local_50 != (long *)0x0) {
    lVar7 = local_50[6];
    psVar1 = (short *)(lVar7 + 0x1a);
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
      *(undefined8 *)(lVar7 + 0x10) = 0;
      (**(code **)(*local_50 + 0x50))();
    }
    else if (sVar2 == 0) {
LAB_010b0070:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  return;
}


