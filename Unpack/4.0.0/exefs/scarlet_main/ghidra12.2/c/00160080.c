/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00160080; name: FUN_00160080
 */


void FUN_00160080(ulong *param_1,ulong param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  
  lVar1 = param_3 + 0x400;
  lVar2 = param_3 + 0x800;
  lVar3 = param_3 + 0xc00;
  if (0x17 < param_2 && param_2 - 0x18 != 0) {
    uVar10 = *param_1;
    puVar4 = (ulong *)((long)param_1 + (param_2 - 0x18));
    do {
      while( true ) {
        uVar11 = param_1[1];
        uVar12 = uVar10 & 0xff;
        uVar13 = uVar10 >> 8 & 0xff;
        uVar14 = uVar10 >> 0x10 & 0xff;
        uVar15 = uVar10 >> 0x18 & 0xff;
        if (uVar10 == uVar11) break;
        uVar16 = uVar10 >> 0x20 & 0xff;
        iVar5 = *(int *)(lVar1 + uVar13 * 4);
        uVar17 = uVar10 >> 0x28 & 0xff;
        iVar6 = *(int *)(lVar2 + uVar14 * 4);
        iVar7 = *(int *)(lVar3 + uVar15 * 4);
        *(int *)(param_3 + uVar12 * 4) = *(int *)(param_3 + uVar12 * 4) + 1;
        *(int *)(lVar1 + uVar13 * 4) = iVar5 + 1;
        *(int *)(lVar2 + uVar14 * 4) = iVar6 + 1;
        uVar18 = uVar10 >> 0x30 & 0xff;
        iVar5 = *(int *)(param_3 + uVar16 * 4);
        uVar19 = uVar10 >> 0x38;
        iVar6 = *(int *)(lVar1 + uVar17 * 4);
        uVar12 = uVar11 >> 8 & 0xff;
        iVar8 = *(int *)(lVar2 + uVar18 * 4);
        uVar10 = param_1[2];
        *(int *)(lVar3 + uVar15 * 4) = iVar7 + 1;
        *(int *)(param_3 + uVar16 * 4) = iVar5 + 1;
        uVar13 = uVar11 >> 0x10 & 0xff;
        *(int *)(lVar1 + uVar17 * 4) = iVar6 + 1;
        uVar14 = uVar11 >> 0x18 & 0xff;
        iVar5 = *(int *)(lVar3 + uVar19 * 4);
        *(int *)(lVar2 + uVar18 * 4) = iVar8 + 1;
        uVar15 = uVar11 >> 0x20 & 0xff;
        iVar6 = *(int *)(param_3 + (uVar11 & 0xff) * 4);
        iVar7 = *(int *)(lVar1 + uVar12 * 4);
        uVar16 = uVar11 >> 0x28 & 0xff;
        iVar8 = *(int *)(lVar2 + uVar13 * 4);
        *(int *)(lVar3 + uVar19 * 4) = iVar5 + 1;
        *(int *)(param_3 + (uVar11 & 0xff) * 4) = iVar6 + 1;
        *(int *)(lVar1 + uVar12 * 4) = iVar7 + 1;
        uVar12 = uVar11 >> 0x30 & 0xff;
        iVar5 = *(int *)(lVar3 + uVar14 * 4);
        iVar6 = *(int *)(param_3 + uVar15 * 4);
        iVar7 = *(int *)(lVar1 + uVar16 * 4);
        *(int *)(lVar2 + uVar13 * 4) = iVar8 + 1;
        *(int *)(lVar3 + uVar14 * 4) = iVar5 + 1;
        *(int *)(param_3 + uVar15 * 4) = iVar6 + 1;
        iVar5 = *(int *)(lVar2 + uVar12 * 4);
        iVar6 = *(int *)(lVar3 + (uVar11 >> 0x38) * 4);
        *(int *)(lVar1 + uVar16 * 4) = iVar7 + 1;
        *(int *)(lVar2 + uVar12 * 4) = iVar5 + 1;
        *(int *)(lVar3 + (uVar11 >> 0x38) * 4) = iVar6 + 1;
joined_r0x00160244:
        param_1 = param_1 + 2;
        if (puVar4 <= param_1) {
          return;
        }
      }
      puVar9 = param_1 + 2;
      uVar10 = *puVar9;
      if (0xff < (uVar11 ^ uVar11 << 8)) {
        uVar16 = uVar11 >> 0x20 & 0xff;
        iVar5 = *(int *)(lVar1 + uVar13 * 4);
        uVar17 = uVar11 >> 0x28 & 0xff;
        iVar6 = *(int *)(lVar2 + uVar14 * 4);
        iVar7 = *(int *)(lVar3 + uVar15 * 4);
        *(int *)(param_3 + uVar12 * 4) = *(int *)(param_3 + uVar12 * 4) + 2;
        *(int *)(lVar1 + uVar13 * 4) = iVar5 + 2;
        *(int *)(lVar2 + uVar14 * 4) = iVar6 + 2;
        uVar12 = uVar11 >> 0x30 & 0xff;
        iVar5 = *(int *)(param_3 + uVar16 * 4);
        iVar6 = *(int *)(lVar1 + uVar17 * 4);
        iVar8 = *(int *)(lVar2 + uVar12 * 4);
        *(int *)(lVar3 + uVar15 * 4) = iVar7 + 2;
        *(int *)(param_3 + uVar16 * 4) = iVar5 + 2;
        *(int *)(lVar1 + uVar17 * 4) = iVar6 + 2;
        iVar5 = *(int *)(lVar3 + (uVar11 >> 0x38) * 4);
        *(int *)(lVar2 + uVar12 * 4) = iVar8 + 2;
        *(int *)(lVar3 + (uVar11 >> 0x38) * 4) = iVar5 + 2;
        goto joined_r0x00160244;
      }
      *(int *)(param_3 + uVar12 * 4) = *(int *)(param_3 + uVar12 * 4) + 0x10;
      param_1 = puVar9;
    } while (puVar9 < puVar4);
  }
  return;
}


