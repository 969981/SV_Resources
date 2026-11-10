/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0317c9e8; name: FUN_0317c9e8
 */


void FUN_0317c9e8(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint *puVar6;
  int iVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined8 *puVar10;
  
  puVar2 = PTR_PTR_047d1a50;
  if (0x7ffffffe < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_032270d0(0x4648a379,"../..\\Common/Base/Container/Array/hkArray.inl",0x5e,
                 "Invalid requestedCapacity");
  }
  puVar4 = (undefined8 *)
           (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,param_2 * 0x18);
  puVar3 = PTR_PTR_047d1a50;
  iVar7 = *(int *)(param_1 + 1);
  if (0 < iVar7) {
    puVar8 = (undefined8 *)*param_1;
    puVar5 = puVar8;
    puVar10 = puVar4;
    iVar9 = iVar7;
    do {
      FUN_02e9b22c(puVar5,puVar3);
      *puVar10 = *puVar5;
      *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar5 + 1);
      *(undefined4 *)((long)puVar10 + 0xc) = *(undefined4 *)((long)puVar5 + 0xc);
      puVar1 = puVar5 + 2;
      *puVar5 = 0;
      puVar5[1] = 0;
      iVar9 = iVar9 + -1;
      puVar5 = puVar5 + 3;
      *(undefined4 *)(puVar10 + 2) = *(undefined4 *)puVar1;
      puVar10 = puVar10 + 3;
    } while (iVar9 != 0);
    puVar6 = (uint *)((long)puVar8 + 0xc);
    do {
      puVar6[-1] = 0;
      if ((-1 < (int)*puVar6) && (*(long *)(puVar6 + -3) != 0)) {
        (**(code **)(*(long *)puVar3 + 0x20))(puVar3,*(long *)(puVar6 + -3),(ulong)*puVar6 << 4);
      }
      puVar6[-3] = 0;
      puVar6[-2] = 0;
      iVar7 = iVar7 + -1;
      *puVar6 = 0x80000000;
      puVar6 = puVar6 + 6;
    } while (iVar7 != 0);
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(puVar2[8],*param_1,0);
  }
  *(int *)((long)param_1 + 0xc) = (int)param_2;
  *param_1 = puVar4;
  return;
}


