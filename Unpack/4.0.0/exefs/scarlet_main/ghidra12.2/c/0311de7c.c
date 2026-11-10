/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0311de7c; name: FUN_0311de7c
 */


void FUN_0311de7c(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  int iVar11;
  undefined8 *puVar12;
  uint *puVar13;
  int iVar14;
  ulong local_68;
  
  plVar6 = (long *)PTR_PTR_047d1a50;
  uVar7 = (ulong)*(uint *)((long)param_1 + 0xc) & 0x7fffffff;
  uVar4 = uVar7 * 2;
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
           (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x10))(PTR_PTR_047d1a50,uVar4 * 0x20,&local_68);
  puVar2 = PTR_PTR_047d1a50;
  iVar11 = *(int *)(param_1 + 1);
  if (0 < iVar11) {
    puVar10 = (undefined8 *)*param_1;
    puVar8 = puVar3;
    puVar12 = puVar10;
    iVar14 = iVar11;
    do {
      uVar5 = *puVar12;
      *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar12 + 1);
      *puVar8 = uVar5;
      FUN_0309d15c(puVar12 + 2,puVar2);
      puVar8[2] = puVar12[2];
      *(undefined4 *)(puVar8 + 3) = *(undefined4 *)(puVar12 + 3);
      *(undefined4 *)((long)puVar8 + 0x1c) = *(undefined4 *)((long)puVar12 + 0x1c);
      iVar14 = iVar14 + -1;
      puVar12[2] = 0;
      puVar12[3] = 0;
      plVar6 = (long *)PTR_PTR_047d1a50;
      puVar8 = puVar8 + 4;
      puVar12 = puVar12 + 4;
    } while (iVar14 != 0);
    puVar13 = (uint *)((long)puVar10 + 0x1c);
    do {
      puVar13[-1] = 0;
      if ((-1 < (int)*puVar13) && (*(long *)(puVar13 + -3) != 0)) {
        (**(code **)(*(long *)puVar2 + 0x20))(puVar2,*(long *)(puVar13 + -3),(ulong)*puVar13 << 2);
      }
      puVar13[-3] = 0;
      puVar13[-2] = 0;
      iVar11 = iVar11 + -1;
      *puVar13 = 0x80000000;
      puVar13 = puVar13 + 8;
    } while (iVar11 != 0);
  }
  uVar1 = uVar4 * 0x20 + 0x20;
  uVar9 = uVar4;
  if (uVar1 <= local_68) {
    local_68 = local_68 - 0x20;
    uVar9 = uVar4 + 1 + (local_68 + uVar4 * -0x20 >> 5);
    if (local_68 < uVar1) {
      uVar9 = uVar4 + 1;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(*plVar6 + 0x20))(plVar6,*param_1,uVar7 << 5);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar9;
  *param_1 = puVar3;
  return;
}


