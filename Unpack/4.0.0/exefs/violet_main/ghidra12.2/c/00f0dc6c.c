/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f0dc6c; name: FUN_00f0dc6c
 */


void FUN_00f0dc6c(long param_1,undefined8 param_2,long *param_3,undefined4 param_4,long *param_5)

{
  ulong uVar1;
  int *piVar2;
  short sVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  undefined8 *puVar14;
  ulong uVar15;
  ulong uVar16;
  long *plVar17;
  long lVar18;
  undefined8 *puVar19;
  char *pcVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long *local_c0;
  undefined1 *local_b8;
  long local_b0;
  long *local_a8;
  long local_a0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  long local_68;
  
  plVar13 = (long *)*param_5;
  plVar11 = (long *)param_5[1];
  if (plVar13 != plVar11) {
    plVar17 = plVar13;
LAB_00f0dcb0:
    if (*plVar17 != *param_3) goto code_r0x00f0dcbc;
    local_c0 = (long *)0x0;
    local_b8 = (undefined1 *)0x0;
    FUN_00c83a78(&local_c0,param_2);
    local_b0 = CONCAT44(local_b0._4_4_,param_4);
    FUN_00f0e780(plVar17 + 4,&local_c0);
    if (local_c0 == (long *)0x0) {
      return;
    }
    plVar13 = local_c0 + 3;
    do {
      sVar3 = (short)*plVar13;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar7) {
        *(short *)plVar13 = sVar3 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)local_c0 + 0x1c);
      do {
        iVar8 = *piVar2;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar7) {
          *piVar2 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      goto LAB_00f0e368;
    }
    goto LAB_00f0e1cc;
  }
LAB_00f0dcc8:
  local_88 = *(long *)(param_1 + 0x40);
  local_70 = 0;
  local_c0 = (long *)&DAT_cbf29ce484222645;
  local_b8 = &DAT_03c886bc;
  local_a0 = 0;
  local_98 = 0;
  local_b0 = 0;
  local_a8 = (long *)0x0;
  local_90 = 0;
  local_80 = 0xaaaaaaaaaaaaaaa;
  local_78 = 0;
  if (plVar11 < (long *)param_5[2]) {
    lVar18 = param_5[3];
    if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar9 = nn::os::GetTlsValue(DAT_04865a30);
    plVar13 = local_a8;
    plVar17 = (long *)&DAT_cbf29ce484222645;
    if (lVar9 != 0) {
      if (0xf < *(ulong *)(lVar9 + 0x80)) {
LAB_00f0e570:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = lVar18;
      *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
      plVar17 = local_c0;
    }
    *plVar11 = (long)plVar17;
    plVar11[1] = (long)local_b8;
    plVar11[2] = local_b0;
    local_a8 = (long *)0x0;
    plVar11[3] = (long)plVar13;
    plVar11[9] = local_78;
    plVar11[10] = CONCAT44(uStack_6c,local_70);
    plVar11[7] = local_88;
    plVar11[8] = local_80;
    plVar11[4] = local_a0;
    plVar11[5] = local_98;
    plVar11[6] = local_90;
    local_a0 = 0;
    local_98 = 0;
    local_90 = 0;
    if (lVar9 != 0) {
      *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
    }
    param_5[1] = (long)(plVar11 + 0xb);
  }
  else {
    lVar18 = (long)plVar11 - (long)plVar13 >> 3;
    uVar16 = param_5[4];
    if (0x7ffffffffffffffe < uVar16) {
      uVar16 = 0x7fffffffffffffff;
    }
    uVar1 = lVar18 * 0x2e8ba2e8ba2e8ba3 + 1;
    if (uVar16 < uVar1) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar9 = param_5[2] - (long)plVar13 >> 3;
    uVar15 = lVar9 * 0x5d1745d1745d1746;
    if (uVar1 <= uVar15) {
      uVar1 = uVar15;
    }
    if (uVar16 >> 1 <= (ulong)(lVar9 * 0x2e8ba2e8ba2e8ba3)) {
      uVar1 = uVar16;
    }
    if (uVar1 == 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = (**(code **)(*(long *)param_5[3] + 0x10))((long *)param_5[3],uVar1 * 0x58,8);
      if (lVar9 == 0) {
        (**(code **)(*(long *)param_5[3] + 0xe8))();
      }
    }
    lVar21 = param_5[3];
    if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar22 = nn::os::GetTlsValue(DAT_04865a30);
    plVar13 = local_a8;
    plVar11 = (long *)&DAT_cbf29ce484222645;
    if (lVar22 != 0) {
      if (0xf < *(ulong *)(lVar22 + 0x80)) goto LAB_00f0e570;
      *(long *)(lVar22 + *(ulong *)(lVar22 + 0x80) * 8) = lVar21;
      *(long *)(lVar22 + 0x80) = *(long *)(lVar22 + 0x80) + 1;
      plVar11 = local_c0;
    }
    puVar19 = (undefined8 *)(lVar9 + lVar18 * 8);
    lVar18 = lVar9 + lVar18 * 8;
    *puVar19 = plVar11;
    *(undefined1 **)(lVar18 + 8) = local_b8;
    *(long *)(lVar18 + 0x10) = local_b0;
    local_a8 = (long *)0x0;
    *(long **)(lVar18 + 0x18) = plVar13;
    *(undefined8 *)(lVar18 + 0x28) = 0;
    *(undefined8 *)(lVar18 + 0x30) = 0;
    *(long *)(lVar18 + 0x48) = local_78;
    *(ulong *)(lVar18 + 0x50) = CONCAT44(uStack_6c,local_70);
    *(long *)(lVar18 + 0x38) = local_88;
    *(long *)(lVar18 + 0x40) = local_80;
    *(long *)(lVar18 + 0x20) = local_a0;
    *(long *)(lVar18 + 0x28) = local_98;
    *(long *)(lVar18 + 0x30) = local_90;
    local_a0 = 0;
    local_98 = 0;
    local_90 = 0;
    if (lVar22 != 0) {
      *(long *)(lVar22 + 0x80) = *(long *)(lVar22 + 0x80) + -1;
    }
    lVar18 = *param_5;
    lVar21 = param_5[1];
    if (lVar21 == lVar18) {
      puVar14 = puVar19;
      lVar21 = lVar18;
    }
    else {
      lVar22 = 0;
      do {
        lVar23 = param_5[3];
        if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar12 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar12 != 0) {
          if (0xf < *(ulong *)(lVar12 + 0x80)) goto LAB_00f0e570;
          *(long *)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = lVar23;
          *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
        }
        lVar23 = lVar21 + lVar22;
        *(undefined8 *)((long)puVar19 + lVar22 + -0x58) = *(undefined8 *)(lVar23 + -0x58);
        *(undefined8 *)((long)puVar19 + lVar22 + -0x50) = *(undefined8 *)(lVar23 + -0x50);
        *(undefined8 *)((long)puVar19 + lVar22 + -0x48) = *(undefined8 *)(lVar23 + -0x48);
        uVar10 = *(undefined8 *)(lVar23 + -0x40);
        *(undefined8 *)(lVar23 + -0x40) = 0;
        *(undefined8 *)((long)puVar19 + lVar22 + -0x30) = 0;
        *(undefined8 *)((long)puVar19 + lVar22 + -0x28) = 0;
        *(undefined8 *)((long)puVar19 + lVar22 + -0x40) = uVar10;
        *(undefined8 *)((long)puVar19 + lVar22 + -0x38) = 0;
        uVar10 = *(undefined8 *)(lVar23 + -0x20);
        uVar4 = *(undefined8 *)(lVar23 + -0x18);
        uVar5 = *(undefined8 *)(lVar23 + -8);
        *(undefined8 *)((long)puVar19 + lVar22 + -0x10) = *(undefined8 *)(lVar23 + -0x10);
        *(undefined8 *)((long)puVar19 + lVar22 + -8) = uVar5;
        *(undefined8 *)((long)puVar19 + lVar22 + -0x20) = uVar10;
        *(undefined8 *)((long)puVar19 + lVar22 + -0x18) = uVar4;
        *(undefined8 *)((long)puVar19 + lVar22 + -0x38) = *(undefined8 *)(lVar23 + -0x38);
        *(undefined8 *)((long)puVar19 + lVar22 + -0x30) = *(undefined8 *)(lVar23 + -0x30);
        *(undefined8 *)((long)puVar19 + lVar22 + -0x28) = *(undefined8 *)(lVar23 + -0x28);
        *(undefined8 *)(lVar23 + -0x38) = 0;
        *(undefined8 *)(lVar23 + -0x30) = 0;
        *(undefined8 *)(lVar23 + -0x28) = 0;
        if (lVar12 != 0) {
          *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
        }
        lVar22 = lVar22 + -0x58;
      } while (lVar18 - lVar21 != lVar22);
      lVar18 = *param_5;
      puVar14 = (undefined8 *)((long)puVar19 + lVar22);
      lVar21 = param_5[1];
    }
    lVar22 = param_5[2];
    param_5[2] = lVar9 + uVar1 * 0x58;
    *param_5 = (long)puVar14;
    param_5[1] = (long)(puVar19 + 0xb);
    if (lVar21 != lVar18) {
      FUN_00f0e57c(lVar21 + -0x38);
      if (*(long **)(lVar21 + -0x40) != (long *)0x0) {
        (**(code **)(**(long **)(lVar21 + -0x40) + 0x20))();
      }
      if (lVar21 + -0x58 != lVar18) {
        FUN_00f0e57c(lVar21 + -0x90);
        if (*(long **)(lVar21 + -0x98) != (long *)0x0) {
          (**(code **)(**(long **)(lVar21 + -0x98) + 0x20))();
        }
        if (lVar21 + -0xb0 != lVar18) {
          FUN_00f0e57c(lVar21 + -0xe8);
          if (*(long **)(lVar21 + -0xf0) != (long *)0x0) {
            (**(code **)(**(long **)(lVar21 + -0xf0) + 0x20))();
          }
          if (lVar21 + -0x108 != lVar18) {
            FUN_00f0e57c(lVar21 + -0x140);
            if (*(long **)(lVar21 + -0x148) != (long *)0x0) {
              (**(code **)(**(long **)(lVar21 + -0x148) + 0x20))();
            }
            if (lVar21 + -0x160 != lVar18) {
              FUN_00f0e57c(lVar21 + -0x198);
              if (*(long **)(lVar21 + -0x1a0) != (long *)0x0) {
                (**(code **)(**(long **)(lVar21 + -0x1a0) + 0x20))();
              }
              if (lVar21 + -0x1b8 != lVar18) {
                do {
                  FUN_00f0e57c(lVar21 + -0x1f0);
                  if (*(long **)(lVar21 + -0x1f8) != (long *)0x0) {
                    (**(code **)(**(long **)(lVar21 + -0x1f8) + 0x20))();
                  }
                  lVar21 = lVar21 + -0x58;
                } while (lVar18 + 0x1b8 != lVar21);
              }
            }
          }
        }
      }
    }
    if (lVar18 != 0) {
      plVar13 = (long *)param_5[3];
      uVar16 = (**(code **)(*plVar13 + 0xf8))(plVar13);
      if (((uVar16 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
        (**(code **)(*plVar13 + 0x18))(plVar13,lVar18,lVar22 - lVar18,8);
      }
      else {
        FUN_00c48fe8(plVar13,lVar18,lVar22 - lVar18,8);
      }
    }
  }
  FUN_00f0e57c(&local_a0);
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  lVar18 = param_5[1];
  pcVar20 = (char *)param_3[1];
  if ((pcVar20 == (char *)0x0) || (*pcVar20 == '\0')) {
    plVar13 = (long *)FUN_00d44228();
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 0x18))(plVar13);
    }
  }
  else {
    if (((*PTR_DAT_047d4240 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar8 != 0)) {
      FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4240);
    }
    uVar10 = *(undefined8 *)PTR_DAT_047d4248;
    *(undefined8 *)PTR_DAT_047d4250 = uVar10;
    FUN_00cf9884(&local_c0,uVar10,pcVar20);
    plVar13 = local_c0;
  }
  plVar11 = (long *)PTR_DAT_047d8b70;
  if (plVar13 != (long *)0x0) {
    plVar11 = plVar13 + 6;
  }
  lVar9 = *plVar11;
  plVar11 = (long *)PTR_PTR_047d4508;
  if (plVar13 != (long *)0x0) {
    plVar11 = plVar13 + 7;
  }
  lVar21 = *plVar11;
  if (plVar13 == (long *)0x0) {
    lVar22 = 0;
  }
  else {
    lVar22 = plVar13[8];
    (**(code **)(*plVar13 + 0x18))(plVar13);
  }
  plVar11 = *(long **)(lVar18 + -0x40);
  *(long *)(lVar18 + -0x58) = lVar9;
  *(long *)(lVar18 + -0x50) = lVar21;
  *(long *)(lVar18 + -0x48) = lVar22;
  *(undefined8 *)(lVar18 + -0x40) = 0;
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 0x20))();
  }
  *(long **)(lVar18 + -0x40) = plVar13;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 0x20))(plVar13);
  }
  local_c0 = (long *)0x0;
  local_b8 = (undefined1 *)0x0;
  FUN_00c83a78(&local_c0,param_2);
  local_b0 = CONCAT44(local_b0._4_4_,param_4);
  FUN_00f0e780(lVar18 + -0x38,&local_c0);
  if (local_c0 != (long *)0x0) {
    plVar13 = local_c0 + 3;
    do {
      sVar3 = (short)*plVar13;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar7) {
        *(short *)plVar13 = sVar3 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)local_c0 + 0x1c);
      do {
        iVar8 = *piVar2;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar7) {
          *piVar2 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
LAB_00f0e368:
      plVar13 = local_c0;
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar18 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar18;
        local_68 = *plVar13;
        FUN_00c44438(lVar18 + 0x8040,&local_68);
      }
    }
    else {
LAB_00f0e1cc:
      if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
  }
  return;
code_r0x00f0dcbc:
  plVar17 = plVar17 + 0xb;
  if (plVar11 == plVar17) goto LAB_00f0dcc8;
  goto LAB_00f0dcb0;
}


