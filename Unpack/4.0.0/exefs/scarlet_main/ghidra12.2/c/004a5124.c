/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004a5124; name: FUN_004a5124
 */


undefined8 FUN_004a5124(long param_1)

{
  ulong *puVar1;
  long local_30;
  undefined **local_28;
  undefined *local_20;
  undefined1 *puStack_18;
  
  puStack_18 = (undefined1 *)&local_30;
  puVar1 = *(ulong **)(param_1 + 0x30);
  if ((puVar1 != (ulong *)0x0) && (*puVar1 != 0xffffffffffffffff)) {
    local_20 = PTR_LAB_047cd728;
    local_28 = &local_20;
    local_30 = param_1;
    std::__call_once(puVar1,&local_28,(_func_void_void_ptr *)&LAB_004c9500);
  }
  return *(undefined8 *)(param_1 + 0x68);
}


