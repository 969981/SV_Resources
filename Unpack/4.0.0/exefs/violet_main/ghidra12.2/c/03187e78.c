/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03187e78; name: FUN_03187e78
 */


void FUN_03187e78(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  ulong uVar14;
  int iVar15;
  int iVar16;
  ulong local_68;
  
  plVar10 = (long *)PTR_PTR_047d1a50;
  uVar14 = (ulong)*(uint *)((long)param_1 + 0xc) & 0x7fffffff;
  uVar8 = uVar14 * 2;
  if (uVar8 <= param_2) {
    uVar8 = param_2;
  }
  if (0x7ffffffe < uVar8) {
    if (0x7ffffffe < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_032270d0(0x4648a379,"../..\\Common/Base/Container/Array/hkArray.inl",0x90,
                   "Invalid requestedCapacity");
    }
    uVar8 = 0x7ffffffe;
  }
  puVar7 = (undefined8 *)
           (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x10))(PTR_PTR_047d1a50,uVar8 * 0x70,&local_68);
  iVar15 = *(int *)(param_1 + 1);
  if (0 < iVar15) {
    puVar11 = (undefined8 *)*param_1;
    puVar9 = puVar7;
    puVar12 = puVar11;
    iVar16 = iVar15;
    do {
      FUN_031880a8(puVar12);
      *puVar9 = *puVar12;
      *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(puVar12 + 1);
      *(undefined4 *)((long)puVar9 + 0xc) = *(undefined4 *)((long)puVar12 + 0xc);
      *puVar12 = 0;
      puVar12[1] = 0;
      FUN_03188118(puVar12 + 2);
      puVar9[2] = puVar12[2];
      *(undefined4 *)(puVar9 + 3) = *(undefined4 *)(puVar12 + 3);
      *(undefined4 *)((long)puVar9 + 0x1c) = *(undefined4 *)((long)puVar12 + 0x1c);
      puVar12[2] = 0;
      puVar12[3] = 0;
      FUN_03188188(puVar12 + 4);
      puVar9[4] = puVar12[4];
      *(undefined4 *)(puVar9 + 5) = *(undefined4 *)(puVar12 + 5);
      *(undefined4 *)((long)puVar9 + 0x2c) = *(undefined4 *)((long)puVar12 + 0x2c);
      uVar6 = *(undefined4 *)(puVar12 + 6);
      puVar12[4] = 0;
      puVar12[5] = 0;
      *(undefined1 *)((long)puVar9 + 0x34) = *(undefined1 *)((long)puVar12 + 0x34);
      *(undefined4 *)(puVar9 + 6) = uVar6;
      FUN_0318823c(puVar12 + 7);
      puVar9[7] = puVar12[7];
      *(undefined4 *)(puVar9 + 8) = *(undefined4 *)(puVar12 + 8);
      *(undefined4 *)((long)puVar9 + 0x44) = *(undefined4 *)((long)puVar12 + 0x44);
      uVar3 = puVar12[10];
      uVar4 = puVar12[0xb];
      iVar16 = iVar16 + -1;
      puVar1 = puVar12 + 0xc;
      uVar5 = puVar12[0xd];
      puVar12[7] = 0;
      puVar12[8] = 0;
      puVar12 = puVar12 + 0xe;
      puVar9[0xc] = *puVar1;
      puVar9[0xd] = uVar5;
      puVar9[10] = uVar3;
      puVar9[0xb] = uVar4;
      plVar10 = (long *)PTR_PTR_047d1a50;
      puVar9 = puVar9 + 0xe;
    } while (iVar16 != 0);
    do {
      FUN_031839ac(puVar11);
      puVar11 = puVar11 + 0xe;
      iVar15 = iVar15 + -1;
    } while (iVar15 != 0);
  }
  uVar2 = uVar8 * 0x70 + 0x70;
  uVar13 = uVar8;
  if (uVar2 <= local_68) {
    local_68 = local_68 - 0x70;
    uVar13 = uVar8 + 1;
    if (uVar2 <= local_68) {
      uVar13 = (local_68 + uVar8 * -0x70) / 0x70 + uVar13;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(*plVar10 + 0x20))(plVar10,*param_1,uVar14 * 0x70);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar13;
  *param_1 = puVar7;
  return;
}


