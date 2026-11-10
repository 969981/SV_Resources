/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018bc680; name: FUN_018bc680
 */


void FUN_018bc680(undefined8 param_1,long param_2)

{
  long lVar1;
  char local_38 [8];
  long local_30;
  undefined1 auStack_28 [24];
  
  local_38[0] = '\0';
  local_30 = param_2;
  FUN_018bc870(param_1,local_38);
  lVar1 = local_30;
  if (local_38[0] == '\x01') {
    local_30 = 0;
    if (lVar1 != 0) {
      FUN_01a97610(auStack_28);
    }
  }
  return;
}


