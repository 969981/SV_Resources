/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0259080c; name: FUN_0259080c
 */


undefined8 FUN_0259080c(char *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 == '\x01') {
    uVar1 = FUN_02592b30(param_1 + 8);
  }
  else if (*param_1 == '\0') {
    uVar1 = FUN_02592afc(*(undefined8 *)(param_1 + 8));
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


