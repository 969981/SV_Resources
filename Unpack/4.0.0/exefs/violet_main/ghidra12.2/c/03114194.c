/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03114194; name: FUN_03114194
 */


void FUN_03114194(long *param_1,ulong param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  int iVar13;
  ulong uVar14;
  ulong local_48;
  
  puVar7 = PTR_PTR_047d1a50;
  puVar6 = PTR_DAT_047d1a08;
  uVar9 = (ulong)(uint)(*(int *)((long)param_1 + 0xc) << 1);
  if (uVar9 <= param_2) {
    uVar9 = param_2;
  }
  if (0x7ffffffe < uVar9) {
    if (0x7ffffffe < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_032270d0(0x4648a379,"../..\\Common/Base/Container/Array/hkArray.inl",0x90,
                   "Invalid requestedCapacity");
    }
    uVar9 = 0x7ffffffe;
  }
  local_48 = uVar9 * 0x20;
  puVar8 = (undefined8 *)
           (**(code **)PTR_DAT_047d1a08)
                     (PTR_PTR_047d1a50[8],&local_48,*(undefined4 *)(PTR_PTR_047d1a50 + 0xc));
  uVar5 = *(uint *)(param_1 + 1);
  if (0 < (int)uVar5) {
    puVar10 = (undefined8 *)*param_1;
    puVar12 = puVar8;
    if (uVar5 != 1) {
      iVar13 = -(uVar5 & 0xfffffffe);
      do {
        uVar11 = puVar10[3];
        iVar13 = iVar13 + 2;
        puVar12[1] = puVar10[1];
        puVar12[3] = uVar11;
        uVar11 = *puVar10;
        puVar12[2] = puVar10[2];
        *puVar12 = uVar11;
        uVar11 = puVar10[4];
        uVar3 = puVar10[5];
        puVar1 = puVar10 + 6;
        uVar4 = puVar10[7];
        puVar10 = puVar10 + 8;
        puVar12[6] = *puVar1;
        puVar12[7] = uVar4;
        puVar12[4] = uVar11;
        puVar12[5] = uVar3;
        puVar12 = puVar12 + 8;
      } while (iVar13 != 0);
    }
    if ((uVar5 & 1) != 0) {
      uVar11 = puVar10[3];
      puVar12[1] = puVar10[1];
      puVar12[3] = uVar11;
      uVar11 = *puVar10;
      puVar12[2] = puVar10[2];
      *puVar12 = uVar11;
    }
  }
  uVar2 = uVar9 * 0x20 + 0x20;
  uVar14 = uVar9;
  if (uVar2 <= local_48) {
    local_48 = local_48 - 0x20;
    uVar14 = uVar9 + 1 + (local_48 + uVar9 * -0x20 >> 5);
    if (local_48 < uVar2) {
      uVar14 = uVar9 + 1;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(puVar6 + 8))(puVar7[8],*param_1,0);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar14;
  *param_1 = (long)puVar8;
  return;
}


