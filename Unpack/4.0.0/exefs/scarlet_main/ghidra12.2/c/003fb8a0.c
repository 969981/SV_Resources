/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003fb8a0; name: FUN_003fb8a0
 */


ulong FUN_003fb8a0(long *param_1,byte *param_2)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  
  if ((param_2 != (byte *)0x0) && (bVar2 = *param_2, bVar2 != 0)) {
    uVar11 = 0;
    if (bVar2 == 0x2d) {
      param_2 = param_2 + 1;
    }
    uVar1 = (uint)(bVar2 == 0x2d);
    uVar8 = 0x1f;
    do {
      iVar4 = FUN_003f6e20(param_2[uVar11],4);
      if (iVar4 == 0) {
        uVar10 = (uint)uVar11;
        if (uVar10 - 1 < 0x1fffffff) {
          uVar6 = uVar1 + uVar11;
          if (param_1 == (long *)0x0) goto LAB_003fb92c;
          lVar7 = *param_1;
          if (lVar7 == 0) {
            lVar7 = FUN_003eb5b0();
            if (lVar7 == 0) goto LAB_003fb928;
          }
          else {
            FUN_003eb9f0(lVar7,0);
          }
          if ((0x1ffffff8 < uVar10) ||
             ((*(int *)(lVar7 + 0xc) < (int)(uVar8 >> 5) &&
              (lVar5 = FUN_003eb670(lVar7), lVar5 == 0)))) goto LAB_003fb918;
          iVar3 = (int)(uVar11 / 9) * 9 - uVar10;
          iVar9 = 0;
          uVar11 = uVar11 + 1;
          iVar4 = 0;
          if (iVar3 != 0) {
            iVar4 = iVar3 + 9;
          }
          goto LAB_003fb9f0;
        }
        break;
      }
      uVar11 = uVar11 + 1;
      uVar8 = uVar8 + 4;
    } while (uVar11 != 0x20000000);
    lVar7 = 0;
LAB_003fb918:
    if (*param_1 == 0) {
      FUN_003eb520(lVar7);
    }
  }
LAB_003fb928:
  uVar6 = 0;
  goto LAB_003fb92c;
  while (uVar8 = (int)uVar11 - 1, uVar11 = (ulong)uVar8, param_2 = param_2 + 1, 1 < (int)uVar8) {
LAB_003fb9f0:
    iVar4 = iVar4 + 1;
    iVar9 = (uint)*param_2 + iVar9 * 10 + -0x30;
    if (iVar4 == 9) {
      iVar4 = FUN_003f3030(lVar7,1000000000);
      if ((iVar4 == 0) || (iVar4 = FUN_003f2e00(lVar7,iVar9), iVar4 == 0)) goto LAB_003fb918;
      iVar9 = 0;
      iVar4 = 0;
    }
  }
  FUN_003ebc30(lVar7);
  *param_1 = lVar7;
  if (*(int *)(lVar7 + 8) != 0) {
    *(uint *)(lVar7 + 0x10) = uVar1;
  }
LAB_003fb92c:
  return uVar6 & 0xffffffff;
}


