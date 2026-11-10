/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02eea048; name: FUN_02eea048
 */


void FUN_02eea048(undefined8 *param_1,long param_2,ulong param_3)

{
  undefined *puVar1;
  void *__dest;
  ulong uVar2;
  ulong uVar3;
  ulong local_28;
  
  puVar1 = PTR_DAT_047d1a08;
  uVar2 = (ulong)(uint)(*(int *)((long)param_1 + 0xc) << 1);
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
  local_28 = uVar2;
  __dest = (void *)(**(code **)PTR_DAT_047d1a08)
                             (*(undefined1 *)(param_2 + 8),&local_28,*(undefined4 *)(param_2 + 0xc))
  ;
  memcpy(__dest,(void *)*param_1,(long)*(int *)(param_1 + 1));
  if (uVar2 < local_28) {
    uVar3 = local_28 - 1;
    if (uVar3 <= uVar2) {
      local_28 = uVar2 + 1;
    }
    uVar2 = local_28;
    local_28 = uVar3;
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(puVar1 + 8))(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar2;
  *param_1 = __dest;
  return;
}


