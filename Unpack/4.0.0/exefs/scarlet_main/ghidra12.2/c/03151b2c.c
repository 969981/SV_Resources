/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03151b2c; name: FUN_03151b2c
 */


void FUN_03151b2c(undefined8 *param_1,ulong param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  uint *puVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  
  puVar3 = PTR_PTR_047d1a50;
  if (0x7ffffffe < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_032270d0(0x4648a379,"../..\\Common/Base/Container/Array/hkArray.inl",0x5e,
                 "Invalid requestedCapacity");
  }
  puVar5 = (undefined4 *)
           (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,param_2 * 0x28);
  puVar4 = PTR_PTR_047d1a50;
  iVar6 = *(int *)(param_1 + 1);
  if (0 < iVar6) {
    puVar7 = (undefined4 *)*param_1;
    puVar10 = puVar5;
    puVar11 = puVar7;
    iVar9 = iVar6;
    do {
      *puVar10 = *puVar11;
      uVar2 = puVar11[2];
      *(undefined2 *)(puVar10 + 3) = *(undefined2 *)(puVar11 + 3);
      puVar10[2] = uVar2;
      FUN_02ed67fc(puVar11 + 4,puVar4);
      *(undefined8 *)(puVar10 + 4) = *(undefined8 *)(puVar11 + 4);
      puVar10[6] = puVar11[6];
      puVar10[7] = puVar11[7];
      puVar1 = puVar11 + 8;
      *(undefined8 *)(puVar11 + 4) = 0;
      *(undefined8 *)(puVar11 + 6) = 0;
      iVar9 = iVar9 + -1;
      puVar11 = puVar11 + 10;
      puVar10[8] = *puVar1;
      puVar10 = puVar10 + 10;
    } while (iVar9 != 0);
    puVar8 = puVar7 + 7;
    do {
      puVar8[-1] = 0;
      if ((-1 < (int)*puVar8) && (*(long *)(puVar8 + -3) != 0)) {
        (**(code **)(*(long *)puVar4 + 0x20))(puVar4,*(long *)(puVar8 + -3),(ulong)*puVar8 << 2);
      }
      puVar8[-3] = 0;
      puVar8[-2] = 0;
      iVar6 = iVar6 + -1;
      *puVar8 = 0x80000000;
      puVar8 = puVar8 + 10;
    } while (iVar6 != 0);
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(puVar3[8],*param_1,0);
  }
  *(int *)((long)param_1 + 0xc) = (int)param_2;
  *param_1 = puVar5;
  return;
}


