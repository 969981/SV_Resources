/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02e931c8; name: FUN_02e931c8
 */


void FUN_02e931c8(undefined8 *param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  void *__dest;
  ulong uVar3;
  ulong uVar4;
  ulong local_48;
  
  puVar2 = PTR_DAT_047d1a08;
  uVar3 = (ulong)(uint)(*(int *)((long)param_1 + 0xc) << 1);
  if (uVar3 <= param_3) {
    uVar3 = param_3;
  }
  if (0x7ffffffe < uVar3) {
    if (0x7ffffffe < param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_032270d0(0x4648a379,"../..\\Common/Base/Container/Array/hkArray.inl",0x90,
                   "Invalid requestedCapacity");
    }
    uVar3 = 0x7ffffffe;
  }
  local_48 = uVar3 * 4;
  __dest = (void *)(**(code **)PTR_DAT_047d1a08)
                             (*(undefined1 *)(param_2 + 8),&local_48,*(undefined4 *)(param_2 + 0xc))
  ;
  memcpy(__dest,(void *)*param_1,(long)*(int *)(param_1 + 1) << 2);
  uVar1 = uVar3 * 4 + 4;
  uVar4 = uVar3;
  if (uVar1 <= local_48) {
    local_48 = local_48 - 4;
    uVar4 = uVar3 + 1 + (local_48 + uVar3 * -4 >> 2);
    if (local_48 < uVar1) {
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


