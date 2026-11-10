/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03152ce8; name: FUN_03152ce8
 */


void FUN_03152ce8(undefined8 *param_1,ulong param_2)

{
  undefined2 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  puVar2 = PTR_PTR_047d1a50;
  if (0x7ffffffe < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_032270d0(0x4648a379,"../..\\Common/Base/Container/Array/hkArray.inl",0x5e,
                 "Invalid requestedCapacity");
  }
  puVar4 = (undefined4 *)
           (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,param_2 * 0xd0);
  puVar3 = PTR_PTR_047d1a50;
  iVar6 = *(int *)(param_1 + 1);
  if (0 < iVar6) {
    puVar5 = (undefined4 *)*param_1;
    puVar8 = puVar4;
    puVar9 = puVar5;
    iVar7 = iVar6;
    do {
      *puVar8 = *puVar9;
      *(undefined8 *)(puVar8 + 2) = *(undefined8 *)(puVar9 + 2);
      *(undefined8 *)(puVar9 + 2) = 0;
      *(undefined8 *)(puVar8 + 4) = *(undefined8 *)(puVar9 + 4);
      *(undefined8 *)(puVar9 + 4) = 0;
      memcpy(puVar8 + 8,puVar9 + 8,0x60);
      *(undefined8 *)(puVar8 + 0x22) = *(undefined8 *)(puVar9 + 0x22);
      *(undefined8 *)(puVar8 + 0x20) = *(undefined8 *)(puVar9 + 0x20);
      *(undefined8 *)(puVar8 + 0x26) = *(undefined8 *)(puVar9 + 0x26);
      *(undefined8 *)(puVar8 + 0x24) = *(undefined8 *)(puVar9 + 0x24);
      puVar8[0x28] = puVar9[0x28];
      FUN_030fe14c(puVar9 + 0x2a,puVar3);
      *(undefined8 *)(puVar8 + 0x2a) = *(undefined8 *)(puVar9 + 0x2a);
      puVar8[0x2c] = puVar9[0x2c];
      puVar8[0x2d] = puVar9[0x2d];
      *(undefined8 *)(puVar9 + 0x2a) = 0;
      *(undefined8 *)(puVar9 + 0x2c) = 0;
      FUN_030fe264(puVar9 + 0x2e,puVar3);
      *(undefined8 *)(puVar8 + 0x2e) = *(undefined8 *)(puVar9 + 0x2e);
      puVar8[0x30] = puVar9[0x30];
      puVar8[0x31] = puVar9[0x31];
      uVar1 = *(undefined2 *)(puVar9 + 0x32);
      iVar7 = iVar7 + -1;
      *(undefined8 *)(puVar9 + 0x2e) = 0;
      *(undefined8 *)(puVar9 + 0x30) = 0;
      *(undefined1 *)((long)puVar8 + 0xca) = *(undefined1 *)((long)puVar9 + 0xca);
      *(undefined2 *)(puVar8 + 0x32) = uVar1;
      puVar9 = puVar9 + 0x34;
      puVar8 = puVar8 + 0x34;
    } while (iVar7 != 0);
    do {
      FUN_030fd1ac(puVar5);
      puVar5 = puVar5 + 0x34;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(puVar2[8],*param_1,0);
  }
  *(int *)((long)param_1 + 0xc) = (int)param_2;
  *param_1 = puVar4;
  return;
}


