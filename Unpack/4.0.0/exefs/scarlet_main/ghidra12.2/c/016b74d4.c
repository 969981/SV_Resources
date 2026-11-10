/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 016b74d4; name: FUN_016b74d4
 */


long FUN_016b74d4(long param_1,undefined8 param_2)

{
  undefined8 local_40;
  undefined1 auStack_38 [8];
  long local_30;
  undefined1 **ppuStack_28;
  undefined1 *local_8;
  
  local_8 = auStack_38;
  local_30 = param_1 + 0x108;
  ppuStack_28 = &local_8;
  local_40 = param_2;
  FUN_016b752c(local_30,&local_30);
  FUN_016b77c0(param_1,*(undefined8 *)(param_1 + 8),&local_40);
  return param_1;
}


