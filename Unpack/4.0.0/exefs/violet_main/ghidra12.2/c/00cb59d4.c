/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00cb59d4; name: FUN_00cb59d4
 */


void FUN_00cb59d4(undefined8 *param_1,long *param_2,ulong param_3)

{
  ulong uVar1;
  void *__dest;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong local_58;
  undefined *puStack_50;
  undefined8 local_48;
  
  uVar3 = (ulong)*(uint *)((long)param_1 + 0xc) & 0x7fffffff;
  uVar2 = uVar3 * 2;
  if (uVar2 <= param_3) {
    uVar2 = param_3;
  }
  if (0x7ffffffe < uVar2) {
    if (0x7ffffffe < param_3) {
      local_48 = 0;
      local_58 = 0;
      puStack_50 = PTR_DAT_047d1b38;
      FUN_01f9d9b0(0x4648a379,
                   "C:/projects/ppp/include/havok\\Common/Base/Container/Array/hkArray.inl",0x90,
                   "Invalid requestedCapacity",&local_58);
    }
    uVar2 = 0x7ffffffe;
  }
  __dest = (void *)(**(code **)(*param_2 + 0x10))(param_2,uVar2 * 4,&local_58);
  memcpy(__dest,(void *)*param_1,(long)*(int *)(param_1 + 1) << 2);
  uVar1 = uVar2 * 4 + 4;
  uVar4 = uVar2;
  if (uVar1 <= local_58) {
    local_58 = local_58 - 4;
    uVar4 = uVar2 + 1 + (local_58 + uVar2 * -4 >> 2);
    if (local_58 < uVar1) {
      uVar4 = uVar2 + 1;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x20))(param_2,*param_1,uVar3 << 2);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar4;
  *param_1 = __dest;
  return;
}


