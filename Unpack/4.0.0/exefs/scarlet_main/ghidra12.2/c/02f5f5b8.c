/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f5f5b8; name: FUN_02f5f5b8
 */


void FUN_02f5f5b8(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  int iVar13;
  ulong uVar14;
  ulong local_48;
  
  puVar8 = PTR_PTR_047d1a50;
  puVar7 = PTR_DAT_047d1a08;
  uVar10 = (ulong)(uint)(*(int *)((long)param_1 + 0xc) << 1);
  if (uVar10 <= param_2) {
    uVar10 = param_2;
  }
  if (0x7ffffffe < uVar10) {
    if (0x7ffffffe < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_032270d0(0x4648a379,"../..\\Common/Base/Container/Array/hkArray.inl",0x90,
                   "Invalid requestedCapacity");
    }
    uVar10 = 0x7ffffffe;
  }
  local_48 = uVar10 * 0x20;
  puVar9 = (undefined8 *)
           (**(code **)PTR_DAT_047d1a08)
                     (PTR_PTR_047d1a50[8],&local_48,*(undefined4 *)(PTR_PTR_047d1a50 + 0xc));
  uVar6 = *(uint *)(param_1 + 1);
  if (0 < (int)uVar6) {
    puVar11 = (undefined8 *)*param_1;
    puVar12 = puVar9;
    if (uVar6 != 1) {
      iVar13 = -(uVar6 & 0xfffffffe);
      do {
        uVar3 = *puVar11;
        uVar4 = puVar11[1];
        iVar13 = iVar13 + 2;
        uVar5 = puVar11[3];
        puVar12[2] = puVar11[2];
        puVar12[3] = uVar5;
        *puVar12 = uVar3;
        puVar12[1] = uVar4;
        uVar3 = puVar11[4];
        uVar4 = puVar11[5];
        puVar1 = puVar11 + 6;
        uVar5 = puVar11[7];
        puVar11 = puVar11 + 8;
        puVar12[6] = *puVar1;
        puVar12[7] = uVar5;
        puVar12[4] = uVar3;
        puVar12[5] = uVar4;
        puVar12 = puVar12 + 8;
      } while (iVar13 != 0);
    }
    if ((uVar6 & 1) != 0) {
      uVar3 = *puVar11;
      uVar4 = puVar11[1];
      uVar5 = puVar11[3];
      puVar12[2] = puVar11[2];
      puVar12[3] = uVar5;
      *puVar12 = uVar3;
      puVar12[1] = uVar4;
    }
  }
  uVar2 = uVar10 * 0x20 + 0x20;
  uVar14 = uVar10;
  if (uVar2 <= local_48) {
    local_48 = local_48 - 0x20;
    uVar14 = uVar10 + 1 + (local_48 + uVar10 * -0x20 >> 5);
    if (local_48 < uVar2) {
      uVar14 = uVar10 + 1;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(puVar7 + 8))(puVar8[8],*param_1,0);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar14;
  *param_1 = puVar9;
  return;
}


