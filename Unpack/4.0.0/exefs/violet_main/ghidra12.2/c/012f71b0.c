/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012f71b0; name: FUN_012f71b0
 */


undefined8 * FUN_012f71b0(long *param_1,long *param_2,undefined1 *param_3,int *param_4)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  code *pcVar13;
  undefined1 local_6c [4];
  long local_68;
  long *local_60;
  undefined1 auStack_58 [8];
  
  if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar8 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar8 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = param_1;
  *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
  puVar9 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x470,0x10);
  if (puVar9 == (undefined8 *)0x0) {
    (**(code **)(*param_1 + 0xe8))(param_1);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
               ,0x40);
  }
  iVar6 = *param_4;
  lVar10 = 0;
  if (*param_2 != 0) {
    lVar10 = *param_2 + 0x20;
  }
  FUN_00da2ea0(puVar9,*(undefined8 *)PTR_DAT_047d8d98,lVar10,*param_3);
  *puVar9 = &PTR_FUN_045eb8f8;
  puVar9[0x70] = 0;
  puVar9[4] = &PTR_LAB_045eb9a8;
  puVar9[5] = &DAT_045eb9f8;
  puVar9[0x71] = 0;
  puVar9[0x72] = 0;
  puVar9[0x73] = 0;
  puVar9[0x80] = 0;
  puVar9[0x81] = 0;
  puVar9[0x82] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar10 = nn::os::GetTlsValue(DAT_04865a30);
  if (((lVar10 == 0) || (*(long *)(lVar10 + 0x80) == 0)) ||
     (lVar10 = *(long *)(lVar10 + *(long *)(lVar10 + 0x80) * 8 + -8), lVar10 == 0)) {
    lVar5 = tpidr_el0;
    lVar10 = *(long *)(lVar5 + 0x30);
    if (lVar10 == 0) {
      if (((DAT_04859438 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04859438), iVar7 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      lVar10 = DAT_04859430;
      *(long *)(lVar5 + 0x30) = DAT_04859430;
    }
  }
  puVar9[0x83] = lVar10;
  puVar9[0x85] = 0;
  *(undefined4 *)(puVar9 + 0x86) = 0;
  puVar9[0x84] = 0x1fffffffffffffff;
  nn::os::InitializeSemaphore((SemaphoreType *)(puVar9 + 0x87),1,1);
  local_60 = (long *)puVar9[0x3d];
  puVar9[0x8d] = 0;
  puVar9[0x8c] = (long)iVar6;
  local_68 = 0;
  if (puVar9[0x6c] != 0) {
    lVar10 = *(long *)(puVar9[0x6c] + 0x10);
    local_68 = 0;
    if (lVar10 != 0) {
      local_68 = lVar10 + -8;
    }
  }
  local_6c[0] = *(undefined1 *)((long)puVar9 + 0x374);
  plVar11 = (long *)FUN_00da2d2c(auStack_58,puVar9[1],&local_60,&local_68,local_6c);
  if (plVar11 != (long *)0x0) {
    lVar10 = plVar11[6];
    plVar11[0x37] = plVar11[0x37] | 8;
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
      uVar12 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
      *(undefined8 *)(lVar10 + 8) = uVar12;
      *(undefined4 *)(lVar10 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
  }
  pcVar13 = (code *)plVar11[0x71];
  if (pcVar13 != (code *)0x0) {
    plVar11[0x72] = 0;
    plVar11[0x73] = 0;
    plVar11[0x70] = 0;
    plVar11[0x71] = 0;
    (*pcVar13)(plVar11 + 0x74);
  }
  plVar11[0x70] = (long)&LAB_028f4c08;
  plVar11[0x71] = (long)&LAB_02dfd808;
  plVar11[0x74] = (long)puVar9;
  plVar11[0x72] = (long)&LAB_02dfd80c;
  plVar11[0x73] = (long)&LAB_02dfd818;
  local_60 = plVar11;
  FUN_00da3a8c(puVar9,&local_60);
  if (local_60 != (long *)0x0) {
    lVar10 = local_60[6];
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
      (**(code **)(*local_60 + 0x50))();
    }
    else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  FUN_00da2088(puVar9);
  *(undefined4 *)(puVar9 + 3) = 0x100470;
  puVar9[1] = param_1;
  puVar9[2] = puVar9;
  *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
  return puVar9;
}


