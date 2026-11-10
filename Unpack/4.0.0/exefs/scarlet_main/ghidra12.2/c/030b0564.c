/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030b0564; name: FUN_030b0564
 */


void FUN_030b0564(undefined8 *param_1,long *param_2,ulong param_3)

{
  ulong uVar1;
  uint uVar2;
  undefined4 *puVar3;
  ulong uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  ulong local_48;
  
  uVar9 = (ulong)*(uint *)((long)param_1 + 0xc) & 0x7fffffff;
  uVar4 = uVar9 * 2;
  if (uVar4 <= param_3) {
    uVar4 = param_3;
  }
  if (0x7ffffffe < uVar4) {
    if (0x7ffffffe < param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_032270d0(0x4648a379,"../..\\Common/Base/Container/Array/hkArray.inl",0x90,
                   "Invalid requestedCapacity");
    }
    uVar4 = 0x7ffffffe;
  }
  puVar3 = (undefined4 *)(**(code **)(*param_2 + 0x10))(param_2,uVar4 * 0x10,&local_48);
  uVar2 = *(uint *)(param_1 + 1);
  if (0 < (int)uVar2) {
    puVar5 = (undefined4 *)*param_1;
    puVar6 = puVar3;
    if (uVar2 != 1) {
      iVar7 = -(uVar2 & 0xfffffffe);
      do {
        *puVar6 = *puVar5;
        *(undefined8 *)(puVar6 + 2) = *(undefined8 *)(puVar5 + 2);
        *(undefined8 *)(puVar5 + 2) = 0;
        puVar6[4] = puVar5[4];
        *(undefined8 *)(puVar6 + 6) = *(undefined8 *)(puVar5 + 6);
        *(undefined8 *)(puVar5 + 6) = 0;
        puVar6 = puVar6 + 8;
        puVar5 = puVar5 + 8;
        iVar7 = iVar7 + 2;
      } while (iVar7 != 0);
    }
    if ((uVar2 & 1) != 0) {
      *puVar6 = *puVar5;
      *(undefined8 *)(puVar6 + 2) = *(undefined8 *)(puVar5 + 2);
      *(undefined8 *)(puVar5 + 2) = 0;
    }
  }
  uVar1 = uVar4 * 0x10 + 0x10;
  uVar8 = uVar4;
  if (uVar1 <= local_48) {
    local_48 = local_48 - 0x10;
    uVar8 = uVar4 + 1 + (local_48 + uVar4 * -0x10 >> 4);
    if (local_48 < uVar1) {
      uVar8 = uVar4 + 1;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x20))(param_2,*param_1,uVar9 << 4);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar8;
  *param_1 = puVar3;
  return;
}


