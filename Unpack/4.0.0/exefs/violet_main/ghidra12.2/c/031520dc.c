/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031520dc; name: FUN_031520dc
 */


void FUN_031520dc(undefined8 *param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined8 *puVar7;
  uint *puVar8;
  int iVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  
  puVar10 = PTR_PTR_047d1a50;
  if (0x7ffffffe < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_032270d0(0x4648a379,"../..\\Common/Base/Container/Array/hkArray.inl",0x5e,
                 "Invalid requestedCapacity");
  }
  puVar3 = (undefined8 *)
           (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,param_2 << 5);
  puVar2 = PTR_PTR_047d1a50;
  puVar1 = PTR_DAT_047d1a08;
  iVar6 = *(int *)(param_1 + 1);
  if (0 < iVar6) {
    puVar11 = (undefined8 *)*param_1;
    puVar5 = puVar3;
    puVar7 = puVar11;
    iVar9 = iVar6;
    do {
      FUN_030da6d0(puVar7,puVar2);
      *puVar5 = *puVar7;
      *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(puVar7 + 1);
      *(undefined4 *)((long)puVar5 + 0xc) = *(undefined4 *)((long)puVar7 + 0xc);
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar5[2] = puVar7[2];
      iVar9 = iVar9 + -1;
      *(undefined4 *)(puVar5 + 3) = *(undefined4 *)(puVar7 + 3);
      puVar7[2] = &DAT_03d7702c;
      *(undefined4 *)(puVar7 + 3) = 0;
      puVar10 = PTR_PTR_047d1a50;
      puVar7 = puVar7 + 4;
      puVar5 = puVar5 + 4;
    } while (iVar9 != 0);
    puVar8 = (uint *)((long)puVar11 + 0xc);
    do {
      lVar4 = *(long *)(puVar8 + 1);
      if ((lVar4 != 0) && (*(int *)(lVar4 + 4) != -2)) {
        (**(code **)(puVar1 + 8))(puVar2[8],lVar4,0);
        *(undefined **)(puVar8 + 1) = &DAT_03d7702c;
        puVar8[3] = 0;
      }
      puVar8[-1] = 0;
      if ((-1 < (int)*puVar8) && (*(long *)(puVar8 + -3) != 0)) {
        (**(code **)(*(long *)puVar2 + 0x20))(puVar2,*(long *)(puVar8 + -3),(ulong)*puVar8 << 2);
      }
      puVar8[-3] = 0;
      puVar8[-2] = 0;
      iVar6 = iVar6 + -1;
      *puVar8 = 0x80000000;
      puVar8 = puVar8 + 8;
    } while (iVar6 != 0);
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(puVar1 + 8))(puVar10[8],*param_1,0);
  }
  *(int *)((long)param_1 + 0xc) = (int)param_2;
  *param_1 = puVar3;
  return;
}


