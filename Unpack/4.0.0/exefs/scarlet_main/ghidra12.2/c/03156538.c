/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03156538; name: FUN_03156538
 */


void FUN_03156538(undefined8 *param_1,ulong param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar2 = PTR_PTR_047d1a50;
  if (0x7ffffffe < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_032270d0(0x4648a379,"../..\\Common/Base/Container/Array/hkArray.inl",0x5e,
                 "Invalid requestedCapacity");
  }
  puVar3 = (undefined8 *)
           (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,param_2 * 0x14);
  uVar1 = *(uint *)(param_1 + 1);
  if (0 < (int)uVar1) {
    puVar4 = (undefined8 *)*param_1;
    puVar5 = puVar3;
    if (uVar1 != 1) {
      iVar6 = -(uVar1 & 0xfffffffe);
      do {
        uVar7 = *puVar4;
        uVar8 = puVar4[1];
        iVar6 = iVar6 + 2;
        *(undefined4 *)(puVar5 + 2) = *(undefined4 *)(puVar4 + 2);
        *puVar5 = uVar7;
        puVar5[1] = uVar8;
        uVar7 = *(undefined8 *)((long)puVar4 + 0x14);
        uVar8 = *(undefined8 *)((long)puVar4 + 0x1c);
        *(undefined4 *)((long)puVar5 + 0x24) = *(undefined4 *)((long)puVar4 + 0x24);
        *(undefined8 *)((long)puVar5 + 0x1c) = uVar8;
        *(undefined8 *)((long)puVar5 + 0x14) = uVar7;
        puVar5 = puVar5 + 5;
        puVar4 = puVar4 + 5;
      } while (iVar6 != 0);
    }
    if ((uVar1 & 1) != 0) {
      uVar7 = *puVar4;
      uVar8 = puVar4[1];
      *(undefined4 *)(puVar5 + 2) = *(undefined4 *)(puVar4 + 2);
      *puVar5 = uVar7;
      puVar5[1] = uVar8;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(puVar2[8],*param_1,0);
  }
  *(int *)((long)param_1 + 0xc) = (int)param_2;
  *param_1 = puVar3;
  return;
}


