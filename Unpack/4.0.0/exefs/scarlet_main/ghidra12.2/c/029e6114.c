/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029e6114; name: FUN_029e6114
 */


void FUN_029e6114(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined1 *local_a0;
  code *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  undefined8 auStack_80 [12];
  
  local_a0 = &LAB_02e65df8;
  local_98 = FUN_02e65e10;
  local_88 = &LAB_02e65e20;
  local_90 = &LAB_02e65e14;
  auStack_80[0] = param_2;
  FUN_029e5bc4(param_1,&local_a0);
  pcVar1 = local_98;
  if (local_98 != (code *)0x0) {
    local_90 = (undefined1 *)0x0;
    local_88 = (undefined1 *)0x0;
    local_a0 = (undefined1 *)0x0;
    local_98 = (code *)0x0;
    (*pcVar1)(auStack_80);
  }
  return;
}


