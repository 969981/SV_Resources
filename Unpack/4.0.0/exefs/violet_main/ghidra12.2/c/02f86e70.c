/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f86e70; name: FUN_02f86e70
 */


void FUN_02f86e70(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  ulong local_48;
  
  puVar5 = PTR_PTR_047d1a50;
  uVar12 = (ulong)*(uint *)((long)param_1 + 0xc) & 0x7fffffff;
  uVar7 = uVar12 * 2;
  if (uVar7 <= param_2) {
    uVar7 = param_2;
  }
  if (0x7ffffffe < uVar7) {
    if (0x7ffffffe < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_032270d0(0x4648a379,"../..\\Common/Base/Container/Array/hkArray.inl",0x90,
                   "Invalid requestedCapacity");
    }
    uVar7 = 0x7ffffffe;
  }
  puVar6 = (undefined8 *)
           (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x10))(PTR_PTR_047d1a50,uVar7 * 0x10,&local_48);
  uVar4 = *(uint *)(param_1 + 1);
  if (0 < (int)uVar4) {
    puVar8 = (undefined8 *)*param_1;
    puVar9 = puVar6;
    if (uVar4 != 1) {
      iVar10 = -(uVar4 & 0xfffffffe);
      do {
        uVar3 = puVar8[1];
        iVar10 = iVar10 + 2;
        *puVar9 = *puVar8;
        puVar9[1] = uVar3;
        puVar1 = puVar8 + 2;
        uVar3 = puVar8[3];
        puVar8 = puVar8 + 4;
        puVar9[2] = *puVar1;
        puVar9[3] = uVar3;
        puVar9 = puVar9 + 4;
      } while (iVar10 != 0);
    }
    if ((uVar4 & 1) != 0) {
      uVar3 = puVar8[1];
      *puVar9 = *puVar8;
      puVar9[1] = uVar3;
    }
  }
  uVar2 = uVar7 * 0x10 + 0x10;
  uVar11 = uVar7;
  if (uVar2 <= local_48) {
    local_48 = local_48 - 0x10;
    uVar11 = uVar7 + 1 + (local_48 + uVar7 * -0x10 >> 4);
    if (local_48 < uVar2) {
      uVar11 = uVar7 + 1;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(*(long *)puVar5 + 0x20))(puVar5,*param_1,uVar12 << 4);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar11;
  *param_1 = puVar6;
  return;
}


