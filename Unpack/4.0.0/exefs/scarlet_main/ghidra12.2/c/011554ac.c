/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 011554ac; name: FUN_011554ac
 */


void FUN_011554ac(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *local_c8;
  char *pcStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  long *local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 *local_60;
  undefined1 auStack_58 [24];
  undefined1 local_28 [4];
  undefined2 local_24 [2];
  
  FUN_00cbf4c0(&local_c8,param_2);
  FUN_00dc5c18(param_1 + 0x28,0,&local_c8,0,*(undefined8 *)(param_1 + 8));
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  if (local_c8 != (long *)0x0) {
    (**(code **)(*local_c8 + 0x20))();
  }
  uVar3 = FUN_011576b8(*(undefined8 *)(param_1 + 8));
  FUN_01156530(&local_60,uVar3);
  local_c8 = *(long **)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = 0;
  FUN_01155fc4(&local_c8);
  puVar2 = local_60;
  local_60 = (undefined8 *)0x0;
  *(undefined8 **)(param_1 + 0x68) = puVar2;
  FUN_01155fc4(&local_60);
  local_c8 = (long *)0xa953d686b626276c;
  pcStack_c0 = "pokemon/data/";
  local_b8 = 0xd;
  local_b0 = 0;
  FUN_01156c00(*(undefined8 *)(param_1 + 0x68),&local_c8);
  local_c8 = (long *)0x43475b786d5b2773;
  pcStack_c0 = "_base";
  local_b8 = 5;
  local_b0 = 0;
  FUN_01156cec(*(undefined8 *)(param_1 + 0x68),&local_c8);
  local_c8 = (long *)0x57659c2717f94969;
  pcStack_c0 = "_eff";
  local_b8 = 4;
  local_b0 = 0;
  FUN_01156dd8(*(undefined8 *)(param_1 + 0x68),&local_c8);
  local_c8 = (long *)0x8a3a87708c47b3d;
  pcStack_c0 = "/locators";
  local_b8 = 9;
  local_b0 = 0;
  FUN_01156ec4(*(undefined8 *)(param_1 + 0x68),&local_c8);
  local_c8 = (long *)0x1919b7ab74e5165b;
  pcStack_c0 = "/icon";
  local_b8 = 5;
  local_b0 = 0;
  FUN_01156fb0(*(undefined8 *)(param_1 + 0x68),&local_c8);
  FUN_01157e38(*(undefined8 *)(param_1 + 0x68),param_1 + 0x28);
  FUN_01156270(param_1);
  local_24[0] = 4;
  FUN_01159c50(&local_60,*(undefined8 *)(param_1 + 8));
  puVar2 = local_60;
  plVar4 = (long *)local_60[3];
  *local_60 = 0x7448d39ec1a30170;
  local_60[1] = "pokemon/data/pm1120/pm1120_11_00/pm1120_11_00.trmdl";
  local_60[2] = 0x33;
  local_60[3] = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  plVar4 = (long *)puVar2[7];
  puVar2[7] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0x7467c19ec1bd9369;
  puVar2[5] = "pokemon/data/pm1120/pm1120_11_00/pm1120_11_00.trmmt";
  puVar2[6] = 0x33;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  plVar4 = (long *)puVar2[0xb];
  puVar2[0xb] = 0;
  puVar2[7] = 0;
  puVar2[8] = 0x672ca5d52a8fb542;
  puVar2[9] = "pokemon/data/pm1120/pm1120_15_00/pm1120_15_00.trpokecfg";
  puVar2[10] = 0x37;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  puVar2[0xb] = 0;
  puVar5 = (undefined8 *)FUN_011565ec(puVar2 + 0xc,local_24);
  *puVar5 = 0xf17b270c7a4c2a5f;
  puVar5[1] = "pokemon/data/pm1120/pm1120_11_00/pm1120_11_00_base.tracn";
  puVar5[2] = 0x38;
  plVar4 = (long *)puVar5[3];
  puVar5[3] = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  puVar5[3] = 0;
  local_b8 = *(undefined8 *)(param_1 + 8);
  local_b0 = 0x666666666666666;
  local_a8 = (long *)0x0;
  local_a0 = 0;
  local_78 = 0;
  local_70 = 0;
  local_28[0] = 0;
  local_98 = 0;
  local_68 = 0x3f800000;
  local_c8 = (long *)0x0;
  pcStack_c0 = (char *)0x0;
  local_88 = 0x666666666666666;
  uStack_80 = 0;
  uStack_90 = local_b8;
  puVar5 = (undefined8 *)FUN_0115a278(&local_c8,local_28);
  *puVar5 = 0x98e9d22b12436e16;
  puVar5[1] = "pokemon/data/pm1120/pm1120_15_00/locators/pm1120_15_00_00000_eff.trskl";
  puVar5[2] = 0x46;
  plVar4 = (long *)puVar5[3];
  puVar5[3] = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  puVar5[3] = 0;
  uVar3 = FUN_011568e4(puVar2 + 0x19,local_24);
  FUN_01155f84(uVar3,&local_c8);
  FUN_0115603c(&local_c8);
  plVar4 = (long *)puVar2[0x2a];
  *(undefined4 *)(puVar2 + 0x26) = 0;
  puVar2[0x27] = 0xb63a999d58b80f14;
  puVar2[0x28] = "pokemon/data/pm1120/pm1120_15_00/icon/pm1120_15_00_00.bntx";
  puVar2[0x29] = 0x3a;
  puVar2[0x2a] = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  lVar1 = param_1 + 0x70;
  puVar2[0x2a] = 0;
  uVar3 = FUN_0115709c(lVar1,local_24);
  FUN_0115b23c(uVar3,puVar2);
  FUN_0115b014(&local_c8);
  local_60 = (undefined8 *)0x0;
  FUN_0115a7d0(auStack_58,puVar2);
  local_24[0] = 5;
  FUN_01159c50(&local_60,*(undefined8 *)(param_1 + 8));
  puVar2 = local_60;
  plVar4 = (long *)local_60[3];
  *local_60 = 0xec17015f48486f42;
  local_60[1] = "pokemon/data/pm1120/pm1120_12_00/pm1120_12_00.trmdl";
  local_60[2] = 0x33;
  local_60[3] = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  plVar4 = (long *)puVar2[7];
  puVar2[7] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0xebfee75f4833b133;
  puVar2[5] = "pokemon/data/pm1120/pm1120_12_00/pm1120_12_00.trmmt";
  puVar2[6] = 0x33;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  plVar4 = (long *)puVar2[0xb];
  puVar2[0xb] = 0;
  puVar2[7] = 0;
  puVar2[8] = 0x9587bf260d861748;
  puVar2[9] = "pokemon/data/pm1120/pm1120_16_00/pm1120_16_00.trpokecfg";
  puVar2[10] = 0x37;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  puVar2[0xb] = 0;
  puVar5 = (undefined8 *)FUN_011565ec(puVar2 + 0xc,local_24);
  *puVar5 = 0x870114b22b25aa59;
  puVar5[1] = "pokemon/data/pm1120/pm1120_12_00/pm1120_12_00_base.tracn";
  puVar5[2] = 0x38;
  plVar4 = (long *)puVar5[3];
  puVar5[3] = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  puVar5[3] = 0;
  local_b8 = *(undefined8 *)(param_1 + 8);
  local_98 = 0;
  local_a0 = 0;
  local_c8 = (long *)0x0;
  pcStack_c0 = (char *)0x0;
  local_78 = 0;
  local_70 = 0;
  local_28[0] = 0;
  local_68 = 0x3f800000;
  local_b0 = 0x666666666666666;
  local_a8 = (long *)0x0;
  local_88 = 0x666666666666666;
  uStack_80 = 0;
  uStack_90 = local_b8;
  puVar5 = (undefined8 *)FUN_0115a278(&local_c8,local_28);
  *puVar5 = 0x620ffc98289175fe;
  puVar5[1] = "pokemon/data/pm1120/pm1120_16_00/locators/pm1120_16_00_00000_eff.trskl";
  puVar5[2] = 0x46;
  plVar4 = (long *)puVar5[3];
  puVar5[3] = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  puVar5[3] = 0;
  uVar3 = FUN_011568e4(puVar2 + 0x19,local_24);
  FUN_01155f84(uVar3,&local_c8);
  FUN_0115603c(&local_c8);
  plVar4 = (long *)puVar2[0x2a];
  *(undefined4 *)(puVar2 + 0x26) = 1;
  puVar2[0x27] = 0x206c26de7284b681;
  puVar2[0x28] = "pokemon/data/pm1120/pm1120_16_00/icon/pm1120_16_00_01.bntx";
  puVar2[0x29] = 0x3a;
  puVar2[0x2a] = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  puVar2[0x2a] = 0;
  uVar3 = FUN_0115709c(lVar1,local_24);
  FUN_0115b23c(uVar3,puVar2);
  FUN_0115b014(&local_c8);
  local_60 = (undefined8 *)0x0;
  FUN_0115a7d0(auStack_58,puVar2);
  local_24[0] = 6;
  FUN_01159c50(&local_60,*(undefined8 *)(param_1 + 8));
  puVar2 = local_60;
  plVar4 = (long *)local_60[3];
  *local_60 = 0x2f3703dee3f48114;
  local_60[1] = "pokemon/data/pm1120/pm1120_13_00/pm1120_13_00.trmdl";
  local_60[2] = 0x33;
  local_60[3] = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  plVar4 = (long *)puVar2[7];
  puVar2[7] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0x2f5601dee40f2e3d;
  puVar2[5] = "pokemon/data/pm1120/pm1120_13_00/pm1120_13_00.trmmt";
  puVar2[6] = 0x33;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  plVar4 = (long *)puVar2[0xb];
  puVar2[0xb] = 0;
  puVar2[7] = 0;
  puVar2[8] = 0x8bf8cc9efd1ed496;
  puVar2[9] = "pokemon/data/pm1120/pm1120_17_00/pm1120_17_00.trpokecfg";
  puVar2[10] = 0x37;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  puVar2[0xb] = 0;
  puVar5 = (undefined8 *)FUN_011565ec(puVar2 + 0xc,local_24);
  *puVar5 = 0xcad1a5eff8b85f3b;
  puVar5[1] = "pokemon/data/pm1120/pm1120_13_00/pm1120_13_00_base.tracn";
  puVar5[2] = 0x38;
  plVar4 = (long *)puVar5[3];
  puVar5[3] = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  puVar5[3] = 0;
  local_b8 = *(undefined8 *)(param_1 + 8);
  local_98 = 0;
  local_a0 = 0;
  local_c8 = (long *)0x0;
  pcStack_c0 = (char *)0x0;
  local_78 = 0;
  local_70 = 0;
  local_28[0] = 0;
  local_68 = 0x3f800000;
  local_b0 = 0x666666666666666;
  local_a8 = (long *)0x0;
  local_88 = 0x666666666666666;
  uStack_80 = 0;
  uStack_90 = local_b8;
  puVar5 = (undefined8 *)FUN_0115a278(&local_c8,local_28);
  *puVar5 = 0xf6c4274495d358e;
  puVar5[1] = "pokemon/data/pm1120/pm1120_17_00/locators/pm1120_17_00_00000_eff.trskl";
  puVar5[2] = 0x46;
  plVar4 = (long *)puVar5[3];
  puVar5[3] = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  puVar5[3] = 0;
  uVar3 = FUN_011568e4(puVar2 + 0x19,local_24);
  FUN_01155f84(uVar3,&local_c8);
  FUN_0115603c(&local_c8);
  plVar4 = (long *)puVar2[0x2a];
  *(undefined4 *)(puVar2 + 0x26) = 2;
  puVar2[0x27] = 0x69a74461b717bd8a;
  puVar2[0x28] = "pokemon/data/pm1120/pm1120_17_00/icon/pm1120_17_00_02.bntx";
  puVar2[0x29] = 0x3a;
  puVar2[0x2a] = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  puVar2[0x2a] = 0;
  uVar3 = FUN_0115709c(lVar1,local_24);
  FUN_0115b23c(uVar3,puVar2);
  FUN_0115b014(&local_c8);
  local_60 = (undefined8 *)0x0;
  FUN_0115a7d0(auStack_58,puVar2);
  local_24[0] = 7;
  FUN_01159c50(&local_60,*(undefined8 *)(param_1 + 8));
  puVar2 = local_60;
  plVar4 = (long *)local_60[3];
  *local_60 = 0x35bf580dee92d232;
  local_60[1] = "pokemon/data/pm1120/pm1120_14_00/pm1120_14_00.trmdl";
  local_60[2] = 0x33;
  local_60[3] = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  plVar4 = (long *)puVar2[7];
  puVar2[7] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0x35a85e0dee7ffd83;
  puVar2[5] = "pokemon/data/pm1120/pm1120_14_00/pm1120_14_00.trmmt";
  puVar2[6] = 0x33;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  plVar4 = (long *)puVar2[0xb];
  puVar2[0xb] = 0;
  puVar2[7] = 0;
  puVar2[8] = 0x66fb3c643a84858;
  puVar2[9] = "pokemon/data/pm1120/pm1120_18_00/pm1120_18_00.trpokecfg";
  puVar2[10] = 0x37;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  puVar2[0xb] = 0;
  puVar5 = (undefined8 *)FUN_011565ec(puVar2 + 0xc,local_24);
  *puVar5 = 0xcc3ca6dd83f66c69;
  puVar5[1] = "pokemon/data/pm1120/pm1120_14_00/pm1120_14_00_base.tracn";
  puVar5[2] = 0x38;
  plVar4 = (long *)puVar5[3];
  puVar5[3] = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  puVar5[3] = 0;
  local_b8 = *(undefined8 *)(param_1 + 8);
  local_98 = 0;
  local_a0 = 0;
  local_c8 = (long *)0x0;
  pcStack_c0 = (char *)0x0;
  local_78 = 0;
  local_70 = 0;
  local_28[0] = 0;
  local_68 = 0x3f800000;
  local_b0 = 0x666666666666666;
  local_a8 = (long *)0x0;
  local_88 = 0x666666666666666;
  uStack_80 = 0;
  uStack_90 = local_b8;
  puVar5 = (undefined8 *)FUN_0115a278(&local_c8,local_28);
  *puVar5 = 0xc63ff4691bfa438e;
  puVar5[1] = "pokemon/data/pm1120/pm1120_18_00/locators/pm1120_18_00_00000_eff.trskl";
  puVar5[2] = 0x46;
  plVar4 = (long *)puVar5[3];
  puVar5[3] = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  puVar5[3] = 0;
  uVar3 = FUN_011568e4(puVar2 + 0x19,local_24);
  FUN_01155f84(uVar3,&local_c8);
  FUN_0115603c(&local_c8);
  plVar4 = (long *)puVar2[0x2a];
  *(undefined4 *)(puVar2 + 0x26) = 3;
  puVar2[0x27] = 0x80b9020966f98967;
  puVar2[0x28] = "pokemon/data/pm1120/pm1120_18_00/icon/pm1120_18_00_03.bntx";
  puVar2[0x29] = 0x3a;
  puVar2[0x2a] = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  puVar2[0x2a] = 0;
  uVar3 = FUN_0115709c(lVar1,local_24);
  FUN_0115b23c(uVar3,puVar2);
  FUN_0115b014(&local_c8);
  local_60 = (undefined8 *)0x0;
  FUN_0115a7d0(auStack_58,puVar2);
  return;
}


