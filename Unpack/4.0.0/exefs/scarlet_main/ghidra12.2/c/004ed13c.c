/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004ed13c; name: FUN_004ed13c
 */


long * FUN_004ed13c(long *param_1,ulong *param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  ulong unaff_x24;
  
  uVar1 = *param_2;
  uVar4 = ((ulong)(uint)((int)uVar1 << 3) + 8 ^ uVar1 >> 0x20) * -0x622015f714c7d297;
  uVar4 = (uVar4 ^ uVar1 >> 0x20 ^ uVar4 >> 0x2f) * -0x622015f714c7d297;
  uVar4 = uVar4 ^ uVar4 >> 0x2f;
  uVar7 = uVar4 * -0x622015f714c7d297;
  uVar6 = param_1[1];
  if (uVar6 != 0) {
    uVar3 = uVar6 - 1;
    if ((uVar6 & uVar3) == 0) {
      unaff_x24 = uVar7 & uVar3;
      plVar5 = *(long **)(*param_1 + unaff_x24 * 8);
      if (plVar5 != (long *)0x0) {
        do {
          plVar5 = (long *)*plVar5;
          if ((plVar5 == (long *)0x0) || (plVar5[1] != uVar7 && (plVar5[1] & uVar3) != unaff_x24))
          goto LAB_004ed214;
        } while (plVar5[2] != uVar1);
        goto LAB_004ed384;
      }
    }
    else {
      if (uVar7 < uVar6) {
        plVar5 = *(long **)(*param_1 + uVar4 * -0x1100afb8a63e94b8);
        unaff_x24 = uVar7;
      }
      else {
        uVar4 = 0;
        if (uVar6 != 0) {
          uVar4 = uVar7 / uVar6;
        }
        unaff_x24 = uVar7 - uVar4 * uVar6;
        plVar5 = *(long **)(*param_1 + unaff_x24 * 8);
      }
      if (plVar5 != (long *)0x0) {
        do {
          plVar5 = (long *)*plVar5;
          if (plVar5 == (long *)0x0) goto LAB_004ed214;
          uVar4 = plVar5[1];
          if (uVar4 != uVar7) {
            if (uVar6 <= uVar4) {
              uVar3 = 0;
              if (uVar6 != 0) {
                uVar3 = uVar4 / uVar6;
              }
              uVar4 = uVar4 - uVar3 * uVar6;
            }
            if (uVar4 != unaff_x24) goto LAB_004ed214;
          }
        } while (plVar5[2] != uVar1);
        goto LAB_004ed384;
      }
    }
  }
LAB_004ed214:
  plVar5 = (long *)FUN_0049e770(PTR_FUN_047cba38,0x20);
  plVar5[2] = *param_2;
  plVar5[3] = 0;
  *plVar5 = 0;
  plVar5[1] = uVar7;
  if ((uVar6 == 0) || (*(float *)(param_1 + 4) * (float)uVar6 < (float)(param_1[3] + 1))) {
    uVar1 = (ulong)(uVar6 < 3 || (uVar6 & uVar6 - 1) != 0) | uVar6 << 1;
    uVar4 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar4 <= uVar1) {
      uVar4 = uVar1;
    }
                    /* try { // try from 004ed284 to 004ed28b has its CatchHandler @ 004ed39c */
    FUN_004ed67c(param_1,uVar4);
    uVar6 = param_1[1];
    if ((uVar6 & uVar6 - 1) == 0) {
      unaff_x24 = uVar6 - 1 & uVar7;
      plVar2 = *(long **)(*param_1 + unaff_x24 * 8);
    }
    else {
      if (uVar7 < uVar6) {
        unaff_x24 = uVar7;
        goto LAB_004ed2f8;
      }
      uVar1 = 0;
      if (uVar6 != 0) {
        uVar1 = uVar7 / uVar6;
      }
      unaff_x24 = uVar7 - uVar1 * uVar6;
      plVar2 = *(long **)(*param_1 + unaff_x24 * 8);
    }
    if (plVar2 == (long *)0x0) goto LAB_004ed324;
LAB_004ed304:
    *plVar5 = *plVar2;
LAB_004ed374:
    *plVar2 = (long)plVar5;
  }
  else {
LAB_004ed2f8:
    plVar2 = *(long **)(*param_1 + unaff_x24 * 8);
    if (plVar2 != (long *)0x0) goto LAB_004ed304;
LAB_004ed324:
    plVar2 = param_1 + 2;
    *plVar5 = *plVar2;
    *plVar2 = (long)plVar5;
    *(long **)(*param_1 + unaff_x24 * 8) = plVar2;
    if (*plVar5 != 0) {
      uVar1 = *(ulong *)(*plVar5 + 8);
      if ((uVar6 & uVar6 - 1) == 0) {
        uVar1 = uVar1 & uVar6 - 1;
      }
      else if (uVar6 <= uVar1) {
        uVar4 = 0;
        if (uVar6 != 0) {
          uVar4 = uVar1 / uVar6;
        }
        uVar1 = uVar1 - uVar4 * uVar6;
      }
      plVar2 = (long *)(*param_1 + uVar1 * 8);
      goto LAB_004ed374;
    }
  }
  param_1[3] = param_1[3] + 1;
LAB_004ed384:
  return plVar5 + 3;
}


