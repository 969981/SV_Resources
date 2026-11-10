/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004f609c; name: FUN_004f609c
 */


undefined1  [16] FUN_004f609c(long param_1,long param_2,long param_3,int param_4)

{
  ulong *puVar1;
  long lVar2;
  undefined1 auVar3 [16];
  long local_50;
  undefined *puStack_48;
  undefined **local_40;
  undefined1 *puStack_38;
  undefined ***local_28;
  
  puVar1 = *(ulong **)(param_3 + 0x30);
  if (puVar1 != (ulong *)0x0) {
    puStack_48 = PTR_LAB_047cd728;
    local_50 = param_3;
    if (*puVar1 != 0xffffffffffffffff) {
      local_40 = &puStack_48;
      local_28 = &local_40;
      puStack_38 = (undefined1 *)&local_50;
      std::__call_once(puVar1,&local_28,(_func_void_void_ptr *)&LAB_004f9a40);
    }
  }
  if (*(char *)(param_3 + 0x43) == '\0') {
    lVar2 = FUN_004f06b4(param_1,param_2,param_3);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = *(ulong *)(*(long *)(lVar2 + 8) + (long)param_4 * 8);
  }
  else {
    auVar3 = FUN_005226a0(param_2 + (ulong)*(uint *)(param_1 + 0x28),*(undefined4 *)(param_3 + 0x44)
                          ,param_4);
  }
  return auVar3;
}


