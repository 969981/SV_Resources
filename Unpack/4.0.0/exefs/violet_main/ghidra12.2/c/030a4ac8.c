/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030a4ac8; name: FUN_030a4ac8
 */


void FUN_030a4ac8(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  void *__dest;
  ulong uVar4;
  ulong uVar5;
  ulong local_38;
  
  puVar3 = PTR_PTR_047d1a50;
  puVar2 = PTR_DAT_047d1a08;
  uVar4 = (ulong)(uint)(*(int *)((long)param_1 + 0xc) << 1);
  if (uVar4 <= param_2) {
    uVar4 = param_2;
  }
  if (0x7ffffffe < uVar4) {
    if (0x7ffffffe < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_032270d0(0x4648a379,"../..\\Common/Base/Container/Array/hkArray.inl",0x90,
                   "Invalid requestedCapacity");
    }
    uVar4 = 0x7ffffffe;
  }
  local_38 = uVar4 * 0x38;
  __dest = (void *)(**(code **)PTR_DAT_047d1a08)
                             (PTR_PTR_047d1a50[8],&local_38,*(undefined4 *)(PTR_PTR_047d1a50 + 0xc))
  ;
  memcpy(__dest,(void *)*param_1,(long)*(int *)(param_1 + 1) * 0x38);
  uVar1 = uVar4 * 0x38 + 0x38;
  uVar5 = uVar4;
  if (uVar1 <= local_38) {
    local_38 = local_38 - 0x38;
    uVar5 = uVar4 + 1;
    if (uVar1 <= local_38) {
      uVar5 = (local_38 + uVar4 * -0x38) / 0x38 + uVar5;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(puVar2 + 8))(puVar3[8],*param_1,0);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar5;
  *param_1 = __dest;
  return;
}


