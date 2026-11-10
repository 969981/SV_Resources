/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01305c24; name: FUN_01305c24
 */


undefined8 * FUN_01305c24(long *param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  code *pcVar12;
  long local_50;
  long *local_48;
  undefined1 auStack_28 [4];
  undefined1 local_24 [4];
  
  if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar7 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar7 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = param_1;
  *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
  puVar8 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x470,0x10);
  if (puVar8 == (undefined8 *)0x0) {
    (**(code **)(*param_1 + 0xe8))(param_1);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
               ,0x40);
  }
  FUN_00da3348(puVar8,*(undefined8 *)PTR_DAT_047d8d98);
  *(undefined4 *)(puVar8 + 0x6e) = 1;
  *puVar8 = &PTR_FUN_045eaad8;
  puVar8[0x6d] = 0;
  puVar8[0x6c] = 0;
  *(undefined1 *)((long)puVar8 + 0x374) = 0;
  puVar8[0x70] = 0;
  puVar8[0x71] = 0;
  puVar8[0x72] = 0;
  puVar8[0x73] = 0;
  puVar8[0x80] = 0;
  puVar8[0x81] = 0;
  puVar8[0x82] = 0;
  puVar8[4] = &PTR_LAB_045eab88;
  puVar8[5] = &DAT_045eabd8;
  if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar9 = nn::os::GetTlsValue(DAT_04865a30);
  if (((lVar9 == 0) || (*(long *)(lVar9 + 0x80) == 0)) ||
     (lVar9 = *(long *)(lVar9 + *(long *)(lVar9 + 0x80) * 8 + -8), lVar9 == 0)) {
    lVar5 = tpidr_el0;
    lVar9 = *(long *)(lVar5 + 0x30);
    if (lVar9 == 0) {
      if (((DAT_04859438 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      lVar9 = DAT_04859430;
      *(long *)(lVar5 + 0x30) = DAT_04859430;
    }
  }
  puVar8[0x83] = lVar9;
  puVar8[0x85] = 0;
  *(undefined4 *)(puVar8 + 0x86) = 0;
  puVar8[0x84] = 0x1fffffffffffffff;
  nn::os::InitializeSemaphore((SemaphoreType *)(puVar8 + 0x87),1,1);
  puVar8[0x8c] = 3;
  local_48 = (long *)puVar8[0x3d];
  puVar8[0x8d] = 0;
  local_50 = 0;
  if (puVar8[0x6c] != 0) {
    lVar9 = *(long *)(puVar8[0x6c] + 0x10);
    local_50 = 0;
    if (lVar9 != 0) {
      local_50 = lVar9 + -8;
    }
  }
  local_24[0] = *(undefined1 *)((long)puVar8 + 0x374);
  plVar10 = (long *)FUN_00da2d2c(auStack_28,puVar8[1],&local_48,&local_50,local_24);
  if (plVar10 != (long *)0x0) {
    lVar9 = plVar10[6];
    plVar10[0x37] = plVar10[0x37] | 8;
    if (*(long *)(lVar9 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar9 + 0x1a);
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
      uVar11 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
      *(undefined8 *)(lVar9 + 8) = uVar11;
      *(undefined4 *)(lVar9 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
  }
  pcVar12 = (code *)plVar10[0x71];
  if (pcVar12 != (code *)0x0) {
    plVar10[0x72] = 0;
    plVar10[0x73] = 0;
    plVar10[0x70] = 0;
    plVar10[0x71] = 0;
    (*pcVar12)(plVar10 + 0x74);
  }
  plVar10[0x70] = (long)FUN_019bac1c;
  plVar10[0x71] = (long)&LAB_02de7fe0;
  plVar10[0x74] = (long)puVar8;
  plVar10[0x72] = (long)&LAB_02de7fe4;
  plVar10[0x73] = (long)&LAB_02de7ff0;
  local_48 = plVar10;
  FUN_00da3a8c(puVar8,&local_48);
  if (local_48 != (long *)0x0) {
    lVar9 = local_48[6];
    psVar1 = (short *)(lVar9 + 0x1a);
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
      *(undefined8 *)(lVar9 + 0x10) = 0;
      (**(code **)(*local_48 + 0x50))();
    }
    else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  FUN_0130702c(puVar8);
  *(undefined4 *)(puVar8 + 3) = 0x100470;
  puVar8[1] = param_1;
  puVar8[2] = puVar8;
  *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
  return puVar8;
}


