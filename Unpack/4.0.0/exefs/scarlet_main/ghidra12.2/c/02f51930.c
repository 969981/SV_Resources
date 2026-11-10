/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f51930; name: FUN_02f51930
 */


void FUN_02f51930(undefined8 *param_1,long *param_2,ulong param_3)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong local_48;
  
  uVar8 = (ulong)(uint)(*(int *)((long)param_1 + 0xc) << 1);
  uVar10 = uVar8;
  if (uVar8 <= param_3) {
    uVar10 = param_3;
  }
  if (0x7ffffffe < uVar10) {
    if (0x7ffffffe < param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_032270d0(0x4648a379,"../..\\Common/Base/Container/Array/hkArray.inl",0x90,
                   "Invalid requestedCapacity");
    }
    uVar10 = 0x7ffffffe;
  }
  puVar4 = (undefined2 *)(**(code **)(*param_2 + 0x10))(param_2,uVar10 * 2,&local_48);
  uVar3 = *(uint *)(param_1 + 1);
  if (0 < (int)uVar3) {
    puVar5 = (undefined2 *)*param_1;
    uVar2 = uVar3 & 3;
    puVar6 = puVar4;
    if (2 < uVar3 - 1) {
      iVar7 = -(uVar3 & 0xfffffffc);
      do {
        *puVar6 = *puVar5;
        puVar6[1] = puVar5[1];
        puVar6[2] = puVar5[2];
        puVar6[3] = puVar5[3];
        puVar6 = puVar6 + 4;
        puVar5 = puVar5 + 4;
        iVar7 = iVar7 + 4;
      } while (iVar7 != 0);
    }
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
  }
  uVar1 = uVar10 * 2 + 2;
  uVar9 = uVar10;
  if (uVar1 <= local_48) {
    local_48 = local_48 - 2;
    uVar9 = uVar10 + 1 + (local_48 + uVar10 * -2 >> 1);
    if (local_48 < uVar1) {
      uVar9 = uVar10 + 1;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x20))(param_2,*param_1,uVar8);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar9;
  *param_1 = puVar4;
  return;
}


