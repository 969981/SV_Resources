/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001ce684; name: FUN_001ce684
 */


long FUN_001ce684(undefined1 *param_1,undefined8 *param_2)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  
  iVar2 = FUN_001cb28c(*param_1);
  if (iVar2 != 0) {
    iVar2 = 0;
    pcVar1 = param_1 + 1;
    do {
      pcVar4 = pcVar1;
      iVar2 = (uint)(byte)pcVar4[-1] + iVar2 * 10 + -0x30;
      iVar3 = FUN_001cb28c(*pcVar4);
      pcVar1 = pcVar4 + 1;
    } while (iVar3 != 0);
    if ((iVar2 != 0) && (*pcVar4 == '$')) {
      *param_2 = pcVar4 + 1;
      return (long)iVar2;
    }
  }
  return 0;
}


