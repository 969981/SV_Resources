/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01d04344; name: FUN_01d04344
 */


void FUN_01d04344(undefined8 *param_1,char *param_2)

{
  char cVar1;
  ulong uVar2;
  
  uVar2 = FUN_01d03334();
  if ((uVar2 & 1) == 0) {
    cVar1 = *param_2;
    if (cVar1 == '\x02') {
      *param_1 = 0;
      param_1[1] = 0;
      FUN_01d034b4(param_1,param_2 + 8);
      return;
    }
    if ((cVar1 == '\x01') || (cVar1 == '\0')) {
      FUN_01d04400(param_1,*(undefined8 *)(param_2 + 8));
      return;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


