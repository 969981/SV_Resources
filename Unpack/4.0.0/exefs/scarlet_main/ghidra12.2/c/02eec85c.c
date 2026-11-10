/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02eec85c; name: FUN_02eec85c
 */


void FUN_02eec85c(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 *puVar6;
  ulong uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
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
  local_48 = uVar7 * 6;
  puVar6 = (undefined4 *)
           (**(code **)PTR_DAT_047d1a08)
                     (PTR_PTR_047d1a50[8],&local_48,*(undefined4 *)(PTR_PTR_047d1a50 + 0xc));
  uVar2 = *(uint *)(param_1 + 1);
  if (0 < (int)uVar2) {
    puVar8 = (undefined4 *)*param_1;
    puVar9 = puVar6;
    if (uVar2 != 1) {
      iVar10 = -(uVar2 & 0xfffffffe);
      do {
        uVar3 = *puVar8;
        iVar10 = iVar10 + 2;
        *(undefined2 *)(puVar9 + 1) = *(undefined2 *)(puVar8 + 1);
        *puVar9 = uVar3;
        uVar3 = *(undefined4 *)((long)puVar8 + 6);
        *(undefined2 *)((long)puVar9 + 10) = *(undefined2 *)((long)puVar8 + 10);
        *(undefined4 *)((long)puVar9 + 6) = uVar3;
        puVar9 = puVar9 + 3;
        puVar8 = puVar8 + 3;
      } while (iVar10 != 0);
    }
    if ((uVar2 & 1) != 0) {
      uVar3 = *puVar8;
      *(undefined2 *)(puVar9 + 1) = *(undefined2 *)(puVar8 + 1);
      *puVar9 = uVar3;
    }
  }
  uVar1 = uVar7 * 6 + 6;
  uVar11 = uVar7;
  if (uVar1 <= local_48) {
    local_48 = local_48 - 6;
    uVar11 = uVar7 + 1;
    if (uVar1 <= local_48) {
      uVar11 = uVar11 + (local_48 + uVar7 * -6) / 6;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(puVar4 + 8))(puVar5[8],*param_1,0);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar11;
  *param_1 = puVar6;
  return;
}


