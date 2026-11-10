/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 025911a0; name: FUN_025911a0
 */


undefined8 FUN_025911a0(char *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 == '\x01') {
    uVar1 = FUN_02592c10(param_1 + 8);
  }
  else if (*param_1 == '\0') {
    uVar1 = FUN_02592bdc(*(undefined8 *)(param_1 + 8));
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


