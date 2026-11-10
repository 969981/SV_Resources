/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007fb300; name: FUN_007fb300
 */


void FUN_007fb300(undefined8 param_1,long *param_2,long param_3,long param_4,undefined4 param_5)

{
  bool bVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  int *piVar5;
  Result *pRVar6;
  undefined2 local_70;
  undefined1 uStack_6e;
  uint uStack_6d;
  int local_68 [4];
  int local_58 [4];
  undefined4 local_48 [2];
  
  pRVar6 = (Result *)&local_70;
  FUN_007fb4f4(local_58,param_2,param_4,param_5);
  if (local_58[0] != 0) {
LAB_007fb340:
    piVar5 = local_58;
    goto LAB_007fb344;
  }
  plVar2 = (long *)FUN_007ec544(param_2);
  if (param_3 == 0) {
    uVar3 = FUN_01f7c4e8(*(undefined8 *)PTR_DAT_047d0860);
    FUN_007f4e70(local_68,uVar3,0);
    if (local_68[0] != 0) goto LAB_007fb3cc;
    local_68[0] = 0;
    local_70 = 0;
    uStack_6e = 0;
    uStack_6d = uStack_6d & 0xffffff00;
  }
  else {
    (**(code **)(*plVar2 + 0x80))(local_68,plVar2,param_3);
    FUN_018ff39c(local_58,local_68);
    if (local_58[0] != 0) goto LAB_007fb340;
LAB_007fb3cc:
    if ((char)param_2[0xe] == '\0') {
LAB_007fb3fc:
      bVar1 = false;
      uStack_6e = 0;
      if (param_3 != 0) goto LAB_007fb410;
LAB_007fb49c:
      uStack_6d = 0;
      local_70 = 0;
      local_68[0] = (**(code **)(*param_2 + 0x18))(param_2);
      lVar4 = (**(code **)(*plVar2 + 0x70))(plVar2,local_68,param_5,&local_70);
    }
    else {
      FUN_007ebe58(local_68,plVar2,param_4,param_5);
      FUN_018ff39c(local_58,local_68);
      if (local_58[0] != 0) goto LAB_007fb3fc;
      param_5 = (undefined4)plVar2[6];
      bVar1 = true;
      uStack_6e = 1;
      if (param_3 == 0) goto LAB_007fb49c;
LAB_007fb410:
      uStack_6d = 0;
      local_70 = 0;
      local_68[0] = (**(code **)(*param_2 + 0x18))(param_2);
      lVar4 = (**(code **)(*plVar2 + 0x68))(plVar2,local_68,param_3,param_5,&local_70);
    }
    if (lVar4 != 0) {
      if (bVar1) {
        param_4 = plVar2[5];
      }
      FUN_007eba90(param_1,plVar2,param_4);
      return;
    }
    local_68[0] = 0x4c0d;
    local_48[0] = 0;
    pRVar6 = (Result *)local_48;
  }
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_68 | 4),pRVar6);
  piVar5 = local_68;
LAB_007fb344:
  FUN_00cbd7c0(param_1,piVar5);
  return;
}


