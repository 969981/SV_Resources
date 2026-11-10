/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d3a40c; name: FUN_00d3a40c
 */


long * FUN_00d3a40c(long *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong unaff_x21;
  undefined1 auStack_50 [8];
  long *local_48 [3];
  ulong *local_18;
  
  uVar2 = *param_2;
  uVar5 = param_1[1];
  if (uVar5 != 0) {
    uVar4 = uVar5 - 1;
    if ((uVar5 & uVar4) == 0) {
      unaff_x21 = uVar4 & uVar2;
      plVar3 = *(long **)(*param_1 + unaff_x21 * 8);
      if (plVar3 != (long *)0x0) {
        do {
          plVar3 = (long *)*plVar3;
          if ((plVar3 == (long *)0x0) || (plVar3[1] != uVar2 && (plVar3[1] & uVar4) != unaff_x21))
          goto LAB_00d3a49c;
        } while (plVar3[2] != uVar2);
        goto LAB_00d3a54c;
      }
    }
    else {
      unaff_x21 = uVar2;
      if (uVar5 <= uVar2) {
        uVar4 = 0;
        if (uVar5 != 0) {
          uVar4 = uVar2 / uVar5;
        }
        unaff_x21 = uVar2 - uVar4 * uVar5;
      }
      plVar3 = *(long **)(*param_1 + unaff_x21 * 8);
      if (plVar3 != (long *)0x0) {
        do {
          plVar3 = (long *)*plVar3;
          if (plVar3 == (long *)0x0) goto LAB_00d3a49c;
          uVar4 = plVar3[1];
          if (uVar4 != uVar2) {
            if (uVar5 <= uVar4) {
              uVar1 = 0;
              if (uVar5 != 0) {
                uVar1 = uVar4 / uVar5;
              }
              uVar4 = uVar4 - uVar1 * uVar5;
            }
            if (uVar4 != unaff_x21) goto LAB_00d3a49c;
          }
        } while (plVar3[2] != uVar2);
        goto LAB_00d3a54c;
      }
    }
  }
LAB_00d3a49c:
  local_18 = param_2;
  FUN_00d3a630(local_48,param_1,uVar2,&DAT_03d61f64,&local_18,auStack_50);
  if ((uVar5 == 0) || (*(float *)(param_1 + 0xc) * (float)uVar5 < (float)(param_1[0xb] + 1))) {
    uVar5 = (ulong)(uVar5 < 3 || (uVar5 & uVar5 - 1) != 0) | uVar5 << 1;
    uVar4 = (ulong)((float)(param_1[0xb] + 1) / *(float *)(param_1 + 0xc));
    if (uVar4 <= uVar5) {
      uVar4 = uVar5;
    }
    FUN_00d3a794(param_1,uVar4);
    uVar5 = param_1[1];
    if ((uVar5 & uVar5 - 1) == 0) {
      unaff_x21 = uVar5 - 1 & uVar2;
    }
    else {
      unaff_x21 = uVar2;
      if (uVar5 <= uVar2) {
        uVar4 = 0;
        if (uVar5 != 0) {
          uVar4 = uVar2 / uVar5;
        }
        unaff_x21 = uVar2 - uVar4 * uVar5;
      }
    }
  }
  plVar3 = *(long **)(*param_1 + unaff_x21 * 8);
  if (plVar3 == (long *)0x0) {
    plVar3 = param_1 + 6;
    *local_48[0] = *plVar3;
    *plVar3 = (long)local_48[0];
    *(long **)(*param_1 + unaff_x21 * 8) = plVar3;
    if (*local_48[0] != 0) {
      uVar2 = *(ulong *)(*local_48[0] + 8);
      if ((uVar5 & uVar5 - 1) == 0) {
        uVar2 = uVar2 & uVar5 - 1;
      }
      else if (uVar5 <= uVar2) {
        uVar4 = 0;
        if (uVar5 != 0) {
          uVar4 = uVar2 / uVar5;
        }
        uVar2 = uVar2 - uVar4 * uVar5;
      }
      *(long **)(*param_1 + uVar2 * 8) = local_48[0];
    }
  }
  else {
    *local_48[0] = *plVar3;
    *plVar3 = (long)local_48[0];
  }
  param_1[0xb] = param_1[0xb] + 1;
  plVar3 = local_48[0];
LAB_00d3a54c:
  return plVar3 + 6;
}


