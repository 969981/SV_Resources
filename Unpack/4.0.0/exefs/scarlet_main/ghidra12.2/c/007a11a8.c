/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007a11a8; name: FUN_007a11a8
 */


void FUN_007a11a8(undefined8 param_1,long param_2,long param_3,undefined4 param_4,undefined4 param_5
                 ,undefined8 param_6)

{
  int *piVar1;
  int local_60 [4];
  int local_50 [4];
  undefined4 local_38 [2];
  
  piVar1 = local_60;
  FUN_007a0058(local_50,param_2,*(undefined8 *)(param_2 + 0x150));
  if (local_50[0] == 0) {
    if (param_3 == 0) {
      local_60[0] = 0x10407;
      local_38[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_60 | 4),(Result *)local_38);
      goto LAB_007a11ec;
    }
    if ((*(int *)(param_2 + 0x1148) != 0) && (*(int *)(param_2 + 0x1118) != 1)) {
      FUN_0078cac8(param_2 + 0x1118);
      *(undefined4 *)(param_2 + 0x1148) = 0;
    }
    FUN_007abaa4(local_60,*(undefined8 *)(param_2 + 0x150),param_2 + 0x1118,param_3,param_4,param_5,
                 param_6);
    FUN_018ff39c(local_50,local_60);
    if (local_50[0] == 0) {
      FUN_0078cd58(*(undefined8 *)(param_2 + 0x150),0);
      *(undefined4 *)(param_2 + 0x1148) = 4;
    }
  }
  piVar1 = local_50;
LAB_007a11ec:
  FUN_00cbd7c0(param_1,piVar1);
  return;
}


