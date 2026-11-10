/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0324c9c4; name: FUN_0324c9c4
 */


void FUN_0324c9c4(undefined8 *param_1,long *param_2,ulong param_3)

{
  ulong uVar1;
  void *__dest;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong local_48;
  
  uVar4 = (ulong)*(uint *)((long)param_1 + 0xc) & 0x7fffffff;
  uVar2 = uVar4 * 2;
  if (uVar2 <= param_3) {
    uVar2 = param_3;
  }
  if (0x7ffffffe < uVar2) {
    if (0x7ffffffe < param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_032270d0(0x4648a379,"../..\\Common/Base/Container/Array/hkArray.inl",0x90,
                   "Invalid requestedCapacity");
    }
    uVar2 = 0x7ffffffe;
  }
  __dest = (void *)(**(code **)(*param_2 + 0x10))(param_2,uVar2 * 0x10,&local_48);
  memcpy(__dest,(void *)*param_1,(long)*(int *)(param_1 + 1) << 4);
  uVar1 = uVar2 * 0x10 + 0x10;
  uVar3 = uVar2;
  if (uVar1 <= local_48) {
    local_48 = local_48 - 0x10;
    uVar3 = uVar2 + 1 + (local_48 + uVar2 * -0x10 >> 4);
    if (local_48 < uVar1) {
      uVar3 = uVar2 + 1;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x20))(param_2,*param_1,uVar4 << 4);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar3;
  *param_1 = __dest;
  return;
}


