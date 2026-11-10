/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00861cc0; name: FUN_00861cc0
 */


void FUN_00861cc0(long param_1,ulong param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  int iVar13;
  int iVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  param_2 = param_2 & 0xffffffff;
  do {
    iVar13 = (int)param_2;
    lVar1 = param_1 + ((long)((ulong)(iVar13 + param_3) << 0x20) >> 0x21) * 0x40;
    iVar3 = *(int *)(lVar1 + 0x20);
    iVar4 = *(int *)(lVar1 + 0x24);
    iVar8 = *(int *)(lVar1 + 0x28);
    uVar10 = (ulong)param_3;
    do {
      uVar11 = -(param_2 >> 0x1f) & 0xffffffc000000000 | param_2 << 6;
      while( true ) {
        lVar1 = param_1 + uVar11;
        iVar14 = (int)param_2;
        if ((iVar3 <= *(int *)(lVar1 + 0x20)) &&
           ((iVar3 < *(int *)(lVar1 + 0x20) ||
            ((iVar4 <= *(int *)(lVar1 + 0x24) &&
             ((iVar4 < *(int *)(lVar1 + 0x24) || (iVar8 <= *(int *)(lVar1 + 0x28))))))))) break;
        param_2 = (ulong)(iVar14 + 1);
        uVar11 = uVar11 + 0x40;
      }
      uVar11 = -(uVar10 >> 0x1f) & 0xffffffc000000000 | uVar10 << 6;
      while( true ) {
        lVar2 = param_1 + uVar11;
        iVar9 = (int)uVar10;
        if ((*(int *)(lVar2 + 0x20) <= iVar3) &&
           ((*(int *)(lVar2 + 0x20) < iVar3 ||
            ((*(int *)(lVar2 + 0x24) <= iVar4 &&
             ((*(int *)(lVar2 + 0x24) < iVar4 || (*(int *)(lVar2 + 0x28) <= iVar8)))))))) break;
        uVar10 = (ulong)(iVar9 - 1);
        uVar11 = uVar11 - 0x40;
      }
      if (iVar14 <= iVar9) {
        if (iVar14 != iVar9) {
          uVar5 = *(undefined8 *)(lVar2 + 0x28);
          uVar6 = *(undefined8 *)(lVar2 + 0x30);
          uVar12 = *(undefined8 *)(lVar2 + 0x20);
          uVar16 = *(undefined8 *)(lVar2 + 0x18);
          uVar15 = *(undefined8 *)(lVar2 + 0x10);
          uVar17 = *(undefined8 *)(lVar1 + 0x10);
          *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)(lVar1 + 0x18);
          *(undefined8 *)(lVar2 + 0x10) = uVar17;
          uVar17 = *(undefined8 *)(lVar1 + 0x28);
          uVar7 = *(undefined8 *)(lVar1 + 0x30);
          *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(lVar1 + 0x20);
          *(undefined8 *)(lVar2 + 0x28) = uVar17;
          *(undefined8 *)(lVar2 + 0x30) = uVar7;
          *(undefined8 *)(lVar1 + 0x18) = uVar16;
          *(undefined8 *)(lVar1 + 0x10) = uVar15;
          *(undefined8 *)(lVar1 + 0x28) = uVar5;
          *(undefined8 *)(lVar1 + 0x30) = uVar6;
          *(undefined8 *)(lVar1 + 0x20) = uVar12;
        }
        uVar10 = (ulong)(iVar9 - 1);
        param_2 = (ulong)(iVar14 + 1);
      }
    } while ((int)param_2 <= (int)uVar10);
    if (iVar13 < (int)uVar10) {
      FUN_00861cc0(param_1);
    }
  } while ((int)param_2 < (int)param_3);
  return;
}


