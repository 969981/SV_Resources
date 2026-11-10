/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02705eb0; name: FUN_02705eb0
 */


long FUN_02705eb0(uint *param_1,long param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong uVar12;
  ulong *puVar13;
  
  uVar9 = 0;
  if ((param_2 + 0x10U & 0xf) != 0) {
    uVar9 = (ulong)(uint)-(int)(param_2 + 0x10U) & 0xf;
  }
  param_2 = param_2 + uVar9;
  *(ulong *)(param_2 + 8) = param_4 | 3;
  uVar9 = 0;
  if ((param_3 + 0x10U & 0xf) != 0) {
    uVar9 = (ulong)(uint)-(int)(param_3 + 0x10U) & 0xf;
  }
  uVar9 = param_3 + uVar9;
  uVar1 = param_2 + param_4;
  param_4 = (uVar9 - param_2) - param_4;
  if (*(ulong *)(param_1 + 10) == uVar9) {
    lVar7 = *(long *)(param_1 + 4);
    *(ulong *)(param_1 + 4) = lVar7 + param_4;
    *(ulong *)(param_1 + 10) = uVar1;
    *(ulong *)(uVar1 + 8) = lVar7 + param_4 | 1;
    goto LAB_0270601c;
  }
  if (*(ulong *)(param_1 + 8) == uVar9) {
    param_4 = *(long *)(param_1 + 2) + param_4;
    *(ulong *)(param_1 + 2) = param_4;
    *(ulong *)(param_1 + 8) = uVar1;
    *(ulong *)(uVar1 + 8) = param_4 | 1;
    *(ulong *)(uVar1 + param_4) = param_4;
    goto LAB_0270601c;
  }
  uVar8 = *(ulong *)(uVar9 + 8);
  if ((uVar8 & 3) == 1) {
    if (uVar8 < 0x100) {
      uVar10 = *(ulong *)(uVar9 + 0x10);
      uVar12 = *(ulong *)(uVar9 + 0x18);
      uVar6 = (long)param_1 + (uVar8 & 0x3fffffff8) * 2 + 0x48;
      if ((uVar10 != uVar6) &&
         ((uVar10 < *(ulong *)(param_1 + 6) || (*(ulong *)(uVar10 + 0x18) != uVar9))))
      goto LAB_027062ec;
      if (uVar12 == uVar10) {
        *param_1 = *param_1 & (1 << (ulong)((uint)(uVar8 >> 3) & 0x1f) ^ 0xffffffffU);
      }
      else {
        if ((uVar12 != uVar6) &&
           ((uVar12 < *(ulong *)(param_1 + 6) || (*(ulong *)(uVar12 + 0x10) != uVar9))))
        goto LAB_027062ec;
        *(ulong *)(uVar10 + 0x18) = uVar12;
        *(ulong *)(uVar12 + 0x10) = uVar10;
      }
    }
    else {
      uVar10 = *(ulong *)(uVar9 + 0x18);
      uVar6 = *(ulong *)(uVar9 + 0x30);
      if (uVar10 == uVar9) {
        uVar12 = *(ulong *)(uVar9 + 0x28);
        puVar11 = (ulong *)(uVar9 + 0x28);
        if (uVar12 == 0) {
          uVar12 = *(ulong *)(uVar9 + 0x20);
          puVar11 = (ulong *)(uVar9 + 0x20);
          if (uVar12 == 0) {
            uVar10 = 0;
            goto LAB_02706098;
          }
        }
        do {
          do {
            uVar10 = uVar12;
            puVar13 = puVar11;
            uVar12 = *(ulong *)(uVar10 + 0x28);
            puVar11 = (ulong *)(uVar10 + 0x28);
          } while (uVar12 != 0);
          uVar12 = *(ulong *)(uVar10 + 0x20);
          puVar11 = (ulong *)(uVar10 + 0x20);
        } while (uVar12 != 0);
        if (puVar13 < *(ulong **)(param_1 + 6)) goto LAB_027062ec;
        *puVar13 = 0;
      }
      else {
        uVar12 = *(ulong *)(uVar9 + 0x10);
        if (((uVar12 < *(ulong *)(param_1 + 6)) || (*(ulong *)(uVar12 + 0x18) != uVar9)) ||
           (*(ulong *)(uVar10 + 0x10) != uVar9)) goto LAB_027062ec;
        *(ulong *)(uVar12 + 0x18) = uVar10;
        *(ulong *)(uVar10 + 0x10) = uVar12;
      }
LAB_02706098:
      if (uVar6 != 0) {
        if (*(ulong *)(param_1 + (ulong)*(uint *)(uVar9 + 0x38) * 2 + 0x96) == uVar9) {
          *(ulong *)(param_1 + (ulong)*(uint *)(uVar9 + 0x38) * 2 + 0x96) = uVar10;
          if (uVar10 == 0) {
            param_1[1] = param_1[1] & (1 << (ulong)(*(uint *)(uVar9 + 0x38) & 0x1f) ^ 0xffffffffU);
          }
          else {
LAB_027060d8:
            if (uVar10 < *(ulong *)(param_1 + 6)) goto LAB_027062ec;
            *(ulong *)(uVar10 + 0x30) = uVar6;
            uVar6 = *(ulong *)(uVar9 + 0x20);
            if (uVar6 != 0) {
              if (uVar6 < *(ulong *)(param_1 + 6)) goto LAB_027062ec;
              *(ulong *)(uVar10 + 0x20) = uVar6;
              *(ulong *)(uVar6 + 0x30) = uVar10;
            }
            uVar6 = *(ulong *)(uVar9 + 0x28);
            if (uVar6 != 0) {
              if (uVar6 < *(ulong *)(param_1 + 6)) goto LAB_027062ec;
              *(ulong *)(uVar10 + 0x28) = uVar6;
              *(ulong *)(uVar6 + 0x30) = uVar10;
            }
          }
        }
        else {
          if (uVar6 < *(ulong *)(param_1 + 6)) goto LAB_027062ec;
          lVar7 = 0x20;
          if (*(ulong *)(uVar6 + 0x20) != uVar9) {
            lVar7 = 0x28;
          }
          *(ulong *)(uVar6 + lVar7) = uVar10;
          if (uVar10 != 0) goto LAB_027060d8;
        }
      }
    }
    uVar9 = uVar9 + (uVar8 & 0xfffffffffffffff8);
    param_4 = (uVar8 & 0xfffffffffffffff8) + param_4;
  }
  *(ulong *)(uVar9 + 8) = *(ulong *)(uVar9 + 8) & 0xfffffffffffffffe;
  *(ulong *)(uVar1 + 8) = param_4 | 1;
  *(ulong *)(uVar1 + param_4) = param_4;
  if (param_4 < 0x100) {
    uVar8 = param_4 & 0x3fffffff8;
    uVar5 = 1 << (ulong)((uint)(param_4 >> 3) & 0x1f);
    uVar9 = (long)param_1 + uVar8 * 2 + 0x48;
    if ((*param_1 & uVar5) == 0) {
      *param_1 = *param_1 | uVar5;
      uVar6 = uVar9;
    }
    else {
      uVar6 = *(ulong *)((long)param_1 + uVar8 * 2 + 0x58);
      if (uVar6 < *(ulong *)(param_1 + 6)) {
LAB_027062ec:
                    /* WARNING: Subroutine does not return */
        abort();
      }
    }
    *(ulong *)((long)param_1 + uVar8 * 2 + 0x58) = uVar1;
    *(ulong *)(uVar6 + 0x18) = uVar1;
    *(ulong *)(uVar1 + 0x10) = uVar6;
    *(ulong *)(uVar1 + 0x18) = uVar9;
  }
  else {
    if (param_4 >> 0x18 == 0) {
      iVar4 = (int)(param_4 >> 8);
      uVar5 = iVar4 + 0xfff00U >> 0x10 & 8;
      iVar4 = iVar4 << (ulong)uVar5;
      uVar3 = iVar4 + 0x7f000U >> 0x10 & 4;
      iVar4 = iVar4 << (ulong)uVar3;
      uVar2 = iVar4 + 0x3c000U >> 0x10 & 2;
      iVar4 = ((uint)(iVar4 << (ulong)uVar2) >> 0xf) - (uVar3 | uVar5 | uVar2);
      uVar5 = ((uint)(param_4 >> ((ulong)(iVar4 + 0x15) & 0x3f)) & 1 | iVar4 * 2) + 0x1c;
    }
    else {
      uVar5 = 0x1f;
    }
    *(uint *)(uVar1 + 0x38) = uVar5;
    *(undefined8 *)(uVar1 + 0x20) = 0;
    *(undefined8 *)(uVar1 + 0x28) = 0;
    uVar3 = 1 << (ulong)(uVar5 & 0x1f);
    puVar11 = (ulong *)(param_1 + (ulong)uVar5 * 2 + 0x96);
    if ((param_1[1] & uVar3) == 0) {
      param_1[1] = param_1[1] | uVar3;
      *puVar11 = uVar1;
      *(ulong **)(uVar1 + 0x30) = puVar11;
    }
    else {
      uVar9 = 0;
      if (uVar5 != 0x1f) {
        uVar9 = 0x3f - (ulong)((uVar5 >> 1) + 6);
      }
      uVar8 = param_4 << (uVar9 & 0x3f);
      uVar9 = *puVar11;
      do {
        uVar6 = uVar9;
        if ((*(ulong *)(uVar6 + 8) & 0xfffffffffffffff8) == param_4) {
          if ((uVar6 < *(ulong *)(param_1 + 6)) ||
             (uVar9 = *(ulong *)(uVar6 + 0x10), uVar9 < *(ulong *)(param_1 + 6))) goto LAB_027062ec;
          *(ulong *)(uVar9 + 0x18) = uVar1;
          *(ulong *)(uVar6 + 0x10) = uVar1;
          *(undefined8 *)(uVar1 + 0x30) = 0;
          *(ulong *)(uVar1 + 0x10) = uVar9;
          *(ulong *)(uVar1 + 0x18) = uVar6;
          goto LAB_0270601c;
        }
        uVar9 = uVar8 >> 0x3c;
        uVar8 = uVar8 << 1;
        puVar11 = (ulong *)(uVar6 + (uVar9 & 8) + 0x20);
        uVar9 = *puVar11;
      } while (*puVar11 != 0);
      if (puVar11 < *(ulong **)(param_1 + 6)) goto LAB_027062ec;
      *puVar11 = uVar1;
      *(ulong *)(uVar1 + 0x30) = uVar6;
    }
    *(ulong *)(uVar1 + 0x10) = uVar1;
    *(ulong *)(uVar1 + 0x18) = uVar1;
  }
LAB_0270601c:
  return param_2 + 0x10;
}


