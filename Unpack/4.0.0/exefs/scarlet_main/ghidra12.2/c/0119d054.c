/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0119d054; name: FUN_0119d054
 */


void FUN_0119d054(undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4,
                 ulong *param_5,undefined4 param_6)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong unaff_x27;
  undefined8 uVar11;
  float fVar12;
  undefined2 local_74;
  undefined1 local_72;
  
  uVar9 = *param_5;
  uVar10 = *(ulong *)(param_4 + 0x208);
  plVar1 = (long *)(param_4 + 0x200);
  if (uVar10 != 0) {
    uVar8 = uVar10 - 1;
    if ((uVar10 & uVar8) == 0) {
      unaff_x27 = uVar8 & uVar9;
      plVar6 = *(long **)(*plVar1 + unaff_x27 * 8);
      if (plVar6 != (long *)0x0) {
        do {
          plVar6 = (long *)*plVar6;
          if ((plVar6 == (long *)0x0) || (plVar6[1] != uVar9 && (plVar6[1] & uVar8) != unaff_x27))
          goto LAB_0119d168;
        } while (plVar6[2] != uVar9);
        goto LAB_0119d0e4;
      }
    }
    else {
      unaff_x27 = uVar9;
      if (uVar10 <= uVar9) {
        uVar8 = 0;
        if (uVar10 != 0) {
          uVar8 = uVar9 / uVar10;
        }
        unaff_x27 = uVar9 - uVar8 * uVar10;
      }
      plVar6 = *(long **)(*plVar1 + unaff_x27 * 8);
      if (plVar6 != (long *)0x0) {
        do {
          plVar6 = (long *)*plVar6;
          if (plVar6 == (long *)0x0) goto LAB_0119d168;
          uVar8 = plVar6[1];
          if (uVar8 != uVar9) {
            if (uVar10 <= uVar8) {
              uVar5 = 0;
              if (uVar10 != 0) {
                uVar5 = uVar8 / uVar10;
              }
              uVar8 = uVar8 - uVar5 * uVar10;
            }
            if (uVar8 != unaff_x27) goto LAB_0119d168;
          }
        } while (plVar6[2] != uVar9);
LAB_0119d0e4:
        *(undefined4 *)((long)plVar6 + 0x30) = param_1;
        *(undefined4 *)((long)plVar6 + 0x34) = param_2;
        *(undefined4 *)((long)plVar6 + 0x38) = 0;
        *(undefined4 *)((long)plVar6 + 0x3c) = param_3;
        *(undefined4 *)((long)plVar6 + 0x40) = 0;
        *(undefined4 *)((long)plVar6 + 0x44) = param_6;
        *(undefined1 *)((long)plVar6 + 0x48) = 1;
        return;
      }
    }
  }
LAB_0119d168:
  plVar6 = (long *)(**(code **)(**(long **)(param_4 + 0x238) + 0x10))
                             (*(long **)(param_4 + 0x238),0x50,8);
  if (plVar6 == (long *)0x0) {
    (**(code **)(**(long **)(param_4 + 0x238) + 0xe8))();
  }
  uVar11 = *(undefined8 *)(param_4 + 0x238);
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
    *(undefined8 *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = uVar11;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  }
  plVar6[2] = *param_5;
  plVar6[3] = param_5[1];
  plVar6[4] = param_5[2];
  plVar4 = (long *)param_5[3];
  plVar6[5] = (long)plVar4;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))();
  }
  *(undefined4 *)(plVar6 + 6) = param_1;
  *(undefined4 *)((long)plVar6 + 0x34) = param_2;
  *(undefined4 *)(plVar6 + 7) = 0;
  *(undefined4 *)((long)plVar6 + 0x3c) = param_3;
  *(undefined4 *)(plVar6 + 8) = 0;
  *(undefined4 *)((long)plVar6 + 0x44) = param_6;
  *(undefined1 *)(plVar6 + 9) = 1;
  *(undefined1 *)((long)plVar6 + 0x4b) = local_72;
  *(undefined2 *)((long)plVar6 + 0x49) = local_74;
  if (lVar3 != 0) {
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  }
  *plVar6 = 0;
  plVar6[1] = uVar9;
  fVar12 = (float)(*(long *)(param_4 + 600) + 1);
  if ((uVar10 == 0) || (*(float *)(param_4 + 0x260) * (float)uVar10 < fVar12)) {
    uVar10 = (ulong)(uVar10 < 3 || (uVar10 & uVar10 - 1) != 0) | uVar10 << 1;
    uVar8 = (ulong)(fVar12 / *(float *)(param_4 + 0x260));
    if (uVar8 <= uVar10) {
      uVar8 = uVar10;
    }
    if (uVar8 - 1 == 0) {
      uVar8 = 2;
    }
    else if ((uVar8 & uVar8 - 1) != 0) {
      uVar8 = std::__next_prime(uVar8);
    }
    uVar10 = *(ulong *)(param_4 + 0x208);
    if (uVar10 < uVar8) {
      uVar5 = uVar8;
LAB_0119d2a8:
      FUN_0119d48c(plVar1,uVar5);
    }
    else if (uVar8 < uVar10) {
      uVar5 = (ulong)((float)*(ulong *)(param_4 + 600) / *(float *)(param_4 + 0x260));
      if ((uVar10 < 3) ||
         (uVar7 = uVar10 - (uVar10 >> 1 & 0x5555555555555555),
         uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333),
         1 < (uVar7 + (uVar7 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
        uVar5 = std::__next_prime(uVar5);
      }
      else if (1 < uVar5) {
        uVar5 = 1L << (-LZCOUNT(uVar5 - 1) & 0x3fU);
      }
      if (uVar5 <= uVar8) {
        uVar5 = uVar8;
      }
      if (uVar5 < uVar10) goto LAB_0119d2a8;
    }
    uVar10 = *(ulong *)(param_4 + 0x208);
    if ((uVar10 & uVar10 - 1) == 0) {
      unaff_x27 = uVar10 - 1 & uVar9;
    }
    else if (uVar9 < uVar10) {
      unaff_x27 = uVar9;
    }
    else {
      uVar8 = 0;
      if (uVar10 != 0) {
        uVar8 = uVar9 / uVar10;
      }
      unaff_x27 = uVar9 - uVar8 * uVar10;
    }
  }
  plVar4 = *(long **)(*plVar1 + unaff_x27 * 8);
  if (plVar4 == (long *)0x0) {
    *plVar6 = *(long *)(param_4 + 0x230);
    *(long **)(param_4 + 0x230) = plVar6;
    *(long *)(*(long *)(param_4 + 0x200) + unaff_x27 * 8) = param_4 + 0x230;
    if (*plVar6 == 0) goto LAB_0119d2ec;
    uVar9 = *(ulong *)(*plVar6 + 8);
    if ((uVar10 & uVar10 - 1) == 0) {
      uVar9 = uVar9 & uVar10 - 1;
    }
    else if (uVar10 <= uVar9) {
      uVar8 = 0;
      if (uVar10 != 0) {
        uVar8 = uVar9 / uVar10;
      }
      uVar9 = uVar9 - uVar8 * uVar10;
    }
    plVar4 = (long *)(*plVar1 + uVar9 * 8);
  }
  else {
    *plVar6 = *plVar4;
  }
  *plVar4 = (long)plVar6;
LAB_0119d2ec:
  *(long *)(param_4 + 600) = *(long *)(param_4 + 600) + 1;
  return;
}


