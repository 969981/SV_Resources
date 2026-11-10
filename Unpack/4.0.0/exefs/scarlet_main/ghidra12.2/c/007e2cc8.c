/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007e2cc8; name: FUN_007e2cc8
 */


long FUN_007e2cc8(long *param_1,ulong param_2,long param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  undefined4 local_78 [8];
  undefined1 auStack_58 [16];
  undefined4 local_48 [4];
  long local_38;
  long local_28;
  
  if ((param_2 & 1) == 0) {
    if (param_3 == 0) {
      return 0;
    }
  }
  else {
    if (param_3 == 0) {
      return 0;
    }
    if (param_1[0x13] != 0) {
      return 0;
    }
  }
  local_28 = param_3;
  uVar1 = FUN_00796784(param_4);
  if (((((uVar1 & 1) == 0) || (param_1[0x1b] == 0)) || (*(long *)(param_1[0x1e] + 0x28) == 0)) ||
     ((*(long *)(param_1[0x20] + 0x28) == 0 || (*(long *)(param_1[0x22] + 0x28) == 0)))) {
    return 0;
  }
  local_38 = (**(code **)(*param_1 + 0x20))(param_1);
  if (local_38 == 0) {
    return 0;
  }
  local_48[0] = 0;
  local_78[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_78);
  FUN_007e2e08(local_78,param_1[0x1e],&local_28,&local_38);
  FUN_018ff39c(local_48,local_78);
  lVar2 = param_1[0x20];
  FUN_00796868(local_78,param_4);
  FUN_007e3184(auStack_58,lVar2,local_78,&local_38);
  FUN_018ff39c(local_48,auStack_58);
  FUN_0284e3d4(local_78);
  if ((param_2 & 1) != 0) {
    param_1[0x13] = local_38;
  }
  uVar1 = FUN_007e1ac8(local_38,local_28,param_4);
  if ((uVar1 & 1) == 0) {
    local_38 = 0;
  }
  return local_38;
}


