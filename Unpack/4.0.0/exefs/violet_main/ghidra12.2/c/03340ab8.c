/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03340ab8; name: FUN_03340ab8
 */


void FUN_03340ab8(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong *puVar4;
  int iVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong uVar10;
  int iVar11;
  ulong *puVar12;
  ulong local_48;
  
  puVar3 = PTR_PTR_047d1a50;
  uVar10 = (ulong)*(uint *)((long)param_1 + 0xc) & 0x7fffffff;
  uVar6 = uVar10 * 2;
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
  puVar4 = (ulong *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x10))
                              (PTR_PTR_047d1a50,uVar6 * 0x20,&local_48);
  iVar11 = *(int *)(param_1 + 1);
  if (0 < iVar11) {
    puVar12 = (ulong *)*param_1;
    puVar7 = puVar4;
    puVar8 = puVar12;
    iVar5 = iVar11;
    do {
      *puVar7 = *puVar8;
      uVar9 = puVar8[3];
      uVar1 = puVar8[1];
      *puVar8 = 0;
      puVar7[2] = puVar8[2];
      puVar7[3] = uVar9;
      iVar5 = iVar5 + -1;
      puVar7[1] = uVar1;
      puVar2 = PTR_DAT_047d1a08;
      puVar8 = puVar8 + 4;
      puVar7 = puVar7 + 4;
    } while (iVar5 != 0);
    do {
      if ((*puVar12 & 1) != 0) {
        (**(code **)(puVar2 + 8))(0,*puVar12 - 1,0);
      }
      puVar12 = puVar12 + 4;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
  }
  uVar1 = uVar6 * 0x20 + 0x20;
  uVar9 = uVar6;
  if (uVar1 <= local_48) {
    local_48 = local_48 - 0x20;
    uVar9 = uVar6 + 1 + (local_48 + uVar6 * -0x20 >> 5);
    if (local_48 < uVar1) {
      uVar9 = uVar6 + 1;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(*(long *)puVar3 + 0x20))(puVar3,*param_1,uVar10 << 5);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar9;
  *param_1 = puVar4;
  return;
}


