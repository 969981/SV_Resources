/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c6a164; name: FUN_01c6a164
 */


void FUN_01c6a164(undefined1 *param_1)

{
  undefined8 local_48;
  undefined8 uStack_40;
  char local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  FUN_01c6c4a4(&local_48);
  if (local_38 == '\0') {
    *param_1 = 0;
    *(undefined8 *)(param_1 + 8) = 0;
  }
  else {
    *param_1 = 1;
    local_30 = local_48;
    uStack_28 = uStack_40;
    FUN_01c6c578(param_1 + 8,&local_30);
  }
  return;
}


