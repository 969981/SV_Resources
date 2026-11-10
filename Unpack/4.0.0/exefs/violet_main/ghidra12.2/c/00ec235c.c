/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00ec235c; name: FUN_00ec235c
 */


void FUN_00ec235c(long param_1,ulong *param_2,long *param_3)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong unaff_x27;
  undefined8 uVar14;
  float fVar15;
  
  uVar13 = *param_2;
  uVar12 = *(ulong *)(param_1 + 0x110);
  plVar1 = (long *)(param_1 + 0x108);
  if (uVar12 != 0) {
    uVar9 = uVar12 - 1;
    if ((uVar12 & uVar9) == 0) {
      unaff_x27 = uVar9 & uVar13;
      plVar10 = *(long **)(*plVar1 + unaff_x27 * 8);
      if (plVar10 != (long *)0x0) {
        while ((plVar10 = (long *)*plVar10, plVar10 != (long *)0x0 &&
               (plVar10[1] == uVar13 || (plVar10[1] & uVar9) == unaff_x27))) {
          if (plVar10[2] == uVar13) {
            return;
          }
        }
      }
    }
    else {
      unaff_x27 = uVar13;
      if (uVar12 <= uVar13) {
        uVar9 = 0;
        if (uVar12 != 0) {
          uVar9 = uVar13 / uVar12;
        }
        unaff_x27 = uVar13 - uVar9 * uVar12;
      }
      plVar10 = *(long **)(*plVar1 + unaff_x27 * 8);
      if (plVar10 != (long *)0x0) {
        while (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0) {
          uVar9 = plVar10[1];
          if (uVar9 != uVar13) {
            if (uVar12 <= uVar9) {
              uVar5 = 0;
              if (uVar12 != 0) {
                uVar5 = uVar9 / uVar12;
              }
              uVar9 = uVar9 - uVar5 * uVar12;
            }
            if (uVar9 != unaff_x27) break;
          }
          if (plVar10[2] == uVar13) {
            return;
          }
        }
      }
    }
  }
  plVar10 = (long *)(**(code **)(**(long **)(param_1 + 0x140) + 0x10))
                              (*(long **)(param_1 + 0x140),0x38,8);
  if (plVar10 == (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x140) + 0xe8))();
  }
  uVar14 = *(undefined8 *)(param_1 + 0x140);
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
  plVar10[2] = *param_2;
  plVar10[3] = param_2[1];
  plVar10[4] = param_2[2];
  plVar8 = (long *)param_2[3];
  plVar10[5] = (long)plVar8;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x18))();
  }
  lVar11 = *param_3;
  plVar10[6] = lVar11;
  if (lVar11 != 0) {
    piVar2 = (int *)(lVar11 + 0x28);
    do {
      iVar6 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  if (lVar7 != 0) {
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
  }
  *plVar10 = 0;
  plVar10[1] = uVar13;
  fVar15 = (float)(*(long *)(param_1 + 0x160) + 1);
  if ((uVar12 == 0) || (*(float *)(param_1 + 0x168) * (float)uVar12 < fVar15)) {
    uVar12 = (ulong)(uVar12 < 3 || (uVar12 & uVar12 - 1) != 0) | uVar12 << 1;
    uVar9 = (ulong)(fVar15 / *(float *)(param_1 + 0x168));
    if (uVar9 <= uVar12) {
      uVar9 = uVar12;
    }
    FUN_00ec26b8(plVar1,uVar9);
    uVar12 = *(ulong *)(param_1 + 0x110);
    if ((uVar12 & uVar12 - 1) == 0) {
      unaff_x27 = uVar12 - 1 & uVar13;
    }
    else if (uVar13 < uVar12) {
      unaff_x27 = uVar13;
    }
    else {
      uVar9 = 0;
      if (uVar12 != 0) {
        uVar9 = uVar13 / uVar12;
      }
      unaff_x27 = uVar13 - uVar9 * uVar12;
    }
  }
  plVar8 = *(long **)(*plVar1 + unaff_x27 * 8);
  if (plVar8 == (long *)0x0) {
    *plVar10 = *(long *)(param_1 + 0x138);
    *(long **)(param_1 + 0x138) = plVar10;
    *(long *)(*(long *)(param_1 + 0x108) + unaff_x27 * 8) = param_1 + 0x138;
    if (*plVar10 == 0) goto LAB_00ec25c0;
    uVar13 = *(ulong *)(*plVar10 + 8);
    if ((uVar12 & uVar12 - 1) == 0) {
      uVar13 = uVar13 & uVar12 - 1;
    }
    else if (uVar12 <= uVar13) {
      uVar9 = 0;
      if (uVar12 != 0) {
        uVar9 = uVar13 / uVar12;
      }
      uVar13 = uVar13 - uVar9 * uVar12;
    }
    plVar8 = (long *)(*plVar1 + uVar13 * 8);
  }
  else {
    *plVar10 = *plVar8;
  }
  *plVar8 = (long)plVar10;
LAB_00ec25c0:
  *(long *)(param_1 + 0x160) = *(long *)(param_1 + 0x160) + 1;
  return;
}


