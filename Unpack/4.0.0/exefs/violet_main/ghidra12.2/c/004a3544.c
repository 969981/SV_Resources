/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004a3544; name: FUN_004a3544
 */


undefined8 FUN_004a3544(long param_1,long param_2)

{
  long *plVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  ulong unaff_x25;
  long lVar9;
  undefined2 uVar10;
  float fVar11;
  undefined8 uVar12;
  
  lVar9 = *(long *)(param_2 + 0x50);
  iVar2 = *(int *)(param_2 + 0x44);
  plVar1 = (long *)(param_1 + 0x98);
  uVar8 = *(ulong *)(param_1 + 0xa0);
  uVar7 = (long)iVar2 * 0x1000193 ^ lVar9 * 0x100011b;
  if (uVar8 != 0) {
    uVar4 = uVar8 - 1;
    if ((uVar8 & uVar4) == 0) {
      unaff_x25 = uVar7 & uVar4;
      plVar6 = *(long **)(*plVar1 + unaff_x25 * 8);
      if (plVar6 != (long *)0x0) {
        while ((plVar6 = (long *)*plVar6, plVar6 != (long *)0x0 &&
               (plVar6[1] == uVar7 || (plVar6[1] & uVar4) == unaff_x25))) {
          if (plVar6[2] == lVar9 && *(int *)(plVar6 + 3) == iVar2) {
            return 0;
          }
        }
      }
    }
    else {
      if (uVar7 < uVar8) {
        plVar6 = *(long **)(*plVar1 + uVar7 * 8);
        unaff_x25 = uVar7;
      }
      else {
        uVar4 = 0;
        if (uVar8 != 0) {
          uVar4 = uVar7 / uVar8;
        }
        unaff_x25 = uVar7 - uVar4 * uVar8;
        plVar6 = *(long **)(*plVar1 + unaff_x25 * 8);
      }
      if (plVar6 != (long *)0x0) {
        while (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0) {
          uVar4 = plVar6[1];
          if (uVar4 != uVar7) {
            if (uVar8 <= uVar4) {
              uVar3 = 0;
              if (uVar8 != 0) {
                uVar3 = uVar4 / uVar8;
              }
              uVar4 = uVar4 - uVar3 * uVar8;
            }
            if (uVar4 != unaff_x25) break;
          }
          if (plVar6[2] == lVar9 && *(int *)(plVar6 + 3) == iVar2) {
            return 0;
          }
        }
      }
    }
  }
  plVar6 = (long *)FUN_0049e770(PTR_FUN_047cba38,0x28);
  plVar6[1] = uVar7;
  plVar6[2] = lVar9;
  *(int *)(plVar6 + 3) = iVar2;
  plVar6[4] = param_2;
  *plVar6 = 0;
  fVar11 = (float)(*(long *)(param_1 + 0xb0) + 1);
  if ((uVar8 == 0) || (*(float *)(param_1 + 0xb8) * (float)uVar8 < fVar11)) {
    uVar8 = (ulong)(uVar8 < 3 || (uVar8 & uVar8 - 1) != 0) | uVar8 << 1;
    uVar4 = (ulong)(fVar11 / *(float *)(param_1 + 0xb8));
    if (uVar4 <= uVar8) {
      uVar4 = uVar8;
    }
    if (uVar4 - 1 == 0) {
      uVar4 = 2;
    }
    else if ((uVar4 & uVar4 - 1) != 0) {
                    /* try { // try from 004a36fc to 004a377f has its CatchHandler @ 004a3868 */
      uVar4 = std::__next_prime(uVar4);
    }
    uVar8 = *(ulong *)(param_1 + 0xa0);
    if (uVar8 < uVar4) {
      uVar3 = uVar4;
LAB_004a371c:
      FUN_004c24dc(plVar1,uVar3);
    }
    else if (uVar4 < uVar8) {
      uVar3 = (ulong)((float)*(ulong *)(param_1 + 0xb0) / *(float *)(param_1 + 0xb8));
      if ((uVar8 < 3) ||
         (uVar12 = CONCAT17(POPCOUNT((char)(uVar8 >> 0x38)),
                            CONCAT16(POPCOUNT((char)(uVar8 >> 0x30)),
                                     CONCAT15(POPCOUNT((char)(uVar8 >> 0x28)),
                                              CONCAT14(POPCOUNT((char)(uVar8 >> 0x20)),
                                                       CONCAT13(POPCOUNT((char)(uVar8 >> 0x18)),
                                                                CONCAT12(POPCOUNT((char)(uVar8 >> 
                                                  0x10)),CONCAT11(POPCOUNT((char)(uVar8 >> 8)),
                                                                  POPCOUNT((char)uVar8)))))))),
         uVar10 = NEON_uaddlv(uVar12,1), 1 < (uint)CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar10)))
      {
        uVar3 = std::__next_prime(uVar3);
      }
      else if (1 < uVar3) {
        uVar3 = 1L << (-LZCOUNT(uVar3 - 1) & 0x3fU);
      }
      if (uVar3 <= uVar4) {
        uVar3 = uVar4;
      }
      if (uVar3 < uVar8) goto LAB_004a371c;
    }
    uVar8 = *(ulong *)(param_1 + 0xa0);
    if ((uVar8 & uVar8 - 1) == 0) {
      unaff_x25 = uVar8 - 1 & uVar7;
      plVar5 = *(long **)(*plVar1 + unaff_x25 * 8);
      goto joined_r0x004a3804;
    }
    if (uVar7 < uVar8) {
      plVar5 = *(long **)(*plVar1 + uVar7 * 8);
      unaff_x25 = uVar7;
      goto joined_r0x004a3804;
    }
    uVar4 = 0;
    if (uVar8 != 0) {
      uVar4 = uVar7 / uVar8;
    }
    unaff_x25 = uVar7 - uVar4 * uVar8;
    plVar5 = *(long **)(*plVar1 + unaff_x25 * 8);
    if (plVar5 != (long *)0x0) goto LAB_004a3668;
LAB_004a37b8:
    plVar5 = (long *)(param_1 + 0xa8);
    *plVar6 = *plVar5;
    *plVar5 = (long)plVar6;
    *(long **)(*(long *)(param_1 + 0x98) + unaff_x25 * 8) = plVar5;
    if (*plVar6 == 0) goto LAB_004a3840;
    uVar7 = *(ulong *)(*plVar6 + 8);
    if ((uVar8 & uVar8 - 1) == 0) {
      uVar7 = uVar7 & uVar8 - 1;
    }
    else if (uVar8 <= uVar7) {
      uVar4 = 0;
      if (uVar8 != 0) {
        uVar4 = uVar7 / uVar8;
      }
      uVar7 = uVar7 - uVar4 * uVar8;
    }
    plVar5 = (long *)(*plVar1 + uVar7 * 8);
  }
  else {
    plVar5 = *(long **)(*plVar1 + unaff_x25 * 8);
joined_r0x004a3804:
    if (plVar5 == (long *)0x0) goto LAB_004a37b8;
LAB_004a3668:
    *plVar6 = *plVar5;
  }
  *plVar5 = (long)plVar6;
LAB_004a3840:
  *(long *)(param_1 + 0xb0) = *(long *)(param_1 + 0xb0) + 1;
  return 1;
}


