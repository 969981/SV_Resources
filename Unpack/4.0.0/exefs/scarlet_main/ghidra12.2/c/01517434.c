/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01517434; name: FUN_01517434
 */


void FUN_01517434(undefined8 *param_1)

{
  short *psVar1;
  undefined *puVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  undefined8 local_60;
  long *local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  FUN_0104c068();
  param_1[0x2b] = 0;
  *param_1 = &DAT_04598208;
  param_1[0x4b] = 0;
  param_1[0x4a] = 0;
  param_1[0x27] = &PTR_LAB_04598418;
  param_1[0x28] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x49] = 0;
  param_1[0x48] = 0;
  param_1[0x5b] = 0;
  param_1[0x5a] = 0;
  param_1[0x59] = 0;
  param_1[0x58] = 0;
  param_1[0x6b] = 0;
  param_1[0x6a] = 0;
  param_1[0x69] = 0;
  param_1[0x68] = 0;
  param_1[0x7b] = 0;
  param_1[0x7a] = 0;
  param_1[0x79] = 0;
  param_1[0x78] = 0;
  param_1[0x23] = &DAT_cbf29ce484222645;
  param_1[0x24] = &DAT_03c886bc;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[4] = &PTR_LAB_04598370;
  param_1[5] = &DAT_045983c0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  *(undefined8 *)((long)param_1 + 0x444) = 0;
  param_1[0x8c] = &DAT_cbf29ce484222645;
  param_1[0x94] = 0x320000001e;
  *(undefined4 *)((long)param_1 + 0x44c) = 0;
  param_1[0x8b] = 0;
  param_1[0x8d] = &DAT_03c886bc;
  param_1[0x90] = 0;
  param_1[0x8f] = 0;
  param_1[0x8e] = 0;
  param_1[0x9c] = 0;
  param_1[0x9b] = 0;
  param_1[0x9a] = 0;
  param_1[0x99] = 0;
  param_1[0x98] = 0;
  param_1[0x97] = 0;
  param_1[0x96] = 0;
  param_1[0x95] = 0;
  FUN_0104bf58(param_1 + 0x9d);
  FUN_01517970(param_1 + 0xa1);
  FUN_01517a80(param_1 + 0xa5);
  param_1[0xac] = 0x492492492492492;
  param_1[0xb1] = 0x492492492492492;
  *(undefined4 *)(param_1 + 0xb5) = 0x3f800000;
  param_1[0xa9] = 0;
  param_1[0xaa] = 0;
  param_1[0xad] = 0;
  param_1[0xab] = param_1[1];
  *(undefined4 *)(param_1 + 0xae) = 0;
  param_1[0xaf] = 0;
  param_1[0xb0] = param_1[1];
  param_1[0xb2] = 0;
  *(undefined4 *)(param_1 + 0xb3) = 0;
  param_1[0xb4] = 0;
  *(undefined8 *)((long)param_1 + 0x5bc) = 0;
  lVar7 = FUN_01517f94(&local_60);
  if (lVar7 != 0) {
    lVar11 = *(long *)(lVar7 + 0x30);
    if (*(long *)(lVar11 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar11 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
      *(undefined8 *)(lVar11 + 8) = uVar10;
      *(undefined4 *)(lVar11 + 0x1c) = 0xfffffffe;
    }
    else if (sVar3 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
  }
  plVar8 = (long *)param_1[0x8b];
  param_1[0x8b] = 0;
  if (plVar8 != (long *)0x0) {
    lVar11 = plVar8[6];
    psVar1 = (short *)(lVar11 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar11 + 0x10) = 0;
      (**(code **)(*plVar8 + 0x50))();
    }
    else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  plVar12 = (long *)param_1[1];
  param_1[0x8b] = lVar7;
  plVar8 = (long *)(**(code **)(*plVar12 + 0x10))(plVar12,0x60,8);
  if (plVar8 == (long *)0x0) {
    local_50 = 0;
    local_48 = 0;
    local_58 = (long *)0x0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar7 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar7 + 0x80)) goto LAB_01517924;
    *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = plVar12;
    puVar2 = PTR_DAT_047dd0d0 + 0x10;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
    *plVar8 = (long)puVar2;
    memset(plVar8 + 1,0,0x58);
    local_50 = 0x60;
    local_48 = 8;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
    local_58 = plVar12;
  }
  local_60 = 0;
  lVar7 = param_1[0x95];
  param_1[0x95] = plVar8;
  if (lVar7 != 0) {
    FUN_0181db10(param_1 + 0x96);
  }
  param_1[0x97] = local_50;
  param_1[0x98] = local_48;
  param_1[0x96] = local_58;
  plVar8 = (long *)param_1[1];
  puVar9 = (undefined8 *)(**(code **)(*plVar8 + 0x10))(plVar8,0x10,8);
  if (puVar9 == (undefined8 *)0x0) {
    local_50 = 0;
    local_48 = 0;
    local_58 = (long *)0x0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar7 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar7 + 0x80)) {
LAB_01517924:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = plVar8;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
    *puVar9 = 0;
    puVar9[1] = 0;
    local_50 = 0x10;
    local_48 = 8;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
    local_58 = plVar8;
  }
  local_60 = 0;
  lVar7 = param_1[0x99];
  param_1[0x99] = puVar9;
  if (lVar7 == 0) {
    param_1[0x9c] = local_48;
    param_1[0x9b] = local_50;
    param_1[0x9a] = local_58;
  }
  else {
    FUN_017a0d80(param_1 + 0x9a);
    param_1[0x9c] = local_48;
    param_1[0x9b] = local_50;
    param_1[0x9a] = local_58;
    puVar9 = (undefined8 *)param_1[0x99];
  }
  local_60 = 0;
  puVar9[1] = param_1 + 0x27;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1[0x95] + 0x14) = 0;
  *(undefined4 *)(param_1[0x95] + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x8a) = 0;
  FUN_01517b90(param_1[0x99],param_1[1]);
  param_1[0xb6] = 0;
  param_1[0xb7] = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  return;
}


