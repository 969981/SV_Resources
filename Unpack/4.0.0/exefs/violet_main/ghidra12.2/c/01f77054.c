/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f77054; name: FUN_01f77054
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_01f77054(undefined8 *param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  undefined *puVar6;
  byte *pbVar7;
  ulong *puVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  byte *pbVar12;
  undefined8 uVar13;
  long *plVar14;
  long *plVar15;
  byte *local_2b0;
  long *local_2a8;
  byte local_2a0;
  undefined7 uStack_29f;
  undefined1 uStack_298;
  undefined1 uStack_297;
  undefined6 uStack_296;
  undefined8 local_290;
  long *local_288;
  byte local_280;
  undefined7 uStack_27f;
  char cStack_278;
  undefined2 local_277;
  undefined1 local_275;
  undefined8 local_270;
  long *local_268;
  byte local_260;
  undefined4 uStack_25f;
  undefined1 uStack_25b;
  undefined2 uStack_25a;
  undefined8 local_250;
  long *local_248;
  byte local_240;
  char acStack_23f [5];
  undefined2 uStack_23a;
  char cStack_238;
  char acStack_237 [5];
  undefined1 local_232;
  undefined8 local_230;
  long *local_228;
  byte *local_220;
  byte *local_218;
  long local_210;
  long *plStack_208;
  undefined1 auStack_200 [8];
  ulong local_1f8;
  long local_1f0;
  long local_1e8;
  undefined1 auStack_1d8 [16];
  undefined1 auStack_1c8 [344];
  undefined8 local_70;
  long *local_68;
  
  lVar11 = param_3 + 0x39;
  if ((*(byte *)(param_3 + 0x38) & 1) != 0) {
    lVar11 = *(long *)(param_3 + 0x48);
  }
  FUN_01f76a4c(auStack_1d8,*(undefined4 *)(param_3 + 8),*(undefined4 *)(param_3 + 0x30),lVar11);
                    /* try { // try from 01f770ac to 01f770af has its CatchHandler @ 01f77698 */
  FUN_01d0e1a8(auStack_1c8,param_3 + 0x10);
                    /* try { // try from 01f770b0 to 01f770bb has its CatchHandler @ 01f77684 */
  FUN_0070a494(auStack_200,0);
  if (local_1f0 == 0) {
    puVar8 = (ulong *)(local_1f8 & 0xfffffffffffffffe);
    if ((local_1f8 & 1) != 0) {
      puVar8 = (ulong *)*puVar8;
    }
                    /* try { // try from 01f770e4 to 01f7710b has its CatchHandler @ 01f775c0 */
    local_1f0 = FUN_0071d168(puVar8);
    FUN_006ebe50(local_1f0,auStack_1d8);
  }
  else {
    FUN_006ebe50(local_1f0,auStack_1d8);
  }
  if (local_1e8 == 0) {
    puVar8 = (ulong *)(local_1f8 & 0xfffffffffffffffe);
    if ((local_1f8 & 1) != 0) {
      puVar8 = (ulong *)*puVar8;
    }
    local_1e8 = FUN_00535218(puVar8);
  }
  lVar11 = local_1e8;
  local_288 = (long *)FUN_01cf7e20();
  local_2a0 = 0x10;
  uStack_297 = 0;
  uStack_29f = 0x726f6765746163;
  uStack_298 = 0x79;
  local_268 = (long *)FUN_01cf7e20();
  local_280 = 0x14;
  local_277 = 0x6874;
  local_275 = 0;
  uStack_27f = s_birthmonth_03ca50a3._0_7_;
  cStack_278 = s_birthmonth_03ca50a3[7];
  local_248 = (long *)FUN_01cf7e20();
  local_260 = 8;
  uStack_25b = 0;
  uStack_25f = 0x61657261;
  local_228 = (long *)FUN_01cf7e20();
  local_240 = 0x1a;
  acStack_23f[0] = s_language_code_03c5c29f[0];
  acStack_23f[1] = s_language_code_03c5c29f[1];
  acStack_23f[2] = s_language_code_03c5c29f[2];
  acStack_23f[3] = s_language_code_03c5c29f[3];
  acStack_23f[4] = s_language_code_03c5c29f[4];
  uStack_23a = s_language_code_03c5c29f._5_2_;
  cStack_238 = s_language_code_03c5c29f[7];
  acStack_237[0] = s_language_code_03c5c29f[8];
  acStack_237[1] = s_language_code_03c5c29f[9];
  acStack_237[2] = s_language_code_03c5c29f[10];
  acStack_237[3] = s_language_code_03c5c29f[0xb];
  acStack_237[4] = s_language_code_03c5c29f[0xc];
  local_232 = 0;
                    /* try { // try from 01f771b4 to 01f771c3 has its CatchHandler @ 01f775c8 */
  FUN_006c8b84(&local_220,&local_2a0,4);
  FUN_006ee960(lVar11,&local_220);
  pbVar7 = local_220;
  if (local_220 != (byte *)0x0) {
    if (local_218 != local_220) {
      do {
        pbVar12 = local_218 + -0x20;
        if ((*pbVar12 & 1) != 0) {
          (**(code **)(**(long **)(local_218 + -8) + 0x18))
                    (*(long **)(local_218 + -8),*(undefined8 *)(local_218 + -0x10),
                     *(ulong *)(local_218 + -0x20) & 0xfffffffffffffffe,1);
        }
        local_218 = pbVar12;
      } while (pbVar7 != pbVar12);
    }
    local_218 = pbVar7;
    (**(code **)(*plStack_208 + 0x18))(plStack_208,local_220,local_210 - (long)local_220,8);
  }
  if ((local_240 & 1) != 0) {
    (**(code **)(*local_228 + 0x18))
              (local_228,local_230,
               CONCAT26(uStack_23a,CONCAT51(acStack_23f,local_240)) & 0xfffffffffffffffe,1);
  }
  if ((local_260 & 1) != 0) {
    (**(code **)(*local_248 + 0x18))
              (local_248,local_250,
               CONCAT26(uStack_25a,CONCAT15(uStack_25b,CONCAT41(uStack_25f,local_260))) &
               0xfffffffffffffffe,1);
  }
  if ((local_280 & 1) != 0) {
    (**(code **)(*local_268 + 0x18))
              (local_268,local_270,CONCAT71(uStack_27f,local_280) & 0xfffffffffffffffe,1);
  }
  if ((local_2a0 & 1) != 0) {
    (**(code **)(*local_288 + 0x18))
              (local_288,local_290,CONCAT71(uStack_29f,local_2a0) & 0xfffffffffffffffe,1);
  }
  local_2a0 = 0;
  uStack_29f = 0;
  uStack_298 = 0;
  uStack_297 = 0;
  uStack_296 = 0;
  FUN_006df89c(&local_2b0,*(undefined8 *)(*(long *)(param_2 + 8) + 8),auStack_200,&local_2a0);
  plVar4 = (long *)CONCAT62(uStack_296,CONCAT11(uStack_297,uStack_298));
  if (plVar4 != (long *)0x0) {
    plVar5 = plVar4 + 1;
    do {
      lVar11 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar5 = local_2a8;
  pbVar7 = local_2b0;
  lVar11 = *(long *)(*(long *)(*(long *)(param_2 + 8) + 8) + 0x48);
  plVar14 = *(long **)(lVar11 + 0x240);
  uVar13 = *(undefined8 *)(lVar11 + 0x4b8);
  local_68 = (long *)0x0;
  local_70 = 0;
  local_2b0 = (byte *)0x0;
  local_2a8 = (long *)0x0;
  plVar9 = (long *)(**(code **)(*plVar14 + 0x10))(plVar14,0x238,8);
  plVar9[2] = 0;
  plVar15 = plVar9 + 1;
  *plVar15 = 0;
  puVar6 = PTR_DAT_047cfb60;
  plVar9[3] = (long)plVar14;
  plVar4 = plVar9 + 4;
  *plVar9 = (long)(puVar6 + 0x10);
  FUN_006c4254(plVar4);
  plVar9[4] = (long)(PTR_DAT_047cfb68 + 0x10);
  nn::os::InitializeEvent(plVar9 + 6,0,0);
  plVar9[4] = (long)(PTR_DAT_047cfb70 + 0x10);
  nn::os::InitializeMutex((MutexType *)(plVar9 + 0xb),false,0);
  *(undefined1 *)(plVar9 + 0x46) = 0;
  if (plVar9 != (long *)0x0) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar3) {
        *plVar15 = *plVar15 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (plVar5 != (long *)0x0) {
    plVar15 = plVar5 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar3) {
        *plVar15 = *plVar15 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar10 = (undefined8 *)(**(code **)(*plVar14 + 0x10))(plVar14,0x78,8);
  puVar1 = puVar10 + 4;
  *puVar10 = &PTR_LAB_044d9738;
  puVar10[1] = 0;
  puVar10[2] = 0;
  puVar10[3] = plVar14;
  FUN_006c4a3c(puVar1,plVar4,pbVar7);
  puVar10[4] = &PTR_FUN_044d9770;
  *(undefined1 *)(puVar10 + 0xe) = 1;
  puVar10[10] = plVar4;
  puVar10[0xb] = plVar9;
  puVar10[0xc] = pbVar7;
  puVar10[0xd] = plVar5;
  local_2a0 = (byte)puVar1;
  uStack_29f = (undefined7)((ulong)puVar1 >> 8);
  uStack_298 = SUB81(puVar10,0);
  uStack_297 = (undefined1)((ulong)puVar10 >> 8);
  uStack_296 = (undefined6)((ulong)puVar10 >> 0x10);
  local_220 = pbVar7;
  local_218 = (byte *)plVar5;
  FUN_006c5470(uVar13,&local_2a0,&local_70,&local_220);
  if (local_218 != (byte *)0x0) {
    plVar5 = (long *)((long)local_218 + 8);
    do {
      lVar11 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*(long *)local_218 + 0x10))(local_218);
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar5 = (long *)CONCAT62(uStack_296,CONCAT11(uStack_297,uStack_298));
  if (plVar5 != (long *)0x0) {
    plVar14 = plVar5 + 1;
    do {
      lVar11 = *plVar14;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar3) {
        *plVar14 = lVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      std::__shared_weak_count::__release_weak();
    }
  }
  *param_1 = plVar4;
  param_1[1] = plVar9;
  if (local_68 != (long *)0x0) {
    plVar4 = local_68 + 1;
    do {
      lVar11 = *plVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = lVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*local_68 + 0x10))(local_68);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_2a8 != (long *)0x0) {
    plVar4 = local_2a8 + 1;
    do {
      lVar11 = *plVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = lVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*local_2a8 + 0x10))(local_2a8);
      std::__shared_weak_count::__release_weak();
    }
  }
  FUN_0070a4e8(auStack_200);
  FUN_01d08584(auStack_1d8);
  return;
}


