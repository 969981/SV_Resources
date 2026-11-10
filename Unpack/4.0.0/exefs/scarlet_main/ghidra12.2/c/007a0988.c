/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007a0988; name: FUN_007a0988
 */


void FUN_007a0988(undefined8 param_1,long param_2,long param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  ulong uVar2;
  int *piVar3;
  int local_68 [4];
  int local_58 [4];
  undefined4 local_48 [2];
  
  FUN_007a0058(local_58,param_2,*(undefined8 *)(param_2 + 0x138));
  if (local_58[0] == 0) {
    if ((param_3 == 0) || (param_4 == 0)) {
      local_68[0] = 0x10407;
    }
    else {
      lVar1 = param_2 + 0xb8;
      uVar2 = FUN_00796784(lVar1);
      if ((uVar2 & 1) == 0) {
LAB_007a0a04:
        uVar2 = FUN_00796784(lVar1);
        if ((uVar2 & 1) != 0) {
          uVar2 = FUN_00796784(param_2 + 0x98);
          if (((uVar2 & 1) != 0) && (uVar2 = FUN_007967e8(param_2 + 0x98,lVar1), (uVar2 & 1) == 0))
          goto LAB_007a0aec;
        }
        if ((*(int *)(param_2 + 0x1148) != 0) && (*(int *)(param_2 + 0x1118) != 1)) {
          FUN_0078cac8(param_2 + 0x1118);
          *(undefined4 *)(param_2 + 0x1148) = 0;
        }
        FUN_0079af14(param_2);
        FUN_007adbec(local_68,*(undefined8 *)(param_2 + 0x138),param_2 + 0x1118,param_3,param_4,
                     param_5);
        FUN_018ff39c(local_58,local_68);
        if (local_58[0] == 0) {
          FUN_0078cd58(*(undefined8 *)(param_2 + 0x138),0);
          *(undefined4 *)(param_2 + 0x1148) = 1;
        }
        goto LAB_007a09c4;
      }
      uVar2 = FUN_00796784(param_2 + 0x98);
      if (((uVar2 & 1) == 0) || (uVar2 = FUN_007967e8(param_2 + 0x98,lVar1), (uVar2 & 1) == 0))
      goto LAB_007a0a04;
LAB_007a0aec:
      local_68[0] = 0x10408;
    }
    local_48[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_68 | 4),(Result *)local_48);
    piVar3 = local_68;
  }
  else {
LAB_007a09c4:
    piVar3 = local_58;
  }
  FUN_00cbd7c0(param_1,piVar3);
  return;
}


