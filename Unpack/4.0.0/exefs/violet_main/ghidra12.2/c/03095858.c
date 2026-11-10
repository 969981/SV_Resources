/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03095858; name: FUN_03095858
 */


void FUN_03095858(undefined8 *param_1,ulong param_2)

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
  int iVar12;
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
           (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x10))(PTR_PTR_047d1a50,uVar4 * 0x38,&local_68);
  puVar2 = PTR_PTR_047d1a50;
  iVar10 = *(int *)(param_1 + 1);
  if (0 < iVar10) {
    puVar9 = (undefined4 *)*param_1;
    puVar7 = puVar3;
    puVar11 = puVar9;
    iVar12 = iVar10;
    do {
      *puVar7 = *puVar11;
      FUN_03094dcc(puVar11 + 2,puVar2);
      *(undefined8 *)(puVar7 + 2) = *(undefined8 *)(puVar11 + 2);
      puVar7[4] = puVar11[4];
      puVar7[5] = puVar11[5];
      *(undefined8 *)(puVar11 + 2) = 0;
      *(undefined8 *)(puVar11 + 4) = 0;
      FUN_01339774(puVar11 + 6,puVar2);
      *(undefined8 *)(puVar7 + 6) = *(undefined8 *)(puVar11 + 6);
      puVar7[8] = puVar11[8];
      puVar7[9] = puVar11[9];
      *(undefined8 *)(puVar11 + 6) = 0;
      *(undefined8 *)(puVar11 + 8) = 0;
      FUN_03094e44(puVar11 + 10,puVar2);
      *(undefined8 *)(puVar7 + 10) = *(undefined8 *)(puVar11 + 10);
      puVar7[0xc] = puVar11[0xc];
      puVar7[0xd] = puVar11[0xd];
      iVar12 = iVar12 + -1;
      *(undefined8 *)(puVar11 + 10) = 0;
      *(undefined8 *)(puVar11 + 0xc) = 0;
      plVar5 = (long *)PTR_PTR_047d1a50;
      puVar11 = puVar11 + 0xe;
      puVar7 = puVar7 + 0xe;
    } while (iVar12 != 0);
    puVar9 = puVar9 + 8;
    do {
      puVar9[4] = 0;
      if ((-1 < (int)puVar9[5]) && (*(long *)(puVar9 + 2) != 0)) {
        (**(code **)(*(long *)puVar2 + 0x20))
                  (puVar2,*(long *)(puVar9 + 2),(ulong)(uint)puVar9[5] << 2);
      }
      *(undefined8 *)(puVar9 + 2) = 0;
      puVar9[5] = 0x80000000;
      *puVar9 = 0;
      if ((-1 < (int)puVar9[1]) && (*(long *)(puVar9 + -2) != 0)) {
        (**(code **)(*(long *)puVar2 + 0x20))
                  (puVar2,*(long *)(puVar9 + -2),(ulong)(uint)puVar9[1] << 2);
      }
      *(undefined8 *)(puVar9 + -2) = 0;
      puVar9[1] = 0x80000000;
      puVar9[-4] = 0;
      if ((-1 < (int)puVar9[-3]) && (*(long *)(puVar9 + -6) != 0)) {
        (**(code **)(*(long *)puVar2 + 0x20))
                  (puVar2,*(long *)(puVar9 + -6),(ulong)(uint)puVar9[-3] * 0x14);
      }
      *(undefined8 *)(puVar9 + -6) = 0;
      iVar10 = iVar10 + -1;
      puVar9[-3] = 0x80000000;
      puVar9 = puVar9 + 0xe;
    } while (iVar10 != 0);
  }
  uVar1 = uVar4 * 0x38 + 0x38;
  uVar8 = uVar4;
  if (uVar1 <= local_68) {
    local_68 = local_68 - 0x38;
    uVar8 = uVar4 + 1;
    if (uVar1 <= local_68) {
      uVar8 = (local_68 + uVar4 * -0x38) / 0x38 + uVar8;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(*plVar5 + 0x20))(plVar5,*param_1,uVar6 * 0x38);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar8;
  *param_1 = puVar3;
  return;
}


