/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00ed4c00; name: FUN_00ed4c00
 */


void FUN_00ed4c00(long param_1,ulong param_2)

{
  ulong uVar1;
  unkuint9 Var2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  ulong *puVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong local_48;
  
  if ((param_2 < *(ulong *)(param_1 + 0x40)) &&
     ((*(ulong *)(*(long *)(param_1 + 0x38) + (param_2 >> 3 & 0x1ffffffffffffff8)) >>
       (param_2 & 0x3f) & 1) != 0)) {
    return;
  }
  uVar8 = *(long *)(param_1 + 0xa8) - 1;
  if (uVar8 == param_2) {
    do {
      *(ulong *)(param_1 + 0xa8) = uVar8;
      if ((uVar8 == 0) || (uVar8 = uVar8 - 1, *(ulong *)(param_1 + 0x40) <= uVar8)) break;
    } while ((*(ulong *)(*(long *)(param_1 + 0x38) + (uVar8 >> 3 & 0x1ffffffffffffff8)) >>
              (uVar8 & 0x3f) & 1) != 0);
  }
  plVar5 = (long *)(param_1 + 0x70);
  puVar6 = (ulong *)*plVar5;
  lVar7 = *(long *)(param_1 + 0x78) - (long)puVar6;
  local_48 = param_2;
  if (lVar7 != 0) {
    if (lVar7 != 8) {
      uVar8 = lVar7 >> 3;
      if (lVar7 == -8) {
        *(ulong **)(param_1 + 0x78) = puVar6;
LAB_00ed4d24:
        uVar10 = (ulong)((float)uVar8 * 0.5);
        uVar4 = uVar10;
        uVar9 = uVar8;
        uVar3 = uVar8 - uVar10;
        if (puVar6[uVar10] <= param_2) {
          uVar4 = 0;
          uVar9 = uVar10;
          uVar3 = uVar10;
        }
        while (uVar10 = uVar4, 2 < uVar3) {
          Var2 = (unkuint9)uVar3;
          uVar1 = uVar10 + (long)((float)(unkint9)Var2 * 0.5);
          uVar4 = uVar1;
          uVar3 = uVar9 - uVar1;
          if (puVar6[uVar1] <= param_2) {
            uVar4 = uVar10;
            uVar9 = uVar1;
            uVar3 = (long)((float)(unkint9)Var2 * 0.5);
          }
        }
        if (uVar10 <= uVar9 && uVar9 < uVar8) {
          while (puVar6[uVar9] <= param_2) {
            uVar9 = uVar9 - 1;
            if ((uVar9 < uVar10) || (uVar8 <= uVar9)) goto LAB_00ed4d60;
          }
          uVar9 = uVar9 + 1;
        }
LAB_00ed4d60:
        if (uVar9 != uVar8) {
          if (uVar9 < uVar8 && uVar10 <= uVar9) {
            uVar10 = uVar9;
          }
          if (uVar10 + 1 < uVar8 + 1) {
            memmove(puVar6 + uVar10 + 1,puVar6 + uVar10,(uVar8 - uVar10) * 8);
          }
          uVar8 = uVar10;
        }
      }
      else {
        FUN_00c6e61c(plVar5,1);
        if (2 < uVar8) {
          puVar6 = (ulong *)*plVar5;
          goto LAB_00ed4d24;
        }
      }
      *(ulong *)(*plVar5 + uVar8 * 8) = param_2;
      goto LAB_00ed4c60;
    }
    if (*puVar6 <= param_2) {
      FUN_00c6e61c(plVar5,1);
      ((undefined8 *)*plVar5)[1] = *(undefined8 *)*plVar5;
      *(ulong *)*plVar5 = param_2;
      goto LAB_00ed4c60;
    }
  }
  FUN_00ed4e58(plVar5,&local_48);
LAB_00ed4c60:
  if (*(ulong *)(param_1 + 0x40) <= param_2) {
    FUN_00d7684c((long *)(param_1 + 0x38),param_2 + 1,0);
  }
  lVar7 = *(long *)(param_1 + 0x38);
  uVar8 = param_2 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar7 + uVar8) = *(ulong *)(lVar7 + uVar8) | 1L << (param_2 & 0x3f);
  return;
}


