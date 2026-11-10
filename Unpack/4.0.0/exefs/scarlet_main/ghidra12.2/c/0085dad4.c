/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0085dad4; name: FUN_0085dad4
 */


void FUN_0085dad4(undefined8 *param_1,long param_2,ulong param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  int iVar10;
  ulong uVar11;
  ulong local_58;
  undefined *puStack_50;
  undefined8 local_48;
  
  uVar7 = (ulong)(uint)(*(int *)((long)param_1 + 0xc) << 1);
  if (uVar7 <= param_3) {
    uVar7 = param_3;
  }
  if (0x7ffffffe < uVar7) {
    if (0x7ffffffe < param_3) {
      local_48 = 0;
      local_58 = 0;
      puStack_50 = PTR_DAT_047d1b38;
      FUN_01f9d9b0(0x4648a379,"../..\\Common/Base/Container/Array/hkArray.inl",0x90,
                   "Invalid requestedCapacity",&local_58);
    }
    uVar7 = 0x7ffffffe;
  }
  puVar5 = PTR_DAT_047d1a08;
  local_58 = uVar7 * 0x10;
  puVar6 = (undefined8 *)
           (**(code **)PTR_DAT_047d1a08)
                     (*(undefined1 *)(param_2 + 8),&local_58,*(undefined4 *)(param_2 + 0xc));
  uVar4 = *(uint *)(param_1 + 1);
  if (0 < (int)uVar4) {
    puVar8 = (undefined8 *)*param_1;
    puVar9 = puVar6;
    if (uVar4 != 1) {
      iVar10 = (uVar4 & 1) - uVar4;
      do {
        uVar3 = puVar8[1];
        iVar10 = iVar10 + 2;
        *puVar9 = *puVar8;
        puVar9[1] = uVar3;
        puVar1 = puVar8 + 2;
        uVar3 = puVar8[3];
        puVar8 = puVar8 + 4;
        puVar9[2] = *puVar1;
        puVar9[3] = uVar3;
        puVar9 = puVar9 + 4;
      } while (iVar10 != 0);
    }
    if ((uVar4 & 1) != 0) {
      uVar3 = puVar8[1];
      *puVar9 = *puVar8;
      puVar9[1] = uVar3;
    }
  }
  uVar2 = uVar7 * 0x10 + 0x10;
  uVar11 = uVar7;
  if (uVar2 <= local_58) {
    local_58 = local_58 - 0x10;
    uVar11 = uVar7 + 1 + (local_58 + uVar7 * -0x10 >> 4);
    if (local_58 < uVar2) {
      uVar11 = uVar7 + 1;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(puVar5 + 8))(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar11;
  *param_1 = puVar6;
  return;
}


