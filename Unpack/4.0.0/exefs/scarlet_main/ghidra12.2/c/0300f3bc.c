/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0300f3bc; name: FUN_0300f3bc
 */


void FUN_0300f3bc(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  undefined4 *puVar7;
  ulong uVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 *puVar11;
  uint *puVar12;
  int iVar13;
  ulong local_68;
  
  plVar5 = (long *)PTR_PTR_047d1a50;
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
  puVar3 = (undefined4 *)
           (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x10))(PTR_PTR_047d1a50,uVar4 * 0x18,&local_68);
  puVar2 = PTR_PTR_047d1a50;
  iVar10 = *(int *)(param_1 + 1);
  if (0 < iVar10) {
    puVar9 = (undefined4 *)*param_1;
    puVar7 = puVar3;
    puVar11 = puVar9;
    iVar13 = iVar10;
    do {
      *puVar7 = *puVar11;
      FUN_01339774(puVar11 + 2,puVar2);
      *(undefined8 *)(puVar7 + 2) = *(undefined8 *)(puVar11 + 2);
      puVar7[4] = puVar11[4];
      puVar7[5] = puVar11[5];
      iVar13 = iVar13 + -1;
      *(undefined8 *)(puVar11 + 2) = 0;
      *(undefined8 *)(puVar11 + 4) = 0;
      plVar5 = (long *)PTR_PTR_047d1a50;
      puVar11 = puVar11 + 6;
      puVar7 = puVar7 + 6;
    } while (iVar13 != 0);
    puVar12 = puVar9 + 5;
    do {
      puVar12[-1] = 0;
      if ((-1 < (int)*puVar12) && (*(long *)(puVar12 + -3) != 0)) {
        (**(code **)(*(long *)puVar2 + 0x20))(puVar2,*(long *)(puVar12 + -3),(ulong)*puVar12 << 2);
      }
      puVar12[-3] = 0;
      puVar12[-2] = 0;
      iVar10 = iVar10 + -1;
      *puVar12 = 0x80000000;
      puVar12 = puVar12 + 6;
    } while (iVar10 != 0);
  }
  uVar1 = uVar4 * 0x18 + 0x18;
  uVar8 = uVar4;
  if (uVar1 <= local_68) {
    local_68 = local_68 - 0x18;
    uVar8 = uVar4 + 1;
    if (uVar1 <= local_68) {
      uVar8 = uVar8 + (local_68 + uVar4 * -0x18) / 0x18;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(*plVar5 + 0x20))(plVar5,*param_1,uVar6 * 0x18);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar8;
  *param_1 = puVar3;
  return;
}


