/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014c8f10; name: FUN_014c8f10
 */


void FUN_014c8f10(undefined8 param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined1 *local_a0;
  code *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  undefined8 auStack_80 [12];
  
  auStack_80[0] = *param_2;
  local_a0 = &LAB_00d74f2c;
  local_98 = FUN_00a92a78;
  local_90 = &LAB_00a92a7c;
  local_88 = &LAB_00a92a88;
  FUN_014c8f84(param_1,&local_a0);
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


