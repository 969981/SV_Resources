/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


