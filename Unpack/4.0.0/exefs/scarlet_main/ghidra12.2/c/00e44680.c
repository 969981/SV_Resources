/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e44680; name: FUN_00e44680
 */


void FUN_00e44680(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_28;
  undefined7 uStack_27;
  char local_8 [8];
  
  puVar2 = *(undefined8 **)(param_1 + 0x2d0);
  if (puVar2 == (undefined8 *)0x0) {
    local_50 = 0;
  }
  else {
    local_50 = puVar2[3];
  }
  local_30 = *puVar2;
  local_40 = &local_38;
  uStack_48 = param_2;
  local_38 = local_50;
  if (*(int *)(param_1 + 0x2fc) == 1) {
    FUN_00e44788(&local_28,*(undefined8 *)(puVar2[2] + 0x30),&local_50);
    *(undefined1 *)(param_1 + 0x2f8) = local_28;
  }
  else if (*(int *)(param_1 + 0x2fc) == 2) {
    plVar1 = *(long **)(*(long *)(puVar2[2] + 0x30) + 0x10);
    if (plVar1 == (long *)0x0) {
      local_8[0] = *PTR_DAT_047dafa8;
    }
    else {
      (**(code **)(*plVar1 + 0x40))
                (local_8,plVar1,*(undefined8 *)(*(long *)(puVar2[2] + 0x30) + 0x38),&local_50);
    }
    if (local_8[0] != '\x03') {
      *(undefined4 *)(param_1 + 0x2fc) = 0;
      FUN_00e448d4(&local_28,param_1 + 0x200);
      if ((long *)CONCAT71(uStack_27,local_28) != (long *)0x0) {
        (**(code **)(*(long *)CONCAT71(uStack_27,local_28) + 0x38))();
        if ((long *)CONCAT71(uStack_27,local_28) != (long *)0x0) {
          (**(code **)(*(long *)CONCAT71(uStack_27,local_28) + 0x18))();
        }
      }
    }
  }
  return;
}


