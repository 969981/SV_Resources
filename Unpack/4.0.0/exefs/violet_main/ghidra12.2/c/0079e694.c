/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0079e694; name: FUN_0079e694
 */


void FUN_0079e694(int *param_1,long param_2,byte param_3)

{
  bool bVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [16];
  undefined4 local_58 [4];
  undefined4 local_48 [2];
  
  FUN_007a0058(param_2,*(undefined8 *)(param_2 + 0x160));
  if (*param_1 != 0) {
    return;
  }
  if ((*(int *)(param_2 + 0x1148) != 0) && (*(int *)(param_2 + 0x1118) != 1)) {
    FUN_0078cac8(param_2 + 0x1118);
    *(undefined4 *)(param_2 + 0x1148) = 0;
  }
  if (*(int *)(param_2 + 0x288) == 2) {
    FUN_007ad778(local_58,*(undefined8 *)(param_2 + 0x160),param_2 + 0x1118);
    FUN_018ff39c(param_1,local_58);
    if (*param_1 != 0) {
      return;
    }
    uVar3 = *(undefined8 *)(param_2 + 0x160);
  }
  else {
    if (*(int *)(param_2 + 0x288) != 1) {
      local_58[0] = 0;
      local_48[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_58 | 4),(Result *)local_48);
      FUN_018ff39c(param_1,local_58);
      FUN_0078cb14(param_2 + 0x1118);
      FUN_00cbd7c0(auStack_68,param_1);
      FUN_0078cb28(param_2 + 0x1118,auStack_68);
      goto LAB_0079e814;
    }
    uVar3 = *(undefined8 *)(param_2 + 0x148);
    uVar2 = FUN_00796784(param_2 + 0xb8);
    if ((uVar2 & 1) == 0) {
LAB_0079e7e0:
      bVar1 = false;
    }
    else {
      uVar2 = FUN_00796784(param_2 + 0x98);
      if (((uVar2 & 1) == 0) ||
         (uVar2 = FUN_007967e8(param_2 + 0x98,param_2 + 0xb8), (uVar2 & 1) == 0)) goto LAB_0079e7e0;
      bVar1 = *(char *)(param_2 + 0x248) != '\0';
    }
    FUN_007ac52c(local_58,uVar3,param_2 + 0x1118,bVar1);
    FUN_018ff39c(param_1,local_58);
    if (*param_1 != 0) {
      return;
    }
    uVar3 = *(undefined8 *)(param_2 + 0x148);
  }
  FUN_0078cd58(uVar3,0);
LAB_0079e814:
  *(undefined4 *)(param_2 + 0x1148) = 6;
  *(byte *)(param_2 + 0x284) = param_3 & 1;
  if (*(char *)(param_2 + 0x1168) != '\0') {
    *(char *)(param_2 + 0x1168) = '\0';
  }
  return;
}


