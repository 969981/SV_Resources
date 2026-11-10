/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02fab6d0; name: FUN_02fab6d0
 */


void FUN_02fab6d0(long param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 *puVar7;
  int iVar8;
  int iVar9;
  undefined8 *puVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  int iVar15;
  
  do {
    uVar5 = *(uint *)(param_1 + (long)(param_2 + param_3 >> 1) * 0x30 + 0x20);
    iVar15 = param_2;
    iVar8 = param_3;
    do {
      puVar7 = (undefined8 *)(param_1 + -0x30 + (long)iVar15 * 0x30);
      do {
        iVar11 = iVar15;
        puVar10 = puVar7;
        puVar7 = puVar10 + 6;
        iVar15 = iVar11 + 1;
      } while (*(uint *)(puVar10 + 10) < uVar5);
      puVar13 = (undefined8 *)(param_1 + 0x30 + (long)iVar8 * 0x30);
      iVar8 = iVar8 + 1;
      do {
        iVar9 = iVar8;
        puVar12 = puVar13;
        uVar6 = *(uint *)(puVar12 + -2);
        puVar13 = puVar12 + -6;
        iVar8 = iVar9 + -1;
      } while (uVar5 < uVar6);
      iVar15 = iVar11;
      if (iVar11 <= iVar8) {
        if (iVar11 != iVar8) {
          uVar1 = *puVar13;
          uVar3 = puVar12[-5];
          uVar2 = puVar12[-4];
          uVar14 = puVar10[8];
          uVar4 = puVar10[7];
          *puVar13 = *puVar7;
          puVar12[-5] = uVar4;
          puVar12[-4] = uVar14;
          *(undefined4 *)(puVar12 + -2) = *(undefined4 *)(puVar10 + 10);
          puVar10[7] = uVar3;
          puVar10[8] = uVar2;
          *puVar7 = uVar1;
          *(uint *)(puVar10 + 10) = uVar6;
        }
        iVar8 = iVar9 + -2;
        iVar15 = iVar11 + 1;
      }
    } while (iVar15 <= iVar8);
    if (param_2 < iVar8) {
      FUN_02fab6d0(param_1);
    }
    param_2 = iVar15;
  } while (iVar15 < param_3);
  return;
}


