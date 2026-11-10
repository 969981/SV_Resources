/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007ebe58; name: FUN_007ebe58
 */


void FUN_007ebe58(undefined8 param_1,long param_2,undefined8 param_3,uint param_4)

{
  int *piVar1;
  int local_58 [4];
  int local_48 [4];
  undefined4 local_38 [2];
  
  FUN_00794698(local_48,*(undefined8 *)(param_2 + 0x720),*(undefined8 *)(param_2 + 0x28),0x2000,5,
               0xc,5);
  FUN_007947f0(local_58,*(undefined8 *)(param_2 + 0x720),param_3,param_4);
  FUN_018ff39c(local_48,local_58);
  if (local_48[0] == 0) {
    FUN_007948fc(local_58,*(undefined8 *)(param_2 + 0x720),(uint *)(param_2 + 0x30));
    FUN_018ff39c(local_48,local_58);
    FUN_007947cc(*(undefined8 *)(param_2 + 0x720));
    if (local_48[0] == 0) {
      if (*(uint *)(param_2 + 0x30) < param_4) {
        local_58[0] = 0;
      }
      else {
        local_58[0] = 0x2c89;
      }
      local_38[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_58 | 4),(Result *)local_38);
      piVar1 = local_58;
    }
    else {
      piVar1 = local_48;
    }
  }
  else {
    FUN_007947cc(*(undefined8 *)(param_2 + 0x720));
    piVar1 = local_48;
  }
  FUN_00cbd7c0(param_1,piVar1);
  return;
}


