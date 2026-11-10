/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0145438c; name: FUN_0145438c
 */


void FUN_0145438c(long param_1)

{
  code *pcVar1;
  undefined1 *local_a0;
  code *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  long alStack_80 [12];
  
  local_a0 = &LAB_021420c0;
  local_98 = FUN_02b2d170;
  local_90 = &LAB_02b2d174;
  local_88 = &LAB_02b2d180;
  alStack_80[0] = param_1;
  FUN_014540c0(param_1 + 0x158,&local_a0);
  pcVar1 = local_98;
  *(undefined1 *)(param_1 + 0x150) = 0;
  if (local_98 != (code *)0x0) {
    local_90 = (undefined1 *)0x0;
    local_88 = (undefined1 *)0x0;
    local_a0 = (undefined1 *)0x0;
    local_98 = (code *)0x0;
    (*pcVar1)(alStack_80);
  }
  return;
}


