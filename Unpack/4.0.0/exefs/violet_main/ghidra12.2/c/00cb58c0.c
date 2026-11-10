/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00cb58c0; name: FUN_00cb58c0
 */


void FUN_00cb58c0(undefined8 *param_1,long *param_2,ulong param_3)

{
  void *__dest;
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_58;
  undefined *puStack_50;
  undefined8 local_48;
  
  uVar3 = (ulong)*(uint *)((long)param_1 + 0xc) & 0x7fffffff;
  uVar1 = uVar3 * 2;
  if (uVar1 <= param_3) {
    uVar1 = param_3;
  }
  if (0x7ffffffe < uVar1) {
    if (0x7ffffffe < param_3) {
      local_48 = 0;
      local_58 = 0;
      puStack_50 = PTR_DAT_047d1b38;
      FUN_01f9d9b0(0x4648a379,
                   "C:/projects/ppp/include/havok\\Common/Base/Container/Array/hkArray.inl",0x90,
                   "Invalid requestedCapacity",&local_58);
    }
    uVar1 = 0x7ffffffe;
  }
  __dest = (void *)(**(code **)(*param_2 + 0x10))(param_2,uVar1,&local_58);
  memcpy(__dest,(void *)*param_1,(long)*(int *)(param_1 + 1));
  if (uVar1 < local_58) {
    uVar2 = local_58 - 1;
    if (uVar2 <= uVar1) {
      local_58 = uVar1 + 1;
    }
    uVar1 = local_58;
    local_58 = uVar2;
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x20))(param_2,*param_1,uVar3);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar1;
  *param_1 = __dest;
  return;
}


