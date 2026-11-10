/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003dd940; name: FUN_003dd940
 */


undefined4
FUN_003dd940(ulong param_1,uint param_2,undefined1 *param_3,code *param_4,undefined8 param_5)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined1 auStack_38 [20];
  undefined1 local_24 [4];
  
  if (param_1 >> 0x20 != 0) {
    return 0xffffffff;
  }
  if (param_1 < 0x10000) {
    if (0xff < param_1) {
      FUN_003e7390(auStack_38,0x13,"\\U%04lX");
      uVar4 = 6;
      puVar2 = auStack_38;
      uVar3 = 6;
      goto LAB_003dd9c0;
    }
    local_24[0] = (undefined1)param_1;
    if (((uint)param_1 >> 7 & 1) == 0) {
      uVar5 = *(ushort *)(&DAT_03cdd2fa + param_1 * 2) & param_2;
      if ((uVar5 & 0x61) != 0) {
        if ((uVar5 >> 3 & 1) == 0) {
          iVar1 = (*param_4)(param_5,&DAT_03c0f511,1);
          if (iVar1 == 0) {
            return 0xffffffff;
          }
          iVar1 = (*param_4)(param_5,local_24,1);
          uVar4 = 2;
          if (iVar1 == 0) {
            uVar4 = 0xffffffff;
          }
          return uVar4;
        }
        if (param_3 != (undefined1 *)0x0) {
          *param_3 = 1;
        }
        goto LAB_003dda98;
      }
    }
    else {
      uVar5 = param_2 & 4;
    }
    if ((uVar5 & 0x406) == 0) {
      if ((((uint)param_1 & 0xff) != 0x5c) || ((param_2 & 0x40f) == 0)) {
LAB_003dda98:
        iVar1 = (*param_4)(param_5,local_24,1);
        uVar4 = 1;
        if (iVar1 == 0) {
          uVar4 = 0xffffffff;
        }
        return uVar4;
      }
      puVar2 = &DAT_03c2c310;
      uVar4 = 2;
      uVar3 = 2;
    }
    else {
      FUN_003e7390(auStack_38,0xb,"\\%02X");
      uVar4 = 3;
      puVar2 = auStack_38;
      uVar3 = 3;
    }
  }
  else {
    FUN_003e7390(auStack_38,0x13,"\\W%08lX");
    uVar4 = 10;
    puVar2 = auStack_38;
    uVar3 = 10;
  }
LAB_003dd9c0:
  iVar1 = (*param_4)(param_5,puVar2,uVar3);
  if (iVar1 == 0) {
    uVar4 = 0xffffffff;
  }
  return uVar4;
}


