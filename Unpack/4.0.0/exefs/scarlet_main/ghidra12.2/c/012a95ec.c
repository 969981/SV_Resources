/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012a95ec; name: FUN_012a95ec
 */


void FUN_012a95ec(long param_1,ulong param_2)

{
  ulong uVar1;
  unkuint9 Var2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong local_38;
  
  if ((param_2 < *(ulong *)(param_1 + 0x40)) &&
     ((*(ulong *)(*(long *)(param_1 + 0x38) + (param_2 >> 3 & 0x1ffffffffffffff8)) >>
       (param_2 & 0x3f) & 1) != 0)) {
    return;
  }
  uVar7 = *(long *)(param_1 + 0xa8) - 1;
  if (uVar7 == param_2) {
    do {
      *(ulong *)(param_1 + 0xa8) = uVar7;
      if ((uVar7 == 0) || (uVar7 = uVar7 - 1, *(ulong *)(param_1 + 0x40) <= uVar7)) break;
    } while ((*(ulong *)(*(long *)(param_1 + 0x38) + (uVar7 >> 3 & 0x1ffffffffffffff8)) >>
              (uVar7 & 0x3f) & 1) != 0);
  }
  plVar5 = (long *)(param_1 + 0x70);
  puVar8 = (ulong *)*plVar5;
  lVar6 = *(long *)(param_1 + 0x78) - (long)puVar8;
  local_38 = param_2;
  if (lVar6 != 0) {
    if (lVar6 != 8) {
      uVar7 = lVar6 >> 3;
      if (lVar6 == -8) {
        *(ulong **)(param_1 + 0x78) = puVar8;
LAB_012a9718:
        uVar10 = (ulong)((float)uVar7 * 0.5);
        uVar4 = uVar10;
        uVar9 = uVar7;
        uVar3 = uVar7 - uVar10;
        if (puVar8[uVar10] <= param_2) {
          uVar4 = 0;
          uVar9 = uVar10;
          uVar3 = uVar10;
        }
        while (uVar10 = uVar4, 2 < uVar3) {
          Var2 = (unkuint9)uVar3;
          uVar1 = uVar10 + (long)((float)(unkint9)Var2 * 0.5);
          uVar4 = uVar1;
          uVar3 = uVar9 - uVar1;
          if (puVar8[uVar1] <= param_2) {
            uVar4 = uVar10;
            uVar9 = uVar1;
            uVar3 = (long)((float)(unkint9)Var2 * 0.5);
          }
        }
        if (uVar10 <= uVar9 && uVar9 < uVar7) {
          while (puVar8[uVar9] <= param_2) {
            uVar9 = uVar9 - 1;
            if ((uVar9 < uVar10) || (uVar7 <= uVar9)) goto LAB_012a9754;
          }
          uVar9 = uVar9 + 1;
        }
LAB_012a9754:
        if (uVar9 != uVar7) {
          if (uVar9 < uVar7 && uVar10 <= uVar9) {
            uVar10 = uVar9;
          }
          if (uVar10 + 1 < uVar7 + 1) {
            memmove(puVar8 + uVar10 + 1,puVar8 + uVar10,(uVar7 - uVar10) * 8);
            uVar7 = uVar10;
          }
          else {
            uVar7 = uVar10;
          }
        }
      }
      else {
        FUN_00c6e61c(plVar5,1);
        if (2 < uVar7) {
          puVar8 = (ulong *)*plVar5;
          goto LAB_012a9718;
        }
      }
      *(ulong *)(*plVar5 + uVar7 * 8) = param_2;
      goto LAB_012a9650;
    }
    if (*puVar8 <= param_2) {
      FUN_00c6e61c(plVar5,1);
      ((undefined8 *)*plVar5)[1] = *(undefined8 *)*plVar5;
      *(ulong *)*plVar5 = param_2;
      goto LAB_012a9650;
    }
  }
  FUN_010b50b8(plVar5,&local_38);
LAB_012a9650:
  if (*(ulong *)(param_1 + 0x40) <= param_2) {
    FUN_00d7684c((long *)(param_1 + 0x38),param_2 + 1,0);
  }
  lVar6 = *(long *)(param_1 + 0x38);
  uVar7 = param_2 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar6 + uVar7) = *(ulong *)(lVar6 + uVar7) | 1L << (param_2 & 0x3f);
  return;
}


