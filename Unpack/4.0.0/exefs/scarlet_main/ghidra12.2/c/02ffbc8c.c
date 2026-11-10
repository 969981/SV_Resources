/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02ffbc8c; name: FUN_02ffbc8c
 */


void FUN_02ffbc8c(long *param_1,long *param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong local_48;
  
  uVar8 = (ulong)*(uint *)((long)param_1 + 0xc) & 0x7fffffff;
  uVar4 = uVar8 * 2;
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
  puVar2 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,uVar4 * 0x50,&local_48);
  iVar3 = (int)param_1[1];
  if (0 < iVar3) {
    puVar5 = (undefined8 *)*param_1;
    puVar6 = puVar2;
    do {
      uVar9 = *puVar5;
      iVar3 = iVar3 + -1;
      puVar6[1] = puVar5[1];
      *puVar6 = uVar9;
      uVar9 = puVar5[2];
      puVar6[3] = puVar5[3];
      puVar6[2] = uVar9;
      uVar9 = puVar5[4];
      puVar6[5] = puVar5[5];
      puVar6[4] = uVar9;
      *(undefined4 *)(puVar6 + 6) = *(undefined4 *)(puVar5 + 6);
      *(undefined4 *)((long)puVar6 + 0x34) = *(undefined4 *)((long)puVar5 + 0x34);
      *(undefined4 *)(puVar6 + 7) = *(undefined4 *)(puVar5 + 7);
      *(undefined4 *)((long)puVar6 + 0x3c) = *(undefined4 *)((long)puVar5 + 0x3c);
      *(undefined4 *)(puVar6 + 8) = *(undefined4 *)(puVar5 + 8);
      puVar5 = puVar5 + 10;
      puVar6 = puVar6 + 10;
    } while (iVar3 != 0);
  }
  uVar1 = uVar4 * 0x50 + 0x50;
  uVar7 = uVar4;
  if (uVar1 <= local_48) {
    local_48 = local_48 - 0x50;
    uVar7 = uVar4 + 1;
    if (uVar1 <= local_48) {
      uVar7 = uVar7 + (local_48 + uVar4 * -0x50) / 0x50;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x20))(param_2,*param_1,uVar8 * 0x50);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar7;
  *param_1 = (long)puVar2;
  return;
}


