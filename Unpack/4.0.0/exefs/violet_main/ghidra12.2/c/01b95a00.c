/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01b95a00; name: FUN_01b95a00
 */


void FUN_01b95a00(undefined1 *param_1)

{
  char local_48 [16];
  undefined8 local_38;
  undefined **local_30;
  undefined8 uStack_28;
  
  FUN_01b96000();
  FUN_01b9609c(local_48);
  if (local_48[0] == '\0') {
    *param_1 = 0;
    *(undefined8 *)(param_1 + 8) = 0;
  }
  else {
    *param_1 = 1;
    local_30 = &PTR_LAB_04525290;
    uStack_28 = local_38;
    FUN_00d73514(param_1 + 8,&local_30);
  }
  return;
}


