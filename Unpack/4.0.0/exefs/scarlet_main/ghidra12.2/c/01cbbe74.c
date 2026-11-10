/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01cbbe74; name: FUN_01cbbe74
 */


void FUN_01cbbe74(undefined8 *param_1,undefined1 *param_2)

{
  ulong uVar1;
  undefined8 local_30;
  undefined8 uStack_28;
  
  uVar1 = FUN_01cbb834();
  if ((uVar1 & 1) == 0) {
    switch(*param_2) {
    case 0:
    case 1:
      FUN_01cbbf70(param_1,*(undefined8 *)(param_2 + 8));
      return;
    case 2:
      local_30 = 0;
      uStack_28 = 0;
      FUN_01cbc09c(&local_30,param_2 + 8);
      *param_1 = 0;
      param_1[1] = 0;
      FUN_01cbb514(param_1,&local_30);
      FUN_01cbae28(&local_30);
      return;
    case 3:
      *param_1 = 0;
      param_1[1] = 0;
      FUN_01cbc09c(param_1,param_2 + 8);
      return;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


