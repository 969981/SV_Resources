/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0151b210; name: FUN_0151b210
 */


void FUN_0151b210(long param_1,ulong *param_2,long *param_3)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  ulong unaff_x27;
  undefined8 uVar10;
  float fVar11;
  
  uVar9 = *param_2;
  uVar8 = *(ulong *)(param_1 + 0x118);
  plVar6 = (long *)(param_1 + 0x110);
  if (uVar8 != 0) {
    uVar5 = uVar8 - 1;
    if ((uVar8 & uVar5) == 0) {
      unaff_x27 = uVar5 & uVar9;
      plVar7 = *(long **)(*plVar6 + unaff_x27 * 8);
      if (plVar7 != (long *)0x0) {
        do {
          plVar7 = (long *)*plVar7;
          if ((plVar7 == (long *)0x0) || (plVar7[1] != uVar9 && (plVar7[1] & uVar5) != unaff_x27))
          goto LAB_0151b268;
        } while (plVar7[2] != uVar9);
        goto LAB_0151b3ac;
      }
    }
    else {
      unaff_x27 = uVar9;
      if (uVar8 <= uVar9) {
        uVar5 = 0;
        if (uVar8 != 0) {
          uVar5 = uVar9 / uVar8;
        }
        unaff_x27 = uVar9 - uVar5 * uVar8;
      }
      plVar7 = *(long **)(*plVar6 + unaff_x27 * 8);
      if (plVar7 != (long *)0x0) {
        do {
          plVar7 = (long *)*plVar7;
          if (plVar7 == (long *)0x0) goto LAB_0151b268;
          uVar5 = plVar7[1];
          if (uVar5 != uVar9) {
            if (uVar8 <= uVar5) {
              uVar1 = 0;
              if (uVar8 != 0) {
                uVar1 = uVar5 / uVar8;
              }
              uVar5 = uVar5 - uVar1 * uVar8;
            }
            if (uVar5 != unaff_x27) goto LAB_0151b268;
          }
        } while (plVar7[2] != uVar9);
        goto LAB_0151b3ac;
      }
    }
  }
LAB_0151b268:
  plVar7 = (long *)(**(code **)(**(long **)(param_1 + 0x148) + 0x10))
                             (*(long **)(param_1 + 0x148),0x50,8);
  if (plVar7 == (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x148) + 0xe8))();
  }
  uVar10 = *(undefined8 *)(param_1 + 0x148);
  if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar3 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar3 != 0) {
    if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = uVar10;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  }
  plVar7[2] = *param_2;
  plVar7[3] = param_2[1];
  plVar7[4] = param_2[2];
  plVar4 = (long *)param_2[3];
  plVar7[5] = (long)plVar4;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))();
  }
  plVar7[8] = 0;
  plVar7[9] = 0;
  plVar7[6] = (long)&DAT_cbf29ce484222645;
  plVar7[7] = (long)&DAT_03c886bc;
  if (lVar3 != 0) {
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  }
  *plVar7 = 0;
  plVar7[1] = uVar9;
  fVar11 = (float)(*(long *)(param_1 + 0x168) + 1);
  if ((uVar8 == 0) || (*(float *)(param_1 + 0x170) * (float)uVar8 < fVar11)) {
    uVar8 = (ulong)(uVar8 < 3 || (uVar8 & uVar8 - 1) != 0) | uVar8 << 1;
    uVar5 = (ulong)(fVar11 / *(float *)(param_1 + 0x170));
    if (uVar5 <= uVar8) {
      uVar5 = uVar8;
    }
    FUN_0151b5a8(plVar6,uVar5);
    uVar8 = *(ulong *)(param_1 + 0x118);
    if ((uVar8 & uVar8 - 1) == 0) {
      unaff_x27 = uVar8 - 1 & uVar9;
    }
    else if (uVar9 < uVar8) {
      unaff_x27 = uVar9;
    }
    else {
      uVar5 = 0;
      if (uVar8 != 0) {
        uVar5 = uVar9 / uVar8;
      }
      unaff_x27 = uVar9 - uVar5 * uVar8;
    }
  }
  plVar4 = *(long **)(*plVar6 + unaff_x27 * 8);
  if (plVar4 == (long *)0x0) {
    *plVar7 = *(long *)(param_1 + 0x140);
    *(long **)(param_1 + 0x140) = plVar7;
    *(long *)(*(long *)(param_1 + 0x110) + unaff_x27 * 8) = param_1 + 0x140;
    if (*plVar7 != 0) {
      uVar9 = *(ulong *)(*plVar7 + 8);
      if ((uVar8 & uVar8 - 1) == 0) {
        uVar9 = uVar9 & uVar8 - 1;
      }
      else if (uVar8 <= uVar9) {
        uVar5 = 0;
        if (uVar8 != 0) {
          uVar5 = uVar9 / uVar8;
        }
        uVar9 = uVar9 - uVar5 * uVar8;
      }
      plVar4 = (long *)(*plVar6 + uVar9 * 8);
      goto LAB_0151b39c;
    }
  }
  else {
    *plVar7 = *plVar4;
LAB_0151b39c:
    *plVar4 = (long)plVar7;
  }
  *(long *)(param_1 + 0x168) = *(long *)(param_1 + 0x168) + 1;
LAB_0151b3ac:
  plVar7[6] = *param_3;
  plVar7[7] = param_3[1];
  plVar7[8] = param_3[2];
  plVar6 = (long *)param_3[3];
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  plVar4 = (long *)plVar7[9];
  plVar7[9] = (long)plVar6;
  if (plVar4 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0151b4ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x20))();
  return;
}


