/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030e99c4; name: FUN_030e99c4
 */


void FUN_030e99c4(undefined8 *param_1,ulong param_2)

{
  undefined4 *puVar1;
  ulong uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined4 *puVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  undefined4 *puVar9;
  ulong uVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined4 *puVar13;
  uint *puVar14;
  int iVar15;
  ulong local_68;
  
  plVar7 = (long *)PTR_PTR_047d1a50;
  uVar8 = (ulong)*(uint *)((long)param_1 + 0xc) & 0x7fffffff;
  uVar6 = uVar8 * 2;
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
  puVar5 = (undefined4 *)
           (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x10))(PTR_PTR_047d1a50,uVar6 * 0x28,&local_68);
  puVar4 = PTR_PTR_047d1a50;
  iVar12 = *(int *)(param_1 + 1);
  if (0 < iVar12) {
    puVar11 = (undefined4 *)*param_1;
    puVar9 = puVar5;
    puVar13 = puVar11;
    iVar15 = iVar12;
    do {
      *puVar9 = *puVar13;
      uVar3 = puVar13[2];
      *(undefined2 *)(puVar9 + 3) = *(undefined2 *)(puVar13 + 3);
      puVar9[2] = uVar3;
      FUN_02ed67fc(puVar13 + 4,puVar4);
      *(undefined8 *)(puVar9 + 4) = *(undefined8 *)(puVar13 + 4);
      puVar9[6] = puVar13[6];
      puVar9[7] = puVar13[7];
      puVar1 = puVar13 + 8;
      *(undefined8 *)(puVar13 + 4) = 0;
      *(undefined8 *)(puVar13 + 6) = 0;
      iVar15 = iVar15 + -1;
      puVar13 = puVar13 + 10;
      puVar9[8] = *puVar1;
      plVar7 = (long *)PTR_PTR_047d1a50;
      puVar9 = puVar9 + 10;
    } while (iVar15 != 0);
    puVar14 = puVar11 + 7;
    do {
      puVar14[-1] = 0;
      if ((-1 < (int)*puVar14) && (*(long *)(puVar14 + -3) != 0)) {
        (**(code **)(*(long *)puVar4 + 0x20))(puVar4,*(long *)(puVar14 + -3),(ulong)*puVar14 << 2);
      }
      puVar14[-3] = 0;
      puVar14[-2] = 0;
      iVar12 = iVar12 + -1;
      *puVar14 = 0x80000000;
      puVar14 = puVar14 + 10;
    } while (iVar12 != 0);
  }
  uVar2 = uVar6 * 0x28 + 0x28;
  uVar10 = uVar6;
  if (uVar2 <= local_68) {
    local_68 = local_68 - 0x28;
    uVar10 = uVar6 + 1;
    if (uVar2 <= local_68) {
      uVar10 = uVar10 + (local_68 + uVar6 * -0x28) / 0x28;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(*plVar7 + 0x20))(plVar7,*param_1,uVar8 * 0x28);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar10;
  *param_1 = puVar5;
  return;
}


