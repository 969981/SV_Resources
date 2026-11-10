/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


