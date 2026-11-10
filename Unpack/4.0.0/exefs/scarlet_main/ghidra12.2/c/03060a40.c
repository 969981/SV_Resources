/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03060a40; name: FUN_03060a40
 */


void FUN_03060a40(undefined8 *param_1,ulong param_2)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  ulong uVar10;
  long lVar11;
  undefined4 *puVar12;
  uint *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined *puVar17;
  int iVar18;
  int iVar19;
  
  puVar17 = PTR_PTR_047d1a50;
  if (0x7ffffffe < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_032270d0(0x4648a379,"../..\\Common/Base/Container/Array/hkArray.inl",0x5e,
                 "Invalid requestedCapacity");
  }
  puVar5 = (undefined8 *)
           (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,param_2 << 4);
  puVar3 = PTR_PTR_047d1a50;
  iVar18 = *(int *)(param_1 + 1);
  if (0 < iVar18) {
    puVar14 = (undefined8 *)*param_1;
    iVar19 = 0;
    puVar15 = puVar14;
    puVar16 = puVar5;
    do {
      *puVar16 = 0;
      puVar16[1] = 0x8000000000000000;
      iVar2 = *(int *)(puVar15 + 1);
      if (0 < iVar2) {
        puVar12 = (undefined4 *)*puVar15;
        FUN_02e9b320(puVar16,puVar3,(long)iVar2);
        puVar6 = (undefined4 *)*puVar16;
        uVar10 = (long)iVar2 * 4 - 4;
        uVar1 = ((uint)(uVar10 >> 2) & 0x3fffffff) + 1;
        if ((uVar1 & 7) == 0) {
          puVar9 = puVar12;
        }
        else {
          lVar11 = -((ulong)uVar1 & 7);
          puVar7 = puVar6;
          puVar8 = puVar12;
          do {
            puVar9 = puVar8 + 1;
            bVar4 = lVar11 != -1;
            lVar11 = lVar11 + 1;
            puVar6 = puVar7 + 1;
            *puVar7 = *puVar8;
            puVar7 = puVar6;
            puVar8 = puVar9;
          } while (bVar4);
        }
        if (0x1b < uVar10) {
          do {
            *puVar6 = *puVar9;
            puVar6[1] = puVar9[1];
            puVar6[2] = puVar9[2];
            puVar6[3] = puVar9[3];
            puVar6[4] = puVar9[4];
            puVar6[5] = puVar9[5];
            puVar6[6] = puVar9[6];
            puVar7 = puVar9 + 7;
            puVar9 = puVar9 + 8;
            puVar6[7] = *puVar7;
            puVar6 = puVar6 + 8;
          } while (puVar9 != puVar12 + iVar2);
        }
      }
      iVar19 = iVar19 + 1;
      *(int *)(puVar16 + 1) = iVar2;
      puVar17 = PTR_PTR_047d1a50;
      puVar16 = puVar16 + 2;
      puVar15 = puVar15 + 2;
    } while (iVar19 != iVar18);
    puVar13 = (uint *)((long)puVar14 + 0xc);
    do {
      puVar13[-1] = 0;
      if ((-1 < (int)*puVar13) && (*(long *)(puVar13 + -3) != 0)) {
        (**(code **)(*(long *)puVar3 + 0x20))(puVar3,*(long *)(puVar13 + -3),(ulong)*puVar13 << 2);
      }
      puVar13[-3] = 0;
      puVar13[-2] = 0;
      iVar18 = iVar18 + -1;
      *puVar13 = 0x80000000;
      puVar13 = puVar13 + 4;
    } while (iVar18 != 0);
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(puVar17[8],*param_1,0);
  }
  *(int *)((long)param_1 + 0xc) = (int)param_2;
  *param_1 = puVar5;
  return;
}


