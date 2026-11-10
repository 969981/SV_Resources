/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0219acc8; name: FUN_0219acc8
 */


void FUN_0219acc8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 auStack_b0 [128];
  undefined1 *local_18;
  
  lVar1 = FUN_0219b470();
  puVar2 = auStack_b0 + (0x80 - (lVar1 + 0x1cU & 0xfffffffffffffff0));
  local_18 = puVar2;
  *puVar2 = 0;
  FUN_0219b4a8(puVar2,param_2,param_3);
  FUN_00cf9768(param_1,&local_18);
  return;
}


