/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0304152c; name: FUN_0304152c
 */


void FUN_0304152c(long *param_1,ulong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  int iVar10;
  
  puVar5 = PTR_PTR_047d1a50;
  if (0x7ffffffe < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_032270d0(0x4648a379,"../..\\Common/Base/Container/Array/hkArray.inl",0x5e,
                 "Invalid requestedCapacity");
  }
  puVar6 = (undefined8 *)
           (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,param_2 << 5);
  uVar4 = *(uint *)(param_1 + 1);
  if (0 < (int)uVar4) {
    puVar7 = (undefined8 *)*param_1;
    puVar9 = puVar6;
    if (uVar4 != 1) {
      iVar10 = -(uVar4 & 0xfffffffe);
      do {
        uVar8 = puVar7[3];
        iVar10 = iVar10 + 2;
        puVar9[1] = puVar7[1];
        puVar9[3] = uVar8;
        uVar8 = *puVar7;
        puVar9[2] = puVar7[2];
        *puVar9 = uVar8;
        uVar8 = puVar7[4];
        uVar2 = puVar7[5];
        puVar1 = puVar7 + 6;
        uVar3 = puVar7[7];
        puVar7 = puVar7 + 8;
        puVar9[6] = *puVar1;
        puVar9[7] = uVar3;
        puVar9[4] = uVar8;
        puVar9[5] = uVar2;
        puVar9 = puVar9 + 8;
      } while (iVar10 != 0);
    }
    if ((uVar4 & 1) != 0) {
      uVar8 = puVar7[3];
      puVar9[1] = puVar7[1];
      puVar9[3] = uVar8;
      uVar8 = *puVar7;
      puVar9[2] = puVar7[2];
      *puVar9 = uVar8;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(puVar5[8],*param_1,0);
  }
  *(int *)((long)param_1 + 0xc) = (int)param_2;
  *param_1 = (long)puVar6;
  return;
}


