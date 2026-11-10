/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01666e08; name: FUN_01666e08
 */


void FUN_01666e08(undefined8 *param_1,long *param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  code *pcVar6;
  ulong uVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  long *local_120;
  long lStack_118;
  long local_110;
  long lStack_108;
  long *local_100;
  undefined4 local_f8;
  code *local_f0;
  code *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [96];
  long *local_70;
  long local_68;
  long local_60;
  long local_58;
  long *local_50;
  undefined4 local_48;
  
  FUN_00d1a22c(param_1,0xb);
  *param_1 = &PTR_FUN_045a4468;
  param_1[4] = &PTR_LAB_045a45b0;
  param_1[5] = &DAT_045a46d8;
  param_1[6] = &PTR_LAB_045a4730;
  param_1[7] = &PTR_LAB_045a4758;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x24] = PTR_DAT_047dd2d0 + 0x10;
  param_1[0x25] = 0;
  FUN_00c6a514(param_1 + 7,0x82);
  local_70 = (long *)*param_2;
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x18))();
  }
  local_68 = param_2[1];
  local_60 = param_2[2];
  local_58 = param_2[3];
  local_50 = (long *)param_2[4];
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x18))();
  }
  puVar5 = PTR_DAT_047d8b10;
  local_48 = (undefined4)param_2[5];
  local_e0 = 0;
  uStack_d8 = 0;
  local_f0 = (code *)0x0;
  local_e8 = (code *)0x0;
  if (*(code **)(PTR_DAT_047d8b10 + 0x10) != (code *)0x0) {
    (**(code **)(PTR_DAT_047d8b10 + 0x10))(PTR_DAT_047d8b10 + 0x20,auStack_d0);
    local_f0 = *(code **)puVar5;
    local_e8 = *(code **)(puVar5 + 8);
    local_e0 = *(undefined8 *)(puVar5 + 0x10);
    uStack_d8 = *(undefined8 *)(puVar5 + 0x18);
    if (local_f0 != (code *)0x0) {
      (*local_f0)(&local_120,auStack_d0,param_2);
      plVar9 = local_70;
      local_70 = (long *)0x0;
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x20))();
      }
      plVar9 = local_50;
      local_70 = local_120;
      local_120 = (long *)0x0;
      local_68 = lStack_118;
      local_60 = local_110;
      local_58 = lStack_108;
      local_50 = (long *)0x0;
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x20))(plVar9);
      }
      local_50 = local_100;
      local_100 = (long *)0x0;
      local_48 = local_f8;
      if (local_120 != (long *)0x0) {
        (**(code **)(*local_120 + 0x20))();
      }
    }
  }
  uVar7 = FUN_00fa77bc(param_1 + 0x24,1,&local_70,0,0);
  if (((uVar7 & 1) != 0) && (plVar9 = (long *)param_1[0x28], plVar9 != (long *)0x0)) {
    lVar10 = plVar9[6];
    if (*(long *)(lVar10 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar10 + 0x1a);
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
      uVar8 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
      *(undefined8 *)(lVar10 + 8) = uVar8;
      *(undefined4 *)(lVar10 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
    lVar10 = plVar9[6];
    psVar1 = (short *)(lVar10 + 0x1a);
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
      *(undefined8 *)(lVar10 + 0x10) = 0;
      (**(code **)(*plVar9 + 0x50))(plVar9);
    }
    else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  pcVar6 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = 0;
    uStack_d8 = 0;
    local_f0 = (code *)0x0;
    local_e8 = (code *)0x0;
    (*pcVar6)(auStack_d0);
  }
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  return;
}


