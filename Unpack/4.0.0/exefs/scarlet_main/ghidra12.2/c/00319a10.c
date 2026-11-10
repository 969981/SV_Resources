/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00319a10; name: FUN_00319a10
 */


void FUN_00319a10(long *param_1,code *param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1[2];
  if (uVar1 != 0) {
    uVar2 = 0;
    do {
      if (*(long *)(param_1[1] + uVar2 * 8) != 0) {
        (*param_2)(param_3,*(undefined4 *)(*param_1 + uVar2 * 4));
        uVar1 = param_1[2];
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar1);
  }
  return;
}


