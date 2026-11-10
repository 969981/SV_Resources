/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012117bc; name: FUN_012117bc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_012117bc(long *param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  int iVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  undefined8 *local_68;
  undefined8 uStack_60;
  undefined8 *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  puVar8 = PTR_DAT_047d66f8;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar8 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar11 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar11 == 0) {
    lVar13 = 0;
  }
  else {
    lVar13 = 0;
    if (*(long *)(lVar11 + 0x80) != 0) {
      lVar13 = *(long *)(lVar11 + *(long *)(lVar11 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = (long)&PTR_FUN_0459d098;
  param_1[1] = lVar13;
  param_1[4] = (long)&PTR_LAB_0459d0d0;
  param_1[6] = (long)&LAB_02b3e8bc;
  param_1[7] = (long)&LAB_02b3e8c4;
  param_1[8] = (long)&LAB_02b3e8c8;
  param_1[9] = (long)&LAB_02b3e8cc;
  param_1[0x19] = 0;
  plVar15 = param_1 + 0x16;
  *plVar15 = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar11 = nn::os::GetTlsValue(DAT_04865a30);
  if (((lVar11 == 0) || (*(long *)(lVar11 + 0x80) == 0)) ||
     (lVar11 = *(long *)(lVar11 + *(long *)(lVar11 + 0x80) * 8 + -8), lVar11 == 0)) {
    lVar13 = tpidr_el0;
    lVar11 = *(long *)(lVar13 + 0x30);
    if (lVar11 == 0) {
      if (((DAT_04859438 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      lVar11 = DAT_04859430;
      *(long *)(lVar13 + 0x30) = DAT_04859430;
    }
  }
  param_1[0x1a] = lVar11;
  lVar7 = _UNK_03cabe68;
  lVar6 = _DAT_03cabe60;
  lVar13 = DAT_03cab628;
  lVar11 = DAT_03cab620;
  *(undefined4 *)(param_1 + 0x1e) = 0x42a00000;
  param_1[0x21] = lVar13;
  param_1[0x20] = lVar11;
  param_1[0x23] = lVar7;
  param_1[0x22] = lVar6;
  lVar7 = _UNK_03cabe58;
  lVar6 = _DAT_03cabe50;
  lVar13 = _UNK_03caa5b8;
  lVar11 = _DAT_03caa5b0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  param_1[0x1b] = 0x3fffffffffffffff;
  param_1[0x1c] = 0;
  param_1[0x25] = lVar13;
  param_1[0x24] = lVar11;
  param_1[0x27] = lVar7;
  param_1[0x26] = lVar6;
  memset(param_1 + 0x2a,0,0x100);
  *(undefined1 *)(param_1 + 0x4a) = 1;
  plVar14 = (long *)param_1[1];
  if (((DAT_04865a38 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar11 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar11 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = plVar14;
  *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
  lVar13 = (**(code **)(*plVar14 + 0x10))(plVar14,0xd8,8);
  if (lVar13 == 0) {
    (**(code **)(*plVar14 + 0xe8))(plVar14);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
               ,0x40);
  }
  FUN_01211e2c();
  *(undefined4 *)(lVar13 + 0x18) = 0x800d8;
  *(long **)(lVar13 + 8) = plVar14;
  *(long *)(lVar13 + 0x10) = lVar13;
  *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
  lVar11 = *(long *)(lVar13 + 0x30);
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
    uVar12 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
    *(undefined8 *)(lVar11 + 8) = uVar12;
    *(undefined4 *)(lVar11 + 0x1c) = 0xfffffffe;
  }
  else if (sVar3 == -1) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != 0","AddReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
               ,0x58,"Reference counter overflows.");
  }
  plVar14 = (long *)*plVar15;
  *plVar15 = 0;
  if (plVar14 != (long *)0x0) {
    lVar11 = plVar14[6];
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
      (**(code **)(*plVar14 + 0x50))();
    }
    else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  *plVar15 = lVar13;
  local_58 = (undefined8 *)0x0;
  uStack_50 = 0;
  FUN_00c43ef0(&local_58,(long *)(lVar13 + 0x30));
  local_68 = (undefined8 *)0x0;
  uStack_60 = 0;
  if (local_58[2] == lVar13 + 0x28) {
    FUN_01211f88(&local_68,&local_58);
  }
  puVar9 = local_58;
  if (local_58 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_58 + 3);
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
      piVar2 = (int *)((long)local_58 + 0x1c);
      do {
        iVar10 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_48 = *puVar9;
        FUN_00c44438(lVar11 + 0x8040,&local_48);
      }
    }
    else if (sVar3 == 0) goto LAB_01211aa0;
  }
  FUN_01212358(param_1 + 0x2a,&local_68);
  puVar9 = local_68;
  if (local_68 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_68 + 3);
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
      piVar2 = (int *)((long)local_68 + 0x1c);
      do {
        iVar10 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_58 = (undefined8 *)*puVar9;
        FUN_00c44438(lVar11 + 0x8040,&local_58);
      }
    }
    else if (sVar3 == 0) {
LAB_01211aa0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}


