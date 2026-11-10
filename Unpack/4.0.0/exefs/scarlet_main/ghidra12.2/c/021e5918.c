/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021e5918; name: FUN_021e5918
 */


void FUN_021e5918(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 *param_4)

{
  short *psVar1;
  short sVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  ushort uVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  long *local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  long *plStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  long *plStack_98;
  long local_90;
  long lStack_88;
  long local_80;
  long *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long *local_58;
  
  plVar8 = *(long **)(*param_3 + 0x40);
  if (plVar8 != (long *)0x0) {
    lVar9 = plVar8[6];
    if (*(long *)(lVar9 + 0x10) == 0) goto LAB_021e5c48;
    psVar1 = (short *)(lVar9 + 0x1a);
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
      uVar7 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
      *(undefined8 *)(lVar9 + 8) = uVar7;
      *(undefined4 *)(lVar9 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) goto LAB_021e5c68;
  }
  plVar10 = (long *)plVar8[0xb];
  plVar3 = (long *)PTR_DAT_047d8b70;
  if (plVar10 != (long *)0x0) {
    plVar3 = plVar10 + 6;
  }
  local_90 = *plVar3;
  plVar3 = (long *)PTR_PTR_047d4508;
  if (plVar10 != (long *)0x0) {
    plVar3 = plVar10 + 7;
  }
  lStack_88 = *plVar3;
  if (plVar10 == (long *)0x0) {
    local_80 = 0;
  }
  else {
    local_80 = plVar10[8];
  }
  local_78 = (long *)0x0;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x18))(plVar10);
  }
  local_b0 = *param_4;
  uStack_a8 = param_4[1];
  local_a0 = param_4[2];
  plVar3 = (long *)param_4[3];
  plStack_98 = plVar3;
  local_78 = plVar10;
  if (plVar3 == (long *)0x0) {
    FUN_021e5cb8(&local_70,param_1,&local_90,&local_b0);
  }
  else {
    (**(code **)(*plVar3 + 0x18))(plVar3);
    FUN_021e5cb8(&local_70,param_1,&local_90,&local_b0);
    (**(code **)(*plVar3 + 0x20))(plVar3);
  }
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x20))(plVar10);
  }
  lVar9 = plVar8[6];
  psVar1 = (short *)(lVar9 + 0x1a);
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
    *(undefined8 *)(lVar9 + 0x10) = 0;
    (**(code **)(*plVar8 + 0x50))(plVar8);
  }
  else if (sVar2 == 0) goto LAB_021e5c90;
  plVar8 = local_58;
  local_d0 = local_70;
  uStack_c8 = uStack_68;
  local_c0 = local_60;
  plStack_b8 = local_58;
  if (local_58 == (long *)0x0) {
    uVar6 = FUN_021e5898(param_2,&local_d0);
  }
  else {
    (**(code **)(*local_58 + 0x18))(local_58);
    uVar6 = FUN_021e5898(param_2,&local_d0);
    (**(code **)(*plVar8 + 0x20))(plVar8);
  }
  if ((uVar6 & 0xff) != 0) {
    plVar8 = *(long **)(*param_3 + 0x40);
    if (plVar8 != (long *)0x0) {
      lVar9 = plVar8[6];
      if (*(long *)(lVar9 + 0x10) == 0) {
LAB_021e5c48:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("m_object != nullptr","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x3d);
      }
      psVar1 = (short *)(lVar9 + 0x1a);
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
        uVar7 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
        *(undefined8 *)(lVar9 + 8) = uVar7;
        *(undefined4 *)(lVar9 + 0x1c) = 0xfffffffe;
      }
      else if (sVar2 == -1) {
LAB_021e5c68:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x58,"Reference counter overflows.");
      }
    }
    local_f0 = *param_4;
    uStack_e8 = param_4[1];
    local_e0 = param_4[2];
    local_d8 = (long *)param_4[3];
    if (local_d8 != (long *)0x0) {
      (**(code **)(*local_d8 + 0x18))();
    }
    FUN_021e5d78(plVar8,&local_f0,0xff < uVar6);
    if (local_d8 != (long *)0x0) {
      (**(code **)(*local_d8 + 0x20))();
    }
    if (plVar8 != (long *)0x0) {
      lVar9 = plVar8[6];
      psVar1 = (short *)(lVar9 + 0x1a);
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
        *(undefined8 *)(lVar9 + 0x10) = 0;
        (**(code **)(*plVar8 + 0x50))(plVar8);
      }
      else if (sVar2 == 0) {
LAB_021e5c90:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  return;
}


