/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00ca1504; name: FUN_00ca1504
 */


void FUN_00ca1504(undefined4 *param_1,undefined8 *param_2)

{
  code *pcVar1;
  code *local_a0;
  code *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  undefined8 auStack_80 [12];
  
  auStack_80[0] = *(undefined8 *)(param_1 + 2);
  local_a0 = FUN_02e50f18;
  local_98 = FUN_02e5103c;
  local_90 = &LAB_02e51040;
  local_88 = &LAB_02e5104c;
  (**(code **)(*(long *)*param_2 + 0x68))
            (*param_1,(long *)*param_2,*(undefined1 *)(param_1 + 1),&local_a0);
  pcVar1 = local_98;
  if (local_98 != (code *)0x0) {
    local_90 = (undefined1 *)0x0;
    local_88 = (undefined1 *)0x0;
    local_a0 = (code *)0x0;
    local_98 = (code *)0x0;
    (*pcVar1)(auStack_80);
  }
  return;
}


