/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00503110; name: FUN_00503110
 */


undefined8 FUN_00503110(long *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  ulong unaff_x24;
  
  uVar2 = *param_2;
  uVar6 = ((ulong)(uint)((int)uVar2 << 3) + 8 ^ uVar2 >> 0x20) * -0x622015f714c7d297;
  uVar4 = (uVar6 ^ uVar2 >> 0x20 ^ uVar6 >> 0x2f) * -0x622015f714c7d297;
  uVar4 = uVar4 ^ uVar4 >> 0x2f;
  uVar8 = uVar4 * -0x622015f714c7d297;
  uVar6 = param_1[1];
  if (uVar6 != 0) {
    uVar5 = uVar6 - 1;
    if ((uVar6 & uVar5) == 0) {
      unaff_x24 = uVar8 & uVar5;
      plVar7 = *(long **)(*param_1 + unaff_x24 * 8);
      if (plVar7 != (long *)0x0) {
        while ((plVar7 = (long *)*plVar7, plVar7 != (long *)0x0 &&
               (plVar7[1] == uVar8 || (plVar7[1] & uVar5) == unaff_x24))) {
          if (plVar7[2] == uVar2) {
            return 0;
          }
        }
      }
    }
    else {
      if (uVar8 < uVar6) {
        plVar7 = *(long **)(*param_1 + uVar4 * -0x1100afb8a63e94b8);
        unaff_x24 = uVar8;
      }
      else {
        uVar5 = 0;
        if (uVar6 != 0) {
          uVar5 = uVar8 / uVar6;
        }
        unaff_x24 = uVar8 - uVar5 * uVar6;
        plVar7 = *(long **)(*param_1 + unaff_x24 * 8);
      }
      if (plVar7 != (long *)0x0) {
        while (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0) {
          uVar5 = plVar7[1];
          if (uVar5 != uVar8) {
            if (uVar6 <= uVar5) {
              uVar1 = 0;
              if (uVar6 != 0) {
                uVar1 = uVar5 / uVar6;
              }
              uVar5 = uVar5 - uVar1 * uVar6;
            }
            if (uVar5 != unaff_x24) break;
          }
          if (plVar7[2] == uVar2) {
            return 0;
          }
        }
      }
    }
  }
  plVar7 = (long *)FUN_0049e770(PTR_FUN_047cba38,0x20);
  uVar5 = param_2[1];
  uVar2 = *param_2;
  *plVar7 = 0;
  plVar7[1] = uVar8;
  plVar7[3] = uVar5;
  plVar7[2] = uVar2;
  if ((uVar6 == 0) || (*(float *)(param_1 + 4) * (float)uVar6 < (float)(param_1[3] + 1))) {
    uVar6 = (ulong)(uVar6 < 3 || (uVar6 & uVar6 - 1) != 0) | uVar6 << 1;
    uVar2 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar2 <= uVar6) {
      uVar2 = uVar6;
    }
                    /* try { // try from 005032b0 to 005032b7 has its CatchHandler @ 00503384 */
    FUN_005033a4(param_1,uVar2);
    uVar6 = param_1[1];
    if ((uVar6 & uVar6 - 1) == 0) {
      unaff_x24 = uVar6 - 1 & uVar8;
      plVar3 = *(long **)(*param_1 + unaff_x24 * 8);
      goto joined_r0x00503324;
    }
    if (uVar8 < uVar6) {
      plVar3 = *(long **)(*param_1 + uVar4 * -0x1100afb8a63e94b8);
      unaff_x24 = uVar8;
      goto joined_r0x00503324;
    }
    uVar2 = 0;
    if (uVar6 != 0) {
      uVar2 = uVar8 / uVar6;
    }
    unaff_x24 = uVar8 - uVar2 * uVar6;
    plVar3 = *(long **)(*param_1 + unaff_x24 * 8);
    if (plVar3 == (long *)0x0) goto LAB_005032d8;
LAB_0050323c:
    *plVar7 = *plVar3;
  }
  else {
    plVar3 = *(long **)(*param_1 + unaff_x24 * 8);
joined_r0x00503324:
    if (plVar3 != (long *)0x0) goto LAB_0050323c;
LAB_005032d8:
    plVar3 = param_1 + 2;
    *plVar7 = *plVar3;
    *plVar3 = (long)plVar7;
    *(long **)(*param_1 + unaff_x24 * 8) = plVar3;
    if (*plVar7 == 0) goto LAB_00503360;
    uVar2 = *(ulong *)(*plVar7 + 8);
    if ((uVar6 & uVar6 - 1) == 0) {
      uVar2 = uVar2 & uVar6 - 1;
    }
    else if (uVar6 <= uVar2) {
      uVar4 = 0;
      if (uVar6 != 0) {
        uVar4 = uVar2 / uVar6;
      }
      uVar2 = uVar2 - uVar4 * uVar6;
    }
    plVar3 = (long *)(*param_1 + uVar2 * 8);
  }
  *plVar3 = (long)plVar7;
LAB_00503360:
  param_1[3] = param_1[3] + 1;
  return 1;
}


