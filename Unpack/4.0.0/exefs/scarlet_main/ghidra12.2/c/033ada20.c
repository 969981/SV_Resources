/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 033ada20; name: FUN_033ada20
 */


void FUN_033ada20(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  int iVar11;
  ulong uVar12;
  ulong local_48;
  
  puVar6 = PTR_PTR_047d1a50;
  puVar5 = PTR_DAT_047d1a08;
  uVar8 = (ulong)(uint)(*(int *)((long)param_1 + 0xc) << 1);
  if (uVar8 <= param_2) {
    uVar8 = param_2;
  }
  if (0x7ffffffe < uVar8) {
    if (0x7ffffffe < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_032270d0(0x4648a379,"../..\\Common/Base/Container/Array/hkArray.inl",0x90,
                   "Invalid requestedCapacity");
    }
    uVar8 = 0x7ffffffe;
  }
  local_48 = uVar8 * 0x10;
  puVar7 = (undefined8 *)
           (**(code **)PTR_DAT_047d1a08)
                     (PTR_PTR_047d1a50[8],&local_48,*(undefined4 *)(PTR_PTR_047d1a50 + 0xc));
  uVar4 = *(uint *)(param_1 + 1);
  if (0 < (int)uVar4) {
    puVar9 = (undefined8 *)*param_1;
    puVar10 = puVar7;
    if (uVar4 != 1) {
      iVar11 = -(uVar4 & 0xfffffffe);
      do {
        uVar3 = puVar9[1];
        iVar11 = iVar11 + 2;
        *puVar10 = *puVar9;
        puVar10[1] = uVar3;
        puVar1 = puVar9 + 2;
        uVar3 = puVar9[3];
        puVar9 = puVar9 + 4;
        puVar10[2] = *puVar1;
        puVar10[3] = uVar3;
        puVar10 = puVar10 + 4;
      } while (iVar11 != 0);
    }
    if ((uVar4 & 1) != 0) {
      uVar3 = puVar9[1];
      *puVar10 = *puVar9;
      puVar10[1] = uVar3;
    }
  }
  uVar2 = uVar8 * 0x10 + 0x10;
  uVar12 = uVar8;
  if (uVar2 <= local_48) {
    local_48 = local_48 - 0x10;
    uVar12 = uVar8 + 1 + (local_48 + uVar8 * -0x10 >> 4);
    if (local_48 < uVar2) {
      uVar12 = uVar8 + 1;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(puVar5 + 8))(puVar6[8],*param_1,0);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar12;
  *param_1 = puVar7;
  return;
}


