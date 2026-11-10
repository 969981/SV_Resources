/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001cd1ec; name: FUN_001cd1ec
 */


char * FUN_001cd1ec(long *param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = FUN_001e0a34(*param_1);
  if ((iVar1 == 0) || (pcVar2 = (char *)(*param_1 + param_3), *pcVar2 != ':')) {
    pcVar2 = (char *)0x0;
  }
  else {
    do {
      pcVar2 = pcVar2 + 1;
    } while (*pcVar2 == ' ');
  }
  return pcVar2;
}


