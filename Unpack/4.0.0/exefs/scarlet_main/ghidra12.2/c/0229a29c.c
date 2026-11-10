/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0229a29c; name: FUN_0229a29c
 */


void FUN_0229a29c(void *param_1,undefined1 *param_2)

{
  switch(*param_2) {
  case 0:
    FUN_0229a6e0(param_1,*(undefined8 *)(param_2 + 8));
    return;
  case 1:
    FUN_0229a73c(param_1,param_2 + 8);
    return;
  case 2:
    FUN_0229a79c(param_1,param_2 + 8);
    return;
  case 3:
    FUN_0229a808(param_1,param_2 + 8);
    return;
  default:
    memset(param_1,0,0x120);
    FUN_0229a214(param_1);
    *(undefined1 *)((long)param_1 + 0x110) = 0;
    return;
  }
}


