/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0271736c; name: FUN_0271736c
 */


void FUN_0271736c(undefined8 param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined1 *local_a0;
  code *local_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  local_80 = *param_2;
  uStack_78 = param_2[1];
  local_a0 = &LAB_027174ac;
  local_98 = FUN_02bb4508;
  local_90 = &LAB_02bb450c;
  puStack_88 = &LAB_02bb4518;
  FUN_027173e0(param_1,&local_a0);
  pcVar1 = local_98;
  if (local_98 != (code *)0x0) {
    local_90 = (undefined1 *)0x0;
    puStack_88 = (undefined1 *)0x0;
    local_a0 = (undefined1 *)0x0;
    local_98 = (code *)0x0;
    (*pcVar1)(&local_80);
  }
  return;
}


