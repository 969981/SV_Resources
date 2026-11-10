/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002f1914; name: FUN_002f1914
 */


void FUN_002f1914(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  undefined8 *puVar8;
  bool bVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auStack_90 [32];
  undefined8 local_70;
  ulong local_68;
  long lStack_58;
  
  local_70 = 0;
  local_68 = 0;
  lStack_58 = param_3;
  if (param_3 == 0) {
    iVar3 = FUN_002f12d0(param_2 + 1,&local_68,&local_70);
    uVar6 = local_68;
    FUN_0038db40(param_1 + 4);
    uVar7 = (uint)uVar6 & 3;
    *(undefined1 *)(param_1 + 0xb) = 0;
    if (uVar7 < 2) {
      param_1[8] = uVar6;
    }
    else {
      plVar1 = (long *)((uVar6 & 0xfffffffffffffffc) + 0x40);
      if (uVar7 == 2) {
        do {
          cVar2 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar9) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        uVar7 = 2;
        param_1[8] = uVar6;
      }
      else {
        do {
          cVar2 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar9) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        uVar7 = 3;
        param_1[8] = uVar6;
      }
    }
    if (iVar3 == 0) {
      auVar12 = FUN_0038e500(0);
      auVar13 = FUN_0038de20(local_70,3);
      auVar12 = FUN_0038dee0(auVar12._0_8_,auVar12._8_8_,auVar13._0_8_,auVar13._8_8_);
      bVar9 = true;
      goto LAB_002f1968;
    }
  }
  else {
    FUN_0038db40(param_1 + 4);
    uVar6 = 0;
    uVar7 = 0;
    *(undefined1 *)(param_1 + 0xb) = 0;
    param_1[8] = 0;
  }
  auVar12 = FUN_0038dd70(0);
  bVar9 = false;
LAB_002f1968:
  puVar8 = (undefined8 *)param_1[0xc];
  *(undefined1 (*) [16])(param_1 + 9) = auVar12;
  param_1[0xc] = 0;
  FUN_0038db60(param_1 + 4);
  if (puVar8 != (undefined8 *)0x0) {
    if (bVar9) {
      do {
        FUN_002edd30(*puVar8,uVar6);
        FUN_0035351c(auStack_90,puVar8[1],0);
        uVar10 = puVar8[2];
        uVar4 = FUN_00358020(param_1 + 0xe);
        FUN_003580b0(uVar10,uVar4);
        puVar11 = (undefined8 *)puVar8[3];
        free(puVar8);
        puVar8 = puVar11;
      } while (puVar11 != (undefined8 *)0x0);
    }
    else {
      do {
        FUN_003673f0(auStack_90,"Error occurred when fetching oauth2 token.");
        uVar4 = FUN_00351340("external/com_google_grpc_base/src/core/lib/security/credentials/oauth2/oauth2_credentials.cc"
                             ,0x106,auStack_90,&lStack_58,1);
        FUN_0035351c(auStack_90,puVar8[1],uVar4);
        uVar10 = puVar8[2];
        uVar4 = FUN_00358020(param_1 + 0xe);
        FUN_003580b0(uVar10,uVar4);
        puVar11 = (undefined8 *)puVar8[3];
        free(puVar8);
        puVar8 = puVar11;
      } while (puVar11 != (undefined8 *)0x0);
    }
  }
  if (1 < uVar7) {
    uVar6 = uVar6 & 0xfffffffffffffffc;
    plVar1 = (long *)(uVar6 + 0x40);
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar9) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
      FUN_00376de0(uVar7,uVar6,*(undefined4 *)(uVar6 + 0x48));
    }
  }
  plVar1 = param_1 + 1;
  do {
    lVar5 = *plVar1;
    cVar2 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar9) {
      *plVar1 = lVar5 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if ((param_1 != (undefined8 *)0x0) && (lVar5 == 1)) {
    (**(code **)*param_1)(param_1);
    FUN_0049e790(PTR_LAB_047cba48,param_1);
  }
  if (param_2 != (undefined8 *)0x0) {
                    /* try { // try from 002f1b18 to 002f1b1b has its CatchHandler @ 002f1c04 */
    FUN_0034f890(param_2 + 1);
    puVar8 = (undefined8 *)*param_2;
    if (puVar8 != (undefined8 *)0x0) {
      plVar1 = puVar8 + 1;
      do {
        lVar5 = *plVar1;
        cVar2 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar9) {
          *plVar1 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)*puVar8)(puVar8);
        FUN_0049e790(PTR_LAB_047cba48,puVar8);
      }
    }
    FUN_0049e790(PTR_LAB_047cba48,param_2);
  }
  return;
}


