/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01709a9c; name: FUN_01709a9c
 */


void FUN_01709a9c(long param_1,ulong *param_2,undefined8 param_3)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  ulong unaff_x27;
  undefined8 uVar11;
  float fVar12;
  undefined8 auStack_c0 [12];
  
  uVar9 = *param_2;
  uVar10 = *(ulong *)(param_1 + 0x48);
  plVar1 = (long *)(param_1 + 0x40);
  auStack_c0[0] = param_3;
  if (uVar10 != 0) {
    uVar7 = uVar10 - 1;
    if ((uVar10 & uVar7) == 0) {
      unaff_x27 = uVar7 & uVar9;
      plVar8 = *(long **)(*plVar1 + unaff_x27 * 8);
      if (plVar8 != (long *)0x0) {
        do {
          plVar8 = (long *)*plVar8;
          if ((plVar8 == (long *)0x0) || (plVar8[1] != uVar9 && (plVar8[1] & uVar7) != unaff_x27))
          goto LAB_01709b78;
        } while (plVar8[2] != uVar9);
        goto LAB_01709cd8;
      }
    }
    else {
      unaff_x27 = uVar9;
      if (uVar10 <= uVar9) {
        uVar7 = 0;
        if (uVar10 != 0) {
          uVar7 = uVar9 / uVar10;
        }
        unaff_x27 = uVar9 - uVar7 * uVar10;
      }
      plVar8 = *(long **)(*plVar1 + unaff_x27 * 8);
      if (plVar8 != (long *)0x0) {
        do {
          plVar8 = (long *)*plVar8;
          if (plVar8 == (long *)0x0) goto LAB_01709b78;
          uVar7 = plVar8[1];
          if (uVar7 != uVar9) {
            if (uVar10 <= uVar7) {
              uVar4 = 0;
              if (uVar10 != 0) {
                uVar4 = uVar7 / uVar10;
              }
              uVar7 = uVar7 - uVar4 * uVar10;
            }
            if (uVar7 != unaff_x27) goto LAB_01709b78;
          }
        } while (plVar8[2] != uVar9);
LAB_01709cd8:
        FUN_02a49368(auStack_c0);
        return;
      }
    }
  }
LAB_01709b78:
  plVar8 = (long *)(**(code **)(**(long **)(param_1 + 0x78) + 0x10))
                             (*(long **)(param_1 + 0x78),0xa0,0x10);
  if (plVar8 == (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x78) + 0xe8))();
  }
  uVar11 = *(undefined8 *)(param_1 + 0x78);
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
  uVar7 = *param_2;
  plVar8[4] = 0;
  plVar8[2] = uVar7;
  plVar8[5] = 0;
  plVar8[6] = 0;
  plVar8[7] = 0;
  FUN_02a49378(auStack_c0,plVar8 + 8);
  plVar8[7] = (long)FUN_02a49378;
  plVar8[4] = (long)&LAB_02a4935c;
  plVar8[5] = (long)FUN_02a49368;
  plVar8[6] = (long)&LAB_02a4936c;
  FUN_02a49368(auStack_c0);
  if (lVar3 != 0) {
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  }
  *plVar8 = 0;
  plVar8[1] = uVar9;
  fVar12 = (float)(*(long *)(param_1 + 0x98) + 1);
  if ((uVar10 == 0) || (*(float *)(param_1 + 0xa0) * (float)uVar10 < fVar12)) {
    uVar10 = (ulong)(uVar10 < 3 || (uVar10 & uVar10 - 1) != 0) | uVar10 << 1;
    uVar7 = (ulong)(fVar12 / *(float *)(param_1 + 0xa0));
    if (uVar7 <= uVar10) {
      uVar7 = uVar10;
    }
    if (uVar7 - 1 == 0) {
      uVar7 = 2;
    }
    else if ((uVar7 & uVar7 - 1) != 0) {
      uVar7 = std::__next_prime(uVar7);
    }
    uVar10 = *(ulong *)(param_1 + 0x48);
    if (uVar10 < uVar7) {
      uVar4 = uVar7;
LAB_01709d70:
      FUN_01709ef8(plVar1,uVar4);
    }
    else if (uVar7 < uVar10) {
      uVar4 = (ulong)((float)*(ulong *)(param_1 + 0x98) / *(float *)(param_1 + 0xa0));
      if ((uVar10 < 3) ||
         (uVar6 = uVar10 - (uVar10 >> 1 & 0x5555555555555555),
         uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333),
         1 < (uVar6 + (uVar6 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
        uVar4 = std::__next_prime(uVar4);
      }
      else if (1 < uVar4) {
        uVar4 = 1L << (-LZCOUNT(uVar4 - 1) & 0x3fU);
      }
      if (uVar4 <= uVar7) {
        uVar4 = uVar7;
      }
      if (uVar4 < uVar10) goto LAB_01709d70;
    }
    uVar10 = *(ulong *)(param_1 + 0x48);
    if ((uVar10 & uVar10 - 1) == 0) {
      unaff_x27 = uVar10 - 1 & uVar9;
    }
    else if (uVar9 < uVar10) {
      unaff_x27 = uVar9;
    }
    else {
      uVar7 = 0;
      if (uVar10 != 0) {
        uVar7 = uVar9 / uVar10;
      }
      unaff_x27 = uVar9 - uVar7 * uVar10;
    }
  }
  plVar5 = *(long **)(*plVar1 + unaff_x27 * 8);
  if (plVar5 == (long *)0x0) {
    plVar5 = (long *)(param_1 + 0x70);
    *plVar8 = *plVar5;
    *plVar5 = (long)plVar8;
    *(long **)(*(long *)(param_1 + 0x40) + unaff_x27 * 8) = plVar5;
    if (*plVar8 == 0) goto LAB_01709cc4;
    uVar9 = *(ulong *)(*plVar8 + 8);
    if ((uVar10 & uVar10 - 1) == 0) {
      uVar9 = uVar9 & uVar10 - 1;
    }
    else if (uVar10 <= uVar9) {
      uVar7 = 0;
      if (uVar10 != 0) {
        uVar7 = uVar9 / uVar10;
      }
      uVar9 = uVar9 - uVar7 * uVar10;
    }
    plVar5 = (long *)(*plVar1 + uVar9 * 8);
  }
  else {
    *plVar8 = *plVar5;
  }
  *plVar5 = (long)plVar8;
LAB_01709cc4:
  *(long *)(param_1 + 0x98) = *(long *)(param_1 + 0x98) + 1;
  return;
}


