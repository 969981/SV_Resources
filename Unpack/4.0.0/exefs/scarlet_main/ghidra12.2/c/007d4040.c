/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007d4040; name: FUN_007d4040
 */


void FUN_007d4040(undefined8 param_1,long param_2,long param_3)

{
  int iVar1;
  ulong uVar2;
  ErrorResultVariant *this;
  undefined1 auStack_48 [16];
  int local_38 [4];
  undefined4 local_28 [2];
  
  if (param_3 == 0) {
    local_38[0] = 0x10407;
LAB_007d408c:
    this = (ErrorResultVariant *)((ulong)local_38 | 4);
  }
  else {
    if ((*(int *)(param_2 + 0x68) == 1) ||
       (uVar2 = FUN_0078cdf4(*(undefined8 *)(param_2 + 0xb8)), (uVar2 & 1) != 0)) {
      local_38[0] = 0x10408;
      goto LAB_007d408c;
    }
    if (*(char *)(param_2 + 0x780) != '\0') {
      iVar1 = FUN_0078cdcc(*(undefined8 *)(param_2 + 0xb8));
      if (iVar1 != 0) {
        (**(code **)(**(long **)(param_2 + 0xb8) + 0x10))(*(long **)(param_2 + 0xb8),1);
      }
      FUN_007debb8(local_38,*(undefined8 *)(param_2 + 0xb8),param_3);
      if (local_38[0] == 0) {
        FUN_0078cd58(*(undefined8 *)(param_2 + 0xb8),0);
      }
      goto LAB_007d40a4;
    }
    FUN_0078cac8(param_3);
    FUN_0078cb14(param_3);
    this = (ErrorResultVariant *)((ulong)local_38 | 4);
    local_28[0] = 0;
    local_38[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant(this,(Result *)local_28);
    FUN_00cbd7c0(auStack_48,local_38);
    FUN_0078cb28(param_3,auStack_48);
    local_38[0] = 0;
  }
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(this,(Result *)local_28);
LAB_007d40a4:
  FUN_00cbd7c0(param_1,local_38);
  return;
}


