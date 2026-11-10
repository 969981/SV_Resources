/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00520eb0; name: FUN_00520eb0
 */


void FUN_00520eb0(ulong param_1,int param_2,long *param_3)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  ulong unaff_x25;
  undefined2 uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  
  if (((DAT_047f5218 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_047f5218), iVar1 != 0)) {
    plVar3 = (long *)FUN_0049e770(PTR_FUN_047cba38,0x28);
    if (plVar3 != (long *)0x0) {
      *(undefined4 *)(plVar3 + 4) = 0x3f800000;
      plVar3[1] = 0;
      *plVar3 = 0;
      plVar3[3] = 0;
      plVar3[2] = 0;
    }
                    /* try { // try from 00521240 to 0052124f has its CatchHandler @ 00521264 */
    FUN_0052d820(&LAB_0052aa64,plVar3);
    DAT_047f5210 = plVar3;
    __cxa_guard_release(&DAT_047f5218);
  }
  plVar3 = DAT_047f5210;
  DAT_047f5208 = DAT_047f5210;
  lVar12 = param_3[1];
  lVar10 = *param_3;
  lVar14 = param_3[3];
  lVar13 = param_3[2];
  uVar6 = ((ulong)(uint)((int)param_1 << 3) + 8 ^ param_1 >> 0x20) * -0x622015f714c7d297;
  uVar8 = DAT_047f5210[1];
  uVar6 = (uVar6 ^ param_1 >> 0x20 ^ uVar6 >> 0x2f) * -0x622015f714c7d297;
  uVar6 = (uVar6 ^ uVar6 >> 0x2f) * -0x622015f714c7d297 ^ (long)param_2;
  if (uVar8 != 0) {
    uVar4 = uVar8 - 1;
    if ((uVar8 & uVar4) == 0) {
      unaff_x25 = uVar4 & uVar6;
      plVar7 = *(long **)(*DAT_047f5210 + unaff_x25 * 8);
      if (plVar7 != (long *)0x0) {
        while ((plVar7 = (long *)*plVar7, plVar7 != (long *)0x0 &&
               (plVar7[1] == uVar6 || (plVar7[1] & uVar4) == unaff_x25))) {
          if (plVar7[2] == param_1 && *(int *)(plVar7 + 3) == param_2) {
            return;
          }
        }
      }
    }
    else {
      if (uVar6 < uVar8) {
        plVar7 = *(long **)(*DAT_047f5210 + uVar6 * 8);
        unaff_x25 = uVar6;
      }
      else {
        uVar4 = 0;
        if (uVar8 != 0) {
          uVar4 = uVar6 / uVar8;
        }
        unaff_x25 = uVar6 - uVar4 * uVar8;
        plVar7 = *(long **)(*DAT_047f5210 + unaff_x25 * 8);
      }
      if (plVar7 != (long *)0x0) {
        while (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0) {
          uVar4 = plVar7[1];
          if (uVar4 != uVar6) {
            if (uVar8 <= uVar4) {
              uVar2 = 0;
              if (uVar8 != 0) {
                uVar2 = uVar4 / uVar8;
              }
              uVar4 = uVar4 - uVar2 * uVar8;
            }
            if (uVar4 != unaff_x25) break;
          }
          if (plVar7[2] == param_1 && *(int *)(plVar7 + 3) == param_2) {
            return;
          }
        }
      }
    }
  }
  plVar7 = (long *)FUN_0049e770(PTR_FUN_047cba38,0x40);
  plVar7[1] = uVar6;
  plVar7[2] = param_1;
  *(int *)(plVar7 + 3) = param_2;
  *(undefined4 *)((long)plVar7 + 0x1c) = 0;
  plVar7[5] = lVar12;
  plVar7[4] = lVar10;
  plVar7[7] = lVar14;
  plVar7[6] = lVar13;
  *plVar7 = 0;
  if ((uVar8 == 0) || (*(float *)(plVar3 + 4) * (float)uVar8 < (float)(plVar3[3] + 1))) {
    uVar8 = (ulong)(uVar8 < 3 || (uVar8 & uVar8 - 1) != 0) | uVar8 << 1;
    uVar4 = (ulong)((float)(plVar3[3] + 1) / *(float *)(plVar3 + 4));
    if (uVar4 <= uVar8) {
      uVar4 = uVar8;
    }
    if (uVar4 - 1 == 0) {
      uVar4 = 2;
    }
    else if ((uVar4 & uVar4 - 1) != 0) {
                    /* try { // try from 00521098 to 0052111b has its CatchHandler @ 00521278 */
      uVar4 = std::__next_prime(uVar4);
    }
    uVar8 = plVar3[1];
    if (uVar8 < uVar4) {
      uVar2 = uVar4;
LAB_005210b8:
      FUN_0052aacc(plVar3,uVar2);
    }
    else if (uVar4 < uVar8) {
      uVar2 = (ulong)((float)(ulong)plVar3[3] / *(float *)(plVar3 + 4));
      if ((uVar8 < 3) ||
         (uVar11 = CONCAT17(POPCOUNT((char)(uVar8 >> 0x38)),
                            CONCAT16(POPCOUNT((char)(uVar8 >> 0x30)),
                                     CONCAT15(POPCOUNT((char)(uVar8 >> 0x28)),
                                              CONCAT14(POPCOUNT((char)(uVar8 >> 0x20)),
                                                       CONCAT13(POPCOUNT((char)(uVar8 >> 0x18)),
                                                                CONCAT12(POPCOUNT((char)(uVar8 >> 
                                                  0x10)),CONCAT11(POPCOUNT((char)(uVar8 >> 8)),
                                                                  POPCOUNT((char)uVar8)))))))),
         uVar9 = NEON_uaddlv(uVar11,1), 1 < (uint)CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar9))) {
        uVar2 = std::__next_prime(uVar2);
      }
      else if (1 < uVar2) {
        uVar2 = 1L << (-LZCOUNT(uVar2 - 1) & 0x3fU);
      }
      if (uVar2 <= uVar4) {
        uVar2 = uVar4;
      }
      if (uVar2 < uVar8) goto LAB_005210b8;
    }
    uVar8 = plVar3[1];
    if ((uVar8 & uVar8 - 1) == 0) {
      unaff_x25 = uVar8 - 1 & uVar6;
      plVar5 = *(long **)(*plVar3 + unaff_x25 * 8);
    }
    else {
      if (uVar6 < uVar8) {
        unaff_x25 = uVar6;
        goto LAB_00521164;
      }
      uVar4 = 0;
      if (uVar8 != 0) {
        uVar4 = uVar6 / uVar8;
      }
      unaff_x25 = uVar6 - uVar4 * uVar8;
      plVar5 = *(long **)(*plVar3 + unaff_x25 * 8);
    }
    if (plVar5 == (long *)0x0) goto LAB_00521190;
LAB_00521170:
    *plVar7 = *plVar5;
  }
  else {
LAB_00521164:
    plVar5 = *(long **)(*plVar3 + unaff_x25 * 8);
    if (plVar5 != (long *)0x0) goto LAB_00521170;
LAB_00521190:
    plVar5 = plVar3 + 2;
    *plVar7 = *plVar5;
    *plVar5 = (long)plVar7;
    *(long **)(*plVar3 + unaff_x25 * 8) = plVar5;
    if (*plVar7 == 0) goto LAB_005211e4;
    uVar6 = *(ulong *)(*plVar7 + 8);
    if ((uVar8 & uVar8 - 1) == 0) {
      uVar6 = uVar6 & uVar8 - 1;
    }
    else if (uVar8 <= uVar6) {
      uVar4 = 0;
      if (uVar8 != 0) {
        uVar4 = uVar6 / uVar8;
      }
      uVar6 = uVar6 - uVar4 * uVar8;
    }
    plVar5 = (long *)(*plVar3 + uVar6 * 8);
  }
  *plVar5 = (long)plVar7;
LAB_005211e4:
  plVar3[3] = plVar3[3] + 1;
  return;
}


