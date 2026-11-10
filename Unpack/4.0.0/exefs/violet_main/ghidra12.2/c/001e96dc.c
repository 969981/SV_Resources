/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001e96dc; name: FUN_001e96dc
 */


undefined8 FUN_001e96dc(char *param_1)

{
  char *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = getenv(param_1);
  if ((pcVar1 == (char *)0x0) || (*pcVar1 == '\0')) {
    return 0;
  }
  uVar2 = FUN_001ec328();
  return uVar2;
}


