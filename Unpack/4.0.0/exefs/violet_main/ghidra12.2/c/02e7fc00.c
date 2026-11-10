/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02e7fc00; name: FUN_02e7fc00
 */


void FUN_02e7fc00(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  void *__dest;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong local_48;
  
  puVar2 = PTR_PTR_047d1a50;
  uVar5 = (ulong)*(uint *)((long)param_1 + 0xc) & 0x7fffffff;
  uVar3 = uVar5 * 2;
  if (uVar3 <= param_2) {
    uVar3 = param_2;
  }
  if (0x7ffffffe < uVar3) {
    if (0x7ffffffe < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_032270d0(0x4648a379,"../..\\Common/Base/Container/Array/hkArray.inl",0x90,
                   "Invalid requestedCapacity");
    }
    uVar3 = 0x7ffffffe;
  }
  __dest = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x10))
                             (PTR_PTR_047d1a50,uVar3 * 8,&local_48);
  memcpy(__dest,(void *)*param_1,(long)*(int *)(param_1 + 1) << 3);
  uVar1 = uVar3 * 8 + 8;
  uVar4 = uVar3;
  if (uVar1 <= local_48) {
    local_48 = local_48 - 8;
    uVar4 = uVar3 + 1 + (local_48 + uVar3 * -8 >> 3);
    if (local_48 < uVar1) {
      uVar4 = uVar3 + 1;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(*(long *)puVar2 + 0x20))(puVar2,*param_1,uVar5 << 3);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar4;
  *param_1 = __dest;
  return;
}


