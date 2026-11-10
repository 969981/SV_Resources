/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007d0994; name: FUN_007d0994
 */


void FUN_007d0994(long param_1)

{
  int *piVar1;
  undefined4 local_30 [4];
  undefined4 local_18 [2];
  
  if (*(int **)(param_1 + 0x58) != (int *)0x0) {
    if (**(int **)(param_1 + 0x58) == 1) {
      FUN_0078cc00();
    }
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  piVar1 = (int *)(param_1 + 0x60);
  if (*piVar1 == 1) {
    FUN_0078cc00(piVar1);
  }
  FUN_0078cac8(piVar1);
  *(undefined1 *)(param_1 + 0x90) = 0;
  local_30[0] = 0;
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_30 | 4),(Result *)local_18);
  FUN_018ff39c(param_1 + 0x94,local_30);
  return;
}


