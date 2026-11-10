/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0347702c; name: FUN_0347702c
 */


undefined8 FUN_0347702c(long param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  uint uVar3;
  undefined8 *puVar4;
  ulong *puVar5;
  undefined8 uVar6;
  ulong *puVar7;
  uint uVar8;
  ulong *puVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong *puVar12;
  ulong uVar13;
  undefined8 *puVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  
  uVar8 = *(uint *)(param_2 + 0x18);
  if (uVar8 == 0) {
    uVar6 = 0;
  }
  else {
    puVar9 = *(ulong **)(param_2 + 0x10);
    uVar6 = 0;
    uVar3 = *(uint *)(param_1 + 0x28);
    puVar12 = puVar9;
    uVar15 = uVar3;
    do {
      if (uVar15 != 0) {
        uVar13 = *puVar9;
        iVar16 = 0;
        puVar7 = *(ulong **)(param_1 + 0x20);
        uVar17 = uVar15;
        do {
          iVar1 = iVar16 + (uVar17 >> 1);
          uVar2 = puVar7[(long)iVar1 * 3];
          if (uVar2 == uVar13 && (int)(puVar7 + (long)iVar1 * 3)[1] == 0) {
            puVar12 = puVar7 + (long)iVar1 * 3;
            if (((uVar13 == 0xffffffffffffffff) ||
                ((puVar7 <= puVar12 + -3 && (puVar12[-3] == uVar13)))) ||
               ((puVar12 + 3 <= puVar7 + (ulong)uVar3 * 3 + -3 && (puVar12[3] == uVar13))))
            goto LAB_03477160;
            uVar8 = *(uint *)(param_1 + 0x48);
            if (uVar8 == 0) goto LAB_03477160;
            lVar10 = *(long *)(param_1 + 0x40);
            iVar16 = 0;
            uVar15 = uVar8;
            goto LAB_034770f4;
          }
          if (uVar2 < uVar13) {
            iVar16 = iVar1 + 1;
          }
          uVar17 = uVar17 - (uVar2 < uVar13) >> 1;
        } while (uVar17 != 0);
      }
LAB_034771b0:
      puVar9 = puVar9 + 1;
    } while (puVar9 != puVar12 + uVar8);
  }
  return uVar6;
LAB_034770f4:
  iVar1 = iVar16 + (uVar15 >> 1);
  uVar2 = *(ulong *)(lVar10 + (long)iVar1 * 8);
  if (uVar2 != uVar13) goto code_r0x03477108;
  puVar14 = (undefined8 *)(lVar10 + (long)iVar1 * 8);
  puVar11 = (undefined8 *)(lVar10 + (ulong)uVar8 * 8 + -8);
  if (puVar14 < puVar11) {
    do {
      puVar4 = puVar14 + 1;
      *puVar14 = *puVar4;
      puVar14 = puVar4;
    } while (puVar4 < puVar11);
    uVar8 = *(uint *)(param_1 + 0x48);
    puVar7 = *(ulong **)(param_1 + 0x20);
    uVar3 = *(uint *)(param_1 + 0x28);
  }
  *(uint *)(param_1 + 0x48) = uVar8 - 1;
LAB_03477160:
  if (puVar12 < puVar7 + (ulong)uVar3 * 3 + -3) {
    do {
      puVar5 = puVar12 + 3;
      *puVar12 = *puVar5;
      puVar12[1] = puVar12[4];
      *(int *)(puVar12 + 2) = (int)puVar12[5];
      puVar12 = puVar5;
    } while (puVar5 < puVar7 + (ulong)uVar3 * 3 + -3);
    uVar3 = *(uint *)(param_1 + 0x28);
  }
  uVar3 = uVar3 - 1;
  *(uint *)(param_1 + 0x28) = uVar3;
  puVar12 = *(ulong **)(param_2 + 0x10);
  uVar8 = *(uint *)(param_2 + 0x18);
  uVar6 = 1;
  uVar15 = uVar3;
  goto LAB_034771b0;
code_r0x03477108:
  if (uVar2 < uVar13) {
    iVar16 = iVar1 + 1;
  }
  uVar15 = uVar15 - (uVar2 < uVar13) >> 1;
  if (uVar15 == 0) goto LAB_03477160;
  goto LAB_034770f4;
}


