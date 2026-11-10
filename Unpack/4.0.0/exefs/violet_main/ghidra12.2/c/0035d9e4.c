/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0035d9e4; name: FUN_0035d9e4
 */


void FUN_0035d9e4(long param_1,uint param_2,long param_3)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong unaff_x27;
  float fVar8;
  
  uVar6 = (ulong)param_2;
  FUN_0038db40(param_1 + 0x18);
  uVar7 = *(ulong *)(param_1 + 0x50);
  plVar1 = (long *)(param_1 + 0x48);
  if (uVar7 != 0) {
    if ((uVar7 & uVar7 - 1) == 0) {
      unaff_x27 = (ulong)((int)uVar7 - 1U & param_2);
      plVar4 = *(long **)(*plVar1 + unaff_x27 * 8);
      if (plVar4 != (long *)0x0) {
        do {
          plVar4 = (long *)*plVar4;
          if ((plVar4 == (long *)0x0) ||
             (plVar4[1] != uVar6 && (plVar4[1] & uVar7 - 1) != unaff_x27)) goto LAB_0035daa0;
        } while (*(uint *)(plVar4 + 2) != param_2);
        goto LAB_0035dc14;
      }
    }
    else {
      if (uVar6 < uVar7) {
        plVar4 = *(long **)(*plVar1 + uVar6 * 8);
        unaff_x27 = uVar6;
      }
      else {
        uVar5 = 0;
        if (uVar7 != 0) {
          uVar5 = uVar6 / uVar7;
        }
        unaff_x27 = uVar6 - uVar5 * uVar7;
        plVar4 = *(long **)(*plVar1 + unaff_x27 * 8);
      }
      if (plVar4 != (long *)0x0) {
        do {
          plVar4 = (long *)*plVar4;
          if (plVar4 == (long *)0x0) goto LAB_0035daa0;
          uVar5 = plVar4[1];
          if (uVar5 != uVar6) {
            if (uVar7 <= uVar5) {
              uVar2 = 0;
              if (uVar7 != 0) {
                uVar2 = uVar5 / uVar7;
              }
              uVar5 = uVar5 - uVar2 * uVar7;
            }
            if (uVar5 != unaff_x27) goto LAB_0035daa0;
          }
        } while (*(uint *)(plVar4 + 2) != param_2);
        goto LAB_0035dc14;
      }
    }
  }
LAB_0035daa0:
  plVar4 = (long *)FUN_0049e770(PTR_FUN_047cba38,0x20);
  *(uint *)(plVar4 + 2) = param_2;
  plVar4[3] = param_3;
  *plVar4 = 0;
  plVar4[1] = uVar6;
  fVar8 = (float)(*(long *)(param_1 + 0x60) + 1);
  if ((uVar7 == 0) || (*(float *)(param_1 + 0x68) * (float)uVar7 < fVar8)) {
    uVar7 = (ulong)(uVar7 < 3 || (uVar7 & uVar7 - 1) != 0) | uVar7 << 1;
    uVar5 = (ulong)(fVar8 / *(float *)(param_1 + 0x68));
    if (uVar5 <= uVar7) {
      uVar5 = uVar7;
    }
                    /* try { // try from 0035db10 to 0035db17 has its CatchHandler @ 0035dc34 */
    FUN_0035dc64(plVar1,uVar5);
    uVar7 = *(ulong *)(param_1 + 0x50);
    if ((uVar7 & uVar7 - 1) == 0) {
      unaff_x27 = (ulong)((int)uVar7 - 1U & param_2);
      plVar3 = *(long **)(*plVar1 + unaff_x27 * 8);
    }
    else {
      if (uVar6 < uVar7) {
        unaff_x27 = uVar6;
        goto LAB_0035db88;
      }
      uVar5 = 0;
      if (uVar7 != 0) {
        uVar5 = uVar6 / uVar7;
      }
      unaff_x27 = uVar6 - uVar5 * uVar7;
      plVar3 = *(long **)(*plVar1 + unaff_x27 * 8);
    }
    if (plVar3 == (long *)0x0) goto LAB_0035dbb4;
LAB_0035db94:
    *plVar4 = *plVar3;
LAB_0035dc04:
    *plVar3 = (long)plVar4;
  }
  else {
LAB_0035db88:
    plVar3 = *(long **)(*plVar1 + unaff_x27 * 8);
    if (plVar3 != (long *)0x0) goto LAB_0035db94;
LAB_0035dbb4:
    plVar3 = (long *)(param_1 + 0x58);
    *plVar4 = *plVar3;
    *plVar3 = (long)plVar4;
    *(long **)(*(long *)(param_1 + 0x48) + unaff_x27 * 8) = plVar3;
    if (*plVar4 != 0) {
      uVar6 = *(ulong *)(*plVar4 + 8);
      if ((uVar7 & uVar7 - 1) == 0) {
        uVar6 = uVar6 & uVar7 - 1;
      }
      else if (uVar7 <= uVar6) {
        uVar5 = 0;
        if (uVar7 != 0) {
          uVar5 = uVar6 / uVar7;
        }
        uVar6 = uVar6 - uVar5 * uVar7;
      }
      plVar3 = (long *)(*plVar1 + uVar6 * 8);
      goto LAB_0035dc04;
    }
  }
  *(long *)(param_1 + 0x60) = *(long *)(param_1 + 0x60) + 1;
LAB_0035dc14:
                    /* try { // try from 0035dc14 to 0035dc1b has its CatchHandler @ 0035dc60 */
  FUN_0038db60(param_1 + 0x18);
  return;
}


