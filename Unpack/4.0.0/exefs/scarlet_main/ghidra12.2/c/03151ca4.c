/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03151ca4; name: FUN_03151ca4
 */


void FUN_03151ca4(undefined8 *param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  uint *puVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  puVar1 = PTR_PTR_047d1a50;
  if (0x7ffffffe < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_032270d0(0x4648a379,"../..\\Common/Base/Container/Array/hkArray.inl",0x5e,
                 "Invalid requestedCapacity");
  }
  puVar3 = (undefined4 *)
           (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,param_2 * 0x18);
  puVar2 = PTR_PTR_047d1a50;
  iVar4 = *(int *)(param_1 + 1);
  if (0 < iVar4) {
    puVar5 = (undefined4 *)*param_1;
    puVar8 = puVar3;
    puVar9 = puVar5;
    iVar7 = iVar4;
    do {
      *puVar8 = *puVar9;
      FUN_030e9334(puVar9 + 2,puVar2);
      *(undefined8 *)(puVar8 + 2) = *(undefined8 *)(puVar9 + 2);
      puVar8[4] = puVar9[4];
      puVar8[5] = puVar9[5];
      iVar7 = iVar7 + -1;
      *(undefined8 *)(puVar9 + 2) = 0;
      *(undefined8 *)(puVar9 + 4) = 0;
      puVar9 = puVar9 + 6;
      puVar8 = puVar8 + 6;
    } while (iVar7 != 0);
    puVar6 = puVar5 + 5;
    do {
      puVar6[-1] = 0;
      if ((-1 < (int)*puVar6) && (*(long *)(puVar6 + -3) != 0)) {
        (**(code **)(*(long *)puVar2 + 0x20))(puVar2,*(long *)(puVar6 + -3),(ulong)*puVar6 << 3);
      }
      puVar6[-3] = 0;
      puVar6[-2] = 0;
      iVar4 = iVar4 + -1;
      *puVar6 = 0x80000000;
      puVar6 = puVar6 + 6;
    } while (iVar4 != 0);
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(puVar1[8],*param_1,0);
  }
  *(int *)((long)param_1 + 0xc) = (int)param_2;
  *param_1 = puVar3;
  return;
}


