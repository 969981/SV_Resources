/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02517a04; name: FUN_02517a04
 */


undefined1  [16] FUN_02517a04(char *param_1)

{
  undefined1 auVar1 [16];
  
  if (*param_1 == '\x01') {
    auVar1 = FUN_02517a78(param_1 + 8);
  }
  else if (*param_1 == '\0') {
    auVar1 = FUN_02517a40(*(undefined8 *)(param_1 + 8));
  }
  else {
    auVar1 = ZEXT816(0);
  }
  return auVar1;
}


