/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02e7fe28; name: FUN_02e7fe28
 */


void FUN_02e7fe28(undefined8 *param_1,long *param_2,ulong param_3)

{
  void *__dest;
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_28;
  
  uVar3 = (ulong)*(uint *)((long)param_1 + 0xc) & 0x7fffffff;
  uVar1 = uVar3 * 2;
  if (uVar1 <= param_3) {
    uVar1 = param_3;
  }
  if (0x7ffffffe < uVar1) {
    if (0x7ffffffe < param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_032270d0(0x4648a379,"../..\\Common/Base/Container/Array/hkArray.inl",0x90,
                   "Invalid requestedCapacity");
    }
    uVar1 = 0x7ffffffe;
  }
  __dest = (void *)(**(code **)(*param_2 + 0x10))(param_2,uVar1,&local_28);
  memcpy(__dest,(void *)*param_1,(long)*(int *)(param_1 + 1));
  if (uVar1 < local_28) {
    uVar2 = local_28 - 1;
    if (uVar2 <= uVar1) {
      local_28 = uVar1 + 1;
    }
    uVar1 = local_28;
    local_28 = uVar2;
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x20))(param_2,*param_1,uVar3);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar1;
  *param_1 = __dest;
  return;
}


