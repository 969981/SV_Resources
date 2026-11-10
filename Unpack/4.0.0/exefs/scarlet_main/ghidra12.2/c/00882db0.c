/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00882db0; name: FUN_00882db0
 */


undefined8
FUN_00882db0(long param_1,long param_2,long param_3,uint param_4,uint param_5,int param_6)

{
  undefined8 *puVar1;
  ulong uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  float fVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  
  if (param_5 != 0) {
    uVar2 = 0;
    if (param_4 == 0) {
      do {
        uVar3 = (int)uVar2 + 4;
        uVar2 = (ulong)uVar3;
      } while (uVar3 < param_5);
    }
    else {
      do {
        lVar6 = param_1 + uVar2 * 4;
        uVar14 = *(undefined8 *)(lVar6 + 0x50);
        uVar11 = *(undefined8 *)(lVar6 + 0x48);
        uVar3 = 0;
        uVar5 = uVar2;
        do {
          iVar4 = (int)uVar5;
          lVar7 = (ulong)(uint)(param_6 + iVar4) * 4;
          lVar6 = uVar5 * 4;
          puVar1 = (undefined8 *)(param_2 + lVar6);
          uVar17 = puVar1[1];
          uVar16 = *puVar1;
          puVar1 = (undefined8 *)(param_2 + lVar7);
          uVar19 = puVar1[1];
          uVar18 = *puVar1;
          fVar10 = (float)uVar11;
          fVar12 = (float)((ulong)uVar11 >> 0x20);
          fVar13 = (float)uVar14;
          fVar15 = (float)((ulong)uVar14 >> 0x20);
          lVar8 = (ulong)(uint)(param_6 * 2 + iVar4) * 4;
          lVar9 = (ulong)(uint)(param_6 * 3 + iVar4) * 4;
          uVar3 = uVar3 + 4;
          puVar1 = (undefined8 *)(param_2 + lVar8);
          uVar21 = puVar1[1];
          uVar20 = *puVar1;
          uVar5 = (ulong)(uint)(iVar4 + param_6 * 4);
          puVar1 = (undefined8 *)(param_2 + lVar9);
          uVar23 = puVar1[1];
          uVar22 = *puVar1;
          puVar1 = (undefined8 *)(param_3 + lVar6);
          puVar1[1] = CONCAT44((float)((ulong)uVar17 >> 0x20) * fVar15,(float)uVar17 * fVar13);
          *puVar1 = CONCAT44((float)((ulong)uVar16 >> 0x20) * fVar12,(float)uVar16 * fVar10);
          puVar1 = (undefined8 *)(param_3 + lVar7);
          puVar1[1] = CONCAT44((float)((ulong)uVar19 >> 0x20) * fVar15,(float)uVar19 * fVar13);
          *puVar1 = CONCAT44((float)((ulong)uVar18 >> 0x20) * fVar12,(float)uVar18 * fVar10);
          puVar1 = (undefined8 *)(param_3 + lVar8);
          puVar1[1] = CONCAT44((float)((ulong)uVar21 >> 0x20) * fVar15,(float)uVar21 * fVar13);
          *puVar1 = CONCAT44((float)((ulong)uVar20 >> 0x20) * fVar12,(float)uVar20 * fVar10);
          puVar1 = (undefined8 *)(param_3 + lVar9);
          puVar1[1] = CONCAT44((float)((ulong)uVar23 >> 0x20) * fVar15,(float)uVar23 * fVar13);
          *puVar1 = CONCAT44((float)((ulong)uVar22 >> 0x20) * fVar12,(float)uVar22 * fVar10);
        } while (uVar3 < param_4);
        uVar3 = (int)uVar2 + 4;
        uVar2 = (ulong)uVar3;
      } while (uVar3 < param_5);
    }
  }
  return 0;
}


