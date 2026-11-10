/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03060d68; name: FUN_03060d68
 */


void FUN_03060d68(undefined8 *param_1,ulong param_2)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  bool bVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  ulong uVar11;
  long lVar12;
  int iVar13;
  uint *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  ulong uVar17;
  undefined8 *puVar18;
  long *plVar19;
  undefined4 *puVar20;
  int iVar21;
  ulong local_68;
  
  plVar19 = (long *)PTR_PTR_047d1a50;
  uVar17 = (ulong)*(uint *)((long)param_1 + 0xc) & 0x7fffffff;
  uVar6 = uVar17 * 2;
  if (uVar6 <= param_2) {
    uVar6 = param_2;
  }
  if (0x7ffffffe < uVar6) {
    if (0x7ffffffe < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_032270d0(0x4648a379,"../..\\Common/Base/Container/Array/hkArray.inl",0x90,
                   "Invalid requestedCapacity");
    }
    uVar6 = 0x7ffffffe;
  }
  puVar5 = (undefined8 *)
           (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x10))(PTR_PTR_047d1a50,uVar6 * 0x10,&local_68);
  puVar3 = PTR_PTR_047d1a50;
  iVar21 = *(int *)(param_1 + 1);
  if (0 < iVar21) {
    iVar13 = 0;
    puVar15 = (undefined8 *)*param_1;
    puVar16 = puVar15;
    puVar18 = puVar5;
    do {
      *puVar18 = 0;
      puVar18[1] = 0x8000000000000000;
      iVar2 = *(int *)(puVar16 + 1);
      if (0 < iVar2) {
        puVar20 = (undefined4 *)*puVar16;
        FUN_02e9b320(puVar18,puVar3,(long)iVar2);
        puVar7 = (undefined4 *)*puVar18;
        uVar11 = (long)iVar2 * 4 - 4;
        uVar1 = ((uint)(uVar11 >> 2) & 0x3fffffff) + 1;
        if ((uVar1 & 7) == 0) {
          puVar10 = puVar20;
        }
        else {
          lVar12 = -((ulong)uVar1 & 7);
          puVar8 = puVar7;
          puVar9 = puVar20;
          do {
            puVar10 = puVar9 + 1;
            bVar4 = lVar12 != -1;
            lVar12 = lVar12 + 1;
            puVar7 = puVar8 + 1;
            *puVar8 = *puVar9;
            puVar8 = puVar7;
            puVar9 = puVar10;
          } while (bVar4);
        }
        if (0x1b < uVar11) {
          do {
            *puVar7 = *puVar10;
            puVar7[1] = puVar10[1];
            puVar7[2] = puVar10[2];
            puVar7[3] = puVar10[3];
            puVar7[4] = puVar10[4];
            puVar7[5] = puVar10[5];
            puVar7[6] = puVar10[6];
            puVar8 = puVar10 + 7;
            puVar10 = puVar10 + 8;
            puVar7[7] = *puVar8;
            puVar7 = puVar7 + 8;
          } while (puVar10 != puVar20 + iVar2);
        }
      }
      iVar13 = iVar13 + 1;
      *(int *)(puVar18 + 1) = iVar2;
      plVar19 = (long *)PTR_PTR_047d1a50;
      puVar18 = puVar18 + 2;
      puVar16 = puVar16 + 2;
    } while (iVar13 != iVar21);
    puVar14 = (uint *)((long)puVar15 + 0xc);
    do {
      puVar14[-1] = 0;
      if ((-1 < (int)*puVar14) && (*(long *)(puVar14 + -3) != 0)) {
        (**(code **)(*(long *)puVar3 + 0x20))(puVar3,*(long *)(puVar14 + -3),(ulong)*puVar14 << 2);
      }
      puVar14[-3] = 0;
      puVar14[-2] = 0;
      iVar21 = iVar21 + -1;
      *puVar14 = 0x80000000;
      puVar14 = puVar14 + 4;
    } while (iVar21 != 0);
  }
  iVar21 = (int)uVar6;
  uVar11 = uVar6 * 0x10 + 0x10;
  if (uVar11 <= local_68) {
    local_68 = local_68 - 0x10;
    iVar13 = iVar21 + 1 + (int)(local_68 + uVar6 * -0x10 >> 4);
    if (local_68 < uVar11) {
      iVar13 = iVar21 + 1;
    }
    iVar21 = iVar13;
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(*plVar19 + 0x20))(plVar19,*param_1,uVar17 << 4);
  }
  *(int *)((long)param_1 + 0xc) = iVar21;
  *param_1 = puVar5;
  return;
}


