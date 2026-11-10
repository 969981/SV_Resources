/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00395e80; name: FUN_00395e80
 */


ulong FUN_00395e80(long *param_1,char param_2,ulong param_3)

{
  char *pcVar1;
  ulong uVar2;
  
  if (param_1[1] == 0) {
    return 0xffffffffffffffff;
  }
  uVar2 = param_1[1] - 1;
  if (param_3 <= uVar2) {
    uVar2 = param_3;
  }
  if (*(char *)(*param_1 + uVar2) == param_2) {
    return uVar2;
  }
  do {
    if (uVar2 == 0) {
      return 0xffffffffffffffff;
    }
    pcVar1 = (char *)(*param_1 + -1 + uVar2);
    uVar2 = uVar2 - 1;
  } while (*pcVar1 != param_2);
  return uVar2;
}


