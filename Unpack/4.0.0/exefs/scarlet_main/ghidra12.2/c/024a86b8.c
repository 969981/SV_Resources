/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 024a86b8; name: FUN_024a86b8
 */


void FUN_024a86b8(char *param_1)

{
  long *plVar1;
  undefined1 auStack_e0 [160];
  undefined8 local_40;
  undefined1 *local_38;
  undefined8 local_30;
  long *local_28;
  undefined1 auStack_8 [8];
  
  plVar1 = *(long **)(param_1 + 0x128);
  if (plVar1 != (long *)0x0) {
    local_40 = 10;
    local_30 = 0;
    local_38 = auStack_e0;
    local_28 = plVar1;
    (**(code **)(*plVar1 + 0x18))();
    FUN_024a65bc(*(undefined8 *)(param_1 + 0x128),auStack_e0);
    (**(code **)(*local_28 + 0x20))();
    if (local_38 != (undefined1 *)0x0) {
      FUN_024a5ff8(auStack_e0,auStack_8);
    }
  }
  if (*(long *)(param_1 + 0x100) != 0) {
    FUN_024a6664(param_1 + 8,auStack_e0);
  }
  if (*param_1 != '\0') {
    *param_1 = '\0';
  }
  return;
}


