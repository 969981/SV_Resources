/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03394d44; name: FUN_03394d44
 */


void FUN_03394d44(long *param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  ulong uVar10;
  ulong local_48;
  
  puVar4 = PTR_DAT_047d1a08;
  uVar6 = (ulong)(uint)(*(int *)((long)param_1 + 0xc) << 1);
  if (uVar6 <= param_3) {
    uVar6 = param_3;
  }
  if (0x7ffffffe < uVar6) {
    if (0x7ffffffe < param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_032270d0(0x4648a379,"../..\\Common/Base/Container/Array/hkArray.inl",0x90,
                   "Invalid requestedCapacity");
    }
    uVar6 = 0x7ffffffe;
  }
  local_48 = uVar6 * 8;
  puVar5 = (undefined8 *)
           (**(code **)PTR_DAT_047d1a08)
                     (*(undefined1 *)(param_2 + 8),&local_48,*(undefined4 *)(param_2 + 0xc));
  uVar3 = *(uint *)(param_1 + 1);
  if (0 < (int)uVar3) {
    puVar7 = (undefined8 *)*param_1;
    uVar2 = uVar3 & 3;
    puVar8 = puVar5;
    if (2 < uVar3 - 1) {
      iVar9 = -(uVar3 & 0xfffffffc);
      do {
        *puVar8 = *puVar7;
        puVar8[1] = puVar7[1];
        puVar8[2] = puVar7[2];
        puVar8[3] = puVar7[3];
        puVar8 = puVar8 + 4;
        puVar7 = puVar7 + 4;
        iVar9 = iVar9 + 4;
      } while (iVar9 != 0);
    }
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
  }
  uVar1 = uVar6 * 8 + 8;
  uVar10 = uVar6;
  if (uVar1 <= local_48) {
    local_48 = local_48 - 8;
    uVar10 = uVar6 + 1 + (local_48 + uVar6 * -8 >> 3);
    if (local_48 < uVar1) {
      uVar10 = uVar6 + 1;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(puVar4 + 8))(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar10;
  *param_1 = (long)puVar5;
  return;
}


