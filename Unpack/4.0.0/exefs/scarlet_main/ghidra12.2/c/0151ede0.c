/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0151ede0; name: FUN_0151ede0
 */


void FUN_0151ede0(long *param_1,undefined4 *param_2,undefined4 *param_3,long param_4,
                 undefined8 param_5,long *param_6)

{
  uint *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  long lVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  undefined4 *puVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  char local_c0 [32];
  long *local_a0;
  undefined4 *local_98;
  undefined4 *local_90;
  undefined4 *local_88;
  long *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  
  if (param_6 == (long *)0x0) {
    param_6 = *(long **)(param_2 + 2);
  }
  local_98 = param_2;
  lVar10 = FUN_00dfee60(local_c0,param_6,&local_98);
  *param_1 = lVar10;
  if (lVar10 != 0) {
    piVar2 = (int *)(lVar10 + 0x28);
    do {
      iVar9 = *piVar2;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar7) {
        *piVar2 = iVar9 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar9 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  if (**(char **)(param_4 + 8) != '\0') {
    FUN_00eac828(*param_1,param_4);
  }
  lVar10 = *(long *)(param_2 + 0x1e);
  uVar17 = (ulong)*(byte *)(*(long *)(lVar10 + 0x30) + 0x1b9);
  local_98 = (undefined4 *)0x0;
  local_90 = (undefined4 *)0x0;
  local_88 = (undefined4 *)0x0;
  local_68 = 0;
  local_78 = 0x3fffffffffffffff;
  uStack_70 = 0;
  local_80 = param_6;
  if (uVar17 != 0) {
    lVar10 = uVar17 << 2;
    puVar11 = (undefined4 *)(**(code **)(*param_6 + 0x10))(param_6,lVar10,4);
    if (puVar11 == (undefined4 *)0x0) {
      (**(code **)(*local_80 + 0xe8))();
    }
    puVar3 = puVar11 + uVar17;
    local_98 = puVar11;
    local_90 = puVar11;
    local_88 = puVar3;
    do {
      plVar13 = local_80;
      if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar12 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar12 == 0) {
        *puVar11 = 0;
      }
      else {
        if (0xf < *(ulong *)(lVar12 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long **)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = plVar13;
        *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
        *puVar11 = 0;
        *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
      }
      puVar11 = puVar11 + 1;
      lVar10 = lVar10 + -4;
    } while (lVar10 != 0);
    lVar10 = *(long *)(param_2 + 0x1e);
    local_90 = puVar3;
  }
  lVar12 = (long)local_90 - (long)local_98;
  if ((lVar12 != 0) && (*local_98 = 0, lVar12 != 4)) {
    lVar12 = (lVar12 >> 2) + -2;
    local_98[1] = 0;
    if (lVar12 != 0) {
      puVar11 = local_98 + 2;
      do {
        lVar12 = lVar12 + -1;
        *puVar11 = 0;
        puVar11 = puVar11 + 1;
      } while (lVar12 != 0);
    }
  }
  lVar12 = *(long *)(*(long *)(lVar10 + 0x30) + 0x118);
  for (lVar10 = *(long *)(*(long *)(lVar10 + 0x30) + 0x110); lVar10 != lVar12;
      lVar10 = lVar10 + 0x60) {
    uVar17 = (ulong)*(byte *)(lVar10 + 0x5a) - (ulong)*(byte *)(lVar10 + 0x59);
    if ((ulong)((long)local_90 - (long)local_98 >> 2) <= uVar17) goto LAB_0151f550;
    local_98[uVar17] =
         (uint)*(byte *)(lVar10 + 0x58) << (ulong)(*(byte *)(lVar10 + 0x5b) & 0x1f) |
         local_98[uVar17] & (*(uint *)(lVar10 + 0x5c) ^ 0xffffffff);
  }
  plVar13 = *(long **)(*(long *)(*(long *)(param_2 + 0x1e) + 0x30) + 0x110);
  plVar14 = *(long **)(*(long *)(*(long *)(param_2 + 0x1e) + 0x30) + 0x118);
  plVar15 = plVar13;
  if ((plVar13 != plVar14) && (*plVar13 != 0x3f9b328b5d25fa31)) {
    do {
      plVar15 = plVar15 + 0xc;
      if (plVar14 == plVar15) {
        plVar15 = plVar14;
        goto LAB_0151eff0;
      }
    } while (*plVar15 != 0x3f9b328b5d25fa31);
  }
LAB_0151eff0:
  if (plVar14 != plVar15) {
    iVar9 = (int)((ulong)((long)plVar15 - (long)plVar13) >> 5) * -0x55555555;
    lVar10 = plVar13[(long)iVar9 * 0xc + 4];
    lVar12 = plVar13[(long)iVar9 * 0xc + 5];
    lVar18 = lVar10;
    if (lVar10 != lVar12) {
      lVar4 = lVar10;
      if (*(uint *)(lVar10 + 0x20) != (uint)*(byte *)(param_3 + 5)) {
        do {
          lVar18 = lVar4 + 0x28;
          if (lVar12 == lVar18) {
            lVar18 = lVar12;
            goto LAB_0151f030;
          }
          puVar1 = (uint *)(lVar4 + 0x48);
          lVar4 = lVar18;
        } while (*puVar1 != (uint)*(byte *)(param_3 + 5));
      }
    }
LAB_0151f030:
    if (lVar12 != lVar18) {
      lVar12 = (long)iVar9;
      uVar17 = (ulong)*(byte *)((long)plVar13 + lVar12 * 0x60 + 0x5a) -
               (ulong)*(byte *)((long)plVar13 + lVar12 * 0x60 + 0x59);
      if ((ulong)((long)local_90 - (long)local_98 >> 2) <= uVar17) goto LAB_0151f550;
      local_98[uVar17] =
           (int)((ulong)(lVar18 - lVar10) >> 3) * -0x33333333 <<
           (ulong)(*(byte *)((long)plVar13 + lVar12 * 0x60 + 0x5b) & 0x1f) |
           local_98[uVar17] & (*(uint *)((long)plVar13 + lVar12 * 0x60 + 0x5c) ^ 0xffffffff);
      plVar13 = *(long **)(*(long *)(*(long *)(param_2 + 0x1e) + 0x30) + 0x110);
      plVar14 = *(long **)(*(long *)(*(long *)(param_2 + 0x1e) + 0x30) + 0x118);
    }
  }
  plVar15 = plVar13;
  if ((plVar13 != plVar14) && (*plVar13 != -0xc722efe8987e08f)) {
    do {
      plVar15 = plVar15 + 0xc;
      if (plVar14 == plVar15) {
        plVar15 = plVar14;
        goto LAB_0151f0f0;
      }
    } while (*plVar15 != -0xc722efe8987e08f);
  }
LAB_0151f0f0:
  if (plVar14 != plVar15) {
    iVar9 = (int)((ulong)((long)plVar15 - (long)plVar13) >> 5) * -0x55555555;
    lVar10 = plVar13[(long)iVar9 * 0xc + 4];
    lVar12 = plVar13[(long)iVar9 * 0xc + 5];
    lVar18 = lVar10;
    if (lVar10 != lVar12) {
      lVar4 = lVar10;
      if (*(uint *)(lVar10 + 0x20) != (uint)*(byte *)((long)param_3 + 0x11)) {
        do {
          lVar18 = lVar4 + 0x28;
          if (lVar12 == lVar18) {
            lVar18 = lVar12;
            goto LAB_0151f130;
          }
          puVar1 = (uint *)(lVar4 + 0x48);
          lVar4 = lVar18;
        } while (*puVar1 != (uint)*(byte *)((long)param_3 + 0x11));
      }
    }
LAB_0151f130:
    if (lVar12 != lVar18) {
      lVar12 = (long)iVar9;
      uVar17 = (ulong)*(byte *)((long)plVar13 + lVar12 * 0x60 + 0x5a) -
               (ulong)*(byte *)((long)plVar13 + lVar12 * 0x60 + 0x59);
      if ((ulong)((long)local_90 - (long)local_98 >> 2) <= uVar17) goto LAB_0151f550;
      local_98[uVar17] =
           (int)((ulong)(lVar18 - lVar10) >> 3) * -0x33333333 <<
           (ulong)(*(byte *)((long)plVar13 + lVar12 * 0x60 + 0x5b) & 0x1f) |
           local_98[uVar17] & (*(uint *)((long)plVar13 + lVar12 * 0x60 + 0x5c) ^ 0xffffffff);
    }
  }
  if (*(char *)((long)param_3 + 0x12) == '\0') {
    iVar9 = 0;
    if (*(char *)((long)param_3 + 0x13) != '\0') {
      iVar9 = 3;
    }
  }
  else if (*(char *)((long)param_3 + 0x15) == '\0') {
    iVar9 = 1;
    if (*(char *)((long)param_3 + 0x13) != '\0') {
      iVar9 = 2;
    }
  }
  else {
    iVar9 = 4;
  }
  lVar12 = *(long *)(param_2 + 0x1e);
  lVar10 = *(long *)(lVar12 + 0x30);
  plVar13 = *(long **)(lVar10 + 0x110);
  plVar14 = *(long **)(lVar10 + 0x118);
  plVar15 = plVar13;
  if ((plVar13 != plVar14) && (*plVar13 != 0x1857115a0e76ce46)) {
    do {
      plVar15 = plVar15 + 0xc;
      if (plVar14 == plVar15) {
        plVar15 = plVar14;
        goto LAB_0151f204;
      }
    } while (*plVar15 != 0x1857115a0e76ce46);
  }
LAB_0151f204:
  if (plVar14 != plVar15) {
    iVar5 = (int)((ulong)((long)plVar15 - (long)plVar13) >> 5) * -0x55555555;
    lVar18 = plVar13[(long)iVar5 * 0xc + 4];
    lVar4 = plVar13[(long)iVar5 * 0xc + 5];
    lVar16 = lVar18;
    if ((lVar18 != lVar4) && (lVar8 = lVar18, *(int *)(lVar18 + 0x20) != iVar9)) {
      do {
        lVar16 = lVar8 + 0x28;
        if (lVar4 == lVar16) {
          lVar16 = lVar4;
          goto LAB_0151f244;
        }
        piVar2 = (int *)(lVar8 + 0x48);
        lVar8 = lVar16;
      } while (*piVar2 != iVar9);
    }
LAB_0151f244:
    if (lVar4 != lVar16) {
      lVar10 = (long)iVar5;
      uVar17 = (ulong)*(byte *)((long)plVar13 + lVar10 * 0x60 + 0x5a) -
               (ulong)*(byte *)((long)plVar13 + lVar10 * 0x60 + 0x59);
      if ((ulong)((long)local_90 - (long)local_98 >> 2) <= uVar17) {
LAB_0151f550:
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_out_of_range();
      }
      local_98[uVar17] =
           (int)((ulong)(lVar16 - lVar18) >> 3) * -0x33333333 <<
           (ulong)(*(byte *)((long)plVar13 + lVar10 * 0x60 + 0x5b) & 0x1f) |
           local_98[uVar17] & (*(uint *)((long)plVar13 + lVar10 * 0x60 + 0x5c) ^ 0xffffffff);
      lVar12 = *(long *)(param_2 + 0x1e);
      lVar10 = *(long *)(lVar12 + 0x30);
    }
  }
  lVar18 = *param_1;
  FUN_00d10524(local_c0,lVar10,lVar12 + 0x70,&local_98);
  if (local_c0[0] == '\0') {
    FUN_015200b8(lVar12);
  }
  FUN_00d10690(*(undefined8 *)(lVar18 + 200),0x1f,local_c0);
  if (local_c0[0] != '\0') {
    if (local_a0 != (long *)0x0) {
      (**(code **)(*local_a0 + 0x20))();
    }
    local_c0[0] = '\0';
  }
  FUN_00c973e4(*(undefined8 *)(lVar18 + 200),*param_3);
  FUN_0151fb1c(param_3[1],*(undefined8 *)(lVar18 + 200));
  FUN_0151f580(param_3[2],*(undefined8 *)(lVar18 + 200));
  if (param_3[3] != 0) {
    FUN_00c4db90(*(undefined8 *)(lVar18 + 200),param_3[3],0,0,0,0);
  }
  plVar13 = local_80;
  puVar11 = local_98;
  if (local_98 != (undefined4 *)0x0) {
    local_90 = local_98;
    lVar10 = (long)local_88 - (long)local_98;
    uVar17 = (**(code **)(*local_80 + 0xf8))(local_80);
    if (((uVar17 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
      (**(code **)(*plVar13 + 0x18))(plVar13,puVar11,lVar10,4);
    }
    else {
      FUN_00c48fe8(plVar13,puVar11,lVar10,4);
    }
  }
  return;
}


