/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002f7910; name: FUN_002f7910
 */


void FUN_002f7910(long param_1,ulong param_2)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined1 auStack_80 [32];
  
  lVar7 = *(long *)(param_1 + 0x18);
  puVar9 = *(undefined8 **)(lVar7 + 0x10);
  if ((void *)puVar9[0x1e] != (void *)0x0) {
    free((void *)puVar9[0x1e]);
    puVar9[0x1e] = 0;
  }
  if ((void *)puVar9[0x1f] != (void *)0x0) {
    free((void *)puVar9[0x1f]);
    puVar9[0x1f] = 0;
  }
  plVar8 = (long *)puVar9[0x20];
  if (plVar8 != (long *)0x0) {
    do {
      lVar6 = *plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 + -1 == 0) {
      FUN_00270ba4(plVar8);
      FUN_0049e790(PTR_LAB_047cba48,plVar8);
    }
    puVar9[0x20] = 0;
  }
  if (4 < param_2) {
    param_2 = FUN_00350fb0(param_2);
  }
  if (param_2 == 0) {
    if ((4 < (ulong)puVar9[0xd]) || ((*(byte *)(param_1 + 0x10) & 1) == 0)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (puVar9[0xd] != 0) {
      uVar10 = 0;
      param_2 = 0;
      uVar4 = **(undefined8 **)(param_1 + 8);
      do {
        uVar5 = *(ulong *)(puVar9[0xc] + uVar10 * 8);
        uVar1 = (uint)uVar5 & 3;
        if (1 < uVar1) {
          plVar8 = (long *)((uVar5 & 0xfffffffffffffffc) + 0x40);
          if (uVar1 == 2) {
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
              if (bVar3) {
                *plVar8 = *plVar8 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          else {
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
              if (bVar3) {
                *plVar8 = *plVar8 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
        }
        lVar6 = FUN_003772b0(uVar4,puVar9 + uVar10 * 4 + 0xe);
        if (lVar6 != 0) {
          if (param_2 == 0) {
            FUN_003673f0(auStack_80,"Client auth metadata plugin error");
            param_2 = FUN_00351340("external/com_google_grpc_base/src/core/lib/security/transport/client_auth_filter.cc"
                                   ,0x99,auStack_80,0,0);
          }
          param_2 = FUN_00352130(param_2,lVar6);
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < (ulong)puVar9[0xd]);
      if (param_2 != 0) goto LAB_002f7994;
    }
    FUN_00344800(lVar7,param_1);
  }
  else {
LAB_002f7994:
    uVar4 = FUN_00351770(param_2,3,0xe);
    FUN_0037b1c0(param_1,uVar4,puVar9[1]);
  }
  plVar8 = (long *)*puVar9;
  do {
    lVar7 = *plVar8;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar3) {
      *plVar8 = lVar7 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar7 + -1 == 0) {
    FUN_0037af30();
  }
  return;
}


