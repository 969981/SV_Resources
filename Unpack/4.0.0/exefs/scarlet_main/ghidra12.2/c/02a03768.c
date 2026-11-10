/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02a03768; name: FUN_02a03768
 */


void FUN_02a03768(undefined8 *param_1,long param_2,byte *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong *puVar4;
  undefined4 uVar5;
  ulong uVar6;
  long lVar7;
  byte *pbVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 local_6a8;
  undefined *puStack_6a0;
  undefined8 local_698;
  long *plStack_690;
  undefined1 auStack_678 [32];
  undefined8 local_658;
  undefined1 auStack_650 [32];
  undefined1 auStack_630 [32];
  undefined8 local_610;
  undefined1 local_608;
  undefined1 auStack_600 [32];
  undefined1 auStack_5e0 [32];
  undefined1 auStack_5c0 [32];
  undefined1 auStack_5a0 [32];
  undefined8 local_580;
  undefined4 local_578;
  undefined1 auStack_570 [32];
  undefined4 local_550;
  undefined1 auStack_548 [32];
  undefined8 local_528;
  undefined8 uStack_520;
  undefined1 local_518;
  undefined1 auStack_510 [8];
  undefined1 auStack_508 [40];
  undefined1 auStack_4e0 [32];
  undefined *local_4c0;
  undefined1 auStack_4b8 [32];
  undefined1 auStack_498 [32];
  undefined4 local_478;
  undefined1 auStack_470 [32];
  undefined1 auStack_450 [32];
  undefined1 auStack_430 [32];
  undefined1 auStack_410 [104];
  undefined8 *local_3a8;
  undefined8 local_3a0;
  undefined8 local_398;
  undefined8 local_390;
  undefined1 auStack_380 [32];
  undefined4 local_360;
  undefined1 auStack_358 [32];
  undefined1 auStack_338 [32];
  undefined1 auStack_318 [32];
  undefined1 auStack_2f8 [104];
  ulong local_290 [2];
  undefined8 local_280;
  long *local_278;
  long **local_270;
  long *local_268;
  undefined8 local_260;
  long *local_258;
  undefined1 auStack_250 [8];
  undefined1 auStack_248 [32];
  undefined1 auStack_228 [32];
  undefined8 local_208;
  undefined1 auStack_200 [32];
  undefined1 auStack_1e0 [32];
  undefined8 local_1c0;
  undefined1 local_1b8;
  undefined1 auStack_1b0 [32];
  undefined1 auStack_190 [32];
  undefined1 auStack_170 [32];
  undefined1 auStack_150 [32];
  undefined8 local_130;
  undefined4 local_128;
  undefined1 auStack_120 [32];
  undefined4 local_100;
  undefined1 auStack_f8 [32];
  uint local_d8;
  uint uStack_d4;
  undefined8 uStack_d0;
  undefined1 local_c8;
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [8];
  ulong local_b0;
  ulong local_a8;
  ulong local_a0;
  undefined1 auStack_90 [32];
  ulong *local_70 [2];
  
  if ((*(long **)(param_2 + 0x70) == (long *)0x0) ||
     (uVar6 = (**(code **)(**(long **)(param_2 + 0x70) + 0x70))(), (uVar6 & 1) != 0)) {
    FUN_01f72a98(auStack_250);
    local_3a0 = 0;
    local_398 = FUN_01cf7e20();
    local_390 = 0;
    local_268 = (long *)0x0;
    local_3a8 = &local_3a0;
    local_260 = FUN_01cf7e20();
    local_258 = (long *)0x0;
    local_270 = &local_268;
    memcpy(&local_6a8,&DAT_03d5ef20,0x24);
    lVar10 = 0;
    uVar5 = 1;
    while( true ) {
      FUN_01d09ed8(local_290,uVar5);
      local_70[0] = local_290;
      lVar7 = FUN_01f78084(&local_3a8,local_290,local_70);
      FUN_01d0e1a8(lVar7 + 0x40,param_3 + 0x28);
      local_70[0] = local_290;
      lVar7 = FUN_01f78084(&local_270,local_290,local_70);
      FUN_01d0e1a8(lVar7 + 0x40,param_3 + 0x48);
      if ((local_290[0] & 1) != 0) {
        (**(code **)(*local_278 + 0x18))(local_278,local_280,local_290[0] & 0xfffffffffffffffe,1);
      }
      if (lVar10 == 0x20) break;
      uVar5 = *(undefined4 *)(auStack_678 + lVar10 + -0x2c);
      lVar10 = lVar10 + 4;
    }
    FUN_01f7783c(auStack_200,local_3a8,&local_3a0);
    FUN_01f7783c(auStack_1e0,local_270,&local_268);
    FUN_01cfa44c(&local_270,local_268);
    FUN_01cfa44c(&local_3a8,local_3a0);
    local_d8 = (uint)param_3[0x6b];
    uStack_d4 = local_d8;
    FUN_02a03cb4(&local_6a8,param_3 + 0x84);
    local_b0 = (ulong)local_6a8;
    FUN_02a03cb4(&local_6a8,param_3 + 0x6c);
    local_a8 = (ulong)local_6a8;
    FUN_02a03cb4(&local_6a8,param_3 + 0x84);
    local_a0 = (ulong)local_6a8;
    FUN_01e74fb0(&local_6a8);
    pbVar8 = *(byte **)(param_3 + 0x10);
    if ((*param_3 & 1) == 0) {
      pbVar8 = param_3 + 1;
    }
    FUN_027c1d20(&local_6a8,"HostPlayerName",pbVar8);
    FUN_01f70094(&local_6a8,"HostPlayerLang",param_3[0x20]);
    FUN_01f70094(&local_6a8,"HostPlayerSex",param_3[0x21]);
    FUN_01f70094(&local_6a8,"RulePresetNo",param_3[0x68]);
    FUN_01f70094(&local_6a8,"ControlTimeOverride",param_3[0x69]);
    FUN_01f70094(&local_6a8,"TotalTimeOverride",param_3[0x6a]);
    FUN_027bbf28(auStack_c0,&local_6a8);
    FUN_01cfa410(&local_6a8);
    uVar5 = *(undefined4 *)(param_2 + 0x78);
    FUN_01f7135c(&local_6a8,param_2 + 0x7c);
    FUN_01d09f08(&local_270);
    FUN_01f72c48(&local_3a8,uVar5,&local_6a8,&local_270);
    if (((ulong)local_270 & 1) != 0) {
      (**(code **)(*local_258 + 0x18))(local_258,local_260,(ulong)local_270 & 0xfffffffffffffffe,1);
    }
    if (((ulong)local_6a8 & 1) != 0) {
      (**(code **)(*plStack_690 + 0x18))
                (plStack_690,local_698,(ulong)local_6a8 & 0xfffffffffffffffe,1);
    }
    puStack_6a0 = PTR_DAT_047cfbb0 + 0x10;
    local_6a8 = &PTR_FUN_0455cc38;
    FUN_01cfa5b0(&local_698,auStack_248);
    FUN_01cfa5b0(auStack_678,auStack_228);
    local_658 = local_208;
    FUN_01f77718(auStack_650,auStack_200);
    FUN_01f77718(auStack_630,auStack_1e0);
    local_610 = local_1c0;
    local_608 = local_1b8;
    FUN_01d01e08(auStack_600,auStack_1b0);
    FUN_01d01e70(auStack_5e0,auStack_190);
    FUN_01cfa5b0(auStack_5c0,auStack_170);
    FUN_01cfa5b0(auStack_5a0,auStack_150);
    local_580 = local_130;
    local_578 = local_128;
    FUN_01cfa5b0(auStack_570,auStack_120);
    local_550 = local_100;
    FUN_01d01e08(auStack_548,auStack_f8);
    local_518 = local_c8;
    local_528 = CONCAT44(uStack_d4,local_d8);
    uStack_520 = uStack_d0;
    FUN_01d01ed8(auStack_510,auStack_c0);
    memcpy(auStack_508,auStack_b8,0x28);
    FUN_01cfa5b0(auStack_4e0,auStack_90);
    local_4c0 = PTR_DAT_047cfbf8 + 0x10;
    FUN_01cfa5b0(auStack_4b8,&local_3a0);
    FUN_01cfa5b0(auStack_498,auStack_380);
    local_478 = local_360;
    FUN_01cfa5b0(auStack_470,auStack_358);
    FUN_01cfa5b0(auStack_450,auStack_338);
    FUN_01cfa5b0(auStack_430,auStack_318);
    memcpy(auStack_410,auStack_2f8,100);
    uVar9 = *(undefined8 *)(param_2 + 0x40);
    FUN_006c72ac(&local_270,param_2 + 0x48,&local_6a8);
    FUN_01f72d20(local_70,uVar9,&local_270);
    local_290[0] = *(ulong *)(param_2 + 0x70);
    *(undefined8 *)(param_2 + 0x70) = 0;
    FUN_01f710f0(local_290);
    puVar4 = local_70[0];
    local_70[0] = (ulong *)0x0;
    *(ulong **)(param_2 + 0x70) = puVar4;
    if (local_268 != (long *)0x0) {
      plVar1 = local_268 + 1;
      do {
        lVar10 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*local_268 + 0x10))(local_268);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (*(long *)(param_2 + 0x70) == 0) {
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      FUN_01f717cc(&local_270);
      FUN_01f72f14(param_1,&local_270);
      FUN_01d0fcc8(&local_270);
    }
    local_6a8 = &PTR_FUN_0455cc38;
    FUN_01d06ee8(&local_4c0);
    FUN_01cfa274(&puStack_6a0);
    FUN_01d06ee8(&local_3a8);
    FUN_01cfa274(auStack_250);
  }
  else {
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}


