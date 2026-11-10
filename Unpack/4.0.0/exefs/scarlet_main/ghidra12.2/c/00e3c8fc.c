/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e3c8fc; name: FUN_00e3c8fc
 */


void FUN_00e3c8fc(long *param_1,ulong *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  code *pcVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 *puVar18;
  ulong unaff_x26;
  long lVar19;
  
  uVar16 = *param_2;
  uVar17 = param_1[1];
  if (uVar17 != 0) {
    uVar8 = uVar17 - 1;
    if ((uVar17 & uVar8) == 0) {
      unaff_x26 = uVar8 & uVar16;
      plVar15 = *(long **)(*param_1 + unaff_x26 * 8);
      if (plVar15 != (long *)0x0) {
        do {
          plVar15 = (long *)*plVar15;
          if ((plVar15 == (long *)0x0) ||
             (plVar15[1] != uVar16 && (plVar15[1] & uVar8) != unaff_x26)) goto LAB_00e3c998;
        } while (plVar15[2] != uVar16);
        goto LAB_00e3cc50;
      }
    }
    else {
      unaff_x26 = uVar16;
      if (uVar17 <= uVar16) {
        uVar8 = 0;
        if (uVar17 != 0) {
          uVar8 = uVar16 / uVar17;
        }
        unaff_x26 = uVar16 - uVar8 * uVar17;
      }
      plVar15 = *(long **)(*param_1 + unaff_x26 * 8);
      if (plVar15 != (long *)0x0) {
        do {
          plVar15 = (long *)*plVar15;
          if (plVar15 == (long *)0x0) goto LAB_00e3c998;
          uVar8 = plVar15[1];
          if (uVar8 != uVar16) {
            if (uVar17 <= uVar8) {
              uVar7 = 0;
              if (uVar17 != 0) {
                uVar7 = uVar8 / uVar17;
              }
              uVar8 = uVar8 - uVar7 * uVar17;
            }
            if (uVar8 != unaff_x26) goto LAB_00e3c998;
          }
        } while (plVar15[2] != uVar16);
LAB_00e3cc50:
        FUN_00c96b7c((long)plVar15 + 0x20,param_3);
        puVar18 = (undefined8 *)((long)plVar15 + 0x30);
        plVar10 = (long *)*puVar18;
        if (plVar10 != (long *)0x0) {
          plVar14 = *(long **)((long)plVar15 + 0x38);
          if (plVar14 == plVar10) {
            plVar14 = plVar10;
          }
          else {
            do {
              plVar14 = plVar14 + -1;
              if ((long *)*plVar14 != (long *)0x0) {
                (**(code **)(*(long *)*plVar14 + 0x20))();
              }
            } while (plVar10 != plVar14);
            plVar14 = (long *)*puVar18;
          }
          plVar4 = *(long **)((long)plVar15 + 0x48);
          *(long **)((long)plVar15 + 0x38) = plVar10;
          lVar19 = *(long *)((long)plVar15 + 0x40) - (long)plVar14;
          uVar16 = (**(code **)(*plVar4 + 0xf8))(plVar4);
          if (((uVar16 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
            (**(code **)(*plVar4 + 0x18))(plVar4,plVar14,lVar19,8);
          }
          else {
            FUN_00c48fe8(plVar4,plVar14,lVar19,8);
          }
          *(undefined8 *)((long)plVar15 + 0x38) = 0;
          *(undefined8 *)((long)plVar15 + 0x40) = 0;
          *puVar18 = 0;
        }
        uVar1 = *(undefined8 *)(param_3 + 0x28);
        uVar2 = *(undefined8 *)(param_3 + 0x30);
        uVar3 = *(undefined8 *)(param_3 + 0x40);
        *(undefined8 *)((long)plVar15 + 0x58) = *(undefined8 *)(param_3 + 0x38);
        *(undefined8 *)((long)plVar15 + 0x60) = uVar3;
        *(undefined8 *)((long)plVar15 + 0x48) = uVar1;
        *(undefined8 *)((long)plVar15 + 0x50) = uVar2;
        *(undefined8 *)((long)plVar15 + 0x30) = *(undefined8 *)(param_3 + 0x10);
        *(undefined8 *)((long)plVar15 + 0x38) = *(undefined8 *)(param_3 + 0x18);
        *(undefined8 *)((long)plVar15 + 0x40) = *(undefined8 *)(param_3 + 0x20);
        *(undefined8 *)(param_3 + 0x10) = 0;
        *(undefined8 *)(param_3 + 0x18) = 0;
        *(undefined8 *)(param_3 + 0x20) = 0;
        *(undefined8 *)((long)plVar15 + 0x68) = *(undefined8 *)(param_3 + 0x48);
        FUN_00e40090((long)plVar15 + 0x70,param_3 + 0x50);
        return;
      }
    }
  }
LAB_00e3c998:
  plVar15 = (long *)(**(code **)(*(long *)param_1[7] + 0x10))((long *)param_1[7],0xf0,0x10);
  if (plVar15 == (long *)0x0) {
    (**(code **)(*(long *)param_1[7] + 0xe8))();
  }
  lVar19 = param_1[7];
  if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar6 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar6 != 0) {
    if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = lVar19;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
  }
  plVar15[2] = *param_2;
  plVar15[4] = 0;
  plVar15[5] = 0;
  FUN_00c96b7c(plVar15 + 4,param_3);
  plVar15[7] = 0;
  plVar15[8] = 0;
  plVar15[6] = 0;
  lVar19 = *(long *)(param_3 + 0x28);
  lVar12 = *(long *)(param_3 + 0x30);
  lVar13 = *(long *)(param_3 + 0x40);
  plVar15[0xb] = *(long *)(param_3 + 0x38);
  plVar15[0xc] = lVar13;
  plVar15[9] = lVar19;
  plVar15[10] = lVar12;
  plVar15[6] = *(long *)(param_3 + 0x10);
  plVar15[7] = *(long *)(param_3 + 0x18);
  plVar15[8] = *(long *)(param_3 + 0x20);
  lVar19 = *(long *)(param_3 + 0x48);
  *(undefined8 *)(param_3 + 0x18) = 0;
  *(undefined8 *)(param_3 + 0x20) = 0;
  *(undefined8 *)(param_3 + 0x10) = 0;
  plVar15[0xe] = 0;
  plVar15[0x10] = 0;
  plVar15[0x11] = 0;
  plVar15[0xd] = lVar19;
  plVar15[0xf] = 0;
  if (*(code **)(param_3 + 0x68) != (code *)0x0) {
    (**(code **)(param_3 + 0x68))(param_3 + 0x70,plVar15 + 0x12);
    lVar19 = *(long *)(param_3 + 0x50);
    lVar12 = *(long *)(param_3 + 0x58);
    plVar15[0x11] = *(long *)(param_3 + 0x68);
    lVar13 = *(long *)(param_3 + 0x60);
    plVar15[0xf] = lVar12;
    plVar15[0x10] = lVar13;
    plVar15[0xe] = lVar19;
    pcVar9 = *(code **)(param_3 + 0x58);
    if (pcVar9 != (code *)0x0) {
      *(undefined8 *)(param_3 + 0x60) = 0;
      *(undefined8 *)(param_3 + 0x68) = 0;
      *(long *)(param_3 + 0x50) = 0;
      *(undefined8 *)(param_3 + 0x58) = 0;
      (*pcVar9)(param_3 + 0x70);
    }
  }
  if (lVar6 != 0) {
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
  }
  *plVar15 = 0;
  plVar15[1] = uVar16;
  if ((uVar17 == 0) || (*(float *)(param_1 + 0xc) * (float)uVar17 < (float)(param_1[0xb] + 1))) {
    uVar17 = (ulong)(uVar17 < 3 || (uVar17 & uVar17 - 1) != 0) | uVar17 << 1;
    uVar8 = (ulong)((float)(param_1[0xb] + 1) / *(float *)(param_1 + 0xc));
    if (uVar8 <= uVar17) {
      uVar8 = uVar17;
    }
    if (uVar8 - 1 == 0) {
      uVar8 = 2;
    }
    else if ((uVar8 & uVar8 - 1) != 0) {
      uVar8 = std::__next_prime(uVar8);
    }
    uVar17 = param_1[1];
    if (uVar17 < uVar8) {
      uVar7 = uVar8;
LAB_00e3cc1c:
      FUN_00e3fd48(param_1,uVar7);
    }
    else if (uVar8 < uVar17) {
      uVar7 = (ulong)((float)(ulong)param_1[0xb] / *(float *)(param_1 + 0xc));
      if ((uVar17 < 3) ||
         (uVar11 = uVar17 - (uVar17 >> 1 & 0x5555555555555555),
         uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333),
         1 < (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
        uVar7 = std::__next_prime(uVar7);
      }
      else if (1 < uVar7) {
        uVar7 = 1L << (-LZCOUNT(uVar7 - 1) & 0x3fU);
      }
      if (uVar7 <= uVar8) {
        uVar7 = uVar8;
      }
      if (uVar7 < uVar17) goto LAB_00e3cc1c;
    }
    uVar17 = param_1[1];
    if ((uVar17 & uVar17 - 1) == 0) {
      unaff_x26 = uVar17 - 1 & uVar16;
    }
    else if (uVar16 < uVar17) {
      unaff_x26 = uVar16;
    }
    else {
      uVar8 = 0;
      if (uVar17 != 0) {
        uVar8 = uVar16 / uVar17;
      }
      unaff_x26 = uVar16 - uVar8 * uVar17;
    }
  }
  plVar10 = *(long **)(*param_1 + unaff_x26 * 8);
  if (plVar10 == (long *)0x0) {
    plVar10 = param_1 + 6;
    *plVar15 = *plVar10;
    *plVar10 = (long)plVar15;
    *(long **)(*param_1 + unaff_x26 * 8) = plVar10;
    if (*plVar15 == 0) goto LAB_00e3cb44;
    uVar16 = *(ulong *)(*plVar15 + 8);
    if ((uVar17 & uVar17 - 1) == 0) {
      uVar16 = uVar16 & uVar17 - 1;
    }
    else if (uVar17 <= uVar16) {
      uVar8 = 0;
      if (uVar17 != 0) {
        uVar8 = uVar16 / uVar17;
      }
      uVar16 = uVar16 - uVar8 * uVar17;
    }
    plVar10 = (long *)(*param_1 + uVar16 * 8);
  }
  else {
    *plVar15 = *plVar10;
  }
  *plVar10 = (long)plVar15;
LAB_00e3cb44:
  param_1[0xb] = param_1[0xb] + 1;
  return;
}


