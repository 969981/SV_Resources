/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004f6c40; name: FUN_004f6c40
 */


ulong FUN_004f6c40(long param_1,long param_2,long param_3)

{
  uint uVar1;
  undefined4 uVar2;
  ulong *puVar3;
  long lVar4;
  ulong uVar5;
  uint *puVar6;
  long local_48;
  undefined *puStack_40;
  undefined ***local_38;
  undefined **local_30;
  long *plStack_28;
  
  puVar3 = *(ulong **)(param_3 + 0x30);
  if (puVar3 != (ulong *)0x0) {
    puStack_40 = PTR_LAB_047cd728;
    local_48 = param_3;
    if (*puVar3 != 0xffffffffffffffff) {
      local_30 = &puStack_40;
      plStack_28 = &local_48;
      local_38 = &local_30;
      std::__call_once(puVar3,&local_38,(_func_void_void_ptr *)&LAB_004f9a40);
    }
  }
  if (*(char *)(param_3 + 0x43) == '\0') {
    puVar6 = (uint *)FUN_004f9d48(param_1,param_2,param_3);
    return (ulong)*puVar6;
  }
  uVar1 = *(uint *)(param_1 + 0x28);
  uVar2 = *(undefined4 *)(param_3 + 0x44);
  lVar4 = FUN_004a6930(param_3);
  uVar5 = FUN_00522d30(param_2 + (ulong)uVar1,uVar2,*(undefined4 *)(lVar4 + 0x10));
  return uVar5;
}


