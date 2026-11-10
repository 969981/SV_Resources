/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02e80088; name: FUN_02e80088
 */


void FUN_02e80088(long *param_1,long *param_2,ulong param_3)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  ulong local_48;
  
  uVar10 = (ulong)*(uint *)((long)param_1 + 0xc) & 0x7fffffff;
  uVar5 = uVar10 * 2;
  if (uVar5 <= param_3) {
    uVar5 = param_3;
  }
  if (0x7ffffffe < uVar5) {
    if (0x7ffffffe < param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_032270d0(0x4648a379,"../..\\Common/Base/Container/Array/hkArray.inl",0x90,
                   "Invalid requestedCapacity");
    }
    uVar5 = 0x7ffffffe;
  }
  puVar4 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,uVar5 * 8,&local_48);
  uVar3 = *(uint *)(param_1 + 1);
  if (0 < (int)uVar3) {
    puVar6 = (undefined8 *)*param_1;
    uVar2 = uVar3 & 3;
    puVar7 = puVar4;
    if (2 < uVar3 - 1) {
      iVar8 = -(uVar3 & 0xfffffffc);
      do {
        *puVar7 = *puVar6;
        puVar7[1] = puVar6[1];
        puVar7[2] = puVar6[2];
        puVar7[3] = puVar6[3];
        puVar7 = puVar7 + 4;
        puVar6 = puVar6 + 4;
        iVar8 = iVar8 + 4;
      } while (iVar8 != 0);
    }
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
  }
  uVar1 = uVar5 * 8 + 8;
  uVar9 = uVar5;
  if (uVar1 <= local_48) {
    local_48 = local_48 - 8;
    uVar9 = uVar5 + 1 + (local_48 + uVar5 * -8 >> 3);
    if (local_48 < uVar1) {
      uVar9 = uVar5 + 1;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x20))(param_2,*param_1,uVar10 << 3);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar9;
  *param_1 = (long)puVar4;
  return;
}


