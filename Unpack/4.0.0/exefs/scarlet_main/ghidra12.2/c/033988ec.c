/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 033988ec; name: FUN_033988ec
 */


void FUN_033988ec(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  ulong local_48;
  
  puVar4 = PTR_PTR_047d1a50;
  uVar12 = (ulong)*(uint *)((long)param_1 + 0xc) & 0x7fffffff;
  uVar6 = uVar12 * 2;
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
           (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x10))(PTR_PTR_047d1a50,uVar6 * 0x18,&local_48);
  uVar3 = *(uint *)(param_1 + 1);
  if (0 < (int)uVar3) {
    puVar7 = (undefined8 *)*param_1;
    puVar9 = puVar5;
    if (uVar3 != 1) {
      iVar10 = -(uVar3 & 0xfffffffe);
      do {
        uVar2 = *puVar7;
        iVar10 = iVar10 + 2;
        uVar8 = puVar7[2];
        puVar9[1] = puVar7[1];
        puVar9[2] = uVar8;
        *puVar9 = uVar2;
        uVar2 = puVar7[3];
        uVar8 = puVar7[5];
        puVar9[4] = puVar7[4];
        puVar9[5] = uVar8;
        puVar9[3] = uVar2;
        puVar9 = puVar9 + 6;
        puVar7 = puVar7 + 6;
      } while (iVar10 != 0);
    }
    if ((uVar3 & 1) != 0) {
      uVar2 = *puVar7;
      uVar8 = puVar7[2];
      puVar9[1] = puVar7[1];
      puVar9[2] = uVar8;
      *puVar9 = uVar2;
    }
  }
  uVar1 = uVar6 * 0x18 + 0x18;
  uVar11 = uVar6;
  if (uVar1 <= local_48) {
    local_48 = local_48 - 0x18;
    uVar11 = uVar6 + 1 + (local_48 + uVar6 * -0x18) / 0x18;
    if (local_48 < uVar1) {
      uVar11 = uVar6 + 1;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(*(long *)puVar4 + 0x20))(puVar4,*param_1,uVar12 * 0x18);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar11;
  *param_1 = puVar5;
  return;
}


