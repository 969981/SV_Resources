/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01612f88; name: FUN_01612f88
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_01612f88(long *param_1,ulong *param_2,long *param_3)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  ulong unaff_x25;
  long lVar12;
  undefined1 auVar13 [16];
  
  uVar10 = *param_2;
  uVar11 = param_1[1];
  if (uVar11 != 0) {
    uVar6 = uVar11 - 1;
    if ((uVar11 & uVar6) == 0) {
      unaff_x25 = uVar6 & uVar10;
      plVar9 = *(long **)(*param_1 + unaff_x25 * 8);
      if (plVar9 != (long *)0x0) {
        do {
          plVar9 = (long *)*plVar9;
          if ((plVar9 == (long *)0x0) || (plVar9[1] != uVar10 && (plVar9[1] & uVar6) != unaff_x25))
          goto LAB_01613068;
          uVar5 = 0;
        } while (plVar9[2] != uVar10);
        goto LAB_016131ac;
      }
    }
    else {
      unaff_x25 = uVar10;
      if (uVar11 <= uVar10) {
        uVar6 = 0;
        if (uVar11 != 0) {
          uVar6 = uVar10 / uVar11;
        }
        unaff_x25 = uVar10 - uVar6 * uVar11;
      }
      plVar9 = *(long **)(*param_1 + unaff_x25 * 8);
      if (plVar9 != (long *)0x0) {
        do {
          plVar9 = (long *)*plVar9;
          if (plVar9 == (long *)0x0) goto LAB_01613068;
          uVar6 = plVar9[1];
          if (uVar6 != uVar10) {
            if (uVar11 <= uVar6) {
              uVar4 = 0;
              if (uVar11 != 0) {
                uVar4 = uVar6 / uVar11;
              }
              uVar6 = uVar6 - uVar4 * uVar11;
            }
            if (uVar6 != unaff_x25) goto LAB_01613068;
          }
        } while (plVar9[2] != uVar10);
        uVar5 = 0;
        goto LAB_016131ac;
      }
    }
  }
LAB_01613068:
  plVar9 = (long *)(**(code **)(*(long *)param_1[7] + 0x10))((long *)param_1[7],0x110,8);
  if (plVar9 == (long *)0x0) {
    (**(code **)(*(long *)param_1[7] + 0xe8))();
  }
  lVar12 = param_1[7];
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
    *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar12;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  }
  plVar9[2] = *param_2;
  uVar1 = DAT_03d6b5b4;
  lVar12 = *param_3;
  *(uint *)((long)plVar9 + 0x37) = CONCAT31(_UNK_03d6b5b8,DAT_03d6b5b4._3_1_);
  *(undefined4 *)(plVar9 + 6) = 0;
  *(undefined4 *)((long)plVar9 + 0x34) = uVar1;
  plVar9[4] = 0;
  plVar9[5] = 0x400000004;
  plVar9[3] = 0;
  plVar9[8] = 0;
  plVar9[9] = 0;
  plVar9[10] = lVar12;
  plVar9[0xb] = 0x555555555555555;
  plVar9[0xc] = 0;
  *(undefined4 *)(plVar9 + 0xd) = 0;
  *(undefined4 *)(plVar9 + 0x12) = 0;
  plVar9[0x13] = 0;
  *(undefined4 *)(plVar9 + 0x14) = 0x3f800000;
  plVar9[0x19] = 0;
  *(undefined4 *)(plVar9 + 0x1a) = 0;
  *(undefined4 *)(plVar9 + 0x1f) = 0;
  plVar9[0x20] = 0;
  *(undefined4 *)(plVar9 + 0x21) = 0x3f800000;
  plVar9[0xe] = 0;
  plVar9[0xf] = lVar12;
  plVar9[0x10] = 0x555555555555555;
  plVar9[0x11] = 0;
  plVar9[0x15] = 0;
  plVar9[0x16] = 0;
  plVar9[0x17] = lVar12;
  plVar9[0x18] = 0x555555555555555;
  plVar9[0x1b] = 0;
  plVar9[0x1c] = lVar12;
  plVar9[0x1d] = 0x555555555555555;
  plVar9[0x1e] = 0;
  if (lVar3 != 0) {
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  }
  *plVar9 = 0;
  plVar9[1] = uVar10;
  if ((uVar11 == 0) || (*(float *)(param_1 + 0xc) * (float)uVar11 < (float)(param_1[0xb] + 1))) {
    uVar11 = (ulong)(uVar11 < 3 || (uVar11 & uVar11 - 1) != 0) | uVar11 << 1;
    uVar6 = (ulong)((float)(param_1[0xb] + 1) / *(float *)(param_1 + 0xc));
    if (uVar6 <= uVar11) {
      uVar6 = uVar11;
    }
    if (uVar6 - 1 == 0) {
      uVar6 = 2;
    }
    else if ((uVar6 & uVar6 - 1) != 0) {
      uVar6 = std::__next_prime(uVar6);
    }
    uVar11 = param_1[1];
    if (uVar11 < uVar6) {
      uVar4 = uVar6;
LAB_01613274:
      FUN_016133b8(param_1,uVar4);
    }
    else if (uVar6 < uVar11) {
      uVar4 = (ulong)((float)(ulong)param_1[0xb] / *(float *)(param_1 + 0xc));
      if ((uVar11 < 3) ||
         (uVar8 = uVar11 - (uVar11 >> 1 & 0x5555555555555555),
         uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333),
         1 < (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
        uVar4 = std::__next_prime(uVar4);
      }
      else if (1 < uVar4) {
        uVar4 = 1L << (-LZCOUNT(uVar4 - 1) & 0x3fU);
      }
      if (uVar4 <= uVar6) {
        uVar4 = uVar6;
      }
      if (uVar4 < uVar11) goto LAB_01613274;
    }
    uVar11 = param_1[1];
    if ((uVar11 & uVar11 - 1) == 0) {
      unaff_x25 = uVar11 - 1 & uVar10;
    }
    else if (uVar10 < uVar11) {
      unaff_x25 = uVar10;
    }
    else {
      uVar6 = 0;
      if (uVar11 != 0) {
        uVar6 = uVar10 / uVar11;
      }
      unaff_x25 = uVar10 - uVar6 * uVar11;
    }
  }
  plVar7 = *(long **)(*param_1 + unaff_x25 * 8);
  if (plVar7 == (long *)0x0) {
    plVar7 = param_1 + 6;
    *plVar9 = *plVar7;
    *plVar7 = (long)plVar9;
    *(long **)(*param_1 + unaff_x25 * 8) = plVar7;
    if (*plVar9 != 0) {
      uVar10 = *(ulong *)(*plVar9 + 8);
      if ((uVar11 & uVar11 - 1) == 0) {
        uVar10 = uVar10 & uVar11 - 1;
      }
      else if (uVar11 <= uVar10) {
        uVar6 = 0;
        if (uVar11 != 0) {
          uVar6 = uVar10 / uVar11;
        }
        uVar10 = uVar10 - uVar6 * uVar11;
      }
      plVar7 = (long *)(*param_1 + uVar10 * 8);
      goto LAB_01613198;
    }
  }
  else {
    *plVar9 = *plVar7;
LAB_01613198:
    *plVar7 = (long)plVar9;
  }
  uVar5 = 1;
  param_1[0xb] = param_1[0xb] + 1;
LAB_016131ac:
  auVar13._8_8_ = uVar5;
  auVar13._0_8_ = plVar9;
  return auVar13;
}


