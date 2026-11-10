/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 033757fc; name: FUN_033757fc
 */


void FUN_033757fc(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  int iVar8;
  
  puVar3 = PTR_PTR_047d1a50;
  if (0x7ffffffe < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_032270d0(0x4648a379,"../..\\Common/Base/Container/Array/hkArray.inl",0x5e,
                 "Invalid requestedCapacity");
  }
  puVar4 = (undefined8 *)
           (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,param_2 * 0x18);
  uVar2 = *(uint *)(param_1 + 1);
  if (0 < (int)uVar2) {
    puVar5 = (undefined8 *)*param_1;
    puVar7 = puVar4;
    if (uVar2 != 1) {
      iVar8 = -(uVar2 & 0xfffffffe);
      do {
        uVar1 = *puVar5;
        iVar8 = iVar8 + 2;
        uVar6 = puVar5[2];
        puVar7[1] = puVar5[1];
        puVar7[2] = uVar6;
        *puVar7 = uVar1;
        uVar1 = puVar5[3];
        uVar6 = puVar5[5];
        puVar7[4] = puVar5[4];
        puVar7[5] = uVar6;
        puVar7[3] = uVar1;
        puVar7 = puVar7 + 6;
        puVar5 = puVar5 + 6;
      } while (iVar8 != 0);
    }
    if ((uVar2 & 1) != 0) {
      uVar1 = *puVar5;
      uVar6 = puVar5[2];
      puVar7[1] = puVar5[1];
      puVar7[2] = uVar6;
      *puVar7 = uVar1;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(puVar3[8],*param_1,0);
  }
  *(int *)((long)param_1 + 0xc) = (int)param_2;
  *param_1 = puVar4;
  return;
}


