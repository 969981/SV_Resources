/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03330e28; name: FUN_03330e28
 */


void FUN_03330e28(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  int iVar11;
  ulong uVar12;
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
  local_48 = uVar7 * 0x18;
  puVar6 = (undefined8 *)
           (**(code **)PTR_DAT_047d1a08)
                     (PTR_PTR_047d1a50[8],&local_48,*(undefined4 *)(PTR_PTR_047d1a50 + 0xc));
  uVar3 = *(uint *)(param_1 + 1);
  if (0 < (int)uVar3) {
    puVar8 = (undefined8 *)*param_1;
    puVar10 = puVar6;
    if (uVar3 != 1) {
      iVar11 = -(uVar3 & 0xfffffffe);
      do {
        uVar2 = *puVar8;
        iVar11 = iVar11 + 2;
        uVar9 = puVar8[2];
        puVar10[1] = puVar8[1];
        puVar10[2] = uVar9;
        *puVar10 = uVar2;
        uVar2 = puVar8[3];
        uVar9 = puVar8[5];
        puVar10[4] = puVar8[4];
        puVar10[5] = uVar9;
        puVar10[3] = uVar2;
        puVar10 = puVar10 + 6;
        puVar8 = puVar8 + 6;
      } while (iVar11 != 0);
    }
    if ((uVar3 & 1) != 0) {
      uVar2 = *puVar8;
      uVar9 = puVar8[2];
      puVar10[1] = puVar8[1];
      puVar10[2] = uVar9;
      *puVar10 = uVar2;
    }
  }
  uVar1 = uVar7 * 0x18 + 0x18;
  uVar12 = uVar7;
  if (uVar1 <= local_48) {
    local_48 = local_48 - 0x18;
    uVar12 = uVar7 + 1;
    if (uVar1 <= local_48) {
      uVar12 = uVar12 + (local_48 + uVar7 * -0x18) / 0x18;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(puVar4 + 8))(puVar5[8],*param_1,0);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar12;
  *param_1 = puVar6;
  return;
}


