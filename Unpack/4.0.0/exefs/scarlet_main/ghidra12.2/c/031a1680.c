/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031a1680; name: FUN_031a1680
 */


void FUN_031a1680(long param_1,int param_2,int param_3)

{
  long lVar1;
  ushort uVar2;
  ushort uVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int iVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  do {
    uVar2 = *(ushort *)(param_1 + (long)(param_2 + param_3 >> 1) * 0x30 + 0x10);
    iVar12 = param_2;
    iVar5 = param_3;
    do {
      lVar8 = (long)iVar12 * 0x30;
      do {
        iVar7 = iVar12;
        lVar9 = param_1 + lVar8;
        lVar8 = lVar8 + 0x30;
        iVar12 = iVar7 + 1;
      } while (*(ushort *)(lVar9 + 0x10) < uVar2);
      lVar9 = (long)iVar5 * 0x30;
      lVar8 = param_1 + lVar8;
      iVar5 = iVar5 + 1;
      do {
        iVar6 = iVar5;
        lVar1 = param_1 + lVar9;
        lVar9 = lVar9 + -0x30;
        uVar3 = *(ushort *)(lVar1 + 0x10);
        iVar5 = iVar6 + -1;
      } while (uVar2 < uVar3);
      iVar12 = iVar7;
      if (iVar7 <= iVar5) {
        if (iVar7 != iVar5) {
          lVar9 = param_1 + lVar9;
          uVar11 = *(undefined8 *)(lVar9 + 0x38);
          uVar10 = *(undefined8 *)(lVar9 + 0x30);
          uVar15 = *(undefined8 *)(lVar9 + 0x58);
          uVar14 = *(undefined8 *)(lVar9 + 0x50);
          uVar13 = *(undefined8 *)(lVar8 + -0x28);
          *(undefined8 *)(lVar9 + 0x30) = *(undefined8 *)(lVar8 + -0x30);
          *(undefined8 *)(lVar9 + 0x38) = uVar13;
          *(undefined2 *)(lVar9 + 0x40) = *(undefined2 *)(lVar8 + -0x20);
          uVar4 = *(undefined2 *)(lVar9 + 0x42);
          *(undefined2 *)(lVar9 + 0x42) = *(undefined2 *)(lVar8 + -0x1e);
          uVar13 = *(undefined8 *)(lVar8 + -0x10);
          *(undefined8 *)(lVar9 + 0x58) = *(undefined8 *)(lVar8 + -8);
          *(undefined8 *)(lVar9 + 0x50) = uVar13;
          *(ushort *)(lVar8 + -0x20) = uVar3;
          *(undefined8 *)(lVar8 + -0x30) = uVar10;
          *(undefined8 *)(lVar8 + -0x28) = uVar11;
          *(undefined2 *)(lVar8 + -0x1e) = uVar4;
          *(undefined8 *)(lVar8 + -8) = uVar15;
          *(undefined8 *)(lVar8 + -0x10) = uVar14;
        }
        iVar5 = iVar6 + -2;
        iVar12 = iVar7 + 1;
      }
    } while (iVar12 <= iVar5);
    if (param_2 < iVar5) {
      FUN_031a1680(param_1);
    }
    param_2 = iVar12;
  } while (iVar12 < param_3);
  return;
}


