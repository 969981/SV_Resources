/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 025f6d90; name: FUN_025f6d90
 */


void FUN_025f6d90(undefined1 *param_1,long param_2)

{
  undefined8 local_40;
  undefined8 uStack_38;
  
  if (param_2 == 0) {
    local_40 = 0;
    uStack_38 = 0;
  }
  else {
    FUN_025f6f9c(&local_40);
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  *param_1 = 2;
  *(undefined8 *)(param_1 + 8) = 0;
  FUN_025f70fc(param_1 + 8,&local_40);
  if (param_2 == 0) {
    FUN_025f6e8c(&local_40);
  }
  else {
    FUN_025f6e8c(&local_40);
  }
  return;
}


