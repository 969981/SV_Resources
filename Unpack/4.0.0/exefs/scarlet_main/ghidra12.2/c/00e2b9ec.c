/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e2b9ec; name: FUN_00e2b9ec
 */


void FUN_00e2b9ec(long param_1,ulong param_2)

{
  ulong uVar1;
  unkuint9 Var2;
  ulong uVar3;
  ulong uVar4;
  ulong *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  ulong local_48;
  
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
  plVar10 = (long *)(param_1 + 0x70);
  puVar5 = (ulong *)*plVar10;
  lVar6 = *(long *)(param_1 + 0x78) - (long)puVar5;
  local_48 = param_2;
  if (lVar6 != 0) {
    if (lVar6 != 8) {
      uVar7 = lVar6 >> 3;
      if (lVar6 == -8) {
        *(ulong **)(param_1 + 0x78) = puVar5;
LAB_00e2bb20:
        uVar9 = (ulong)((float)uVar7 * 0.5);
        uVar4 = uVar9;
        uVar8 = uVar7;
        uVar3 = uVar7 - uVar9;
        if (puVar5[uVar9] <= param_2) {
          uVar4 = 0;
          uVar8 = uVar9;
          uVar3 = uVar9;
        }
        while (uVar9 = uVar4, 2 < uVar3) {
          Var2 = (unkuint9)uVar3;
          uVar1 = uVar9 + (long)((float)(unkint9)Var2 * 0.5);
          uVar4 = uVar1;
          uVar3 = uVar8 - uVar1;
          if (puVar5[uVar1] <= param_2) {
            uVar4 = uVar9;
            uVar8 = uVar1;
            uVar3 = (long)((float)(unkint9)Var2 * 0.5);
          }
        }
        if (uVar9 <= uVar8 && uVar8 < uVar7) {
          while (puVar5[uVar8] <= param_2) {
            uVar8 = uVar8 - 1;
            if ((uVar8 < uVar9) || (uVar7 <= uVar8)) goto LAB_00e2bb5c;
          }
          uVar8 = uVar8 + 1;
        }
LAB_00e2bb5c:
        if (uVar8 != uVar7) {
          if (uVar8 <= uVar7 && uVar9 <= uVar8) {
            uVar9 = uVar8;
          }
          if (uVar9 + 1 < uVar7 + 1) {
            memmove(puVar5 + uVar9 + 1,puVar5 + uVar9,(uVar7 - uVar9) * 8);
          }
          uVar7 = uVar9;
        }
      }
      else {
        FUN_00c6e61c(plVar10,1);
        if (2 < uVar7) {
          puVar5 = (ulong *)*plVar10;
          goto LAB_00e2bb20;
        }
      }
      *(ulong *)(*plVar10 + uVar7 * 8) = param_2;
      goto LAB_00e2ba64;
    }
    if (*puVar5 <= param_2) {
      FUN_00c6e61c(plVar10,1);
      ((undefined8 *)*plVar10)[1] = *(undefined8 *)*plVar10;
      *(ulong *)*plVar10 = param_2;
      goto LAB_00e2ba64;
    }
  }
  FUN_00e2bc48(plVar10,&local_48);
LAB_00e2ba64:
  if (*(ulong *)(param_1 + 0x40) <= param_2) {
    FUN_00d7684c((long *)(param_1 + 0x38),param_2 + 1,0);
  }
  lVar6 = *(long *)(param_1 + 0x38);
  uVar7 = param_2 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar6 + uVar7) = *(ulong *)(lVar6 + uVar7) | 1L << (param_2 & 0x3f);
  return;
}


