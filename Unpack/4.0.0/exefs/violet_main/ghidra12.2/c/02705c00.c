/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02705c00; name: FUN_02705c00
 */


void FUN_02705c00(uint *param_1,long param_2,long param_3,uint param_4)

{
  ulong *puVar1;
  uint uVar2;
  uint uVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  uint uVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong *puVar12;
  ulong uVar13;
  
  puVar4 = *(ulong **)(param_1 + 10);
  for (puVar12 = (ulong *)(param_1 + 0xe6);
      (puVar4 < (ulong *)*puVar12 ||
      (puVar1 = (ulong *)((long)*puVar12 + puVar12[1]), puVar1 <= puVar4));
      puVar12 = (ulong *)puVar12[2]) {
  }
  uVar6 = 0;
  if (((long)puVar1 - 0x4fU & 0xf) != 0) {
    uVar6 = (ulong)(uint)-(int)((long)puVar1 - 0x4fU) & 0xf;
  }
  puVar11 = (ulong *)((long)puVar1 + (uVar6 - 0x5f));
  puVar12 = puVar4;
  if (puVar4 + 4 <= puVar11) {
    puVar12 = puVar11;
  }
  uVar6 = 0;
  if ((param_2 + 0x10U & 0xf) != 0) {
    uVar6 = (ulong)(uint)-(int)(param_2 + 0x10U) & 0xf;
  }
  uVar13 = (param_3 + -0x50) - uVar6;
  *(ulong *)(param_1 + 4) = uVar13;
  *(ulong *)(param_1 + 10) = param_2 + uVar6;
  *(ulong *)(param_2 + uVar6 + 8) = uVar13 | 1;
  *(undefined8 *)(param_2 + param_3 + -0x50 + 8) = 0x50;
  *(undefined8 *)(param_1 + 0xc) = DAT_04859d60;
  puVar12[1] = 0x33;
  uVar6 = *(ulong *)(param_1 + 0xe6);
  uVar13 = *(ulong *)(param_1 + 0xea);
  uVar10 = *(ulong *)(param_1 + 0xec);
  puVar12[3] = *(ulong *)(param_1 + 0xe8);
  puVar12[4] = uVar13;
  puVar12[5] = uVar10;
  puVar12[2] = uVar6;
  *(long *)(param_1 + 0xe6) = param_2;
  *(long *)(param_1 + 0xe8) = param_3;
  param_1[0xec] = param_4;
  *(ulong **)(param_1 + 0xea) = puVar12 + 2;
  puVar11 = puVar12 + 7;
  do {
    puVar9 = puVar11 + 1;
    *puVar11 = 0xb;
    puVar11 = puVar9;
  } while (puVar9 < puVar1);
  uVar6 = (long)puVar12 - (long)puVar4;
  if (uVar6 != 0) {
    puVar12[1] = puVar12[1] & 0xfffffffffffffffe;
    puVar4[1] = uVar6 | 1;
    *puVar12 = uVar6;
    if (uVar6 < 0x100) {
      uVar13 = uVar6 * 2 & 0x7fffffff0;
      uVar8 = 1 << (ulong)((uint)(uVar6 >> 3) & 0x1f);
      uVar5 = (long)param_1 + uVar13 + 0x48;
      if ((*param_1 & uVar8) == 0) {
        *param_1 = *param_1 | uVar8;
        uVar6 = uVar5;
      }
      else {
        uVar6 = *(ulong *)((long)param_1 + uVar13 + 0x58);
        if (uVar6 < *(ulong *)(param_1 + 6)) {
LAB_02705ea0:
                    /* WARNING: Subroutine does not return */
          abort();
        }
      }
      *(ulong **)((long)param_1 + uVar13 + 0x58) = puVar4;
      *(ulong **)(uVar6 + 0x18) = puVar4;
LAB_02705d4c:
      puVar4[2] = uVar6;
      puVar4[3] = uVar5;
    }
    else {
      if (uVar6 >> 0x18 == 0) {
        iVar7 = (int)(uVar6 >> 8);
        uVar8 = iVar7 + 0xfff00U >> 0x10 & 8;
        iVar7 = iVar7 << (ulong)uVar8;
        uVar3 = iVar7 + 0x7f000U >> 0x10 & 4;
        iVar7 = iVar7 << (ulong)uVar3;
        uVar2 = iVar7 + 0x3c000U >> 0x10 & 2;
        iVar7 = ((uint)(iVar7 << (ulong)uVar2) >> 0xf) - (uVar3 | uVar8 | uVar2);
        uVar8 = ((uint)(uVar6 >> ((ulong)(iVar7 + 0x15) & 0x3f)) & 1 | iVar7 * 2) + 0x1c;
      }
      else {
        uVar8 = 0x1f;
      }
      *(uint *)(puVar4 + 7) = uVar8;
      puVar4[4] = 0;
      puVar4[5] = 0;
      uVar3 = 1 << (ulong)(uVar8 & 0x1f);
      puVar12 = (ulong *)(param_1 + (ulong)uVar8 * 2 + 0x96);
      if ((param_1[1] & uVar3) == 0) {
        param_1[1] = param_1[1] | uVar3;
        *puVar12 = (ulong)puVar4;
        puVar4[6] = (ulong)puVar12;
      }
      else {
        uVar13 = 0;
        if (uVar8 != 0x1f) {
          uVar13 = 0x3f - (ulong)((uVar8 >> 1) + 6);
        }
        uVar10 = uVar6 << (uVar13 & 0x3f);
        uVar13 = *puVar12;
        do {
          uVar5 = uVar13;
          if ((*(ulong *)(uVar5 + 8) & 0xfffffffffffffff8) == uVar6) {
            if ((uVar5 < *(ulong *)(param_1 + 6)) ||
               (uVar6 = *(ulong *)(uVar5 + 0x10), uVar6 < *(ulong *)(param_1 + 6)))
            goto LAB_02705ea0;
            *(ulong **)(uVar6 + 0x18) = puVar4;
            *(ulong **)(uVar5 + 0x10) = puVar4;
            puVar4[6] = 0;
            goto LAB_02705d4c;
          }
          uVar13 = uVar10 >> 0x3c;
          uVar10 = uVar10 << 1;
          puVar12 = (ulong *)(uVar5 + (uVar13 & 8) + 0x20);
          uVar13 = *puVar12;
        } while (*puVar12 != 0);
        if (puVar12 < *(ulong **)(param_1 + 6)) goto LAB_02705ea0;
        *puVar12 = (ulong)puVar4;
        puVar4[6] = uVar5;
      }
      puVar4[2] = (ulong)puVar4;
      puVar4[3] = (ulong)puVar4;
    }
  }
  return;
}


