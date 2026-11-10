/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d7662c; name: FUN_00d7662c
 */


void FUN_00d7662c(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  unkuint9 Var3;
  ulong *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  ulong local_38;
  
  if ((param_2 < *(ulong *)(param_1 + 0x40)) &&
     ((*(ulong *)(*(long *)(param_1 + 0x38) + (param_2 >> 3 & 0x1ffffffffffffff8)) >>
       (param_2 & 0x3f) & 1) != 0)) {
    return;
  }
  uVar5 = *(long *)(param_1 + 0xa8) - 1;
  if (uVar5 == param_2) {
    do {
      *(ulong *)(param_1 + 0xa8) = uVar5;
      if ((uVar5 == 0) || (uVar5 = uVar5 - 1, *(ulong *)(param_1 + 0x40) <= uVar5)) break;
    } while ((*(ulong *)(*(long *)(param_1 + 0x38) + (uVar5 >> 3 & 0x1ffffffffffffff8)) >>
              (uVar5 & 0x3f) & 1) != 0);
  }
  plVar10 = (long *)(param_1 + 0x70);
  puVar4 = (ulong *)*plVar10;
  lVar6 = *(long *)(param_1 + 0x78) - (long)puVar4;
  local_38 = param_2;
  if (lVar6 == 8) {
    if (*puVar4 <= param_2) {
      FUN_00c6e61c(plVar10,1);
      ((undefined8 *)*plVar10)[1] = *(undefined8 *)*plVar10;
      *(ulong *)*plVar10 = param_2;
      goto LAB_00d76768;
    }
  }
  else if (lVar6 != 0) {
    uVar5 = lVar6 >> 3;
    if (lVar6 == -8) {
      *(ulong **)(param_1 + 0x78) = puVar4;
LAB_00d766b8:
      uVar7 = 0;
      uVar8 = uVar5;
      uVar9 = uVar5;
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
      if (uVar2 <= uVar8 && uVar8 < uVar5) {
        while (puVar4[uVar8] <= param_2) {
          uVar8 = uVar8 - 1;
          if ((uVar8 < uVar2) || (uVar5 <= uVar8)) goto LAB_00d7672c;
        }
        uVar8 = uVar8 + 1;
      }
LAB_00d7672c:
      if (uVar8 != uVar5) {
        if (uVar8 < uVar5 && uVar2 <= uVar8) {
          uVar2 = uVar8;
        }
        if (uVar2 + 1 < uVar5 + 1) {
          memmove(puVar4 + uVar2 + 1,puVar4 + uVar2,(uVar5 - uVar2) * 8);
        }
        uVar5 = uVar2;
      }
    }
    else {
      FUN_00c6e61c(plVar10,1);
      if (2 < uVar5) {
        puVar4 = (ulong *)*plVar10;
        goto LAB_00d766b8;
      }
    }
    *(ulong *)(*plVar10 + uVar5 * 8) = param_2;
    goto LAB_00d76768;
  }
  FUN_0103bd9c(plVar10,&local_38);
LAB_00d76768:
  if (*(ulong *)(param_1 + 0x40) <= param_2) {
    FUN_00d7684c((long *)(param_1 + 0x38),param_2 + 1,0);
  }
  lVar6 = *(long *)(param_1 + 0x38);
  uVar5 = param_2 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar6 + uVar5) = *(ulong *)(lVar6 + uVar5) | 1L << (param_2 & 0x3f);
  return;
}


