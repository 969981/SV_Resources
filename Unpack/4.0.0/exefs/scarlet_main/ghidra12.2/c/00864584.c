/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00864584; name: FUN_00864584
 */


void FUN_00864584(undefined8 *param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  void *__dest;
  ulong uVar3;
  ulong uVar4;
  ulong local_58;
  undefined *puStack_50;
  undefined8 local_48;
  
  uVar3 = (ulong)(uint)(*(int *)((long)param_1 + 0xc) << 1);
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
  puVar2 = PTR_DAT_047d1a08;
  local_58 = uVar3 * 8;
  __dest = (void *)(**(code **)PTR_DAT_047d1a08)
                             (*(undefined1 *)(param_2 + 8),&local_58,*(undefined4 *)(param_2 + 0xc))
  ;
  memcpy(__dest,(void *)*param_1,(long)*(int *)(param_1 + 1) << 3);
  uVar1 = uVar3 * 8 + 8;
  uVar4 = uVar3;
  if (uVar1 <= local_58) {
    local_58 = local_58 - 8;
    uVar4 = uVar3 + 1 + (local_58 + uVar3 * -8 >> 3);
    if (local_58 < uVar1) {
      uVar4 = uVar3 + 1;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(puVar2 + 8))(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar4;
  *param_1 = __dest;
  return;
}


