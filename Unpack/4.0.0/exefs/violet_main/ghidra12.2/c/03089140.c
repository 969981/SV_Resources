/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03089140; name: FUN_03089140
 */


void FUN_03089140(long *param_1,long *param_2,ulong param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  int iVar11;
  ulong uVar12;
  ulong uVar13;
  ulong local_48;
  
  uVar13 = (ulong)*(uint *)((long)param_1 + 0xc) & 0x7fffffff;
  uVar7 = uVar13 * 2;
  if (uVar7 <= param_3) {
    uVar7 = param_3;
  }
  if (0x7ffffffe < uVar7) {
    if (0x7ffffffe < param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_032270d0(0x4648a379,"../..\\Common/Base/Container/Array/hkArray.inl",0x90,
                   "Invalid requestedCapacity");
    }
    uVar7 = 0x7ffffffe;
  }
  puVar6 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,uVar7 * 0x20,&local_48);
  uVar5 = *(uint *)(param_1 + 1);
  if (0 < (int)uVar5) {
    puVar8 = (undefined8 *)*param_1;
    puVar10 = puVar6;
    if (uVar5 != 1) {
      iVar11 = -(uVar5 & 0xfffffffe);
      do {
        uVar9 = puVar8[3];
        iVar11 = iVar11 + 2;
        puVar10[1] = puVar8[1];
        puVar10[3] = uVar9;
        uVar9 = *puVar8;
        puVar10[2] = puVar8[2];
        *puVar10 = uVar9;
        uVar9 = puVar8[4];
        uVar3 = puVar8[5];
        puVar1 = puVar8 + 6;
        uVar4 = puVar8[7];
        puVar8 = puVar8 + 8;
        puVar10[6] = *puVar1;
        puVar10[7] = uVar4;
        puVar10[4] = uVar9;
        puVar10[5] = uVar3;
        puVar10 = puVar10 + 8;
      } while (iVar11 != 0);
    }
    if ((uVar5 & 1) != 0) {
      uVar9 = puVar8[3];
      puVar10[1] = puVar8[1];
      puVar10[3] = uVar9;
      uVar9 = *puVar8;
      puVar10[2] = puVar8[2];
      *puVar10 = uVar9;
    }
  }
  uVar2 = uVar7 * 0x20 + 0x20;
  uVar12 = uVar7;
  if (uVar2 <= local_48) {
    local_48 = local_48 - 0x20;
    uVar12 = uVar7 + 1 + (local_48 + uVar7 * -0x20 >> 5);
    if (local_48 < uVar2) {
      uVar12 = uVar7 + 1;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x20))(param_2,*param_1,uVar13 << 5);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar12;
  *param_1 = (long)puVar6;
  return;
}


