/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002eea90; name: FUN_002eea90
 */


long FUN_002eea90(byte *param_1,undefined8 *param_2)

{
  char cVar1;
  ulong uVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  char cVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined1 auVar12 [16];
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long *local_160;
  int local_158;
  undefined4 uStack_154;
  undefined2 uStack_150;
  undefined6 uStack_14e;
  undefined8 local_148;
  undefined8 uStack_140;
  long *local_138;
  long local_130;
  long local_128;
  long local_120;
  long lStack_118;
  undefined8 local_110;
  int local_108 [2];
  ulong local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  long *local_e8;
  long local_e0;
  long local_d8;
  long local_d0;
  long lStack_c8;
  undefined8 local_c0;
  long local_b8;
  undefined8 *local_b0;
  undefined8 local_a8;
  long lStack_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long *local_50;
  
                    /* try { // try from 002eeaac to 002eeab3 has its CatchHandler @ 002eefb0 */
  FUN_00367020(&local_b0);
  local_108[0] = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_f0 = 0;
  local_d0 = 0;
  lStack_c8 = 0;
  local_e8 = &local_e0;
  if ((*param_1 & 1) == 0) {
    if (*param_1 < 2) goto LAB_002eeba4;
    param_1 = param_1 + 1;
LAB_002eeaf8:
                    /* try { // try from 002eeaf8 to 002eeb07 has its CatchHandler @ 002eef54 */
    local_b8 = FUN_00357e00(param_1,0,&local_b0);
    if (local_b8 != 0) {
LAB_002eeca0:
      puVar10 = (undefined8 *)0x0;
      goto LAB_002eeca4;
    }
    lVar9 = (long)&local_a8 + 1;
    if (local_b0 != (undefined8 *)0x0) {
      lVar9 = lStack_a0;
    }
    uVar2 = local_a8 & 0xff;
    if (local_b0 != (undefined8 *)0x0) {
      uVar2 = local_a8;
    }
                    /* try { // try from 002eeb30 to 002eeb3b has its CatchHandler @ 002eef50 */
    FUN_00362c44(&local_158,lVar9,uVar2,&local_b8);
    lVar9 = local_d0;
    local_108[0] = local_158;
    local_158 = 0;
    if (local_108[0] - 3U < 2) {
      if ((local_100 & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,local_f0);
      }
      local_100 = CONCAT62(uStack_14e,uStack_150);
      uStack_150 = 0;
      local_f0 = uStack_140;
      uStack_f8 = local_148;
    }
    else if (local_108[0] == 5) {
      FUN_0025cef0(&local_e8,local_e0);
      local_e8 = local_138;
      local_e0 = local_130;
      local_d8 = local_128;
      if (local_128 == 0) {
        local_e8 = &local_e0;
      }
      else {
        *(long **)(local_130 + 0x10) = &local_e0;
        local_138 = &local_130;
        local_130 = 0;
        local_128 = 0;
      }
    }
    else if (local_108[0] == 6) {
      lVar7 = lStack_c8;
      if (local_d0 != 0) {
        while (lVar7 != lVar9) {
          FUN_00288048(lVar7 + -0x50);
          lVar7 = lVar7 + -0x50;
        }
        lStack_c8 = lVar9;
        FUN_0049e790(PTR_LAB_047cba48,local_d0);
      }
      lStack_c8 = lStack_118;
      local_d0 = local_120;
      local_c0 = local_110;
      local_110 = 0;
      local_120 = 0;
      lStack_118 = 0;
    }
    FUN_00288048(&local_158);
    if (local_b8 != 0) goto LAB_002eeca0;
    if (local_108[0] == 5) {
                    /* try { // try from 002eed80 to 002eed8b has its CatchHandler @ 002eef44 */
      FUN_002ef320(&local_158,local_108);
      uStack_68 = CONCAT62(uStack_14e,uStack_150);
      local_70 = CONCAT44(uStack_154,local_158);
      local_50 = local_138;
      uStack_58 = uStack_140;
      uStack_60 = local_148;
                    /* try { // try from 002eeda0 to 002eedab has its CatchHandler @ 002eef54 */
      iVar4 = FUN_002ef2f0(&local_70);
      if (iVar4 == 0) {
                    /* try { // try from 002eee74 to 002eee7f has its CatchHandler @ 002eef3c */
        FUN_002f11b0(&local_158,local_108);
        uStack_88 = CONCAT62(uStack_14e,uStack_150);
        local_90 = CONCAT44(uStack_154,local_158);
        uStack_78 = uStack_140;
        uStack_80 = local_148;
                    /* try { // try from 002eee8c to 002eee97 has its CatchHandler @ 002eef54 */
        iVar4 = FUN_002f1180(&local_90);
        if (iVar4 == 0) goto LAB_002eeca0;
        uStack_198 = uStack_88;
        local_1a0 = local_90;
        uStack_188 = uStack_78;
        uStack_190 = uStack_80;
                    /* try { // try from 002eeea4 to 002eeeaf has its CatchHandler @ 002eef38 */
        FUN_002f23c0(&local_158,&local_1a0);
        puVar10 = (undefined8 *)CONCAT44(uStack_154,local_158);
        if (puVar10 != (undefined8 *)0x0) goto LAB_002eeca4;
                    /* try { // try from 002eeeb8 to 002eeee3 has its CatchHandler @ 002eef34 */
        FUN_003673f0(&local_158,
                     "grpc_refresh_token_credentials_create_from_auth_refresh_token failed");
        local_b8 = FUN_00351340("external/com_google_grpc_base/src/core/lib/security/credentials/google_default/google_default_credentials.cc"
                                ,0x108,&local_158,0,0);
      }
      else {
        uStack_178 = uStack_68;
        local_180 = local_70;
        uStack_168 = uStack_58;
        uStack_170 = uStack_60;
        local_160 = local_50;
                    /* try { // try from 002eedc0 to 002eeddf has its CatchHandler @ 002eef48 */
        auVar12 = FUN_002ef2e0();
        FUN_002f1010(&local_158,&local_180,auVar12._0_8_,auVar12._8_8_);
        puVar10 = (undefined8 *)CONCAT44(uStack_154,local_158);
        if (puVar10 != (undefined8 *)0x0) goto LAB_002eeca4;
                    /* try { // try from 002eede8 to 002eee13 has its CatchHandler @ 002eef40 */
        FUN_003673f0(&local_158,
                     "grpc_service_account_jwt_access_credentials_create_from_auth_json_key failed")
        ;
        local_b8 = FUN_00351340("external/com_google_grpc_base/src/core/lib/security/credentials/google_default/google_default_credentials.cc"
                                ,0xfb,&local_158,0,0);
      }
    }
    else {
                    /* try { // try from 002eee18 to 002eee6f has its CatchHandler @ 002eef4c */
      FUN_003673f0(&local_158,"Failed to parse JSON");
      uVar5 = FUN_00351340("external/com_google_grpc_base/src/core/lib/security/credentials/google_default/google_default_credentials.cc"
                           ,0xed,&local_158,0,0);
      if ((local_b0 != (undefined8 *)0x0) && (plVar6 = (long *)*local_b0, plVar6 != (long *)0x0)) {
        do {
          cVar8 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar3) {
            *plVar6 = *plVar6 + 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
      }
      local_b8 = FUN_00351fa0(uVar5,6,&local_b0);
    }
  }
  else {
    if (*(long *)(param_1 + 8) != 0) {
      param_1 = *(byte **)(param_1 + 0x10);
      goto LAB_002eeaf8;
    }
LAB_002eeba4:
                    /* try { // try from 002eeba4 to 002eebcf has its CatchHandler @ 002eef5c */
    FUN_003673f0(&local_158,"creds_path unset");
    local_b8 = FUN_00351340("external/com_google_grpc_base/src/core/lib/security/credentials/google_default/google_default_credentials.cc"
                            ,0xe4,&local_158,0,0);
  }
  puVar10 = (undefined8 *)0x0;
LAB_002eeca4:
  cVar8 = '\x02';
  if (puVar10 != (undefined8 *)0x0) {
    cVar8 = '\x01';
  }
  cVar1 = puVar10 == (undefined8 *)0x0;
  if (local_b8 == 0) {
    cVar1 = cVar8;
  }
  if (cVar1 != '\x01') {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 002eef30 to 002eef33 has its CatchHandler @ 002eef54 */
    abort();
  }
  if ((local_b0 != (undefined8 *)0x0) && (plVar6 = (long *)*local_b0, plVar6 != (long *)0x0)) {
    do {
      lVar9 = *plVar6;
      cVar8 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar9 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (lVar9 + -1 == 0) {
                    /* try { // try from 002eecf0 to 002eecf3 has its CatchHandler @ 002eef54 */
      (*(code *)local_b0[3])(local_b0[4]);
    }
  }
  if (puVar10 != (undefined8 *)0x0) {
    plVar6 = puVar10 + 1;
    do {
      cVar8 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
  }
  puVar11 = (undefined8 *)*param_2;
  if (puVar11 != (undefined8 *)0x0) {
    plVar6 = puVar11 + 1;
    do {
      lVar9 = *plVar6;
      cVar8 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar9 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (lVar9 + -1 == 0) {
      (**(code **)*puVar11)(puVar11);
      FUN_0049e790(PTR_LAB_047cba48,puVar11);
    }
  }
  lVar9 = local_b8;
  *param_2 = puVar10;
  FUN_00288048(local_108);
  if (puVar10 != (undefined8 *)0x0) {
    plVar6 = puVar10 + 1;
    do {
      lVar7 = *plVar6;
      cVar8 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar7 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (lVar7 + -1 == 0) {
      (**(code **)*puVar10)(puVar10);
      FUN_0049e790(PTR_LAB_047cba48,puVar10);
    }
  }
  return lVar9;
}


