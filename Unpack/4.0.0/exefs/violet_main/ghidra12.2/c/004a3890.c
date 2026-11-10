/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004a3890; name: FUN_004a3890
 */


undefined8 FUN_004a3890(long *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong unaff_x23;
  long lVar7;
  long lVar8;
  undefined2 uVar9;
  int iVar10;
  long lVar11;
  undefined8 uVar12;
  
  lVar11 = param_2[1];
  iVar10 = (int)lVar11;
  lVar7 = *param_2;
  lVar8 = *param_3;
  uVar5 = param_1[1];
  uVar6 = (long)iVar10 * 0x1000193 ^ lVar7 * 0x100011b;
  if (uVar5 != 0) {
    uVar3 = uVar5 - 1;
    if ((uVar5 & uVar3) == 0) {
      unaff_x23 = uVar3 & uVar6;
      plVar4 = *(long **)(*param_1 + unaff_x23 * 8);
      if (plVar4 != (long *)0x0) {
        while ((plVar4 = (long *)*plVar4, plVar4 != (long *)0x0 &&
               (plVar4[1] == uVar6 || (plVar4[1] & uVar3) == unaff_x23))) {
          if (plVar4[2] == lVar7 && *(int *)(plVar4 + 3) == iVar10) {
            return 0;
          }
        }
      }
    }
    else {
      if (uVar6 < uVar5) {
        plVar4 = *(long **)(*param_1 + uVar6 * 8);
        unaff_x23 = uVar6;
      }
      else {
        uVar3 = 0;
        if (uVar5 != 0) {
          uVar3 = uVar6 / uVar5;
        }
        unaff_x23 = uVar6 - uVar3 * uVar5;
        plVar4 = *(long **)(*param_1 + unaff_x23 * 8);
      }
      if (plVar4 != (long *)0x0) {
        while (plVar4 = (long *)*plVar4, plVar4 != (long *)0x0) {
          uVar3 = plVar4[1];
          if (uVar3 != uVar6) {
            if (uVar5 <= uVar3) {
              uVar1 = 0;
              if (uVar5 != 0) {
                uVar1 = uVar3 / uVar5;
              }
              uVar3 = uVar3 - uVar1 * uVar5;
            }
            if (uVar3 != unaff_x23) break;
          }
          if (plVar4[2] == lVar7 && *(int *)(plVar4 + 3) == iVar10) {
            return 0;
          }
        }
      }
    }
  }
  plVar4 = (long *)FUN_0049e770(PTR_FUN_047cba38,0x28);
  plVar4[1] = uVar6;
  plVar4[2] = lVar7;
  plVar4[4] = lVar8;
  *plVar4 = 0;
  plVar4[3] = lVar11;
  if ((uVar5 == 0) || (*(float *)(param_1 + 4) * (float)uVar5 < (float)(param_1[3] + 1))) {
    uVar5 = (ulong)(uVar5 < 3 || (uVar5 & uVar5 - 1) != 0) | uVar5 << 1;
    uVar3 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar3 <= uVar5) {
      uVar3 = uVar5;
    }
    if (uVar3 - 1 == 0) {
      uVar3 = 2;
    }
    else if ((uVar3 & uVar3 - 1) != 0) {
                    /* try { // try from 004a3a58 to 004a3adb has its CatchHandler @ 004a3bc4 */
      uVar3 = std::__next_prime(uVar3);
    }
    uVar5 = param_1[1];
    if (uVar5 < uVar3) {
      uVar1 = uVar3;
LAB_004a3a78:
      FUN_004c2748(param_1,uVar1);
    }
    else if (uVar3 < uVar5) {
      uVar1 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((uVar5 < 3) ||
         (uVar12 = CONCAT17(POPCOUNT((char)(uVar5 >> 0x38)),
                            CONCAT16(POPCOUNT((char)(uVar5 >> 0x30)),
                                     CONCAT15(POPCOUNT((char)(uVar5 >> 0x28)),
                                              CONCAT14(POPCOUNT((char)(uVar5 >> 0x20)),
                                                       CONCAT13(POPCOUNT((char)(uVar5 >> 0x18)),
                                                                CONCAT12(POPCOUNT((char)(uVar5 >> 
                                                  0x10)),CONCAT11(POPCOUNT((char)(uVar5 >> 8)),
                                                                  POPCOUNT((char)uVar5)))))))),
         uVar9 = NEON_uaddlv(uVar12,1), 1 < (uint)CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar9))) {
        uVar1 = std::__next_prime(uVar1);
      }
      else if (1 < uVar1) {
        uVar1 = 1L << (-LZCOUNT(uVar1 - 1) & 0x3fU);
      }
      if (uVar1 <= uVar3) {
        uVar1 = uVar3;
      }
      if (uVar1 < uVar5) goto LAB_004a3a78;
    }
    uVar5 = param_1[1];
    if ((uVar5 & uVar5 - 1) == 0) {
      unaff_x23 = uVar5 - 1 & uVar6;
      plVar2 = *(long **)(*param_1 + unaff_x23 * 8);
      goto joined_r0x004a3b60;
    }
    if (uVar6 < uVar5) {
      plVar2 = *(long **)(*param_1 + uVar6 * 8);
      unaff_x23 = uVar6;
      goto joined_r0x004a3b60;
    }
    uVar3 = 0;
    if (uVar5 != 0) {
      uVar3 = uVar6 / uVar5;
    }
    unaff_x23 = uVar6 - uVar3 * uVar5;
    plVar2 = *(long **)(*param_1 + unaff_x23 * 8);
    if (plVar2 != (long *)0x0) goto LAB_004a39c4;
LAB_004a3b14:
    plVar2 = param_1 + 2;
    *plVar4 = *plVar2;
    *plVar2 = (long)plVar4;
    *(long **)(*param_1 + unaff_x23 * 8) = plVar2;
    if (*plVar4 == 0) goto LAB_004a3b9c;
    uVar6 = *(ulong *)(*plVar4 + 8);
    if ((uVar5 & uVar5 - 1) == 0) {
      uVar6 = uVar6 & uVar5 - 1;
    }
    else if (uVar5 <= uVar6) {
      uVar3 = 0;
      if (uVar5 != 0) {
        uVar3 = uVar6 / uVar5;
      }
      uVar6 = uVar6 - uVar3 * uVar5;
    }
    plVar2 = (long *)(*param_1 + uVar6 * 8);
  }
  else {
    plVar2 = *(long **)(*param_1 + unaff_x23 * 8);
joined_r0x004a3b60:
    if (plVar2 == (long *)0x0) goto LAB_004a3b14;
LAB_004a39c4:
    *plVar4 = *plVar2;
  }
  *plVar2 = (long)plVar4;
LAB_004a3b9c:
  param_1[3] = param_1[3] + 1;
  return 1;
}


