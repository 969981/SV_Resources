/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 016b30ac; name: FUN_016b30ac
 */


void FUN_016b30ac(long param_1,long *param_2)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong unaff_x24;
  float fVar8;
  long *local_58 [3];
  
  FUN_016b3370(*param_2,param_1 + 0x70,0);
  lVar3 = *param_2;
  uVar7 = *(ulong *)(param_1 + 0xe8);
  plVar1 = (long *)(param_1 + 0xe0);
  uVar6 = (ulong)(lVar3 != 0);
  if (uVar7 != 0) {
    if ((uVar7 & uVar7 - 1) == 0) {
      unaff_x24 = (int)uVar7 + 1 & uVar6;
      plVar4 = *(long **)(*plVar1 + unaff_x24 * 8);
      if (plVar4 != (long *)0x0) {
        while ((plVar4 = (long *)*plVar4, plVar4 != (long *)0x0 &&
               (plVar4[1] == uVar6 || (plVar4[1] & uVar7 - 1) == unaff_x24))) {
          if (plVar4[2] == lVar3) {
            return;
          }
        }
      }
    }
    else {
      unaff_x24 = uVar6;
      if (uVar7 <= uVar6) {
        uVar5 = 0;
        if (uVar7 != 0) {
          uVar5 = uVar6 / uVar7;
        }
        unaff_x24 = uVar6 - uVar5 * uVar7;
      }
      plVar4 = *(long **)(*plVar1 + unaff_x24 * 8);
      if (plVar4 != (long *)0x0) {
        while (plVar4 = (long *)*plVar4, plVar4 != (long *)0x0) {
          uVar5 = plVar4[1];
          if (uVar5 != uVar6) {
            if (uVar7 <= uVar5) {
              uVar2 = 0;
              if (uVar7 != 0) {
                uVar2 = uVar5 / uVar7;
              }
              uVar5 = uVar5 - uVar2 * uVar7;
            }
            if (uVar5 != unaff_x24) break;
          }
          if (plVar4[2] == lVar3) {
            return;
          }
        }
      }
    }
  }
  FUN_016b32e4(local_58,plVar1,uVar6,param_2);
  fVar8 = (float)(*(long *)(param_1 + 0x138) + 1);
  if ((uVar7 == 0) || (*(float *)(param_1 + 0x140) * (float)uVar7 < fVar8)) {
    uVar7 = (ulong)(uVar7 < 3 || (uVar7 & uVar7 - 1) != 0) | uVar7 << 1;
    uVar5 = (ulong)(fVar8 / *(float *)(param_1 + 0x140));
    if (uVar5 <= uVar7) {
      uVar5 = uVar7;
    }
    FUN_016b3554(plVar1,uVar5);
    uVar7 = *(ulong *)(param_1 + 0xe8);
    if ((uVar7 & uVar7 - 1) == 0) {
      unaff_x24 = (int)uVar7 + 1 & uVar6;
    }
    else if (uVar6 < uVar7) {
      unaff_x24 = uVar6;
    }
    else {
      uVar5 = 0;
      if (uVar7 != 0) {
        uVar5 = uVar6 / uVar7;
      }
      unaff_x24 = uVar6 - uVar5 * uVar7;
    }
  }
  plVar4 = *(long **)(*plVar1 + unaff_x24 * 8);
  if (plVar4 == (long *)0x0) {
    *local_58[0] = *(long *)(param_1 + 0x110);
    *(long **)(param_1 + 0x110) = local_58[0];
    *(long *)(*(long *)(param_1 + 0xe0) + unaff_x24 * 8) = param_1 + 0x110;
    if (*local_58[0] != 0) {
      uVar6 = *(ulong *)(*local_58[0] + 8);
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
      *(long **)(*plVar1 + uVar6 * 8) = local_58[0];
    }
  }
  else {
    *local_58[0] = *plVar4;
    *plVar4 = (long)local_58[0];
  }
  *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
  return;
}


