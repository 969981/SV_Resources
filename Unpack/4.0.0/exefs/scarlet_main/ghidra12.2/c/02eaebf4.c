/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02eaebf4; name: FUN_02eaebf4
 */


void FUN_02eaebf4(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  uint *puVar9;
  ulong uVar10;
  int iVar11;
  int iVar12;
  undefined *puVar13;
  undefined8 *puVar14;
  ulong local_68;
  
  puVar7 = PTR_PTR_047d1a50;
  puVar13 = PTR_DAT_047d1a08;
  uVar5 = (ulong)(uint)(*(int *)((long)param_1 + 0xc) << 1);
  if (uVar5 <= param_2) {
    uVar5 = param_2;
  }
  if (0x7ffffffe < uVar5) {
    if (0x7ffffffe < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_032270d0(0x4648a379,"../..\\Common/Base/Container/Array/hkArray.inl",0x90,
                   "Invalid requestedCapacity");
    }
    uVar5 = 0x7ffffffe;
  }
  local_68 = uVar5 * 0x18;
  puVar4 = (undefined8 *)
           (**(code **)PTR_DAT_047d1a08)
                     (PTR_PTR_047d1a50[8],&local_68,*(undefined4 *)(PTR_PTR_047d1a50 + 0xc));
  puVar3 = PTR_PTR_047d1a50;
  iVar11 = *(int *)(param_1 + 1);
  if (0 < iVar11) {
    puVar14 = (undefined8 *)*param_1;
    puVar6 = puVar4;
    puVar8 = puVar14;
    iVar12 = iVar11;
    do {
      FUN_02eaedd0(puVar8,puVar3);
      *puVar6 = *puVar8;
      *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(puVar8 + 1);
      *(undefined4 *)((long)puVar6 + 0xc) = *(undefined4 *)((long)puVar8 + 0xc);
      puVar1 = puVar8 + 2;
      *puVar8 = 0;
      puVar8[1] = 0;
      iVar12 = iVar12 + -1;
      puVar8 = puVar8 + 3;
      puVar6[2] = *puVar1;
      puVar7 = PTR_PTR_047d1a50;
      puVar13 = PTR_DAT_047d1a08;
      puVar6 = puVar6 + 3;
    } while (iVar12 != 0);
    puVar9 = (uint *)((long)puVar14 + 0xc);
    do {
      puVar9[-1] = 0;
      if ((-1 < (int)*puVar9) && (*(long *)(puVar9 + -3) != 0)) {
        (**(code **)(*(long *)puVar3 + 0x20))(puVar3,*(long *)(puVar9 + -3),(ulong)*puVar9 << 1);
      }
      puVar9[-3] = 0;
      puVar9[-2] = 0;
      iVar11 = iVar11 + -1;
      *puVar9 = 0x80000000;
      puVar9 = puVar9 + 6;
    } while (iVar11 != 0);
  }
  uVar2 = uVar5 * 0x18 + 0x18;
  uVar10 = uVar5;
  if (uVar2 <= local_68) {
    local_68 = local_68 - 0x18;
    uVar10 = uVar5 + 1;
    if (uVar2 <= local_68) {
      uVar10 = uVar10 + (local_68 + uVar5 * -0x18) / 0x18;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(puVar13 + 8))(puVar7[8],*param_1,0);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar10;
  *param_1 = puVar4;
  return;
}


