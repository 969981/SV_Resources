/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02e7ff18; name: FUN_02e7ff18
 */


void FUN_02e7ff18(undefined8 *param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  ulong uVar9;
  ulong local_48;
  
  puVar3 = PTR_DAT_047d1a08;
  uVar5 = (ulong)(uint)(*(int *)((long)param_1 + 0xc) << 1);
  if (uVar5 <= param_3) {
    uVar5 = param_3;
  }
  if (0x7ffffffe < uVar5) {
    if (0x7ffffffe < param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_032270d0(0x4648a379,"../..\\Common/Base/Container/Array/hkArray.inl",0x90,
                   "Invalid requestedCapacity");
    }
    uVar5 = 0x7ffffffe;
  }
  local_48 = uVar5 * 0x10;
  puVar4 = (undefined8 *)
           (**(code **)PTR_DAT_047d1a08)
                     (*(undefined1 *)(param_2 + 8),&local_48,*(undefined4 *)(param_2 + 0xc));
  uVar2 = *(uint *)(param_1 + 1);
  if (0 < (int)uVar2) {
    puVar6 = (undefined8 *)*param_1;
    puVar7 = puVar4;
    if (uVar2 != 1) {
      iVar8 = -(uVar2 & 0xfffffffe);
      do {
        puVar7[1] = puVar6[1];
        *puVar7 = *puVar6;
        puVar7[3] = puVar6[3];
        puVar7[2] = puVar6[2];
        puVar7 = puVar7 + 4;
        puVar6 = puVar6 + 4;
        iVar8 = iVar8 + 2;
      } while (iVar8 != 0);
    }
    if ((uVar2 & 1) != 0) {
      puVar7[1] = puVar6[1];
      *puVar7 = *puVar6;
    }
  }
  uVar1 = uVar5 * 0x10 + 0x10;
  uVar9 = uVar5;
  if (uVar1 <= local_48) {
    local_48 = local_48 - 0x10;
    uVar9 = uVar5 + 1 + (local_48 + uVar5 * -0x10 >> 4);
    if (local_48 < uVar1) {
      uVar9 = uVar5 + 1;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(puVar3 + 8))(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar9;
  *param_1 = puVar4;
  return;
}


