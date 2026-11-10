/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021309cc; name: FUN_021309cc
 */


void FUN_021309cc(undefined8 param_1)

{
  code **ppcVar1;
  undefined **ppuVar2;
  long **pplVar3;
  undefined8 *puVar4;
  char cVar5;
  long *plVar6;
  bool bVar7;
  ushort uVar8;
  uint uVar9;
  int iVar10;
  undefined8 uVar11;
  long lVar12;
  code *pcVar13;
  long lVar14;
  undefined8 *puVar15;
  long *plVar16;
  undefined1 *local_210;
  code *local_208;
  undefined1 *local_200;
  undefined1 *puStack_1f8;
  undefined1 **local_1f0;
  undefined1 *puStack_1e8;
  undefined1 *local_190;
  code *local_188;
  undefined1 *local_180;
  long *local_178;
  undefined1 *apuStack_170 [12];
  long *local_110;
  code *local_108;
  undefined *local_100;
  long *local_f8;
  long *local_f0;
  undefined1 local_e4 [4];
  code *local_e0;
  code *local_d8;
  undefined *local_d0;
  long *local_c8;
  long *local_c0 [13];
  undefined8 local_58;
  
  local_e0 = (code *)0x450f69909a9d2765;
  local_d8 = (code *)0x3c12cf7;
  local_d0 = (undefined *)0xa;
  local_c8 = (long *)0x0;
  uVar9 = FUN_0141f968(param_1,&local_e0);
  local_e4[0] = (undefined1)(uVar9 >> 8);
  if ((uVar9 & 0xff) == 0) {
    local_e4[0] = 1;
  }
  if (local_c8 != (long *)0x0) {
    (**(code **)(*local_c8 + 0x20))();
  }
  local_190 = (undefined1 *)0xac12e461ef24df58;
  local_188 = (code *)0x3c20cdf;
  local_180 = (undefined1 *)0x9;
  local_178 = (long *)0x0;
  FUN_01315eac(&local_e0,param_1,&local_190);
  if (((*PTR_DAT_047d3e28 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar10 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  bVar7 = (char)local_e0 != '\0';
  ppcVar1 = (code **)PTR_DAT_047d3e30;
  if (bVar7) {
    ppcVar1 = &local_d8;
  }
  local_108 = *ppcVar1;
  ppuVar2 = (undefined **)(PTR_DAT_047d3e30 + 8);
  if (bVar7) {
    ppuVar2 = &local_d0;
  }
  local_100 = *ppuVar2;
  pplVar3 = (long **)(PTR_DAT_047d3e30 + 0x10);
  if (bVar7) {
    pplVar3 = &local_c8;
  }
  local_f8 = *pplVar3;
  pplVar3 = (long **)(PTR_DAT_047d3e30 + 0x18);
  if (bVar7) {
    pplVar3 = local_c0;
  }
  local_f0 = *pplVar3;
  if (local_f0 != (long *)0x0) {
    (**(code **)(*local_f0 + 0x18))();
  }
  if ((char)local_e0 != '\0') {
    if (local_c0[0] != (long *)0x0) {
      (**(code **)(*local_c0[0] + 0x20))();
    }
    local_e0 = (code *)((ulong)local_e0 & 0xffffffffffffff00);
  }
  if (local_178 != (long *)0x0) {
    (**(code **)(*local_178 + 0x20))();
  }
  local_e0 = (code *)0x14d152b325b662c9;
  local_d8 = (code *)0x3c92e43;
  local_d0 = (undefined *)0xf;
  local_c8 = (long *)0x0;
  uVar8 = FUN_0141f968(param_1,&local_e0);
  if (local_c8 != (long *)0x0) {
    (**(code **)(*local_c8 + 0x20))();
  }
  if (((*PTR_DAT_047d4df8 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_047d4df8), iVar10 != 0)) {
    FUN_00100190(PTR_LAB_047d4e10,PTR_DAT_047d4e00,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4df8);
  }
  uVar11 = *(undefined8 *)PTR_DAT_047d4e00;
  *(undefined8 *)PTR_DAT_047d4e08 = uVar11;
  FUN_00f7176c(&local_110,uVar11,&local_108);
  plVar6 = local_110;
  if (local_110 == (long *)0x0) goto LAB_02130cf4;
  local_190 = &LAB_02130e8c;
  local_188 = FUN_02b232d0;
  puStack_1e8 = local_e4;
  local_178 = (long *)&LAB_02b232e0;
  local_1f0 = &local_190;
  local_210 = &LAB_021310f0;
  local_208 = FUN_02b232ec;
  local_180 = &LAB_02b232d4;
  local_200 = &LAB_02b232f0;
  puStack_1f8 = &LAB_02b232fc;
  apuStack_170[0] = puStack_1e8;
  FUN_02130e40(&local_1f0,local_110);
  if (((uVar8 & 0xff) == 0) || (pcVar13 = FUN_02b232ec, 0xff < uVar8)) {
    local_e0 = (code *)PTR_FUN_047db0a8;
    local_d8 = (code *)PTR_FUN_047db0b0;
    local_d0 = PTR_LAB_047db0b8;
    local_c8 = (long *)PTR_LAB_047db0c0;
    plVar16 = plVar6 + 0x3b;
    lVar14 = *plVar16;
    local_c0[0] = (long *)&local_210;
    lVar12 = nn::os::GetCurrentThread();
    if (lVar12 != lVar14) {
      lVar12 = nn::os::GetCurrentThread();
LAB_02130c64:
      if (*plVar16 == 0) goto code_r0x02130c6c;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(plVar6 + 0x3c));
      do {
        if (*plVar16 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(plVar6 + 0x3c));
            while (*plVar16 == 0) {
              cVar5 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar16,0x10);
              if (bVar7) {
                *plVar16 = lVar12;
                cVar5 = ExclusiveMonitorsStatus();
              }
              if (cVar5 == '\0') goto LAB_02130c74;
            }
          } while( true );
        }
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar7) {
          *plVar16 = lVar12;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
LAB_02130c74:
      bVar7 = false;
      goto LAB_02130c78;
    }
    plVar16 = (long *)0x0;
    bVar7 = true;
LAB_02130c78:
    puVar4 = (undefined8 *)plVar6[0x3f];
    for (puVar15 = (undefined8 *)plVar6[0x3e]; puVar15 != puVar4; puVar15 = puVar15 + 1) {
      local_58 = *puVar15;
      (*local_e0)(local_c0,&local_58);
    }
    if (!bVar7) {
      *plVar16 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar16 + 1));
    }
    pcVar13 = local_d8;
    if (local_d8 != (code *)0x0) {
      local_d0 = (undefined *)0x0;
      local_c8 = (long *)0x0;
      local_e0 = (code *)0x0;
      local_d8 = (code *)0x0;
      (*pcVar13)(local_c0);
    }
    pcVar13 = local_208;
    if (local_208 != (code *)0x0) goto LAB_02130c00;
  }
  else {
LAB_02130c00:
    local_200 = (undefined1 *)0x0;
    puStack_1f8 = (undefined1 *)0x0;
    local_210 = (undefined1 *)0x0;
    local_208 = (code *)0x0;
    (*pcVar13)(&local_1f0);
  }
  pcVar13 = local_188;
  if (local_188 != (code *)0x0) {
    local_180 = (undefined1 *)0x0;
    local_178 = (long *)0x0;
    local_190 = (undefined1 *)0x0;
    local_188 = (code *)0x0;
    (*pcVar13)(apuStack_170);
  }
  if (local_110 != (long *)0x0) {
    (**(code **)(*local_110 + 0x60))();
  }
LAB_02130cf4:
  if (local_f0 != (long *)0x0) {
    (**(code **)(*local_f0 + 0x20))();
  }
  return;
code_r0x02130c6c:
  cVar5 = '\x01';
  bVar7 = (bool)ExclusiveMonitorPass(plVar16,0x10);
  if (bVar7) {
    *plVar16 = lVar12;
    cVar5 = ExclusiveMonitorsStatus();
  }
  if (cVar5 == '\0') goto LAB_02130c74;
  goto LAB_02130c64;
}


