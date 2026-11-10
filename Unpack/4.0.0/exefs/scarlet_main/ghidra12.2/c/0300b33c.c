/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0300b33c; name: FUN_0300b33c
 */


void FUN_0300b33c(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  void *__dest;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong local_38;
  
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
                             (PTR_PTR_047d1a50,uVar3 * 0x150,&local_38);
  memcpy(__dest,(void *)*param_1,(long)*(int *)(param_1 + 1) * 0x150);
  uVar1 = uVar3 * 0x150 + 0x150;
  uVar4 = uVar3;
  if (uVar1 <= local_38) {
    local_38 = local_38 - 0x150;
    uVar4 = uVar3 + 1;
    if (uVar1 <= local_38) {
      uVar4 = (local_38 + uVar3 * -0x150) / 0x150 + uVar4;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(*(long *)puVar2 + 0x20))(puVar2,*param_1,uVar5 * 0x150);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar4;
  *param_1 = __dest;
  return;
}


