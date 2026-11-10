/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02fff6cc; name: FUN_02fff6cc
 */


void FUN_02fff6cc(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  uint *puVar9;
  ulong uVar10;
  int iVar11;
  undefined8 *puVar12;
  int iVar13;
  ulong local_68;
  
  puVar2 = PTR_PTR_047d1a50;
  uVar6 = (ulong)*(uint *)((long)param_1 + 0xc) & 0x7fffffff;
  uVar4 = uVar6 * 2;
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
  puVar3 = (undefined8 *)
           (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x10))(PTR_PTR_047d1a50,uVar4 * 0x10,&local_68);
  iVar11 = *(int *)(param_1 + 1);
  if (0 < iVar11) {
    puVar12 = (undefined8 *)*param_1;
    puVar5 = puVar3;
    puVar7 = puVar3;
    puVar8 = puVar12;
    iVar13 = iVar11;
    do {
      FUN_02fff87c(puVar5,puVar8);
      *puVar7 = *puVar8;
      *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(puVar8 + 1);
      puVar5 = (undefined8 *)(ulong)*(uint *)((long)puVar8 + 0xc);
      *(uint *)((long)puVar7 + 0xc) = *(uint *)((long)puVar8 + 0xc);
      iVar13 = iVar13 + -1;
      puVar7 = puVar7 + 2;
      *puVar8 = 0;
      puVar8[1] = 0;
      puVar8 = puVar8 + 2;
    } while (iVar13 != 0);
    puVar9 = (uint *)((long)puVar12 + 0xc);
    do {
      puVar9[-1] = 0;
      if ((-1 < (int)*puVar9) && (*(long *)(puVar9 + -3) != 0)) {
        (**(code **)(*(long *)puVar2 + 0x20))(puVar2,*(long *)(puVar9 + -3),(ulong)*puVar9 * 0x30);
      }
      puVar9[-3] = 0;
      puVar9[-2] = 0;
      iVar11 = iVar11 + -1;
      *puVar9 = 0x80000000;
      puVar9 = puVar9 + 4;
    } while (iVar11 != 0);
  }
  uVar1 = uVar4 * 0x10 + 0x10;
  uVar10 = uVar4;
  if (uVar1 <= local_68) {
    local_68 = local_68 - 0x10;
    uVar10 = uVar4 + 1 + (local_68 + uVar4 * -0x10 >> 4);
    if (local_68 < uVar1) {
      uVar10 = uVar4 + 1;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(*(long *)puVar2 + 0x20))(puVar2,*param_1,uVar6 << 4);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar10;
  *param_1 = puVar3;
  return;
}


