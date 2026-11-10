/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01b2cdb0; name: FUN_01b2cdb0
 */


void FUN_01b2cdb0(undefined8 param_1,undefined8 param_2,char *param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  size_t __n;
  void *pvVar3;
  char *pcVar4;
  void *pvVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  undefined1 auStack_518 [8];
  undefined8 local_510;
  char *local_508;
  char *local_500;
  int local_4e8;
  undefined4 local_4e4;
  char local_4d9;
  undefined1 auStack_4d4 [68];
  undefined1 *local_490;
  ulong local_488;
  ulong local_480;
  undefined8 local_478;
  undefined1 auStack_470 [1024];
  size_t local_70 [2];
  
  iVar8 = 1;
  iVar7 = 1;
  do {
    iVar2 = iVar7;
    iVar7 = iVar8;
    iVar1 = FUN_00125280(param_2,iVar7,&local_490);
    iVar8 = iVar7 << 1;
  } while (iVar1 != 0);
  while (iVar2 < iVar7) {
    iVar8 = iVar7 + iVar2;
    if (iVar8 < 0) {
      iVar8 = iVar8 + 1;
    }
    iVar8 = iVar8 >> 1;
    iVar1 = FUN_00125280(param_2,iVar8,&local_490);
    if (iVar1 != 0) {
      iVar2 = iVar8 + 1;
      iVar8 = iVar7;
    }
    iVar7 = iVar8;
  }
  local_480 = 0;
  iVar8 = 10;
  if ((int)(iVar7 + ~param_4) < 0x16) {
    iVar8 = -1;
  }
  local_488 = 0x400;
  local_490 = auStack_470;
  local_478 = param_1;
  FUN_00122800(param_1,&local_490);
  if (param_3 == (char *)0x0) goto LAB_01b2cee0;
  __n = strlen(param_3);
  if (__n == 0) {
    if (local_488 <= local_480) goto LAB_01b2cebc;
  }
  else {
    pvVar3 = (void *)FUN_00124470(&local_490,__n,0xffffffff);
    memcpy(pvVar3,param_3,__n);
    local_480 = local_480 + __n;
    if (local_488 <= local_480) {
LAB_01b2cebc:
      FUN_00124470(&local_490,1,0xffffffff);
    }
  }
  local_490[local_480] = 10;
  local_480 = local_480 + 1;
LAB_01b2cee0:
  pcVar4 = (char *)FUN_00124470(&local_490,0x10,0xffffffff);
  uVar6 = s_stack_traceback__03bfa1fb._8_8_;
  *(undefined8 *)pcVar4 = s_stack_traceback__03bfa1fb._0_8_;
  *(undefined8 *)(pcVar4 + 8) = uVar6;
  local_480 = local_480 + 0x10;
  iVar2 = FUN_00125280(param_2,param_4,auStack_518);
  if (iVar2 != 0) {
    do {
      if (iVar8 == 0) {
        FUN_01b2cd10(param_1,"\n\t...\t(skipping %d levels)",(iVar7 - 0xbU) + ~param_4);
        uVar6 = local_478;
        pvVar3 = (void *)FUN_00c646d0(local_478,0xffffffff,local_70);
        pvVar5 = (void *)FUN_00124470(&local_490,local_70[0],0xfffffffe);
        memcpy(pvVar5,pvVar3,local_70[0]);
        local_480 = local_480 + local_70[0];
        FUN_00c5db00(uVar6,0xfffffffe);
        param_4 = iVar7 - 0xbU;
      }
      else {
        FUN_00125400(param_2,&DAT_03c5a83c,auStack_518);
        if (local_4e8 < 1) {
          FUN_01b2cd10(param_1,"\n\t%s: in ",auStack_4d4);
        }
        else {
          FUN_01b2cd10(param_1,"\n\t%s:%d: in ",auStack_4d4);
        }
        uVar6 = local_478;
        param_4 = param_4 + 1;
        pvVar3 = (void *)FUN_00c646d0(local_478,0xffffffff,local_70);
        pvVar5 = (void *)FUN_00124470(&local_490,local_70[0],0xfffffffe);
        memcpy(pvVar5,pvVar3,local_70[0]);
        local_480 = local_480 + local_70[0];
        FUN_00c5db00(uVar6,0xfffffffe);
        iVar2 = FUN_00123b80(param_1,auStack_518);
        if (iVar2 == 0) {
          if (*local_508 == '\0') {
            if (*local_500 == 'C') {
              pcVar4 = "?";
            }
            else {
              if (*local_500 != 'm') {
                FUN_01b2cd10(param_1,"function <%s:%d>",auStack_4d4,local_4e4);
                goto LAB_01b2d130;
              }
              pcVar4 = "main chunk";
            }
            FUN_00c85bd0(param_1,pcVar4);
          }
          else {
            FUN_01b2cd10(param_1,"%s \'%s\'",local_508,local_510);
          }
        }
        else {
          uVar6 = FUN_00c646d0(param_1,0xffffffff,0);
          FUN_01b2cd10(param_1,"function \'%s\'",uVar6);
          FUN_00c5dcd0(param_1,0xfffffffe,0xffffffff);
          FUN_00c5db00(param_1,0xfffffffe);
        }
LAB_01b2d130:
        uVar6 = local_478;
        pvVar3 = (void *)FUN_00c646d0(local_478,0xffffffff,local_70);
        pvVar5 = (void *)FUN_00124470(&local_490,local_70[0],0xfffffffe);
        memcpy(pvVar5,pvVar3,local_70[0]);
        local_480 = local_480 + local_70[0];
        FUN_00c5db00(uVar6,0xfffffffe);
        if (local_4d9 != '\0') {
          pcVar4 = (char *)FUN_00124470(&local_490,0x14,0xffffffff);
          pcVar4[0x10] = '.';
          uVar6 = s_____tail_calls_____03c60ecb._8_8_;
          pcVar4[0x11] = '.';
          pcVar4[0x12] = '.';
          pcVar4[0x13] = ')';
          *(undefined8 *)pcVar4 = s_____tail_calls_____03c60ecb._0_8_;
          *(undefined8 *)(pcVar4 + 8) = uVar6;
          local_480 = local_480 + 0x14;
        }
      }
      iVar2 = FUN_00125280(param_2,param_4,auStack_518);
      iVar8 = iVar8 + -1;
    } while (iVar2 != 0);
  }
  uVar6 = local_478;
  FUN_00122720(local_478,local_490,local_480);
  if (local_490 != auStack_470) {
    FUN_00121bc0(uVar6,0xfffffffe);
  }
  FUN_00c5dcd0(uVar6,0xfffffffe,0xffffffff);
  FUN_00c5db00(uVar6,0xfffffffe);
  return;
}


