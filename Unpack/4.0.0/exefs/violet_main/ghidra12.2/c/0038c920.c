/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0038c920; name: FUN_0038c920
 */


void FUN_0038c920(char *param_1)

{
  char *pcVar1;
  
  pcVar1 = getenv(param_1);
  if (pcVar1 == (char *)0x0) {
    return;
  }
  FUN_0038ccb0();
  return;
}


