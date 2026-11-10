/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f5fd10; name: FUN_02f5fd10
 */


void FUN_02f5fd10(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  int iVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  uint *puVar10;
  ulong uVar11;
  long *plVar12;
  int iVar13;
  undefined8 *puVar14;
  ulong local_68;
  
  plVar12 = (long *)PTR_PTR_047d1a50;
  uVar7 = (ulong)*(uint *)((long)param_1 + 0xc) & 0x7fffffff;
  uVar5 = uVar7 * 2;
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
           (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x10))(PTR_PTR_047d1a50,uVar5 * 0x20,&local_68);
  puVar3 = PTR_PTR_047d1a50;
  iVar6 = *(int *)(param_1 + 1);
  if (0 < iVar6) {
    puVar14 = (undefined8 *)*param_1;
    puVar8 = puVar4;
    puVar9 = puVar14;
    iVar13 = iVar6;
    do {
      FUN_02ed67fc(puVar9,puVar3);
      *puVar8 = *puVar9;
      *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar9 + 1);
      *(undefined4 *)((long)puVar8 + 0xc) = *(undefined4 *)((long)puVar9 + 0xc);
      puVar1 = puVar9 + 2;
      *puVar9 = 0;
      puVar9[1] = 0;
      iVar13 = iVar13 + -1;
      puVar9 = puVar9 + 4;
      *(undefined4 *)(puVar8 + 2) = *(undefined4 *)puVar1;
      plVar12 = (long *)PTR_PTR_047d1a50;
      puVar8 = puVar8 + 4;
    } while (iVar13 != 0);
    puVar10 = (uint *)((long)puVar14 + 0xc);
    do {
      puVar10[-1] = 0;
      if ((-1 < (int)*puVar10) && (*(long *)(puVar10 + -3) != 0)) {
        (**(code **)(*(long *)puVar3 + 0x20))(puVar3,*(long *)(puVar10 + -3),(ulong)*puVar10 << 2);
      }
      puVar10[-3] = 0;
      puVar10[-2] = 0;
      iVar6 = iVar6 + -1;
      *puVar10 = 0x80000000;
      puVar10 = puVar10 + 8;
    } while (iVar6 != 0);
  }
  uVar2 = uVar5 * 0x20 + 0x20;
  uVar11 = uVar5;
  if (uVar2 <= local_68) {
    local_68 = local_68 - 0x20;
    uVar11 = uVar5 + 1 + (local_68 + uVar5 * -0x20 >> 5);
    if (local_68 < uVar2) {
      uVar11 = uVar5 + 1;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(*plVar12 + 0x20))(plVar12,*param_1,uVar7 << 5);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar11;
  *param_1 = puVar4;
  return;
}


