/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 022cda28; name: FUN_022cda28
 */


undefined1  [16] FUN_022cda28(char *param_1)

{
  undefined1 auVar1 [16];
  undefined8 local_40;
  undefined8 uStack_38;
  
  if (*param_1 == '\x01') {
    auVar1 = FUN_022cdac0(param_1 + 8);
  }
  else if (*param_1 == '\0') {
    auVar1 = FUN_022cda78(*(undefined8 *)(param_1 + 8));
  }
  else {
    FUN_01667884(&local_40);
    auVar1._8_8_ = uStack_38;
    auVar1._0_8_ = local_40;
  }
  return auVar1;
}


