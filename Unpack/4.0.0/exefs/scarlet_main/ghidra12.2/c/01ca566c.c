/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ca566c; name: FUN_01ca566c
 */


void FUN_01ca566c(undefined8 *param_1,undefined1 *param_2)

{
  ulong uVar1;
  undefined8 local_30;
  undefined8 uStack_28;
  
  uVar1 = FUN_01ca502c();
  if ((uVar1 & 1) == 0) {
    switch(*param_2) {
    case 0:
    case 1:
      FUN_01ca5768(param_1,*(undefined8 *)(param_2 + 8));
      return;
    case 2:
      local_30 = 0;
      uStack_28 = 0;
      FUN_01ca5894(&local_30,param_2 + 8);
      *param_1 = 0;
      param_1[1] = 0;
      FUN_01ca4d0c(param_1,&local_30);
      FUN_01ca4858(&local_30);
      return;
    case 3:
      *param_1 = 0;
      param_1[1] = 0;
      FUN_01ca5894(param_1,param_2 + 8);
      return;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


