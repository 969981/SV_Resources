/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0165986c; name: FUN_0165986c
 */


void FUN_0165986c(ulong *param_1,undefined4 param_2)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  ulong unaff_x25;
  undefined8 uVar13;
  float fVar14;
  
  if (((DAT_04840858 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04840858), iVar3 != 0)) {
    FUN_00100190(&LAB_02af32dc,&DAT_04840848,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04840858);
  }
  lVar2 = DAT_04840848;
  DAT_04840840 = DAT_04840848;
  uVar11 = *(ulong *)(DAT_04840848 + 0x478);
  plVar1 = (long *)(DAT_04840848 + 0x470);
  uVar12 = *param_1 & 0xffffffff;
  iVar3 = (int)*param_1;
  if (uVar11 != 0) {
    if ((uVar11 & uVar11 - 1) == 0) {
      unaff_x25 = (int)uVar11 - 1 & uVar12;
      plVar10 = *(long **)(*plVar1 + unaff_x25 * 8);
      if (plVar10 != (long *)0x0) {
        do {
          plVar10 = (long *)*plVar10;
          if ((plVar10 == (long *)0x0) ||
             (plVar10[1] != uVar12 && (plVar10[1] & uVar11 - 1) != unaff_x25)) goto LAB_0165992c;
        } while ((int)plVar10[2] != iVar3);
        goto LAB_01659a68;
      }
    }
    else {
      unaff_x25 = uVar12;
      if (uVar11 <= uVar12) {
        uVar7 = 0;
        if (uVar11 != 0) {
          uVar7 = uVar12 / uVar11;
        }
        unaff_x25 = uVar12 - uVar7 * uVar11;
      }
      plVar10 = *(long **)(*plVar1 + unaff_x25 * 8);
      if (plVar10 != (long *)0x0) {
        do {
          plVar10 = (long *)*plVar10;
          if (plVar10 == (long *)0x0) goto LAB_0165992c;
          uVar7 = plVar10[1];
          if (uVar7 != uVar12) {
            if (uVar11 <= uVar7) {
              uVar6 = 0;
              if (uVar11 != 0) {
                uVar6 = uVar7 / uVar11;
              }
              uVar7 = uVar7 - uVar6 * uVar11;
            }
            if (uVar7 != unaff_x25) goto LAB_0165992c;
          }
        } while ((int)plVar10[2] != iVar3);
        goto LAB_01659a68;
      }
    }
  }
LAB_0165992c:
  plVar10 = (long *)(**(code **)(**(long **)(DAT_04840848 + 0x4a8) + 0x10))
                              (*(long **)(DAT_04840848 + 0x4a8),0x18,4);
  if (plVar10 == (long *)0x0) {
    (**(code **)(**(long **)(lVar2 + 0x4a8) + 0xe8))();
  }
  uVar13 = *(undefined8 *)(lVar2 + 0x4a8);
  if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar5 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar5 == 0) {
    *(int *)(plVar10 + 2) = iVar3;
    *(undefined4 *)((long)plVar10 + 0x14) = 0;
  }
  else {
    if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = uVar13;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
    *(int *)(plVar10 + 2) = iVar3;
    *(undefined4 *)((long)plVar10 + 0x14) = 0;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
  }
  *plVar10 = 0;
  plVar10[1] = uVar12;
  fVar14 = (float)(*(long *)(lVar2 + 0x4c8) + 1);
  if ((uVar11 == 0) || (*(float *)(lVar2 + 0x4d0) * (float)uVar11 < fVar14)) {
    uVar11 = (ulong)(uVar11 < 3 || (uVar11 & uVar11 - 1) != 0) | uVar11 << 1;
    uVar7 = (ulong)(fVar14 / *(float *)(lVar2 + 0x4d0));
    if (uVar7 <= uVar11) {
      uVar7 = uVar11;
    }
    if (uVar7 - 1 == 0) {
      uVar7 = 2;
    }
    else if ((uVar7 & uVar7 - 1) != 0) {
      uVar7 = std::__next_prime(uVar7);
    }
    uVar11 = *(ulong *)(lVar2 + 0x478);
    if (uVar11 < uVar7) {
      uVar6 = uVar7;
LAB_01659a20:
      FUN_01659c74(plVar1,uVar6);
    }
    else if (uVar7 < uVar11) {
      uVar6 = (ulong)((float)*(ulong *)(lVar2 + 0x4c8) / *(float *)(lVar2 + 0x4d0));
      if ((uVar11 < 3) ||
         (uVar9 = uVar11 - (uVar11 >> 1 & 0x5555555555555555),
         uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333),
         1 < (uVar9 + (uVar9 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
        uVar6 = std::__next_prime(uVar6);
      }
      else if (1 < uVar6) {
        uVar6 = 1L << (-LZCOUNT(uVar6 - 1) & 0x3fU);
      }
      if (uVar6 <= uVar7) {
        uVar6 = uVar7;
      }
      if (uVar6 < uVar11) goto LAB_01659a20;
    }
    uVar11 = *(ulong *)(lVar2 + 0x478);
    if ((uVar11 & uVar11 - 1) == 0) {
      unaff_x25 = (int)uVar11 - 1 & uVar12;
    }
    else if (uVar12 < uVar11) {
      unaff_x25 = uVar12;
    }
    else {
      uVar7 = 0;
      if (uVar11 != 0) {
        uVar7 = uVar12 / uVar11;
      }
      unaff_x25 = uVar12 - uVar7 * uVar11;
    }
  }
  plVar8 = *(long **)(*plVar1 + unaff_x25 * 8);
  if (plVar8 == (long *)0x0) {
    *plVar10 = *(long *)(lVar2 + 0x4a0);
    *(long **)(lVar2 + 0x4a0) = plVar10;
    *(long *)(*(long *)(lVar2 + 0x470) + unaff_x25 * 8) = lVar2 + 0x4a0;
    if (*plVar10 != 0) {
      uVar12 = *(ulong *)(*plVar10 + 8);
      if ((uVar11 & uVar11 - 1) == 0) {
        uVar12 = uVar12 & uVar11 - 1;
      }
      else if (uVar11 <= uVar12) {
        uVar7 = 0;
        if (uVar11 != 0) {
          uVar7 = uVar12 / uVar11;
        }
        uVar12 = uVar12 - uVar7 * uVar11;
      }
      plVar8 = (long *)(*plVar1 + uVar12 * 8);
      goto LAB_01659a58;
    }
  }
  else {
    *plVar10 = *plVar8;
LAB_01659a58:
    *plVar8 = (long)plVar10;
  }
  *(long *)(lVar2 + 0x4c8) = *(long *)(lVar2 + 0x4c8) + 1;
LAB_01659a68:
  *(undefined4 *)((long)plVar10 + 0x14) = param_2;
  return;
}


