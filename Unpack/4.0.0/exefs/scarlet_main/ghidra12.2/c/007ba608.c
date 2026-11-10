/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007ba608; name: FUN_007ba608
 */


void FUN_007ba608(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  int local_50 [4];
  int local_40 [4];
  undefined4 local_28 [2];
  
  if (*(char *)(param_2 + 0x10) == '\0') {
    local_40[0] = 0x2c09;
    local_50[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_50);
    goto LAB_007ba6e8;
  }
  local_40[0] = 0;
  local_50[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_50);
  if (*(char *)(*(long *)(param_2 + 0x58) + 0x1190) == '\0') {
LAB_007ba6a8:
    uVar1 = *(undefined8 *)(param_2 + 0x18);
  }
  else {
    if (*(char *)(param_2 + 0x110) != '\0') {
      FUN_007ba778(local_50,param_2,*(undefined8 *)(param_2 + 0x108),param_3);
      FUN_018ff39c(local_40,local_50);
      local_28[0] = 0;
      local_50[0] = 0x2c09;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_28);
      if (local_40[0] != local_50[0]) {
        if (local_40[0] == 0) {
          *(undefined1 *)(param_2 + 0x110) = 0;
        }
        goto LAB_007ba6e8;
      }
      goto LAB_007ba6a8;
    }
    FUN_007ba778(local_50,param_2,*(undefined8 *)(param_2 + 0x18),param_3);
    FUN_018ff39c(local_40,local_50);
    local_28[0] = 0;
    local_50[0] = 0x2c09;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_28);
    if (local_40[0] != local_50[0]) {
      if (local_40[0] == 0) {
        *(undefined1 *)(param_2 + 0x110) = 1;
      }
      goto LAB_007ba6e8;
    }
    uVar1 = *(undefined8 *)(param_2 + 0x108);
  }
  FUN_007ba778(local_50,param_2,uVar1,param_3);
  FUN_018ff39c(local_40,local_50);
LAB_007ba6e8:
  FUN_00cbd7c0(param_1,local_40);
  return;
}


