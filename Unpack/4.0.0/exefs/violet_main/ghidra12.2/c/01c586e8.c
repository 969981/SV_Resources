/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c586e8; name: FUN_01c586e8
 */


void FUN_01c586e8(undefined1 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 local_8;
  
  uVar1 = 0x80;
  if (DAT_04815c38 == '\0') {
    uVar1 = 0;
  }
  local_8 = FUN_01c59114(param_2,uVar1,DAT_04815c40);
  *param_1 = 1;
  FUN_0103155c(param_1 + 8,&local_8);
  return;
}


