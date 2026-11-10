/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01af575c; name: FUN_01af575c
 */


void FUN_01af575c(undefined8 *param_1,undefined1 *param_2)

{
  ulong uVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined1 auStack_30 [16];
  
  uVar1 = FUN_019ac530();
  if ((uVar1 & 1) == 0) {
    switch(*param_2) {
    case 0:
    case 1:
      FUN_01af5864(auStack_30,*(undefined8 *)(param_2 + 8));
      FUN_01af5990(param_1,auStack_30);
      FUN_01af51b0(auStack_30);
      break;
    case 2:
      local_40 = 0;
      uStack_38 = 0;
      FUN_01af59e0(&local_40,param_2 + 8);
      *param_1 = 0;
      param_1[1] = 0;
      FUN_01af4df0(param_1,&local_40);
      FUN_01af4738(&local_40);
      break;
    case 3:
      *param_1 = 0;
      param_1[1] = 0;
      FUN_01af59e0(param_1,param_2 + 8);
      return;
    default:
      goto switchD_01af57b0_default;
    }
  }
  else {
switchD_01af57b0_default:
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}


