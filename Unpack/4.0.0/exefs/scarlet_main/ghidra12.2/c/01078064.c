/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01078064; name: FUN_01078064
 */


long FUN_01078064(long *param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  ulong unaff_x24;
  long lVar11;
  
  uVar1 = *param_2;
  uVar9 = (ulong)uVar1;
  uVar10 = param_1[1];
  if (uVar10 != 0) {
    if ((uVar10 & uVar10 - 1) == 0) {
      unaff_x24 = (ulong)((int)uVar10 - 1U & uVar1);
      plVar8 = *(long **)(*param_1 + unaff_x24 * 8);
      if (plVar8 != (long *)0x0) {
        do {
          plVar8 = (long *)*plVar8;
          if ((plVar8 == (long *)0x0) ||
             (plVar8[1] != uVar9 && (plVar8[1] & uVar10 - 1) != unaff_x24)) goto LAB_010780b4;
        } while (*(uint *)(plVar8 + 2) != uVar1);
        goto LAB_010781b0;
      }
    }
    else {
      unaff_x24 = uVar9;
      if (uVar10 <= uVar9) {
        uVar7 = 0;
        if (uVar10 != 0) {
          uVar7 = uVar9 / uVar10;
        }
        unaff_x24 = uVar9 - uVar7 * uVar10;
      }
      plVar8 = *(long **)(*param_1 + unaff_x24 * 8);
      if (plVar8 != (long *)0x0) {
        do {
          plVar8 = (long *)*plVar8;
          if (plVar8 == (long *)0x0) goto LAB_010780b4;
          uVar7 = plVar8[1];
          if (uVar7 != uVar9) {
            if (uVar10 <= uVar7) {
              uVar4 = 0;
              if (uVar10 != 0) {
                uVar4 = uVar7 / uVar10;
              }
              uVar7 = uVar7 - uVar4 * uVar10;
            }
            if (uVar7 != unaff_x24) goto LAB_010780b4;
          }
        } while (*(uint *)(plVar8 + 2) != uVar1);
        goto LAB_010781b0;
      }
    }
  }
LAB_010780b4:
  plVar8 = (long *)(**(code **)(*(long *)param_1[7] + 0x10))((long *)param_1[7],0x20,4);
  if (plVar8 == (long *)0x0) {
    (**(code **)(*(long *)param_1[7] + 0xe8))();
  }
  lVar11 = param_1[7];
  if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar3 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar3 == 0) {
    *(uint *)(plVar8 + 2) = *param_2;
    *(undefined8 *)((long)plVar8 + 0x14) = 0;
  }
  else {
    if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar11;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
    *(uint *)(plVar8 + 2) = *param_2;
    *(undefined8 *)((long)plVar8 + 0x14) = 0;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  }
  *plVar8 = 0;
  plVar8[1] = uVar9;
  if ((uVar10 == 0) || (*(float *)(param_1 + 0xc) * (float)uVar10 < (float)(param_1[0xb] + 1))) {
    uVar10 = (ulong)(uVar10 < 3 || (uVar10 & uVar10 - 1) != 0) | uVar10 << 1;
    uVar7 = (ulong)((float)(param_1[0xb] + 1) / *(float *)(param_1 + 0xc));
    if (uVar7 <= uVar10) {
      uVar7 = uVar10;
    }
    if (uVar7 - 1 == 0) {
      uVar7 = 2;
    }
    else if ((uVar7 & uVar7 - 1) != 0) {
      uVar7 = std::__next_prime(uVar7);
    }
    uVar10 = param_1[1];
    if (uVar10 < uVar7) {
      uVar4 = uVar7;
LAB_01078260:
      FUN_0107bb84(param_1,uVar4);
    }
    else if (uVar7 < uVar10) {
      uVar4 = (ulong)((float)(ulong)param_1[0xb] / *(float *)(param_1 + 0xc));
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
      if (uVar4 < uVar10) goto LAB_01078260;
    }
    uVar10 = param_1[1];
    if ((uVar10 & uVar10 - 1) == 0) {
      unaff_x24 = (ulong)((int)uVar10 - 1U & uVar1);
    }
    else if (uVar9 < uVar10) {
      unaff_x24 = uVar9;
    }
    else {
      uVar7 = 0;
      if (uVar10 != 0) {
        uVar7 = uVar9 / uVar10;
      }
      unaff_x24 = uVar9 - uVar7 * uVar10;
    }
  }
  plVar5 = *(long **)(*param_1 + unaff_x24 * 8);
  if (plVar5 == (long *)0x0) {
    plVar5 = param_1 + 6;
    *plVar8 = *plVar5;
    *plVar5 = (long)plVar8;
    *(long **)(*param_1 + unaff_x24 * 8) = plVar5;
    if (*plVar8 != 0) {
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
      plVar5 = (long *)(*param_1 + uVar9 * 8);
      goto LAB_010781a0;
    }
  }
  else {
    *plVar8 = *plVar5;
LAB_010781a0:
    *plVar5 = (long)plVar8;
  }
  param_1[0xb] = param_1[0xb] + 1;
LAB_010781b0:
  return (long)plVar8 + 0x14;
}


