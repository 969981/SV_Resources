/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02ef5ec8; name: FUN_02ef5ec8
 */


void FUN_02ef5ec8(undefined8 *param_1,long *param_2,ulong param_3)

{
  ulong uVar1;
  void *__dest;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong local_48;
  
  uVar2 = (ulong)(uint)(*(int *)((long)param_1 + 0xc) << 1);
  uVar4 = uVar2;
  if (uVar2 <= param_3) {
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
  __dest = (void *)(**(code **)(*param_2 + 0x10))(param_2,uVar4 * 2,&local_48);
  memcpy(__dest,(void *)*param_1,(long)*(int *)(param_1 + 1) << 1);
  uVar1 = uVar4 * 2 + 2;
  uVar3 = uVar4;
  if (uVar1 <= local_48) {
    local_48 = local_48 - 2;
    uVar3 = uVar4 + 1 + (local_48 + uVar4 * -2 >> 1);
    if (local_48 < uVar1) {
      uVar3 = uVar4 + 1;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x20))(param_2,*param_1,uVar2);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar3;
  *param_1 = __dest;
  return;
}


