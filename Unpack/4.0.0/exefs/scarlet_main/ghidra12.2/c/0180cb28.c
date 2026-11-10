/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0180cb28; name: FUN_0180cb28
 */


void FUN_0180cb28(undefined8 *param_1,char *param_2)

{
  char cVar1;
  ulong uVar2;
  
  uVar2 = FUN_01797e08();
  if ((uVar2 & 1) == 0) {
    cVar1 = *param_2;
    if (cVar1 == '\x02') {
      *param_1 = 0;
      param_1[1] = 0;
      FUN_014e02ac(param_1,param_2 + 8);
      return;
    }
    if ((cVar1 == '\x01') || (cVar1 == '\0')) {
      FUN_0180cb98(param_1,*(undefined8 *)(param_2 + 8));
      return;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


