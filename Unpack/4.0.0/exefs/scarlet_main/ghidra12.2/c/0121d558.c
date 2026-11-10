/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0121d558; name: FUN_0121d558
 */


void FUN_0121d558(long param_1,undefined8 param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long *local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  long *local_a8;
  undefined4 local_a0;
  long *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  long *local_78;
  undefined4 local_70;
  long *local_68;
  undefined8 local_60;
  undefined *puStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined *puStack_40;
  undefined8 local_38;
  
  local_48 = DAT_04546ef8;
  puStack_40 = PTR_s__bfbs_04546f00;
  local_38 = DAT_04546f08;
  local_60 = DAT_04546f10;
  puStack_58 = PTR_DAT_04546f18;
  local_50 = DAT_04546f20;
  FUN_0121d8bc(&local_68,param_2,&local_48);
  FUN_011a6b30(&local_98,&local_68);
  uVar5 = FUN_00dc5c18(param_1,1,&local_98,0,0);
  if (((uVar5 & 1) != 0) && (plVar7 = *(long **)(param_1 + 0x20), plVar7 != (long *)0x0)) {
    lVar8 = plVar7[6];
    if (*(long *)(lVar8 + 0x10) == 0) goto LAB_0121d874;
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
      uVar6 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
      *(undefined8 *)(lVar8 + 8) = uVar6;
      *(undefined4 *)(lVar8 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) goto LAB_0121d894;
    lVar8 = plVar7[6];
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
      (**(code **)(*plVar7 + 0x50))(plVar7);
    }
    else if (sVar2 == 0) goto LAB_0121d75c;
  }
  FUN_0121d8bc(&local_c8,param_2,&local_60);
  plVar7 = local_68;
  local_68 = (long *)0x0;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x20))();
  }
  local_68 = local_c8;
  FUN_011a6b30(&local_c8,&local_68);
  plVar7 = local_98;
  local_98 = (long *)0x0;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x20))();
  }
  plVar7 = local_78;
  local_98 = local_c8;
  local_c8 = (long *)0x0;
  uStack_90 = uStack_c0;
  local_88 = local_b8;
  uStack_80 = uStack_b0;
  local_78 = (long *)0x0;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x20))(plVar7);
  }
  local_78 = local_a8;
  local_a8 = (long *)0x0;
  local_70 = local_a0;
  if (local_c8 != (long *)0x0) {
    (**(code **)(*local_c8 + 0x20))();
  }
  uVar5 = FUN_00dc5c18(param_1 + 0x40,1,&local_98,0,0);
  if (((uVar5 & 1) != 0) && (plVar7 = *(long **)(param_1 + 0x60), plVar7 != (long *)0x0)) {
    lVar8 = plVar7[6];
    if (*(long *)(lVar8 + 0x10) == 0) {
LAB_0121d874:
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
      uVar6 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
      *(undefined8 *)(lVar8 + 8) = uVar6;
      *(undefined4 *)(lVar8 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) {
LAB_0121d894:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
    lVar8 = plVar7[6];
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
      (**(code **)(*plVar7 + 0x50))(plVar7);
    }
    else if (sVar2 == 0) {
LAB_0121d75c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  *(undefined2 *)(param_1 + 0x118) = 0;
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x20))();
  }
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  return;
}


