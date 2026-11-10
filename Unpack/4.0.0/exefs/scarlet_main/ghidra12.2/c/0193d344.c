/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0193d344; name: FUN_0193d344
 */


void FUN_0193d344(undefined8 param_1,long param_2,long *param_3)

{
  undefined4 uVar1;
  int *piVar2;
  int *piVar3;
  int local_50 [4];
  undefined4 local_40 [4];
  undefined4 local_28 [2];
  
  piVar3 = local_50;
  local_50[0] = 0;
  local_40[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_40);
  if (param_3 == (long *)0x0) {
    local_40[0] = 0x10407;
  }
  else {
    uVar1 = (**(code **)(*param_3 + 0x50))(param_3);
    FUN_007cd510(local_40,param_2,uVar1);
    FUN_018ff39c(local_50,local_40);
    if (local_50[0] != 0) goto LAB_0193d488;
    piVar2 = *(int **)(param_2 + 0xa8);
    if ((*piVar2 != 1) && (*(char *)(param_2 + 0x470) != '\0')) {
      if (*(int *)(param_2 + 0xb0) != 0) {
        local_40[0] = 0;
        local_28[0] = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_28);
        FUN_018ff39c(param_2 + 0x120,local_40);
        FUN_0078cac8(*(undefined8 *)(param_2 + 0xa8));
        piVar2 = *(int **)(param_2 + 0xa8);
        *(undefined4 *)(param_2 + 0xb0) = 0;
      }
      FUN_007d030c(local_40,*(undefined8 *)(param_2 + 0x48),piVar2,param_3);
      FUN_018ff39c(local_50,local_40);
      if (local_50[0] == 0) {
        FUN_0078cd58(*(undefined8 *)(param_2 + 0x48),0);
        *(undefined4 *)(param_2 + 0xb0) = 3;
      }
      goto LAB_0193d488;
    }
    local_40[0] = 0x10408;
  }
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_28);
  piVar3 = local_40;
LAB_0193d488:
  FUN_00cbd7c0(param_1,piVar3);
  return;
}


