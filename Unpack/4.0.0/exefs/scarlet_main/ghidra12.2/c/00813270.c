/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00813270; name: FUN_00813270
 */


void FUN_00813270(long param_1)

{
  int local_38 [4];
  undefined4 local_28 [2];
  
  if (*(char *)(param_1 + 0x7c0) != '\0') {
    if ((*(int *)(param_1 + 0x700) != 1) && (*(int *)(param_1 + 0x700) - 2U < 3)) {
      FUN_00cbd7c0(local_38,param_1 + 0x704);
      if (local_38[0] != 0) {
        FUN_00cbd7c0(local_38,param_1 + 0x704);
        FUN_018ff39c(param_1 + 0x730,local_38);
        *(undefined1 *)(param_1 + 0x7c0) = 5;
        local_38[0] = 0x6487;
        local_28[0] = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_28);
        if (*(int *)(param_1 + 0x730) == local_38[0]) {
          *(undefined1 *)(param_1 + 0x869) = 1;
        }
      }
    }
    FUN_0081334c(param_1);
    FUN_0081358c(param_1);
    FUN_00813944(param_1);
    FUN_00813b0c(param_1);
    FUN_00813bc4(param_1);
    FUN_00813d38(param_1);
  }
  return;
}


