/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004f6278; name: FUN_004f6278
 */


byte FUN_004f6278(long param_1,long param_2,long param_3)

{
  byte bVar1;
  ulong *puVar2;
  char *pcVar3;
  long local_48;
  undefined *puStack_40;
  undefined ***local_38;
  undefined **local_30;
  long *plStack_28;
  
  puVar2 = *(ulong **)(param_3 + 0x30);
  if (puVar2 != (ulong *)0x0) {
    puStack_40 = PTR_LAB_047cd728;
    local_48 = param_3;
    if (*puVar2 != 0xffffffffffffffff) {
      local_30 = &puStack_40;
      plStack_28 = &local_48;
      local_38 = &local_30;
      std::__call_once(puVar2,&local_38,(_func_void_void_ptr *)&LAB_004f9a40);
    }
  }
  if (*(char *)(param_3 + 0x43) == '\0') {
    pcVar3 = (char *)FUN_004f9c0c(param_1,param_2,param_3);
    bVar1 = *pcVar3 != '\0';
  }
  else {
    bVar1 = FUN_00522814(param_2 + (ulong)*(uint *)(param_1 + 0x28),*(undefined4 *)(param_3 + 0x44),
                         *(undefined1 *)(param_3 + 0x90));
  }
  return bVar1 & 1;
}


