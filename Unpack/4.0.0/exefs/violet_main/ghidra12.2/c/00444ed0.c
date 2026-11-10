/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00444ed0; name: FUN_00444ed0
 */


char * FUN_00444ed0(char *param_1)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = FUN_0047efa0();
  if (iVar1 == 0) {
    pcVar2 = getenv(param_1);
    return pcVar2;
  }
  return (char *)0x0;
}


