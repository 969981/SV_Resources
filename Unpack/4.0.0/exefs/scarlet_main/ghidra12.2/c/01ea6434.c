/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ea6434; name: FUN_01ea6434
 */


void FUN_01ea6434(undefined4 param_1,undefined4 *param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined1 *local_a0;
  code *local_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined4 *local_80;
  undefined4 *puStack_78;
  undefined8 local_70;
  undefined4 local_4;
  
  local_4 = param_1;
  if (*(long *)(param_2 + 0x88) == 0) {
    local_80 = &local_4;
    local_a0 = &LAB_02e65838;
    local_98 = FUN_02e65878;
    local_90 = &LAB_02e6587c;
    puStack_88 = &LAB_02e65888;
    FUN_00c837c0(param_2,param_2 + 0x2e,param_3,&local_a0);
    pcVar1 = local_98;
  }
  else {
    puStack_78 = &local_4;
    local_a0 = &LAB_029e9340;
    local_98 = FUN_02e6580c;
    local_90 = &LAB_02e65810;
    puStack_88 = &LAB_02e65824;
    local_80 = param_2;
    local_70 = param_3;
    FUN_00c837c0(param_2,param_2 + 0x2e,param_3,&local_a0);
    pcVar1 = local_98;
  }
  if (pcVar1 != (code *)0x0) {
    puStack_88 = (undefined1 *)0x0;
    local_90 = (undefined1 *)0x0;
    local_a0 = (undefined1 *)0x0;
    local_98 = (code *)0x0;
    (*pcVar1)(&local_80);
  }
  return;
}


