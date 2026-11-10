/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03076680; name: FUN_03076680
 */


void FUN_03076680(long param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined8 uVar9;
  float fVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  do {
    uVar1 = param_2 + param_3 >> 1;
    uVar9 = *(undefined8 *)
             (param_1 + (-(ulong)(uVar1 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar1 << 5) + 8);
    iVar8 = param_2;
    iVar2 = param_3;
    do {
      puVar7 = (undefined8 *)(param_1 + -0x10 + (long)iVar8 * 0x20);
      do {
        iVar4 = iVar8;
        puVar5 = puVar7;
        uVar11 = puVar5[2];
        fVar10 = (float)((ulong)uVar9 >> 0x20);
        puVar7 = puVar5 + 4;
        iVar8 = iVar4 + 1;
      } while (!(bool)(~((float)((ulong)puVar5[3] >> 0x20) < fVar10) & 1));
      puVar7 = (undefined8 *)(param_1 + 0x30 + (long)iVar2 * 0x20);
      iVar2 = iVar2 + 1;
      do {
        iVar3 = iVar2;
        puVar6 = puVar7;
        uVar13 = puVar6[-5];
        uVar12 = puVar6[-6];
        puVar7 = puVar6 + -4;
        iVar2 = iVar3 + -1;
      } while (!(bool)(~(fVar10 < (float)((ulong)uVar13 >> 0x20)) & 1));
      iVar8 = iVar4;
      if (iVar4 <= iVar2) {
        if (iVar4 != iVar2) {
          puVar6[-5] = puVar5[3];
          puVar6[-6] = uVar11;
          uVar15 = puVar6[-3];
          uVar14 = *puVar7;
          uVar11 = puVar5[4];
          puVar6[-3] = puVar5[5];
          *puVar7 = uVar11;
          puVar5[3] = uVar13;
          puVar5[2] = uVar12;
          puVar5[5] = uVar15;
          puVar5[4] = uVar14;
        }
        iVar2 = iVar3 + -2;
        iVar8 = iVar4 + 1;
      }
    } while (iVar8 <= iVar2);
    if (param_2 < iVar2) {
      FUN_03076680(param_1);
    }
    param_2 = iVar8;
  } while (iVar8 < param_3);
  return;
}


