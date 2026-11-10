/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0225965c; name: FUN_0225965c
 */


void FUN_0225965c(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  unkuint9 Var3;
  ulong *puVar4;
  long lVar5;
  ulong uVar6;
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
  uVar6 = *(long *)(param_1 + 0xa8) - 1;
  if (uVar6 == param_2) {
    do {
      *(ulong *)(param_1 + 0xa8) = uVar6;
      if ((uVar6 == 0) || (uVar6 = uVar6 - 1, *(ulong *)(param_1 + 0x40) <= uVar6)) break;
    } while ((*(ulong *)(*(long *)(param_1 + 0x38) + (uVar6 >> 3 & 0x1ffffffffffffff8)) >>
              (uVar6 & 0x3f) & 1) != 0);
  }
  plVar10 = (long *)(param_1 + 0x70);
  puVar4 = (ulong *)*plVar10;
  lVar5 = *(long *)(param_1 + 0x78) - (long)puVar4;
  local_48 = param_2;
  if (lVar5 != 0) {
    if (lVar5 != 8) {
      uVar6 = lVar5 >> 3;
      if (lVar5 == -8) {
        *(ulong **)(param_1 + 0x78) = puVar4;
LAB_02259754:
        uVar7 = 0;
        uVar8 = uVar6;
        uVar9 = uVar6;
        do {
          Var3 = (unkuint9)uVar9;
          uVar1 = uVar7 + (long)((float)(unkint9)Var3 * 0.5);
          uVar2 = uVar1;
          uVar9 = uVar8 - uVar1;
          if (puVar4[uVar1] <= param_2) {
            uVar2 = uVar7;
            uVar8 = uVar1;
            uVar9 = (long)((float)(unkint9)Var3 * 0.5);
          }
          uVar7 = uVar2;
        } while (2 < uVar9);
        if (uVar2 <= uVar8 && uVar8 < uVar6) {
          while (puVar4[uVar8] <= param_2) {
            uVar8 = uVar8 - 1;
            if ((uVar8 < uVar2) || (uVar6 <= uVar8)) goto LAB_022597a0;
          }
          uVar8 = uVar8 + 1;
        }
LAB_022597a0:
        if (uVar8 != uVar6) {
          if (uVar8 < uVar6 && uVar2 <= uVar8) {
            uVar2 = uVar8;
          }
          if (uVar2 + 1 < uVar6 + 1) {
            memmove(puVar4 + uVar2 + 1,puVar4 + uVar2,(uVar6 - uVar2) * 8);
          }
          uVar6 = uVar2;
        }
      }
      else {
        FUN_00c6e61c(plVar10,1);
        if (2 < uVar6) {
          puVar4 = (ulong *)*plVar10;
          goto LAB_02259754;
        }
      }
      *(ulong *)(*plVar10 + uVar6 * 8) = param_2;
      goto LAB_022596e8;
    }
    if (*puVar4 <= param_2) {
      FUN_00c6e61c(plVar10,1);
      ((undefined8 *)*plVar10)[1] = *(undefined8 *)*plVar10;
      *(ulong *)*plVar10 = param_2;
      goto LAB_022596e8;
    }
  }
  FUN_02259890(plVar10,&local_48);
LAB_022596e8:
  if (*(ulong *)(param_1 + 0x40) <= param_2) {
    FUN_00d7684c((long *)(param_1 + 0x38),param_2 + 1,0);
  }
  lVar5 = *(long *)(param_1 + 0x38);
  uVar6 = param_2 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar5 + uVar6) = *(ulong *)(lVar5 + uVar6) | 1L << (param_2 & 0x3f);
  return;
}


