/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03230c04; name: FUN_03230c04
 */


void FUN_03230c04(undefined8 *param_1,long *param_2,ulong param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  int iVar11;
  ulong uVar12;
  ulong uVar13;
  ulong local_48;
  
  uVar13 = (ulong)*(uint *)((long)param_1 + 0xc) & 0x7fffffff;
  uVar8 = uVar13 * 2;
  if (uVar8 <= param_3) {
    uVar8 = param_3;
  }
  if (0x7ffffffe < uVar8) {
    if (0x7ffffffe < param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_032270d0(0x4648a379,"../..\\Common/Base/Container/Array/hkArray.inl",0x90,
                   "Invalid requestedCapacity");
    }
    uVar8 = 0x7ffffffe;
  }
  puVar7 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,uVar8 * 0x20,&local_48);
  uVar6 = *(uint *)(param_1 + 1);
  if (0 < (int)uVar6) {
    puVar9 = (undefined8 *)*param_1;
    puVar10 = puVar7;
    if (uVar6 != 1) {
      iVar11 = -(uVar6 & 0xfffffffe);
      do {
        uVar3 = *puVar9;
        uVar4 = puVar9[1];
        iVar11 = iVar11 + 2;
        uVar5 = puVar9[3];
        puVar10[2] = puVar9[2];
        puVar10[3] = uVar5;
        *puVar10 = uVar3;
        puVar10[1] = uVar4;
        uVar3 = puVar9[4];
        uVar4 = puVar9[5];
        puVar1 = puVar9 + 6;
        uVar5 = puVar9[7];
        puVar9 = puVar9 + 8;
        puVar10[6] = *puVar1;
        puVar10[7] = uVar5;
        puVar10[4] = uVar3;
        puVar10[5] = uVar4;
        puVar10 = puVar10 + 8;
      } while (iVar11 != 0);
    }
    if ((uVar6 & 1) != 0) {
      uVar3 = *puVar9;
      uVar4 = puVar9[1];
      uVar5 = puVar9[3];
      puVar10[2] = puVar9[2];
      puVar10[3] = uVar5;
      *puVar10 = uVar3;
      puVar10[1] = uVar4;
    }
  }
  uVar2 = uVar8 * 0x20 + 0x20;
  uVar12 = uVar8;
  if (uVar2 <= local_48) {
    local_48 = local_48 - 0x20;
    uVar12 = uVar8 + 1 + (local_48 + uVar8 * -0x20 >> 5);
    if (local_48 < uVar2) {
      uVar12 = uVar8 + 1;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x20))(param_2,*param_1,uVar13 << 5);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar12;
  *param_1 = puVar7;
  return;
}


