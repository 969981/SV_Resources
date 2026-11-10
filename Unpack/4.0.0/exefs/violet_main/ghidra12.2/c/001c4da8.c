/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001c4da8; name: FUN_001c4da8
 */


ulong FUN_001c4da8(char *param_1,char *param_2)

{
  size_t sVar1;
  size_t sVar2;
  ulong uVar3;
  
  sVar1 = strlen(param_1);
  sVar2 = strlen(param_2);
  if (sVar2 < sVar1) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_001e0990(param_1,param_2 + (sVar2 - sVar1));
    if ((int)uVar3 != 0) {
      if (sVar2 == sVar1) {
        uVar3 = 1;
      }
      else {
        uVar3 = (ulong)((param_2 + (sVar2 - sVar1))[-1] == '.');
      }
    }
  }
  return uVar3;
}


