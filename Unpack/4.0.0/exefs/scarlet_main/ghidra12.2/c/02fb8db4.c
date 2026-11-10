/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02fb8db4; name: FUN_02fb8db4
 */


void FUN_02fb8db4(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  int iVar10;
  ulong uVar11;
  ulong local_48;
  
  puVar4 = PTR_PTR_047d1a50;
  puVar3 = PTR_DAT_047d1a08;
  uVar6 = (ulong)(uint)(*(int *)((long)param_1 + 0xc) << 1);
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
  local_48 = uVar6 * 0xc;
  puVar5 = (undefined8 *)
           (**(code **)PTR_DAT_047d1a08)
                     (PTR_PTR_047d1a50[8],&local_48,*(undefined4 *)(PTR_PTR_047d1a50 + 0xc));
  uVar2 = *(uint *)(param_1 + 1);
  if (0 < (int)uVar2) {
    puVar8 = (undefined8 *)*param_1;
    puVar9 = puVar5;
    if (uVar2 != 1) {
      iVar10 = -(uVar2 & 0xfffffffe);
      do {
        uVar7 = *puVar8;
        iVar10 = iVar10 + 2;
        *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(puVar8 + 1);
        *puVar9 = uVar7;
        uVar7 = *(undefined8 *)((long)puVar8 + 0xc);
        *(undefined4 *)((long)puVar9 + 0x14) = *(undefined4 *)((long)puVar8 + 0x14);
        *(undefined8 *)((long)puVar9 + 0xc) = uVar7;
        puVar9 = puVar9 + 3;
        puVar8 = puVar8 + 3;
      } while (iVar10 != 0);
    }
    if ((uVar2 & 1) != 0) {
      uVar7 = *puVar8;
      *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(puVar8 + 1);
      *puVar9 = uVar7;
    }
  }
  uVar1 = uVar6 * 0xc + 0xc;
  uVar11 = uVar6;
  if (uVar1 <= local_48) {
    local_48 = local_48 - 0xc;
    uVar11 = uVar6 + 1;
    if (uVar1 <= local_48) {
      uVar11 = uVar11 + (local_48 + uVar6 * -0xc) / 0xc;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(puVar3 + 8))(puVar4[8],*param_1,0);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar11;
  *param_1 = puVar5;
  return;
}


