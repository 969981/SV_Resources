/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0155a1fc; name: FUN_0155a1fc
 */


void FUN_0155a1fc(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong local_58;
  undefined *puStack_50;
  undefined8 local_48;
  
  uVar8 = (ulong)(uint)(*(int *)((long)param_1 + 0xc) << 1);
  if (uVar8 <= param_2) {
    uVar8 = param_2;
  }
  if (0x7ffffffe < uVar8) {
    if (0x7ffffffe < param_2) {
      local_48 = 0;
      local_58 = 0;
      puStack_50 = PTR_DAT_047d1b38;
      FUN_01f9d9b0(0x4648a379,
                   "C:/projects/ppp/include/havok\\Common/Base/Container/Array/hkArray.inl",0x90,
                   "Invalid requestedCapacity",&local_58);
    }
    uVar8 = 0x7ffffffe;
  }
  puVar6 = PTR_PTR_047d1a50;
  puVar5 = PTR_DAT_047d1a08;
  local_58 = uVar8 * 0x18;
  puVar7 = (undefined8 *)
           (**(code **)PTR_DAT_047d1a08)
                     (PTR_PTR_047d1a50[8],&local_58,*(undefined4 *)(PTR_PTR_047d1a50 + 0xc));
  iVar3 = *(int *)(param_1 + 1);
  if (0 < iVar3) {
    puVar9 = (undefined8 *)*param_1;
    uVar10 = puVar9[2];
    uVar2 = puVar9[1];
    *puVar7 = *puVar9;
    puVar7[1] = uVar2;
    puVar7[2] = uVar10;
    puVar4 = puVar7;
    while (iVar3 = iVar3 + -1, iVar3 != 0) {
      uVar2 = puVar9[3];
      uVar10 = puVar9[5];
      puVar4[4] = puVar9[4];
      puVar4[5] = uVar10;
      puVar4[3] = uVar2;
      puVar9 = puVar9 + 3;
      puVar4 = puVar4 + 3;
    }
  }
  uVar1 = uVar8 * 0x18 + 0x18;
  uVar11 = uVar8;
  if (uVar1 <= local_58) {
    local_58 = local_58 - 0x18;
    uVar11 = uVar8 + 1;
    if (uVar1 <= local_58) {
      uVar11 = uVar11 + (local_58 + uVar8 * -0x18) / 0x18;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(puVar5 + 8))(puVar6[8],*param_1,0);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar11;
  *param_1 = puVar7;
  return;
}


