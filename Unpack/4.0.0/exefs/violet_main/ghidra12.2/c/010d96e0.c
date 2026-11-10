/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 010d96e0; name: FUN_010d96e0
 */


uint FUN_010d96e0(undefined8 param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  
  iVar4 = param_3[1] - *param_3;
  if (iVar4 == 0) {
    return *param_3;
  }
  uVar1 = iVar4 + 1;
  if (uVar1 == 0) {
    uVar10 = *param_2 / 0xadc8;
    uVar1 = (*param_2 % 0xadc8) * 0xbc8f;
    iVar4 = 0x7fffffff;
    if (uVar10 * 0xd47 <= uVar1) {
      iVar4 = 0;
    }
    for (uVar1 = iVar4 + uVar1 + uVar10 * -0xd47; 0x7ffeffff < uVar1 - 1;
        uVar1 = iVar4 + uVar10 + (uVar1 / 0xadc8) * -0xd47) {
      uVar10 = (uVar1 % 0xadc8) * 0xbc8f;
      iVar4 = 0x7fffffff;
      if ((uVar1 / 0xadc8) * 0xd47 <= uVar10) {
        iVar4 = 0;
      }
    }
    uVar10 = (uVar1 % 0xadc8) * 0xbc8f;
    iVar4 = 0x7fffffff;
    if ((uVar1 / 0xadc8) * 0xd47 <= uVar10) {
      iVar4 = 0;
    }
    for (uVar10 = iVar4 + uVar10 + (uVar1 / 0xadc8) * -0xd47; 0x7ffeffff < uVar10 - 1;
        uVar10 = iVar4 + uVar11 + (uVar10 / 0xadc8) * -0xd47) {
      uVar11 = (uVar10 % 0xadc8) * 0xbc8f;
      iVar4 = 0x7fffffff;
      if ((uVar10 / 0xadc8) * 0xd47 <= uVar11) {
        iVar4 = 0;
      }
    }
    *param_2 = uVar10;
    return uVar10 - 1 & 0xffff | (uVar1 - 1) * 0x10000;
  }
  lVar2 = 0x1f;
  if ((uVar1 << (ulong)((uint)LZCOUNT(uVar1) & 0x1f) & 0x7fffffff) != 0) {
    lVar2 = 0x20;
  }
  uVar12 = lVar2 - LZCOUNT(uVar1);
  uVar8 = uVar12 / 0x1e;
  uVar10 = 0xffffffff;
  if (uVar12 % 0x1e != 0) {
    uVar8 = uVar8 + 1;
  }
  uVar9 = 0;
  if (uVar8 != 0) {
    uVar9 = uVar12 / uVar8;
  }
  uVar11 = -1 << (ulong)((uint)uVar9 & 0x1f) & 0x7ffffffe;
  if (0x1f < uVar9) {
    uVar11 = 0;
  }
  uVar7 = 0;
  if (uVar8 != 0) {
    uVar7 = uVar11 / uVar8;
  }
  if (uVar7 < 0x7ffffffe - uVar11) {
    uVar8 = uVar8 + 1;
    uVar9 = 0;
    if (uVar8 != 0) {
      uVar9 = uVar12 / uVar8;
    }
    if (uVar9 < 0x20) {
      uVar11 = -1 << (ulong)((uint)uVar9 & 0x1f) & 0x7ffffffe;
      goto LAB_010d975c;
    }
    uVar11 = 0;
    uVar12 = uVar8 + (uVar9 * uVar8 - uVar12);
  }
  else {
LAB_010d975c:
    uVar7 = 0;
    if (uVar8 != 0) {
      uVar7 = uVar12 / uVar8;
    }
    uVar12 = uVar8 + (uVar7 * uVar8 - uVar12);
    if (uVar9 < 0x1f) {
      iVar4 = (int)uVar9;
      uVar13 = iVar4 + 1;
      uVar14 = -1 << (ulong)(uVar13 & 0x1f) & 0x7ffffffe;
      uVar15 = 0;
      if (uVar9 != 0) {
        uVar15 = 0xffffffff >> (ulong)(-iVar4 & 0x1f);
      }
      uVar10 = 0xffffffff >> (ulong)(0x1fU - iVar4 & 0x1f);
      goto LAB_010d97b4;
    }
  }
  uVar14 = 0;
  uVar15 = 0xffffffff >> (ulong)(-(int)uVar9 & 0x1f);
  uVar13 = (int)uVar9 + 1;
LAB_010d97b4:
  do {
    if (uVar12 == 0) {
      uVar5 = 0;
    }
    else {
      uVar6 = *param_2;
      if (uVar9 < 0x20) {
        uVar5 = 0;
        uVar7 = 0;
        do {
          do {
            uVar3 = (uVar6 % 0xadc8) * 0xbc8f;
            iVar4 = 0x7fffffff;
            if ((uVar6 / 0xadc8) * 0xd47 <= uVar3) {
              iVar4 = 0;
            }
            uVar6 = iVar4 + uVar3 + (uVar6 / 0xadc8) * -0xd47;
          } while (uVar11 <= uVar6 - 1);
          uVar7 = uVar7 + 1;
          uVar5 = (uVar6 - 1 & uVar15) + (uVar5 << (ulong)((uint)uVar9 & 0x1f));
        } while (uVar7 != uVar12);
      }
      else {
        uVar7 = 0;
        do {
          uVar5 = (uVar6 % 0xadc8) * 0xbc8f;
          iVar4 = 0x7fffffff;
          if ((uVar6 / 0xadc8) * 0xd47 <= uVar5) {
            iVar4 = 0;
          }
          uVar6 = iVar4 + uVar5 + (uVar6 / 0xadc8) * -0xd47;
        } while ((uVar11 <= uVar6 - 1) || (uVar7 = uVar7 + 1, uVar7 != uVar12));
        uVar5 = uVar6 - 1 & uVar15;
      }
      *param_2 = uVar6;
    }
    if (uVar12 < uVar8) {
      uVar6 = *param_2;
      if (uVar9 < 0x1f) {
        uVar7 = uVar12;
        do {
          do {
            uVar3 = (uVar6 % 0xadc8) * 0xbc8f;
            iVar4 = 0x7fffffff;
            if ((uVar6 / 0xadc8) * 0xd47 <= uVar3) {
              iVar4 = 0;
            }
            uVar6 = iVar4 + uVar3 + (uVar6 / 0xadc8) * -0xd47;
          } while (uVar14 <= uVar6 - 1);
          uVar7 = uVar7 + 1;
          uVar5 = (uVar6 - 1 & uVar10) + (uVar5 << (ulong)(uVar13 & 0x1f));
        } while (uVar7 != uVar8);
      }
      else {
        uVar7 = uVar12;
        do {
          uVar5 = (uVar6 % 0xadc8) * 0xbc8f;
          iVar4 = 0x7fffffff;
          if ((uVar6 / 0xadc8) * 0xd47 <= uVar5) {
            iVar4 = 0;
          }
          uVar6 = iVar4 + uVar5 + (uVar6 / 0xadc8) * -0xd47;
        } while ((uVar14 <= uVar6 - 1) || (uVar7 = uVar7 + 1, uVar7 != uVar8));
        uVar5 = uVar6 - 1 & uVar10;
      }
      *param_2 = uVar6;
    }
  } while (uVar1 <= uVar5);
  return *param_3 + uVar5;
}


