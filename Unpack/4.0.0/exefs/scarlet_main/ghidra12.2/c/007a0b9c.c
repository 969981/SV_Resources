/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007a0b9c; name: FUN_007a0b9c
 */


void FUN_007a0b9c(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  int *piVar3;
  int local_58 [4];
  int local_48 [4];
  undefined4 local_38 [2];
  
  FUN_007a0058(local_48,param_2,*(undefined8 *)(param_2 + 0x140));
  if (local_48[0] == 0) {
    if (param_3 == 0) {
      local_58[0] = 0x10407;
    }
    else {
      lVar1 = param_2 + 0xb8;
      uVar2 = FUN_00796784(lVar1);
      if ((uVar2 & 1) == 0) {
LAB_007a0c20:
        uVar2 = FUN_00796784(lVar1);
        if ((uVar2 & 1) != 0) {
          uVar2 = FUN_00796784(param_2 + 0x98);
          if (((uVar2 & 1) != 0) && (uVar2 = FUN_007967e8(param_2 + 0x98,lVar1), (uVar2 & 1) == 0))
          goto LAB_007a0cc8;
        }
        if ((*(int *)(param_2 + 0x1148) != 0) && (*(int *)(param_2 + 0x1118) != 1)) {
          FUN_0078cac8(param_2 + 0x1118);
          *(undefined4 *)(param_2 + 0x1148) = 0;
        }
        FUN_0079af14(param_2);
        FUN_007a8c4c(local_58,*(undefined8 *)(param_2 + 0x140),param_2 + 0x1118,param_3);
        FUN_018ff39c(local_48,local_58);
        if (local_48[0] == 0) {
          FUN_0078cd58(*(undefined8 *)(param_2 + 0x140),0);
          *(undefined4 *)(param_2 + 0x1148) = 2;
        }
        goto LAB_007a0bcc;
      }
      uVar2 = FUN_00796784(param_2 + 0x98);
      if (((uVar2 & 1) == 0) || (uVar2 = FUN_007967e8(param_2 + 0x98,lVar1), (uVar2 & 1) == 0))
      goto LAB_007a0c20;
LAB_007a0cc8:
      local_58[0] = 0x10408;
    }
    local_38[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_58 | 4),(Result *)local_38);
    piVar3 = local_58;
  }
  else {
LAB_007a0bcc:
    piVar3 = local_48;
  }
  FUN_00cbd7c0(param_1,piVar3);
  return;
}


