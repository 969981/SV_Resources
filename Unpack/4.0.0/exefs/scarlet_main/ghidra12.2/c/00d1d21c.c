/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d1d21c; name: FUN_00d1d21c
 */


void FUN_00d1d21c(long param_1,undefined8 param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  long *local_b0 [4];
  long *local_90;
  byte local_80 [16];
  long local_70;
  byte local_68 [16];
  long local_58;
  undefined8 local_50;
  undefined8 local_48;
  long *local_28;
  
  uVar9 = *(undefined8 *)(param_1 + 8);
  lVar5 = tpidr_el0;
  if (*(long *)(lVar5 + 0x30) == 0) {
    if (((DAT_04859438 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    *(long **)(lVar5 + 0x30) = DAT_04859430;
  }
  local_80[5] = 0;
  local_50 = *(undefined8 *)(lVar5 + 0x30);
  local_48 = *(undefined8 *)(lVar5 + 0x38);
  *(undefined8 *)(lVar5 + 0x30) = uVar9;
  *(undefined2 *)(lVar5 + 0x38) = 1;
  local_68[0] = 10;
  local_68[1] = 0x2e;
  local_68[2] = 0x62;
  local_68[3] = 0x66;
  local_68[4] = 0x62;
  local_68[5] = 0x73;
  local_68[6] = 0;
  local_80[0] = 8;
  local_80[1] = 0x2e;
  local_80[2] = 0x62;
  local_80[3] = 0x69;
  local_80[4] = 0x6e;
  FUN_00d1bf60(&local_28,param_2,local_68);
  FUN_01221874(local_b0,&local_28);
  uVar7 = FUN_00dc5c18(param_1 + 0x9b0,1,local_b0,0,0);
  if (((uVar7 & 1) != 0) && (plVar10 = *(long **)(param_1 + 0x9d0), plVar10 != (long *)0x0)) {
    lVar8 = plVar10[6];
    if (*(long *)(lVar8 + 0x10) == 0) goto LAB_00d1d6f0;
    psVar1 = (short *)(lVar8 + 0x1a);
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
      uVar9 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
      *(undefined8 *)(lVar8 + 8) = uVar9;
      *(undefined4 *)(lVar8 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) goto LAB_00d1d710;
    lVar8 = plVar10[6];
    psVar1 = (short *)(lVar8 + 0x1a);
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
      *(undefined8 *)(lVar8 + 0x10) = 0;
      (**(code **)(*plVar10 + 0x50))(plVar10);
    }
    else if (sVar2 == 0) goto LAB_00d1d468;
  }
  if (local_90 != (long *)0x0) {
    (**(code **)(*local_90 + 0x20))();
  }
  if (local_b0[0] != (long *)0x0) {
    (**(code **)(*local_b0[0] + 0x20))();
  }
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  FUN_00d1bf60(&local_28,param_2,local_80);
  FUN_01221874(local_b0,&local_28);
  uVar7 = FUN_00dc5c18(param_1 + 0x9f0,1,local_b0,0,0);
  if (((uVar7 & 1) != 0) && (plVar10 = *(long **)(param_1 + 0xa10), plVar10 != (long *)0x0)) {
    lVar8 = plVar10[6];
    if (*(long *)(lVar8 + 0x10) == 0) {
LAB_00d1d6f0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar8 + 0x1a);
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
      uVar9 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
      *(undefined8 *)(lVar8 + 8) = uVar9;
      *(undefined4 *)(lVar8 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) {
LAB_00d1d710:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
    lVar8 = plVar10[6];
    psVar1 = (short *)(lVar8 + 0x1a);
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
      *(undefined8 *)(lVar8 + 0x10) = 0;
      (**(code **)(*plVar10 + 0x50))(plVar10);
    }
    else if (sVar2 == 0) {
LAB_00d1d468:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  if (local_90 != (long *)0x0) {
    (**(code **)(*local_90 + 0x20))();
  }
  if (local_b0[0] != (long *)0x0) {
    (**(code **)(*local_b0[0] + 0x20))();
  }
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  if (((local_80[0] & 1) != 0) && (local_70 != 0)) {
    plVar10 = *(long **)(lVar5 + 0x30);
    if (plVar10 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar10 = DAT_04859430;
      *(long **)(lVar5 + 0x30) = DAT_04859430;
    }
    uVar7 = (**(code **)(*plVar10 + 0xf8))(plVar10);
    if (((uVar7 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
      (**(code **)(*plVar10 + 0x18))(plVar10,local_70,0,8);
    }
    else {
      FUN_00c48fe8(plVar10,local_70,0,8);
    }
  }
  if (((local_68[0] & 1) != 0) && (local_58 != 0)) {
    plVar10 = *(long **)(lVar5 + 0x30);
    if (plVar10 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar10 = DAT_04859430;
      *(long **)(lVar5 + 0x30) = DAT_04859430;
    }
    uVar7 = (**(code **)(*plVar10 + 0xf8))(plVar10);
    if (((uVar7 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
      (**(code **)(*plVar10 + 0x18))(plVar10,local_58,0,8);
    }
    else {
      FUN_00c48fe8(plVar10,local_58,0,8);
    }
  }
  *(undefined8 *)(lVar5 + 0x30) = local_50;
  *(undefined2 *)(lVar5 + 0x38) = (undefined2)local_48;
  return;
}


