/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01cf45d0; name: FUN_01cf45d0
 */


void FUN_01cf45d0(undefined1 *param_1)

{
  char local_48 [8];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  FUN_01cf48b4(local_48);
  if (local_48[0] == '\0') {
    *param_1 = 0;
    *(undefined8 *)(param_1 + 8) = 0;
  }
  else {
    *param_1 = 1;
    local_30 = local_40;
    uStack_28 = uStack_38;
    FUN_01cf4904(param_1 + 8,&local_30);
  }
  return;
}


