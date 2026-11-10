/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0309f444; name: FUN_0309f444
 */


void FUN_0309f444(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  uint *puVar8;
  ulong uVar9;
  int iVar10;
  undefined8 *puVar11;
  int iVar12;
  ulong local_68;
  
  puVar2 = PTR_PTR_047d1a50;
  puVar6 = PTR_DAT_047d1a08;
  uVar4 = (ulong)(uint)(*(int *)((long)param_1 + 0xc) << 1);
  if (uVar4 <= param_2) {
    uVar4 = param_2;
  }
  if (0x7ffffffe < uVar4) {
    if (0x7ffffffe < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_032270d0(0x4648a379,"../..\\Common/Base/Container/Array/hkArray.inl",0x90,
                   "Invalid requestedCapacity");
    }
    uVar4 = 0x7ffffffe;
  }
  local_68 = uVar4 * 0x10;
  puVar3 = (undefined8 *)
           (**(code **)PTR_DAT_047d1a08)
                     (PTR_PTR_047d1a50[0x28],&local_68,*(undefined4 *)(PTR_PTR_047d1a50 + 0x2c));
  iVar10 = *(int *)(param_1 + 1);
  if (0 < iVar10) {
    puVar11 = (undefined8 *)*param_1;
    puVar5 = puVar3;
    puVar7 = puVar11;
    iVar12 = iVar10;
    do {
      FUN_0309f5ec(puVar7);
      *puVar5 = *puVar7;
      *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(puVar7 + 1);
      *(undefined4 *)((long)puVar5 + 0xc) = *(undefined4 *)((long)puVar7 + 0xc);
      iVar12 = iVar12 + -1;
      puVar5 = puVar5 + 2;
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar6 = PTR_DAT_047d1a08;
      puVar7 = puVar7 + 2;
    } while (iVar12 != 0);
    puVar8 = (uint *)((long)puVar11 + 0xc);
    do {
      puVar8[-1] = 0;
      if ((-1 < (int)*puVar8) && (*(long *)(puVar8 + -3) != 0)) {
        (**(code **)(*(long *)puVar2 + 0x20))(puVar2,*(long *)(puVar8 + -3),(ulong)*puVar8 << 3);
      }
      puVar8[-3] = 0;
      puVar8[-2] = 0;
      iVar10 = iVar10 + -1;
      *puVar8 = 0x80000000;
      puVar8 = puVar8 + 4;
    } while (iVar10 != 0);
  }
  uVar1 = uVar4 * 0x10 + 0x10;
  uVar9 = uVar4;
  if (uVar1 <= local_68) {
    local_68 = local_68 - 0x10;
    uVar9 = uVar4 + 1 + (local_68 + uVar4 * -0x10 >> 4);
    if (local_68 < uVar1) {
      uVar9 = uVar4 + 1;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(puVar6 + 8))(puVar2[0x28],*param_1,0);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar9;
  *param_1 = puVar3;
  return;
}


