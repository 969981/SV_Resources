/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00375900; name: FUN_00375900
 */


void FUN_00375900(long param_1,undefined8 param_2,int *param_3,long *param_4,int *param_5,
                 undefined8 *param_6)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long local_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  void *local_70;
  long local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  long local_58;
  long lStack_50;
  int local_48 [2];
  
  if (param_1 == 0) {
    if (param_3 != (int *)0x0) {
      *param_3 = 0;
    }
    if (param_4 != (long *)0x0) {
      *param_4 = (long)PTR_DAT_047cc5d0;
      param_4[1] = 0;
      param_4[2] = (long)&DAT_03c886bc;
    }
    if (param_5 != (int *)0x0) {
      *param_5 = 0;
    }
  }
  else {
    lVar4 = FUN_00375b10(param_1,3);
    if (lVar4 == 0) {
      lVar4 = FUN_00375b10(param_1,7);
    }
    lVar1 = param_1;
    if (lVar4 != 0) {
      lVar1 = lVar4;
    }
    uVar5 = FUN_00351f40(lVar1,3,local_48);
    if ((uVar5 & 1) == 0) {
      uVar5 = FUN_00351f40(lVar1,7,local_48);
      if ((uVar5 & 1) == 0) {
        iVar3 = 2;
      }
      else {
        iVar3 = FUN_0037a690(local_48[0],param_2);
      }
    }
    else {
      iVar3 = local_48[0];
    }
    if (param_3 != (int *)0x0) {
      *param_3 = iVar3;
    }
    if ((param_6 != (undefined8 *)0x0) && (iVar3 != 0)) {
      FUN_00352270(param_1);
      uVar6 = FUN_0038ccb0();
      *param_6 = uVar6;
    }
    if (param_5 != (int *)0x0) {
      uVar5 = FUN_00351f40(lVar1,7,local_48);
      if ((uVar5 & 1) == 0) {
        uVar5 = FUN_00351f40(lVar1,3,local_48);
        if ((uVar5 & 1) == 0) {
          iVar3 = 2;
        }
        else {
          iVar3 = FUN_0037a670(local_48[0]);
        }
      }
      else {
        iVar3 = local_48[0];
      }
      *param_5 = iVar3;
    }
    if ((param_4 != (long *)0x0) && (uVar5 = FUN_003520c0(lVar1,5,param_4), (uVar5 & 1) == 0)) {
      uVar5 = FUN_00351f40(lVar1,0,local_48);
      if ((uVar5 & 1) == 0) {
        uVar5 = FUN_003520c0(lVar1,0,param_4);
        if ((uVar5 & 1) == 0) {
          FUN_003673f0(&local_68,"unknown error");
          param_4[1] = CONCAT44(uStack_5c,uStack_60);
          *param_4 = local_68;
          param_4[3] = lStack_50;
          param_4[2] = local_58;
        }
      }
      else {
        FUN_003520c0(lVar1,3,&local_68);
        lVar4 = (long)&uStack_60 + 1;
        uVar2 = uStack_60 & 0xff;
        if (local_68 != 0) {
          lVar4 = local_58;
          uVar2 = uStack_60;
        }
        FUN_0038d930(&local_70,"OS Error %d returned by %.*s",local_48[0],uVar2,lVar4);
        FUN_00367770(&local_90,local_70);
        param_4[1] = lStack_88;
        *param_4 = local_90;
        param_4[3] = lStack_78;
        param_4[2] = lStack_80;
        free(local_70);
      }
    }
  }
  return;
}


