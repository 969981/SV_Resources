/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0155a380; name: FUN_0155a380
 */


void FUN_0155a380(undefined8 *param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  int iVar2;
  undefined *puVar3;
  void *__dest;
  ulong uVar4;
  void *__dest_00;
  void *__src;
  ulong uVar5;
  ulong local_78;
  undefined *puStack_70;
  undefined8 local_68;
  
  uVar4 = (ulong)(uint)(*(int *)((long)param_1 + 0xc) << 1);
  if (uVar4 <= param_3) {
    uVar4 = param_3;
  }
  if (0x7ffffffe < uVar4) {
    if (0x7ffffffe < param_3) {
      local_68 = 0;
      local_78 = 0;
      puStack_70 = PTR_DAT_047d1b38;
      FUN_01f9d9b0(0x4648a379,
                   "C:/projects/ppp/include/havok\\Common/Base/Container/Array/hkArray.inl",0x90,
                   "Invalid requestedCapacity",&local_78);
    }
    uVar4 = 0x7ffffffe;
  }
  puVar3 = PTR_DAT_047d1a08;
  local_78 = uVar4 * 0x30;
  __dest = (void *)(**(code **)PTR_DAT_047d1a08)
                             (*(undefined1 *)(param_2 + 8),&local_78,*(undefined4 *)(param_2 + 0xc))
  ;
  iVar2 = *(int *)(param_1 + 1);
  if (0 < iVar2) {
    __src = (void *)*param_1;
    memcpy(__dest,__src,0x30);
    __dest_00 = __dest;
    while (iVar2 = iVar2 + -1, iVar2 != 0) {
      __src = (void *)((long)__src + 0x30);
      __dest_00 = (void *)((long)__dest_00 + 0x30);
      memcpy(__dest_00,__src,0x30);
    }
  }
  uVar1 = uVar4 * 0x30 + 0x30;
  uVar5 = uVar4;
  if (uVar1 <= local_78) {
    local_78 = local_78 - 0x30;
    uVar5 = uVar4 + 1;
    if (uVar1 <= local_78) {
      uVar5 = uVar5 + (local_78 + uVar4 * -0x30) / 0x30;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(puVar3 + 8))(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar5;
  *param_1 = __dest;
  return;
}


