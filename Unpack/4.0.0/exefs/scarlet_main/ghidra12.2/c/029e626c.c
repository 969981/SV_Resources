/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029e626c; name: FUN_029e626c
 */


void FUN_029e626c(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined1 *local_a0;
  code *local_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 auStack_80 [96];
  
  local_a0 = &LAB_02e65eac;
  local_98 = FUN_02e65ee0;
  local_90 = &LAB_02e65ee4;
  puStack_88 = &LAB_02e65ee8;
  FUN_00c837c0(param_1,param_1 + 0xf0,param_2,&local_a0);
  pcVar1 = local_98;
  if (local_98 != (code *)0x0) {
    local_90 = (undefined1 *)0x0;
    puStack_88 = (undefined1 *)0x0;
    local_a0 = (undefined1 *)0x0;
    local_98 = (code *)0x0;
    (*pcVar1)(auStack_80);
  }
  return;
}


