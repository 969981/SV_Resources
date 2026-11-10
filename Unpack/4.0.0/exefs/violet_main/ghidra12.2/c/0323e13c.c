/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0323e13c; name: FUN_0323e13c
 */


void FUN_0323e13c(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong local_48;
  
  puVar3 = PTR_PTR_047d1a50;
  uVar12 = (ulong)*(uint *)((long)param_1 + 0xc) & 0x7fffffff;
  uVar5 = uVar12 * 2;
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
           (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x10))(PTR_PTR_047d1a50,uVar5 * 0x14,&local_48);
  uVar2 = *(uint *)(param_1 + 1);
  if (0 < (int)uVar2) {
    puVar6 = (undefined8 *)*param_1;
    puVar7 = puVar4;
    if (uVar2 != 1) {
      iVar8 = -(uVar2 & 0xfffffffe);
      do {
        uVar9 = *puVar6;
        uVar10 = puVar6[1];
        iVar8 = iVar8 + 2;
        *(undefined4 *)(puVar7 + 2) = *(undefined4 *)(puVar6 + 2);
        *puVar7 = uVar9;
        puVar7[1] = uVar10;
        uVar9 = *(undefined8 *)((long)puVar6 + 0x14);
        uVar10 = *(undefined8 *)((long)puVar6 + 0x1c);
        *(undefined4 *)((long)puVar7 + 0x24) = *(undefined4 *)((long)puVar6 + 0x24);
        *(undefined8 *)((long)puVar7 + 0x1c) = uVar10;
        *(undefined8 *)((long)puVar7 + 0x14) = uVar9;
        puVar7 = puVar7 + 5;
        puVar6 = puVar6 + 5;
      } while (iVar8 != 0);
    }
    if ((uVar2 & 1) != 0) {
      uVar9 = *puVar6;
      uVar10 = puVar6[1];
      *(undefined4 *)(puVar7 + 2) = *(undefined4 *)(puVar6 + 2);
      *puVar7 = uVar9;
      puVar7[1] = uVar10;
    }
  }
  uVar1 = uVar5 * 0x14 + 0x14;
  uVar11 = uVar5;
  if (uVar1 <= local_48) {
    local_48 = local_48 - 0x14;
    uVar11 = uVar5 + 1 + (local_48 + uVar5 * -0x14) / 0x14;
    if (local_48 < uVar1) {
      uVar11 = uVar5 + 1;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(*(long *)puVar3 + 0x20))(puVar3,*param_1,uVar12 * 0x14);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar11;
  *param_1 = puVar4;
  return;
}


