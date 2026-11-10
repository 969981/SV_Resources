/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002f74b0; name: FUN_002f74b0
 */


void FUN_002f74b0(long param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long *plVar12;
  char *local_f0;
  undefined8 uStack_e8;
  long local_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  char *local_88;
  undefined8 uStack_80;
  byte local_58 [16];
  ulong local_48;
  
  lVar9 = *(long *)(param_1 + 0x18);
  puVar11 = *(undefined8 **)(lVar9 + 0x10);
  if (param_2 != 0) {
    local_88 = "Invalid host ";
    uStack_80 = 0xd;
    local_c0 = (long)puVar11 + 0x21;
    if (puVar11[3] != 0) {
      local_c0 = puVar11[5];
    }
    uStack_b8 = puVar11[4] & 0xff;
    if (puVar11[3] != 0) {
      uStack_b8 = puVar11[4];
    }
    local_f0 = " set in :authority metadata.";
    uStack_e8 = 0x1c;
    FUN_00395a70(local_58,&local_88,&local_c0,&local_f0);
    uVar6 = (ulong)local_58 | 1;
    if ((local_58[0] & 1) != 0) {
      uVar6 = local_48;
    }
                    /* try { // try from 002f7540 to 002f757f has its CatchHandler @ 002f789c */
    FUN_00367770(&local_88,uVar6);
    uVar4 = FUN_00351340("external/com_google_grpc_base/src/core/lib/security/transport/client_auth_filter.cc"
                         ,0x158,&local_88,0,0);
    uVar4 = FUN_00351770(uVar4,3,0x10);
    FUN_0037b1c0(param_1,uVar4,puVar11[1]);
    if ((local_58[0] & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_48);
    }
    goto LAB_002f77e0;
  }
  plVar12 = *(long **)(lVar9 + 8);
  plVar7 = (long *)**(undefined8 **)(*(long *)(param_1 + 8) + 0x90);
  lVar5 = *(long *)(*plVar12 + 0x20);
  if (plVar7 == (long *)0x0) {
    bVar2 = false;
  }
  else {
    bVar2 = *plVar7 != 0;
  }
  if ((lVar5 == 0) && (!bVar2)) {
    FUN_00344800(lVar9,param_1);
    goto LAB_002f77e0;
  }
  if (lVar5 == 0 || !bVar2) {
    if (bVar2) {
      lVar5 = *plVar7;
    }
    plVar7 = (long *)(lVar5 + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    puVar10 = (undefined8 *)puVar11[2];
    if (puVar10 != (undefined8 *)0x0) {
      plVar7 = puVar10 + 1;
      do {
        lVar8 = *plVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar2) {
          *plVar7 = lVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar8 + -1 == 0) {
        (**(code **)*puVar10)(puVar10);
        FUN_0049e790(PTR_LAB_047cba48,puVar10);
      }
    }
    puVar11[2] = lVar5;
LAB_002f7690:
    FUN_002ebb10(&local_f0,plVar12[1],"security_level");
    lVar5 = FUN_002ebb30(&local_f0);
    if (lVar5 == 0) {
      FUN_003673f0(&local_88,
                   "Established channel does not have an auth property representing a security level."
                  );
      uVar4 = 0x11c;
    }
    else {
      uVar3 = (**(code **)(*(long *)puVar11[2] + 0x20))();
      uVar4 = FUN_002f5820(*(undefined8 *)(lVar5 + 8));
      uVar6 = FUN_002f5870(uVar4,uVar3);
      if ((uVar6 & 1) != 0) {
        FUN_002f6ce0(*(undefined8 *)(*plVar12 + 0x10),puVar11 + 3,puVar11 + 7,plVar12[1],
                     puVar11 + 0x1e);
        if (puVar11[0xb] == 0) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        plVar7 = (long *)*puVar11;
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar2) {
            *plVar7 = *plVar7 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        puVar11[0x25] = 0;
        puVar11[0x23] = FUN_002f7910;
        puVar11[0x24] = param_1;
        local_88 = (char *)0x0;
        uStack_b8 = puVar11[0x1f];
        local_c0 = puVar11[0x1e];
        uStack_a8 = puVar11[0x21];
        uStack_b0 = puVar11[0x20];
        uVar6 = (**(code **)(*(long *)puVar11[2] + 0x10))
                          ((long *)puVar11[2],puVar11[0xb],&local_c0,puVar11 + 0xc,puVar11 + 0x22,
                           &local_88);
        if ((uVar6 & 1) == 0) {
          puVar11[0x2b] = &LAB_002f7b20;
          puVar11[0x2c] = lVar9;
          puVar11[0x2d] = 0;
          FUN_00350548(puVar11[1],puVar11 + 0x2a);
        }
        else {
          FUN_002f7910(param_1,local_88);
          if ((char *)0x4 < local_88) {
            FUN_00350fd0();
          }
        }
        goto LAB_002f77e0;
      }
      FUN_003673f0(&local_88,
                   "Established channel does not have a sufficient security level to transfer call credential."
                  );
      uVar4 = 299;
    }
  }
  else {
    lVar5 = FUN_002ecb20(lVar5,*plVar7,0);
    puVar10 = (undefined8 *)puVar11[2];
    if (puVar10 == (undefined8 *)0x0) {
LAB_002f7628:
      puVar11[2] = lVar5;
    }
    else {
      plVar7 = puVar10 + 1;
      do {
        lVar8 = *plVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar2) {
          *plVar7 = lVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar8 + -1 != 0) goto LAB_002f7628;
      (**(code **)*puVar10)(puVar10);
      FUN_0049e790(PTR_LAB_047cba48,puVar10);
      puVar11[2] = lVar5;
    }
    if (lVar5 != 0) goto LAB_002f7690;
    FUN_003673f0(&local_88,"Incompatible credentials set on channel and call.");
    uVar4 = 0x107;
  }
  uVar4 = FUN_00351340("external/com_google_grpc_base/src/core/lib/security/transport/client_auth_filter.cc"
                       ,uVar4,&local_88,0,0);
  uVar4 = FUN_00351770(uVar4,3,0x10);
  FUN_0037b1c0(param_1,uVar4,puVar11[1]);
LAB_002f77e0:
  plVar7 = (long *)*puVar11;
  do {
    lVar9 = *plVar7;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar2) {
      *plVar7 = lVar9 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar9 + -1 == 0) {
    FUN_0037af30();
  }
  return;
}


