/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0336f2a4; name: FUN_0336f2a4
 */


void FUN_0336f2a4(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  int iVar12;
  ulong uVar13;
  ulong uVar14;
  ulong local_48;
  
  puVar7 = PTR_PTR_047d1a50;
  uVar14 = (ulong)*(uint *)((long)param_1 + 0xc) & 0x7fffffff;
  uVar9 = uVar14 * 2;
  if (uVar9 <= param_2) {
    uVar9 = param_2;
  }
  if (0x7ffffffe < uVar9) {
    if (0x7ffffffe < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_032270d0(0x4648a379,"../..\\Common/Base/Container/Array/hkArray.inl",0x90,
                   "Invalid requestedCapacity");
    }
    uVar9 = 0x7ffffffe;
  }
  puVar8 = (undefined8 *)
           (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x10))(PTR_PTR_047d1a50,uVar9 * 0x20,&local_48);
  uVar6 = *(uint *)(param_1 + 1);
  if (0 < (int)uVar6) {
    puVar10 = (undefined8 *)*param_1;
    puVar11 = puVar8;
    if (uVar6 != 1) {
      iVar12 = -(uVar6 & 0xfffffffe);
      do {
        uVar3 = *puVar10;
        uVar4 = puVar10[1];
        iVar12 = iVar12 + 2;
        uVar5 = puVar10[3];
        puVar11[2] = puVar10[2];
        puVar11[3] = uVar5;
        *puVar11 = uVar3;
        puVar11[1] = uVar4;
        uVar3 = puVar10[4];
        uVar4 = puVar10[5];
        puVar1 = puVar10 + 6;
        uVar5 = puVar10[7];
        puVar10 = puVar10 + 8;
        puVar11[6] = *puVar1;
        puVar11[7] = uVar5;
        puVar11[4] = uVar3;
        puVar11[5] = uVar4;
        puVar11 = puVar11 + 8;
      } while (iVar12 != 0);
    }
    if ((uVar6 & 1) != 0) {
      uVar3 = *puVar10;
      uVar4 = puVar10[1];
      uVar5 = puVar10[3];
      puVar11[2] = puVar10[2];
      puVar11[3] = uVar5;
      *puVar11 = uVar3;
      puVar11[1] = uVar4;
    }
  }
  uVar2 = uVar9 * 0x20 + 0x20;
  uVar13 = uVar9;
  if (uVar2 <= local_48) {
    local_48 = local_48 - 0x20;
    uVar13 = uVar9 + 1 + (local_48 + uVar9 * -0x20 >> 5);
    if (local_48 < uVar2) {
      uVar13 = uVar9 + 1;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(*(long *)puVar7 + 0x20))(puVar7,*param_1,uVar14 << 5);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar13;
  *param_1 = puVar8;
  return;
}


