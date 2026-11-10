/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00cd6620; name: FUN_00cd6620
 */


void FUN_00cd6620(long *param_1,ulong param_2,long param_3,ulong param_4,undefined4 param_5)

{
  int *piVar1;
  long *plVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  long *plVar15;
  undefined8 *puVar16;
  long *plVar17;
  uint uVar18;
  ulong uVar19;
  ulong uVar20;
  long *plVar21;
  long *plVar22;
  long *plVar23;
  long *plVar24;
  undefined1 auStack_78 [8];
  long *local_70;
  long *local_68;
  
  param_1[2] = 0;
  puVar6 = PTR_DAT_047d66f8;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar6 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar8 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar8 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = 0;
    if (*(long *)(lVar8 + 0x80) != 0) {
      lVar11 = *(long *)(lVar8 + *(long *)(lVar8 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = (long)&PTR_LAB_045d0e38;
  param_1[1] = lVar11;
  param_1[4] = (long)&PTR_LAB_045d0e70;
  param_1[6] = 0;
  *(undefined4 *)((long)param_1 + 0x44) = 1;
  nn::os::InitializeLightEvent(param_1 + 7,0,1);
  plVar21 = param_1 + 0xc;
  *plVar21 = 0;
  plVar24 = param_1 + 9;
  *plVar24 = param_3 * param_2;
  param_1[10] = 4;
  param_1[0xd] = 0;
  param_1[0xe] = param_2;
  *(undefined4 *)(param_1 + 0xb) = 0;
  uVar14 = param_2;
  uVar20 = param_4;
  if (param_4 < param_2) {
LAB_00cd6708:
    if (uVar20 != 0) {
      uVar12 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar19 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20);
      uVar12 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar20 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20);
      uVar10 = (uint)uVar12;
      uVar18 = (uint)uVar19;
      if (uVar10 <= uVar18) {
        uVar18 = uVar10;
      }
      uVar14 = uVar14 >> (uVar19 & 0x3f);
      uVar20 = uVar20 >> (uVar12 & 0x3f);
      while (1 < uVar20) {
        uVar12 = 0;
        if (uVar20 != 0) {
          uVar12 = uVar14 / uVar20;
        }
        uVar12 = uVar14 - uVar12 * uVar20;
        uVar14 = uVar20 - uVar12;
        if (uVar12 == 0) goto LAB_00cd673c;
        if (uVar14 == 0) {
          uVar20 = uVar12 << ((ulong)uVar18 & 0x3f);
          goto LAB_00cd6740;
        }
        uVar20 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
        uVar20 = (uVar20 & 0xcccccccccccccccc) >> 2 | (uVar20 & 0x3333333333333333) << 2;
        uVar20 = (uVar20 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar20 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar20 = (uVar20 & 0xff00ff00ff00ff00) >> 8 | (uVar20 & 0xff00ff00ff00ff) << 8;
        uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10;
        uVar20 = uVar12 >> (LZCOUNT(uVar20 >> 0x20 | uVar20 << 0x20) & 0x3fU);
        uVar12 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
        uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
        uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
        uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
        uVar12 = uVar14 >> (LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) & 0x3fU);
        uVar14 = uVar12;
        if (uVar12 <= uVar20) {
          uVar14 = uVar20;
          uVar20 = uVar12;
        }
      }
      if (uVar20 == 1) {
        uVar14 = 1;
      }
LAB_00cd673c:
      uVar20 = uVar14 << ((ulong)uVar18 & 0x3f);
      goto LAB_00cd6740;
    }
LAB_00cd6748:
    iVar7 = 0;
    if (uVar14 != 0) {
      iVar7 = (int)(param_4 / uVar14);
    }
    iVar7 = iVar7 * (int)param_2;
  }
  else {
    uVar14 = param_4;
    uVar20 = param_2;
    if (param_4 != 0) goto LAB_00cd6708;
LAB_00cd6740:
    uVar14 = uVar20;
    iVar7 = 0;
    if (uVar14 != 0) goto LAB_00cd6748;
  }
  *(int *)(param_1 + 10) = iVar7;
  (*DAT_04859f60)(&local_70,&DAT_04859f80);
  local_68 = local_70;
  lVar8 = FUN_00cf3764(auStack_78,local_70[1],&local_68);
  if (lVar8 != 0) {
    piVar1 = (int *)(lVar8 + 0x28);
    do {
      iVar7 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar7 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 == -1) goto LAB_00cd6d64;
  }
  FUN_00d560a0(lVar8,plVar24,param_5,0,0);
  plVar9 = (long *)*plVar21;
  *plVar21 = 0;
  if (plVar9 != (long *)0x0) {
    plVar23 = plVar9 + 5;
    do {
      lVar11 = *plVar23;
      iVar7 = (int)lVar11 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar5) {
        *(int *)plVar23 = iVar7;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar9 + 0x10))();
    }
    else if ((int)lVar11 == 0) goto LAB_00cd6ad0;
  }
  *plVar21 = lVar8;
  if (local_70 != (long *)0x0) {
    plVar21 = local_70 + 5;
    do {
      lVar8 = *plVar21;
      iVar7 = (int)lVar8 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar5) {
        *(int *)plVar21 = iVar7;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
    else if ((int)lVar8 == 0) goto LAB_00cd6ad0;
  }
  plVar21 = (long *)param_1[1];
  if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar8 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar8 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = plVar21;
  *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
  plVar9 = (long *)(**(code **)(*plVar21 + 0x10))(plVar21,0x120,8);
  if (plVar9 == (long *)0x0) {
    (**(code **)(*plVar21 + 0xe8))(plVar21);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
               ,0x40);
  }
  plVar24 = (long *)*plVar24;
  *plVar9 = (long)(puVar6 + 0x10);
  plVar9[2] = 0;
  *(undefined4 *)(plVar9 + 3) = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
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
  plVar9[1] = lVar13;
  plVar23 = plVar9 + 5;
  *(int *)plVar23 = 0;
  *plVar9 = (long)&PTR_LAB_045d0dd0;
  plVar9[4] = (long)&PTR_LAB_045d0e08;
  plVar9[6] = 0;
  *(undefined4 *)((long)plVar9 + 0x44) = 1;
  nn::os::InitializeLightEvent(plVar9 + 7,0,1);
  memset(plVar9 + 9,0,0x70);
  if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar13 = nn::os::GetTlsValue(DAT_04865a30);
  lVar11 = tpidr_el0;
  if ((((lVar13 == 0) || (*(long *)(lVar13 + 0x80) == 0)) ||
      (lVar13 = *(long *)(lVar13 + *(long *)(lVar13 + 0x80) * 8 + -8), lVar13 == 0)) &&
     (lVar13 = *(long *)(lVar11 + 0x30), lVar13 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04859438), iVar7 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar13 = DAT_04859430;
    *(long *)(lVar11 + 0x30) = DAT_04859430;
  }
  *(undefined4 *)(plVar9 + 0x10) = 0;
  plVar9[0xd] = lVar13;
  plVar9[0xe] = 0x3ffffffffffffff;
  plVar9[0xf] = 0;
  plVar9[0x11] = 0;
  plVar9[0x12] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar13 = nn::os::GetTlsValue(DAT_04865a30);
  if ((((lVar13 == 0) || (*(long *)(lVar13 + 0x80) == 0)) ||
      (lVar13 = *(long *)(lVar13 + *(long *)(lVar13 + 0x80) * 8 + -8), lVar13 == 0)) &&
     (lVar13 = *(long *)(lVar11 + 0x30), lVar13 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04859438), iVar7 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar13 = DAT_04859430;
    *(long *)(lVar11 + 0x30) = DAT_04859430;
  }
  plVar22 = plVar9 + 0x1f;
  *plVar22 = 0;
  plVar9[0x13] = lVar13;
  plVar15 = plVar9 + 0x19;
  *(undefined4 *)(plVar9 + 0x16) = 0;
  plVar9[0x20] = (long)plVar22;
  plVar9[0x14] = 0x3ffffffffffffff;
  plVar9[0x15] = 0;
  plVar2 = plVar9 + 0x21;
  plVar9[0x1e] = 0;
  plVar9[0x18] = 0;
  plVar9[0x19] = (long)plVar15;
  plVar9[0x1a] = (long)plVar15;
  plVar9[0x1b] = 0;
  plVar9[0x1c] = (long)(plVar9 + 0x1c);
  plVar9[0x1d] = (long)(plVar9 + 0x1c);
  plVar9[0x21] = (long)plVar22;
  plVar9[0x22] = 0;
  *(undefined4 *)(plVar9 + 0x22) = 0;
  local_68 = (long *)0x0;
  local_70 = plVar24;
  FUN_00c8b7ec(plVar9 + 9,&local_68,&local_70);
  uVar14 = (plVar9[0x12] + plVar9[0x11]) - 1;
  puVar16 = (undefined8 *)plVar9[0x1a];
  puVar3 = (undefined8 *)
           (*(long *)(plVar9[10] + (uVar14 >> 3 & 0x1ffffffffffffff8)) + (uVar14 & 0x3f) * 0x40);
  *puVar3 = plVar15;
  puVar3[1] = puVar16;
  plVar9[0x1a] = (long)puVar3;
  *puVar16 = puVar3;
  plVar9[0x18] = plVar9[0x18] + 1;
  plVar15 = (long *)plVar9[0x21];
  puVar16 = puVar3 + 2;
  plVar9[0x1e] = plVar9[0x1e] + 1;
  if (plVar15 == plVar22) {
    plVar17 = plVar9 + 0x20;
    *plVar22 = (long)puVar16;
    *plVar2 = (long)puVar16;
LAB_00cd6a94:
    *plVar17 = (long)puVar16;
  }
  else {
    plVar15[2] = (long)puVar16;
    if (plVar15 == (long *)*plVar2) {
      plVar17 = plVar2;
      goto LAB_00cd6a94;
    }
  }
  *puVar16 = plVar15;
  puVar3[3] = 0;
  puVar3[4] = 0;
  FUN_00d287fc(plVar22);
  plVar9[0x23] = (long)plVar24;
  plVar9[1] = (long)plVar21;
  plVar9[2] = (long)plVar9;
  *(undefined4 *)(plVar9 + 3) = 0x80120;
  *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
  do {
    lVar8 = *plVar23;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar23,0x10);
    if (bVar5) {
      *(int *)plVar23 = (int)lVar8 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if ((int)lVar8 == -1) {
LAB_00cd6d64:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != 0","IncrementReferenceInternal",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
               ,0x53,"Reference counter overflows.");
  }
  plVar24 = (long *)param_1[0xd];
  param_1[0xd] = 0;
  if (plVar24 != (long *)0x0) {
    plVar21 = plVar24 + 5;
    do {
      lVar8 = *plVar21;
      iVar7 = (int)lVar8 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar5) {
        *(int *)plVar21 = iVar7;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar24 + 0x10))();
    }
    else if ((int)lVar8 == 0) {
LAB_00cd6ad0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  param_1[0xd] = (long)plVar9;
  return;
}


