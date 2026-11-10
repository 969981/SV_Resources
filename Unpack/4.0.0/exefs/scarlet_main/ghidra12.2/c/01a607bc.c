/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a607bc; name: FUN_01a607bc
 */


void FUN_01a607bc(undefined8 param_1,long param_2)

{
  int *piVar1;
  undefined4 local_50 [4];
  undefined1 auStack_40 [16];
  int local_30 [4];
  undefined4 local_18 [2];
  
  piVar1 = *(int **)(param_2 + 0xa8);
  if (*piVar1 == 1) {
    local_30[0] = 0x10408;
    local_50[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_30 | 4),(Result *)local_50);
  }
  else {
    if (*(int *)(param_2 + 0xb0) != 0) {
      local_30[0] = 0;
      local_50[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_30 | 4),(Result *)local_50);
      FUN_018ff39c(param_2 + 0x120,local_30);
      FUN_0078cac8(*(undefined8 *)(param_2 + 0xa8));
      piVar1 = *(int **)(param_2 + 0xa8);
      *(undefined4 *)(param_2 + 0xb0) = 0;
    }
    FUN_007cf654(local_30,*(undefined8 *)(param_2 + 0x38),piVar1);
    if (local_30[0] == 0) {
      FUN_0078cd58(*(undefined8 *)(param_2 + 0x38),0);
      *(undefined4 *)(param_2 + 0xb0) = 5;
    }
    local_50[0] = 0;
    local_18[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_18);
    FUN_00cbd7c0(auStack_40,local_50);
    *(undefined4 *)(param_2 + 0x118) = 1;
  }
  FUN_00cbd7c0(param_1,local_30);
  return;
}


