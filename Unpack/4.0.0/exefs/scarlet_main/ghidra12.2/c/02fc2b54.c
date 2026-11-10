/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02fc2b54; name: FUN_02fc2b54
 */


void FUN_02fc2b54(long *param_1,ulong param_2)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  int iVar10;
  ulong uVar11;
  ulong local_48;
  
  puVar5 = PTR_PTR_047d1a50;
  puVar4 = PTR_DAT_047d1a08;
  uVar7 = (ulong)(uint)(*(int *)((long)param_1 + 0xc) << 1);
  if (uVar7 <= param_2) {
    uVar7 = param_2;
  }
  if (0x7ffffffe < uVar7) {
    if (0x7ffffffe < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_032270d0(0x4648a379,"../..\\Common/Base/Container/Array/hkArray.inl",0x90,
                   "Invalid requestedCapacity");
    }
    uVar7 = 0x7ffffffe;
  }
  local_48 = uVar7 * 8;
  puVar6 = (undefined8 *)
           (**(code **)PTR_DAT_047d1a08)
                     (PTR_PTR_047d1a50[8],&local_48,*(undefined4 *)(PTR_PTR_047d1a50 + 0xc));
  uVar3 = *(uint *)(param_1 + 1);
  if (0 < (int)uVar3) {
    puVar8 = (undefined8 *)*param_1;
    uVar2 = uVar3 & 3;
    puVar9 = puVar6;
    if (2 < uVar3 - 1) {
      iVar10 = -(uVar3 & 0xfffffffc);
      do {
        *puVar9 = *puVar8;
        puVar9[1] = puVar8[1];
        puVar9[2] = puVar8[2];
        puVar9[3] = puVar8[3];
        puVar9 = puVar9 + 4;
        puVar8 = puVar8 + 4;
        iVar10 = iVar10 + 4;
      } while (iVar10 != 0);
    }
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
    }
  }
  uVar1 = uVar7 * 8 + 8;
  uVar11 = uVar7;
  if (uVar1 <= local_48) {
    local_48 = local_48 - 8;
    uVar11 = uVar7 + 1 + (local_48 + uVar7 * -8 >> 3);
    if (local_48 < uVar1) {
      uVar11 = uVar7 + 1;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(puVar4 + 8))(puVar5[8],*param_1,0);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar11;
  *param_1 = (long)puVar6;
  return;
}


