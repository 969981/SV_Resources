/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008cbccc; name: FUN_008cbccc
 */


undefined8 FUN_008cbccc(char *param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_3f0;
  undefined8 uStack_3e8;
  undefined8 local_3e0;
  undefined8 uStack_3d8;
  undefined8 local_3d0;
  undefined8 uStack_3c8;
  undefined8 local_3c0;
  undefined8 uStack_3b8;
  undefined8 local_3b0;
  undefined8 uStack_3a8;
  undefined8 local_3a0;
  undefined8 uStack_398;
  undefined8 local_390;
  undefined8 uStack_388;
  undefined8 local_380;
  undefined8 uStack_378;
  undefined8 local_370;
  undefined8 uStack_368;
  undefined8 local_360;
  undefined8 uStack_358;
  undefined8 local_350;
  undefined8 uStack_348;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined1 auStack_2f0 [640];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if (*param_1 != '\0') {
    return 1;
  }
  if (*(char *)(param_2 + 0x4c0) == '\0') {
    return 0;
  }
  if (*(char *)(param_2 + 0x508) == '\0') {
    return 0;
  }
  lVar3 = *(long *)(param_1 + 0x10);
  lVar2 = param_2 + 0x4c0;
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  if ((*(long *)(lVar3 + 0x8c8) != -1) &&
     ((*(int *)(param_1 + 0x330) == 0 || (3 < *(int *)(param_1 + 0x330))))) {
    uVar1 = thunk_FUN_008dc1b4(param_2);
    lVar3 = *(long *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x78) = uVar1;
  }
  param_1[0x350] = '\0';
  param_1[0x351] = '\0';
  param_1[0x352] = '\0';
  param_1[0x353] = '\0';
  param_1[0x354] = '\0';
  param_1[0x355] = '\0';
  param_1[0x356] = '\0';
  param_1[0x357] = '\0';
  param_1[0x348] = '\0';
  param_1[0x349] = '\0';
  param_1[0x34a] = '\0';
  param_1[0x34b] = '\0';
  param_1[0x34c] = '\0';
  param_1[0x34d] = '\0';
  param_1[0x34e] = '\0';
  param_1[0x34f] = '\0';
  uVar1 = FUN_008dd884(lVar2,*(undefined4 *)(lVar3 + 0x914));
  lVar3 = *(long *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x340) = uVar1;
  if (*(int *)(lVar3 + 0x91c) == -1) {
LAB_008cbd84:
    if (*(int *)(lVar3 + 0x920) != -1) {
      lVar2 = FUN_008dd884(lVar2);
      *(long *)(param_1 + 0x350) = lVar2;
      if (lVar2 == 0) goto LAB_008cbe78;
      lVar3 = *(long *)(param_1 + 0x10);
    }
    if (*(int *)(lVar3 + 0x918) != -1) {
      *(long *)(param_1 + 0x358) = *(long *)(param_2 + 0x520) + (long)*(int *)(lVar3 + 0x918) * 0x40
      ;
    }
    if (*(long *)(param_1 + 0x340) != 0) {
      local_50 = 0;
      uStack_48 = 0;
      local_60 = 0;
      uStack_58 = 0;
      local_70 = 0;
      uStack_68 = 0;
      memset(auStack_2f0,0,0x280);
      local_300 = 0;
      uStack_2f8 = 0;
      local_310 = 0;
      uStack_308 = 0;
      local_320 = 0;
      uStack_318 = 0;
      local_330 = 0;
      uStack_328 = 0;
      local_340 = 0;
      uStack_338 = 0;
      local_350 = 0;
      uStack_348 = 0;
      local_360 = 0;
      uStack_358 = 0;
      local_370 = 0;
      uStack_368 = 0;
      local_380 = 0;
      uStack_378 = 0;
      local_390 = 0;
      uStack_388 = 0;
      local_3a0 = 0;
      uStack_398 = 0;
      local_3b0 = 0;
      uStack_3a8 = 0;
      local_3c0 = 0;
      uStack_3b8 = 0;
      local_3d0 = 0;
      uStack_3c8 = 0;
      local_3e0 = 0;
      uStack_3d8 = 0;
      local_3f0 = 0;
      uStack_3e8 = 0;
      FUN_008cb2ac(param_1,&local_70,auStack_2f0,&local_3f0,0);
      uVar1 = FUN_008f216c(&local_70);
      FUN_008f21e8(param_1 + 0x370,*(undefined8 *)(param_1 + 0x360),uVar1);
      FUN_008f21fc(param_1 + 0x370,uVar4,&local_70,*(undefined8 *)(*(long *)(param_1 + 0x340) + 8));
      *param_1 = '\x01';
      return 1;
    }
  }
  else {
    lVar3 = FUN_008dd884(lVar2);
    *(long *)(param_1 + 0x348) = lVar3;
    if (lVar3 != 0) {
      lVar3 = *(long *)(param_1 + 0x10);
      goto LAB_008cbd84;
    }
LAB_008cbe78:
    FUN_008d43e0("ShaderBinary Bind Error.\n");
  }
  return 0;
}


