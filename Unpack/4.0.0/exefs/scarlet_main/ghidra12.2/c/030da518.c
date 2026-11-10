/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030da518; name: FUN_030da518
 */


void FUN_030da518(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  uint *puVar9;
  ulong uVar10;
  int iVar11;
  int iVar12;
  undefined8 *puVar13;
  ulong local_68;
  
  puVar2 = PTR_PTR_047d1a50;
  uVar6 = (ulong)*(uint *)((long)param_1 + 0xc) & 0x7fffffff;
  uVar5 = uVar6 * 2;
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
  puVar4 = (undefined8 *)
           (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x10))
                     (PTR_PTR_047d1a50 + 0x20,uVar5 * 0x10,&local_68);
  puVar3 = PTR_PTR_047d1a50;
  iVar11 = *(int *)(param_1 + 1);
  if (0 < iVar11) {
    puVar13 = (undefined8 *)*param_1;
    puVar7 = puVar4;
    puVar8 = puVar13;
    iVar12 = iVar11;
    do {
      FUN_030da6d0(puVar8,puVar3);
      *puVar7 = *puVar8;
      *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(puVar8 + 1);
      *(undefined4 *)((long)puVar7 + 0xc) = *(undefined4 *)((long)puVar8 + 0xc);
      iVar12 = iVar12 + -1;
      puVar7 = puVar7 + 2;
      *puVar8 = 0;
      puVar8[1] = 0;
      puVar8 = puVar8 + 2;
    } while (iVar12 != 0);
    puVar9 = (uint *)((long)puVar13 + 0xc);
    do {
      puVar9[-1] = 0;
      if ((-1 < (int)*puVar9) && (*(long *)(puVar9 + -3) != 0)) {
        (**(code **)(*(long *)puVar3 + 0x20))(puVar3,*(long *)(puVar9 + -3),(ulong)*puVar9 << 2);
      }
      puVar9[-3] = 0;
      puVar9[-2] = 0;
      iVar11 = iVar11 + -1;
      *puVar9 = 0x80000000;
      puVar9 = puVar9 + 4;
    } while (iVar11 != 0);
  }
  uVar1 = uVar5 * 0x10 + 0x10;
  uVar10 = uVar5;
  if (uVar1 <= local_68) {
    local_68 = local_68 - 0x10;
    uVar10 = uVar5 + 1 + (local_68 + uVar5 * -0x10 >> 4);
    if (local_68 < uVar1) {
      uVar10 = uVar5 + 1;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(*(long *)(puVar2 + 0x20) + 0x20))(puVar2 + 0x20,*param_1,uVar6 << 4);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar10;
  *param_1 = puVar4;
  return;
}


