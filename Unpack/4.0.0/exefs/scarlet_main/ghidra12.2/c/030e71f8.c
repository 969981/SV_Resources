/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030e71f8; name: FUN_030e71f8
 */


void FUN_030e71f8(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  int iVar9;
  ulong uVar10;
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
  puVar5 = (undefined1 *)
           (**(code **)PTR_DAT_047d1a08)
                     (PTR_PTR_047d1a50[8],&local_48,*(undefined4 *)(PTR_PTR_047d1a50 + 0xc));
  uVar2 = *(uint *)(param_1 + 1);
  if (0 < (int)uVar2) {
    puVar7 = (undefined1 *)*param_1;
    puVar8 = puVar5;
    if (uVar2 != 1) {
      iVar9 = -(uVar2 & 0xfffffffe);
      do {
        *puVar8 = *puVar7;
        *(undefined4 *)(puVar8 + 4) = *(undefined4 *)(puVar7 + 4);
        *(undefined4 *)(puVar8 + 8) = *(undefined4 *)(puVar7 + 8);
        puVar8[0xc] = puVar7[0xc];
        *(undefined4 *)(puVar8 + 0x10) = *(undefined4 *)(puVar7 + 0x10);
        *(undefined4 *)(puVar8 + 0x14) = *(undefined4 *)(puVar7 + 0x14);
        puVar8 = puVar8 + 0x18;
        puVar7 = puVar7 + 0x18;
        iVar9 = iVar9 + 2;
      } while (iVar9 != 0);
    }
    if ((uVar2 & 1) != 0) {
      *puVar8 = *puVar7;
      *(undefined4 *)(puVar8 + 4) = *(undefined4 *)(puVar7 + 4);
      *(undefined4 *)(puVar8 + 8) = *(undefined4 *)(puVar7 + 8);
    }
  }
  uVar1 = uVar6 * 0xc + 0xc;
  uVar10 = uVar6;
  if (uVar1 <= local_48) {
    local_48 = local_48 - 0xc;
    uVar10 = uVar6 + 1;
    if (uVar1 <= local_48) {
      uVar10 = uVar10 + (local_48 + uVar6 * -0xc) / 0xc;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(puVar3 + 8))(puVar4[8],*param_1,0);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar10;
  *param_1 = puVar5;
  return;
}


