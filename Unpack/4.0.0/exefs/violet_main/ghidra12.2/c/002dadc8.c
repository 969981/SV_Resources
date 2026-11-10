/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002dadc8; name: FUN_002dadc8
 */


long * FUN_002dadc8(long *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong unaff_x24;
  
  uVar6 = *param_2;
  uVar5 = param_1[1];
  if (uVar5 != 0) {
    uVar2 = uVar5 - 1;
    if ((uVar5 & uVar2) == 0) {
      unaff_x24 = uVar2 & uVar6;
      plVar4 = *(long **)(*param_1 + unaff_x24 * 8);
      if (plVar4 != (long *)0x0) {
        do {
          plVar4 = (long *)*plVar4;
          if ((plVar4 == (long *)0x0) || (plVar4[1] != uVar6 && (plVar4[1] & uVar2) != unaff_x24))
          goto LAB_002dae68;
        } while (plVar4[2] != uVar6);
        goto LAB_002dafdc;
      }
    }
    else {
      if (uVar6 < uVar5) {
        plVar4 = *(long **)(*param_1 + uVar6 * 8);
        unaff_x24 = uVar6;
      }
      else {
        uVar2 = 0;
        if (uVar5 != 0) {
          uVar2 = uVar6 / uVar5;
        }
        unaff_x24 = uVar6 - uVar2 * uVar5;
        plVar4 = *(long **)(*param_1 + unaff_x24 * 8);
      }
      if (plVar4 != (long *)0x0) {
        do {
          plVar4 = (long *)*plVar4;
          if (plVar4 == (long *)0x0) goto LAB_002dae68;
          uVar2 = plVar4[1];
          if (uVar2 != uVar6) {
            if (uVar5 <= uVar2) {
              uVar1 = 0;
              if (uVar5 != 0) {
                uVar1 = uVar2 / uVar5;
              }
              uVar2 = uVar2 - uVar1 * uVar5;
            }
            if (uVar2 != unaff_x24) goto LAB_002dae68;
          }
        } while (plVar4[2] != uVar6);
        goto LAB_002dafdc;
      }
    }
  }
LAB_002dae68:
  plVar4 = (long *)FUN_0049e770(PTR_FUN_047cba38,0x20);
  uVar2 = *param_2;
  plVar4[1] = uVar6;
  plVar4[2] = uVar2;
  *(undefined4 *)(plVar4 + 3) = 0;
  *plVar4 = 0;
  if ((uVar5 == 0) || (*(float *)(param_1 + 4) * (float)uVar5 < (float)(param_1[3] + 1))) {
    uVar5 = (ulong)(uVar5 < 3 || (uVar5 & uVar5 - 1) != 0) | uVar5 << 1;
    uVar2 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar2 <= uVar5) {
      uVar2 = uVar5;
    }
                    /* try { // try from 002daedc to 002daee3 has its CatchHandler @ 002daff4 */
    FUN_002dd4a0(param_1,uVar2);
    uVar5 = param_1[1];
    if ((uVar5 & uVar5 - 1) == 0) {
      unaff_x24 = uVar5 - 1 & uVar6;
      plVar3 = *(long **)(*param_1 + unaff_x24 * 8);
    }
    else {
      if (uVar6 < uVar5) {
        unaff_x24 = uVar6;
        goto LAB_002daf50;
      }
      uVar2 = 0;
      if (uVar5 != 0) {
        uVar2 = uVar6 / uVar5;
      }
      unaff_x24 = uVar6 - uVar2 * uVar5;
      plVar3 = *(long **)(*param_1 + unaff_x24 * 8);
    }
    if (plVar3 == (long *)0x0) goto LAB_002daf7c;
LAB_002daf5c:
    *plVar4 = *plVar3;
LAB_002dafcc:
    *plVar3 = (long)plVar4;
  }
  else {
LAB_002daf50:
    plVar3 = *(long **)(*param_1 + unaff_x24 * 8);
    if (plVar3 != (long *)0x0) goto LAB_002daf5c;
LAB_002daf7c:
    plVar3 = param_1 + 2;
    *plVar4 = *plVar3;
    *plVar3 = (long)plVar4;
    *(long **)(*param_1 + unaff_x24 * 8) = plVar3;
    if (*plVar4 != 0) {
      uVar6 = *(ulong *)(*plVar4 + 8);
      if ((uVar5 & uVar5 - 1) == 0) {
        uVar6 = uVar6 & uVar5 - 1;
      }
      else if (uVar5 <= uVar6) {
        uVar2 = 0;
        if (uVar5 != 0) {
          uVar2 = uVar6 / uVar5;
        }
        uVar6 = uVar6 - uVar2 * uVar5;
      }
      plVar3 = (long *)(*param_1 + uVar6 * 8);
      goto LAB_002dafcc;
    }
  }
  param_1[3] = param_1[3] + 1;
LAB_002dafdc:
  return plVar4 + 3;
}


