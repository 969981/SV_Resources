/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 015a4450; name: FUN_015a4450
 */


void FUN_015a4450(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  unkuint9 Var3;
  ulong uVar4;
  ulong uVar5;
  ulong *puVar6;
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
  uVar8 = *(long *)(param_1 + 0xa8) - 1;
  if (uVar8 == param_2) {
    do {
      *(ulong *)(param_1 + 0xa8) = uVar8;
      if ((uVar8 == 0) || (uVar8 = uVar8 - 1, *(ulong *)(param_1 + 0x40) <= uVar8)) break;
    } while ((*(ulong *)(*(long *)(param_1 + 0x38) + (uVar8 >> 3 & 0x1ffffffffffffff8)) >>
              (uVar8 & 0x3f) & 1) != 0);
  }
  plVar11 = (long *)(param_1 + 0x70);
  puVar6 = (ulong *)*plVar11;
  lVar7 = *(long *)(param_1 + 0x78) - (long)puVar6;
  local_38 = param_2;
  if (lVar7 != 0) {
    if (lVar7 != 8) {
      uVar8 = lVar7 >> 3;
      if (lVar7 == -8) {
        *(ulong **)(param_1 + 0x78) = puVar6;
LAB_015a4508:
        uVar10 = (ulong)((float)uVar8 * 0.5);
        uVar2 = uVar10;
        uVar9 = uVar8;
        uVar4 = uVar8 - uVar10;
        if (puVar6[uVar10] <= param_2) {
          uVar2 = 0;
          uVar9 = uVar10;
          uVar4 = uVar10;
        }
        uVar10 = uVar2;
        if (2 < uVar4) {
          uVar1 = uVar2 + (long)((float)uVar4 * 0.5);
          uVar10 = uVar1;
          uVar5 = uVar9 - uVar1;
          if (puVar6[uVar1] <= param_2) {
            uVar10 = uVar2;
            uVar9 = uVar1;
            uVar5 = (long)((float)uVar4 * 0.5);
          }
          if (2 < uVar5) {
            uVar2 = uVar10 + (long)((float)uVar5 * 0.5);
            uVar1 = uVar2;
            uVar4 = uVar9 - uVar2;
            if (puVar6[uVar2] <= param_2) {
              uVar1 = uVar10;
              uVar9 = uVar2;
              uVar4 = (long)((float)uVar5 * 0.5);
            }
            while (uVar10 = uVar1, 2 < uVar4) {
              Var3 = (unkuint9)uVar4;
              uVar2 = uVar10 + (long)((float)(unkint9)Var3 * 0.5);
              uVar1 = uVar2;
              uVar4 = uVar9 - uVar2;
              if (puVar6[uVar2] <= param_2) {
                uVar1 = uVar10;
                uVar9 = uVar2;
                uVar4 = (long)((float)(unkint9)Var3 * 0.5);
              }
            }
          }
        }
        if (uVar10 <= uVar9 && uVar9 < uVar8) {
          while (puVar6[uVar9] <= param_2) {
            uVar9 = uVar9 - 1;
            if ((uVar9 < uVar10) || (uVar8 <= uVar9)) goto LAB_015a45cc;
          }
          uVar9 = uVar9 + 1;
        }
LAB_015a45cc:
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
        FUN_00c6e61c(plVar11,1);
        if (2 < uVar8) {
          puVar6 = (ulong *)*plVar11;
          goto LAB_015a4508;
        }
      }
      *(ulong *)(*plVar11 + uVar8 * 8) = param_2;
      goto LAB_015a4608;
    }
    if (*puVar6 <= param_2) {
      FUN_00c6e61c(plVar11,1);
      ((undefined8 *)*plVar11)[1] = *(undefined8 *)*plVar11;
      *(ulong *)*plVar11 = param_2;
      goto LAB_015a4608;
    }
  }
  if (*(long *)(param_1 + 0x80) == *(long *)(param_1 + 0x78)) {
    FUN_015a47f0(plVar11,&local_38);
  }
  else {
    FUN_015a4700();
  }
LAB_015a4608:
  if (*(ulong *)(param_1 + 0x40) <= param_2) {
    FUN_00d7684c((long *)(param_1 + 0x38),param_2 + 1,0);
  }
  lVar7 = *(long *)(param_1 + 0x38);
  uVar8 = param_2 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar7 + uVar8) = *(ulong *)(lVar7 + uVar8) | 1L << (param_2 & 0x3f);
  return;
}


