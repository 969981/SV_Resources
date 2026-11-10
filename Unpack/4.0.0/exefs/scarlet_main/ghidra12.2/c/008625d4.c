/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008625d4; name: FUN_008625d4
 */


void FUN_008625d4(undefined8 *param_1,long *param_2,ulong param_3)

{
  ulong uVar1;
  int iVar2;
  void *__dest;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  ulong local_58;
  undefined *puStack_50;
  undefined8 local_48;
  
  uVar4 = (ulong)*(uint *)((long)param_1 + 0xc) & 0x7fffffff;
  uVar3 = uVar4 * 2;
  if (uVar3 <= param_3) {
    uVar3 = param_3;
  }
  if (0x7ffffffe < uVar3) {
    if (0x7ffffffe < param_3) {
      local_48 = 0;
      local_58 = 0;
      puStack_50 = PTR_DAT_047d1b38;
      FUN_01f9d9b0(0x4648a379,"../..\\Common/Base/Container/Array/hkArray.inl",0x90,
                   "Invalid requestedCapacity",&local_58);
    }
    uVar3 = 0x7ffffffe;
  }
  __dest = (void *)(**(code **)(*param_2 + 0x10))(param_2,uVar3 * 0x30,&local_58);
  memcpy(__dest,(void *)*param_1,(long)*(int *)(param_1 + 1) * 0x30);
  uVar1 = uVar3 * 0x30 + 0x30;
  uVar6 = uVar3;
  if (uVar1 <= local_58) {
    local_58 = local_58 - 0x30;
    uVar6 = uVar3 + 1;
    if (uVar1 <= local_58) {
      iVar5 = (int)uVar6 + (int)((local_58 + uVar3 * -0x30) / 0x30);
      iVar2 = *(int *)((long)param_1 + 0xc);
      goto joined_r0x00862674;
    }
  }
  iVar5 = (int)uVar6;
  iVar2 = *(int *)((long)param_1 + 0xc);
joined_r0x00862674:
  if (-1 < iVar2) {
    (**(code **)(*param_2 + 0x20))(param_2,*param_1,uVar4 * 0x30);
  }
  *(int *)((long)param_1 + 0xc) = iVar5;
  *param_1 = __dest;
  return;
}


