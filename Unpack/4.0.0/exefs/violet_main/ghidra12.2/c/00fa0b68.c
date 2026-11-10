/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00fa0b68; name: FUN_00fa0b68
 */


void FUN_00fa0b68(long param_1,ulong *param_2,char *param_3)

{
  long *plVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  ulong unaff_x27;
  undefined8 uVar10;
  float fVar11;
  char local_88 [32];
  long *local_68;
  
  FUN_01272358(local_88);
  if (local_88[0] != '\0') {
    if (local_68 == (long *)0x0) {
      return;
    }
    (**(code **)(*local_68 + 0x20))();
    return;
  }
  uVar9 = *param_2;
  plVar1 = (long *)(param_1 + 0x38);
  uVar8 = *(ulong *)(param_1 + 0x40);
  if (uVar8 != 0) {
    uVar6 = uVar8 - 1;
    if ((uVar8 & uVar6) == 0) {
      unaff_x27 = uVar6 & uVar9;
      plVar7 = *(long **)(*plVar1 + unaff_x27 * 8);
      if (plVar7 != (long *)0x0) {
        while ((plVar7 = (long *)*plVar7, plVar7 != (long *)0x0 &&
               (plVar7[1] == uVar9 || (plVar7[1] & uVar6) == unaff_x27))) {
          if (plVar7[2] == uVar9) {
            return;
          }
        }
      }
    }
    else {
      unaff_x27 = uVar9;
      if (uVar8 <= uVar9) {
        uVar6 = 0;
        if (uVar8 != 0) {
          uVar6 = uVar9 / uVar8;
        }
        unaff_x27 = uVar9 - uVar6 * uVar8;
      }
      plVar7 = *(long **)(*plVar1 + unaff_x27 * 8);
      if (plVar7 != (long *)0x0) {
        while (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0) {
          uVar6 = plVar7[1];
          if (uVar6 != uVar9) {
            if (uVar8 <= uVar6) {
              uVar2 = 0;
              if (uVar8 != 0) {
                uVar2 = uVar6 / uVar8;
              }
              uVar6 = uVar6 - uVar2 * uVar8;
            }
            if (uVar6 != unaff_x27) break;
          }
          if (plVar7[2] == uVar9) {
            return;
          }
        }
      }
    }
  }
  plVar7 = (long *)(**(code **)(**(long **)(param_1 + 0x70) + 0x10))
                             (*(long **)(param_1 + 0x70),0x58,8);
  if (plVar7 == (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x70) + 0xe8))();
  }
  uVar10 = *(undefined8 *)(param_1 + 0x70);
  if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar4 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar4 != 0) {
    if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = uVar10;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  }
  plVar7[2] = *param_2;
  plVar7[3] = param_2[1];
  plVar7[4] = param_2[2];
  plVar5 = (long *)param_2[3];
  plVar7[5] = (long)plVar5;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x18))();
  }
  *(undefined1 *)(plVar7 + 6) = 0;
  if (*param_3 != '\0') {
    plVar7[7] = *(long *)(param_3 + 8);
    plVar7[8] = *(long *)(param_3 + 0x10);
    plVar7[9] = *(long *)(param_3 + 0x18);
    plVar5 = *(long **)(param_3 + 0x20);
    plVar7[10] = (long)plVar5;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x18))();
    }
    *(undefined1 *)(plVar7 + 6) = 1;
  }
  if (lVar4 != 0) {
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  }
  *plVar7 = 0;
  plVar7[1] = uVar9;
  fVar11 = (float)(*(long *)(param_1 + 0x90) + 1);
  if ((uVar8 == 0) || (*(float *)(param_1 + 0x98) * (float)uVar8 < fVar11)) {
    uVar8 = (ulong)(uVar8 < 3 || (uVar8 & uVar8 - 1) != 0) | uVar8 << 1;
    uVar6 = (ulong)(fVar11 / *(float *)(param_1 + 0x98));
    if (uVar6 <= uVar8) {
      uVar6 = uVar8;
    }
    FUN_00fa19d0(plVar1,uVar6);
    uVar8 = *(ulong *)(param_1 + 0x40);
    if ((uVar8 & uVar8 - 1) == 0) {
      unaff_x27 = uVar8 - 1 & uVar9;
    }
    else if (uVar9 < uVar8) {
      unaff_x27 = uVar9;
    }
    else {
      uVar6 = 0;
      if (uVar8 != 0) {
        uVar6 = uVar9 / uVar8;
      }
      unaff_x27 = uVar9 - uVar6 * uVar8;
    }
  }
  plVar5 = *(long **)(*plVar1 + unaff_x27 * 8);
  if (plVar5 == (long *)0x0) {
    plVar5 = (long *)(param_1 + 0x68);
    *plVar7 = *plVar5;
    *plVar5 = (long)plVar7;
    *(long **)(*(long *)(param_1 + 0x38) + unaff_x27 * 8) = plVar5;
    if (*plVar7 == 0) goto LAB_00fa0d7c;
    uVar9 = *(ulong *)(*plVar7 + 8);
    if ((uVar8 & uVar8 - 1) == 0) {
      uVar9 = uVar9 & uVar8 - 1;
    }
    else if (uVar8 <= uVar9) {
      uVar6 = 0;
      if (uVar8 != 0) {
        uVar6 = uVar9 / uVar8;
      }
      uVar9 = uVar9 - uVar6 * uVar8;
    }
    plVar5 = (long *)(*plVar1 + uVar9 * 8);
  }
  else {
    *plVar7 = *plVar5;
  }
  *plVar5 = (long)plVar7;
LAB_00fa0d7c:
  *(long *)(param_1 + 0x90) = *(long *)(param_1 + 0x90) + 1;
  return;
}


