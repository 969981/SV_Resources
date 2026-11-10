/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00ea17f4; name: FUN_00ea17f4
 */


void FUN_00ea17f4(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  unkuint9 Var3;
  ulong uVar4;
  ulong *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  ulong local_38;
  
  if ((param_2 < *(ulong *)(param_1 + 0x40)) &&
     ((*(ulong *)(*(long *)(param_1 + 0x38) + (param_2 >> 3 & 0x1ffffffffffffff8)) >>
       (param_2 & 0x3f) & 1) != 0)) {
    return;
  }
  uVar6 = *(long *)(param_1 + 0xa8) - 1;
  if (uVar6 == param_2) {
    do {
      *(ulong *)(param_1 + 0xa8) = uVar6;
      if ((uVar6 == 0) || (uVar6 = uVar6 - 1, *(ulong *)(param_1 + 0x40) <= uVar6)) break;
    } while ((*(ulong *)(*(long *)(param_1 + 0x38) + (uVar6 >> 3 & 0x1ffffffffffffff8)) >>
              (uVar6 & 0x3f) & 1) != 0);
  }
  plVar11 = (long *)(param_1 + 0x70);
  puVar5 = (ulong *)*plVar11;
  lVar7 = *(long *)(param_1 + 0x78) - (long)puVar5;
  local_38 = param_2;
  if (lVar7 == 8) {
    if (*puVar5 <= param_2) {
      FUN_00c6e61c(plVar11,1);
      ((undefined8 *)*plVar11)[1] = *(undefined8 *)*plVar11;
      *(ulong *)*plVar11 = param_2;
      goto LAB_00ea19e0;
    }
  }
  else if (lVar7 != 0) {
    uVar6 = lVar7 >> 3;
    if (lVar7 == -8) {
      *(ulong **)(param_1 + 0x78) = puVar5;
LAB_00ea1880:
      uVar9 = (ulong)((float)uVar6 * 0.5);
      uVar10 = uVar9;
      uVar8 = uVar6;
      uVar2 = uVar6 - uVar9;
      if (puVar5[uVar9] <= param_2) {
        uVar10 = 0;
        uVar8 = uVar9;
        uVar2 = uVar9;
      }
      if (2 < uVar2) {
        uVar9 = uVar10 + (long)((float)uVar2 * 0.5);
        uVar1 = uVar9;
        uVar4 = uVar8 - uVar9;
        if (puVar5[uVar9] <= param_2) {
          uVar1 = uVar10;
          uVar8 = uVar9;
          uVar4 = (long)((float)uVar2 * 0.5);
        }
        uVar10 = uVar1;
        if (2 < uVar4) {
          uVar10 = uVar1 + (long)((float)uVar4 * 0.5);
          uVar2 = uVar10;
          uVar9 = uVar8 - uVar10;
          if (puVar5[uVar10] <= param_2) {
            uVar2 = uVar1;
            uVar8 = uVar10;
            uVar9 = (long)((float)uVar4 * 0.5);
          }
          uVar10 = uVar2;
          if (2 < uVar9) {
            uVar1 = uVar2 + (long)((float)uVar9 * 0.5);
            uVar10 = uVar1;
            uVar4 = uVar8 - uVar1;
            if (puVar5[uVar1] <= param_2) {
              uVar10 = uVar2;
              uVar8 = uVar1;
              uVar4 = (long)((float)uVar9 * 0.5);
            }
            if (2 < uVar4) {
              uVar2 = uVar10 + (long)((float)uVar4 * 0.5);
              uVar1 = uVar2;
              uVar9 = uVar8 - uVar2;
              if (puVar5[uVar2] <= param_2) {
                uVar1 = uVar10;
                uVar8 = uVar2;
                uVar9 = (long)((float)uVar4 * 0.5);
              }
              while (uVar10 = uVar1, 2 < uVar9) {
                Var3 = (unkuint9)uVar9;
                uVar2 = uVar10 + (long)((float)(unkint9)Var3 * 0.5);
                uVar1 = uVar2;
                uVar9 = uVar8 - uVar2;
                if (puVar5[uVar2] <= param_2) {
                  uVar1 = uVar10;
                  uVar8 = uVar2;
                  uVar9 = (long)((float)(unkint9)Var3 * 0.5);
                }
              }
            }
          }
        }
      }
      if (uVar10 <= uVar8 && uVar8 < uVar6) {
        while (puVar5[uVar8] <= param_2) {
          uVar8 = uVar8 - 1;
          if ((uVar8 < uVar10) || (uVar6 <= uVar8)) goto LAB_00ea19a4;
        }
        uVar8 = uVar8 + 1;
      }
LAB_00ea19a4:
      if (uVar8 != uVar6) {
        if (uVar8 < uVar6 && uVar10 <= uVar8) {
          uVar10 = uVar8;
        }
        if (uVar10 + 1 < uVar6 + 1) {
          memmove(puVar5 + uVar10 + 1,puVar5 + uVar10,(uVar6 - uVar10) * 8);
        }
        uVar6 = uVar10;
      }
    }
    else {
      FUN_00c6e61c(plVar11,1);
      if (2 < uVar6) {
        puVar5 = (ulong *)*plVar11;
        goto LAB_00ea1880;
      }
    }
    *(ulong *)(*plVar11 + uVar6 * 8) = param_2;
    goto LAB_00ea19e0;
  }
  FUN_00e2bc48(plVar11,&local_38);
LAB_00ea19e0:
  if (*(ulong *)(param_1 + 0x40) <= param_2) {
    FUN_00d7684c((long *)(param_1 + 0x38),param_2 + 1,0);
  }
  lVar7 = *(long *)(param_1 + 0x38);
  uVar6 = param_2 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar7 + uVar6) = *(ulong *)(lVar7 + uVar6) | 1L << (param_2 & 0x3f);
  return;
}


