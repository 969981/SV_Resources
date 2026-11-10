/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0156b4ec; name: FUN_0156b4ec
 */


void FUN_0156b4ec(long param_1,long *param_2)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  ulong unaff_x26;
  undefined8 uVar14;
  float fVar15;
  long *local_e0;
  code *local_d8;
  undefined1 *local_d0;
  undefined1 *puStack_c8;
  long *local_c0;
  undefined1 *puStack_b8;
  undefined1 local_48 [8];
  
  if (*(int *)(*param_2 + 0x130) != 3) {
    return;
  }
  local_48[0] = 0;
  plVar11 = (long *)(param_1 + 0x70);
  if (*plVar11 != 0) {
    puStack_b8 = local_48;
    local_e0 = (long *)&LAB_02bd8328;
    local_d8 = FUN_02bd8348;
    local_d0 = &LAB_02bd834c;
    puStack_c8 = &LAB_02bd8358;
    local_c0 = plVar11;
    FUN_014911dc(*param_2,&local_e0);
    pcVar1 = local_d8;
    if (local_d8 != (code *)0x0) {
      local_d0 = (undefined1 *)0x0;
      puStack_c8 = (undefined1 *)0x0;
      local_e0 = (long *)0x0;
      local_d8 = (code *)0x0;
      (*pcVar1)(&local_c0);
    }
  }
  FUN_00c9e664(&local_e0,*param_2 + 0xe8);
  if (local_e0 != (long *)0x0) {
    lVar7 = 0;
    if (local_d8 != (code *)0x0) {
      lVar7 = *(long *)(local_d8 + 0x48);
    }
    lVar7 = FUN_0156b930(lVar7 + 0x108,local_48);
    if (lVar7 != 0) {
      FUN_0156be54(lVar7,plVar11);
    }
  }
  if (local_d8 != (code *)0x0) {
    pcVar1 = local_d8 + 0x28;
    do {
      iVar6 = *(int *)pcVar1;
      iVar4 = iVar6 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
      if (bVar3) {
        *(int *)pcVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*(long *)local_d8 + 0x10))();
    }
    else if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  if (local_e0 != (long *)0x0) {
    (**(code **)(*local_e0 + 0x60))();
  }
  lVar7 = *param_2;
  uVar12 = *(ulong *)(param_1 + 0x80);
  plVar11 = (long *)(param_1 + 0x78);
  uVar13 = (ulong)(lVar7 != 0);
  if (uVar12 != 0) {
    if ((uVar12 & uVar12 - 1) == 0) {
      unaff_x26 = (int)uVar12 + 1 & uVar13;
      plVar9 = *(long **)(*plVar11 + unaff_x26 * 8);
      if (plVar9 != (long *)0x0) {
        while ((plVar9 = (long *)*plVar9, plVar9 != (long *)0x0 &&
               (plVar9[1] == uVar13 || (plVar9[1] & uVar12 - 1) == unaff_x26))) {
          if (plVar9[2] == lVar7) {
            return;
          }
        }
      }
    }
    else {
      unaff_x26 = uVar13;
      if (uVar12 <= uVar13) {
        uVar10 = 0;
        if (uVar12 != 0) {
          uVar10 = uVar13 / uVar12;
        }
        unaff_x26 = uVar13 - uVar10 * uVar12;
      }
      plVar9 = *(long **)(*plVar11 + unaff_x26 * 8);
      if (plVar9 != (long *)0x0) {
        while (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0) {
          uVar10 = plVar9[1];
          if (uVar10 != uVar13) {
            if (uVar12 <= uVar10) {
              uVar5 = 0;
              if (uVar12 != 0) {
                uVar5 = uVar10 / uVar12;
              }
              uVar10 = uVar10 - uVar5 * uVar12;
            }
            if (uVar10 != unaff_x26) break;
          }
          if (plVar9[2] == lVar7) {
            return;
          }
        }
      }
    }
  }
  plVar9 = (long *)(**(code **)(**(long **)(param_1 + 0xb0) + 0x10))
                             (*(long **)(param_1 + 0xb0),0x18,8);
  if (plVar9 == (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0xb0) + 0xe8))();
  }
  uVar14 = *(undefined8 *)(param_1 + 0xb0);
  if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar7 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar7 != 0) {
    if (0xf < *(ulong *)(lVar7 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = uVar14;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
  }
  param_2 = (long *)*param_2;
  plVar9[2] = (long)param_2;
  if (param_2 != (long *)0x0) {
    (**(code **)(*param_2 + 0x58))();
  }
  if (lVar7 != 0) {
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
  }
  *plVar9 = 0;
  plVar9[1] = uVar13;
  fVar15 = (float)(*(long *)(param_1 + 0xd0) + 1);
  if ((uVar12 == 0) || (*(float *)(param_1 + 0xd8) * (float)uVar12 < fVar15)) {
    uVar12 = (ulong)(uVar12 < 3 || (uVar12 & uVar12 - 1) != 0) | uVar12 << 1;
    uVar10 = (ulong)(fVar15 / *(float *)(param_1 + 0xd8));
    if (uVar10 <= uVar12) {
      uVar10 = uVar12;
    }
    FUN_0156bab0(plVar11,uVar10);
    uVar12 = *(ulong *)(param_1 + 0x80);
    if ((uVar12 & uVar12 - 1) == 0) {
      unaff_x26 = (int)uVar12 + 1 & uVar13;
    }
    else if (uVar13 < uVar12) {
      unaff_x26 = uVar13;
    }
    else {
      uVar10 = 0;
      if (uVar12 != 0) {
        uVar10 = uVar13 / uVar12;
      }
      unaff_x26 = uVar13 - uVar10 * uVar12;
    }
  }
  plVar8 = *(long **)(*plVar11 + unaff_x26 * 8);
  if (plVar8 == (long *)0x0) {
    plVar8 = (long *)(param_1 + 0xa8);
    *plVar9 = *plVar8;
    *plVar8 = (long)plVar9;
    *(long **)(*(long *)(param_1 + 0x78) + unaff_x26 * 8) = plVar8;
    if (*plVar9 == 0) goto LAB_0156b774;
    uVar13 = *(ulong *)(*plVar9 + 8);
    if ((uVar12 & uVar12 - 1) == 0) {
      uVar13 = uVar13 & uVar12 - 1;
    }
    else if (uVar12 <= uVar13) {
      uVar10 = 0;
      if (uVar12 != 0) {
        uVar10 = uVar13 / uVar12;
      }
      uVar13 = uVar13 - uVar10 * uVar12;
    }
    plVar8 = (long *)(*plVar11 + uVar13 * 8);
  }
  else {
    *plVar9 = *plVar8;
  }
  *plVar8 = (long)plVar9;
LAB_0156b774:
  *(long *)(param_1 + 0xd0) = *(long *)(param_1 + 0xd0) + 1;
  return;
}


