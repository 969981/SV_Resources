/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007cd6f8; name: FUN_007cd6f8
 */


void FUN_007cd6f8(undefined8 param_1,long param_2,undefined8 param_3)

{
  int *piVar1;
  undefined4 local_38 [4];
  undefined4 local_28 [2];
  
  piVar1 = *(int **)(param_2 + 0xa8);
  if ((*piVar1 == 1) || (*(char *)(param_2 + 0x470) == '\0')) {
    local_38[0] = 0x10408;
    local_28[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_28);
    FUN_00cbd7c0(param_1,local_38);
    return;
  }
  if (*(int *)(param_2 + 0xb0) != 0) {
    local_38[0] = 0;
    local_28[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_28);
    FUN_018ff39c(param_2 + 0x120,local_38);
    FUN_0078cac8(*(undefined8 *)(param_2 + 0xa8));
    piVar1 = *(int **)(param_2 + 0xa8);
    *(undefined4 *)(param_2 + 0xb0) = 0;
  }
  FUN_007d4570(param_1,*(undefined8 *)(param_2 + 0x10),0,piVar1,param_3);
  return;
}


