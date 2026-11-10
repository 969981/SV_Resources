/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03125d08; name: FUN_03125d08
 */


void FUN_03125d08(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  uint *puVar11;
  ulong uVar12;
  int iVar13;
  int iVar14;
  ulong local_68;
  
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
  puVar4 = (undefined8 *)
           (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x10))(PTR_PTR_047d1a50,uVar6 * 0x20,&local_68);
  puVar3 = PTR_PTR_047d1a50;
  iVar14 = *(int *)(param_1 + 1);
  if (0 < iVar14) {
    puVar7 = (undefined8 *)*param_1;
    puVar9 = puVar4;
    puVar10 = puVar7;
    iVar13 = iVar14;
    do {
      FUN_030da6d0(puVar10,puVar3);
      *puVar9 = *puVar10;
      *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(puVar10 + 1);
      *(undefined4 *)((long)puVar9 + 0xc) = *(undefined4 *)((long)puVar10 + 0xc);
      *puVar10 = 0;
      puVar10[1] = 0;
      puVar9[2] = puVar10[2];
      iVar13 = iVar13 + -1;
      *(undefined4 *)(puVar9 + 3) = *(undefined4 *)(puVar10 + 3);
      puVar10[2] = &DAT_03d7702c;
      *(undefined4 *)(puVar10 + 3) = 0;
      puVar2 = PTR_DAT_047d1a08;
      puVar10 = puVar10 + 4;
      puVar9 = puVar9 + 4;
    } while (iVar13 != 0);
    puVar11 = (uint *)((long)puVar7 + 0xc);
    do {
      lVar5 = *(long *)(puVar11 + 1);
      if ((lVar5 != 0) && (*(int *)(lVar5 + 4) != -2)) {
        (**(code **)(puVar2 + 8))(puVar3[8],lVar5,0);
        *(undefined **)(puVar11 + 1) = &DAT_03d7702c;
        puVar11[3] = 0;
      }
      puVar11[-1] = 0;
      if ((-1 < (int)*puVar11) && (*(long *)(puVar11 + -3) != 0)) {
        (**(code **)(*(long *)puVar3 + 0x20))(puVar3,*(long *)(puVar11 + -3),(ulong)*puVar11 << 2);
      }
      puVar11[-3] = 0;
      puVar11[-2] = 0;
      iVar14 = iVar14 + -1;
      *puVar11 = 0x80000000;
      puVar11 = puVar11 + 8;
    } while (iVar14 != 0);
  }
  uVar1 = uVar6 * 0x20 + 0x20;
  uVar12 = uVar6;
  if (uVar1 <= local_68) {
    local_68 = local_68 - 0x20;
    uVar12 = uVar6 + 1 + (local_68 + uVar6 * -0x20 >> 5);
    if (local_68 < uVar1) {
      uVar12 = uVar6 + 1;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,*param_1,uVar8 << 5);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar12;
  *param_1 = puVar4;
  return;
}


