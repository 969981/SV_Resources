/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002b5360; name: FUN_002b5360
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002b5360(undefined8 *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long local_70;
  ulong uStack_68;
  
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = param_1 + 1;
                    /* try { // try from 002b5394 to 002b5397 has its CatchHandler @ 002b56bc */
  plVar6 = (long *)FUN_002c3d70(param_2 + 0x21);
  puVar5 = PTR___tls_init_047cc328;
  puVar4 = PTR_LAB_047cba48;
  if (param_2 + 0x22 != plVar6) {
    plVar11 = (long *)plVar6[0xe];
    plVar6 = plVar6 + 0xf;
    if (plVar11 != plVar6) {
      lVar3 = tpidr_el0;
      plVar10 = param_2 + 1;
      if (param_2 == (long *)0x0) {
        do {
          uStack_68 = (ulong)(*(byte *)(plVar11 + 4) >> 1);
          local_70 = (long)plVar11 + 0x21;
          if ((*(byte *)(plVar11 + 4) & 1) != 0) {
            uStack_68 = plVar11[5];
            local_70 = plVar11[6];
          }
                    /* try { // try from 002b5580 to 002b558f has its CatchHandler @ 002b56c4 */
          FUN_002c542c(param_1,&local_70,&local_70);
          lVar12 = plVar11[7];
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(8,0x10);
            if (bVar2) {
              cVar1 = ExclusiveMonitorsStatus();
              _DAT_00000008 = _DAT_00000008 + 1;
            }
          } while (cVar1 != '\0');
          if (*(char *)(lVar12 + 0x48) == '\0') {
            plVar10 = *(long **)(lVar12 + 0x40);
            *(undefined1 *)(lVar12 + 0x48) = 1;
            if (plVar10 != (long *)0x0) {
              plVar9 = plVar10 + 1;
              do {
                lVar8 = *plVar9;
                cVar1 = '\x01';
                bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
                if (bVar2) {
                  *plVar9 = lVar8 + -1;
                  cVar1 = ExclusiveMonitorsStatus();
                }
              } while (cVar1 != '\0');
              if (lVar8 + -1 == 0) {
                (**(code **)(*plVar10 + 8))(plVar10);
                FUN_0049e790(puVar4,plVar10);
              }
            }
            plVar10 = (long *)(lVar12 + 8);
            *(undefined8 *)(lVar12 + 0x40) = 0;
            do {
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
              if (bVar2) {
                *plVar10 = *plVar10 + 1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            *(undefined1 *)(lVar12 + 0x49) = 1;
            if (puVar5 != (undefined *)0x0) {
                    /* try { // try from 002b55f0 to 002b55f3 has its CatchHandler @ 002b56c0 */
              grpc_core::ExecCtx::exec_ctx_::__tls_init();
            }
                    /* try { // try from 002b5608 to 002b5633 has its CatchHandler @ 002b56c0 */
            lVar8 = FUN_0035347c(*(undefined8 *)(lVar3 + 0x48));
            FUN_00360550(lVar12 + 0x50,
                         *(long *)(*(long *)(*(long *)(*(long *)(*(long *)(lVar12 + 0x40) + 0x10) +
                                                      0x18) + 0x10) + 0x10) + lVar8,lVar12 + 0x80);
          }
          plVar10 = (long *)plVar11[1];
          if ((long *)plVar11[1] == (long *)0x0) {
            plVar10 = plVar11 + 2;
            plVar9 = (long *)*plVar10;
            if ((long *)*plVar9 != plVar11) {
              do {
                lVar12 = *plVar10;
                plVar10 = (long *)(lVar12 + 0x10);
                plVar9 = (long *)*plVar10;
              } while (*plVar9 != lVar12);
            }
          }
          else {
            do {
              plVar9 = plVar10;
              plVar10 = (long *)*plVar9;
            } while ((long *)*plVar9 != (long *)0x0);
          }
          plVar11 = plVar9;
        } while (plVar9 != plVar6);
      }
      else {
        do {
          uStack_68 = (ulong)(*(byte *)(plVar11 + 4) >> 1);
          local_70 = (long)plVar11 + 0x21;
          if ((*(byte *)(plVar11 + 4) & 1) != 0) {
            uStack_68 = plVar11[5];
            local_70 = plVar11[6];
          }
                    /* try { // try from 002b5404 to 002b5413 has its CatchHandler @ 002b56cc */
          FUN_002c542c(param_1,&local_70,&local_70);
          lVar12 = plVar11[7];
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar2) {
              *plVar10 = *plVar10 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (*(char *)(lVar12 + 0x48) == '\0') {
            plVar9 = *(long **)(lVar12 + 0x40);
            *(undefined1 *)(lVar12 + 0x48) = 1;
            if (plVar9 != (long *)0x0) {
              plVar7 = plVar9 + 1;
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
                (**(code **)(*plVar9 + 8))(plVar9);
                FUN_0049e790(puVar4,plVar9);
              }
            }
            plVar9 = (long *)(lVar12 + 8);
            *(long **)(lVar12 + 0x40) = param_2;
            do {
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar2) {
                *plVar9 = *plVar9 + 1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            *(undefined1 *)(lVar12 + 0x49) = 1;
            if (puVar5 != (undefined *)0x0) {
                    /* try { // try from 002b54a8 to 002b54ab has its CatchHandler @ 002b56c8 */
              grpc_core::ExecCtx::exec_ctx_::__tls_init();
            }
                    /* try { // try from 002b54c0 to 002b54eb has its CatchHandler @ 002b56c8 */
            lVar8 = FUN_0035347c(*(undefined8 *)(lVar3 + 0x48));
            FUN_00360550(lVar12 + 0x50,
                         *(long *)(*(long *)(*(long *)(*(long *)(*(long *)(lVar12 + 0x40) + 0x10) +
                                                      0x18) + 0x10) + 0x10) + lVar8,lVar12 + 0x80);
          }
          else {
            do {
              lVar12 = *plVar10;
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
              if (bVar2) {
                *plVar10 = lVar12 + -1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            if (lVar12 + -1 == 0) {
              (**(code **)(*param_2 + 8))(param_2);
              FUN_0049e790(puVar4,param_2);
            }
          }
          plVar9 = (long *)plVar11[1];
          if ((long *)plVar11[1] == (long *)0x0) {
            plVar9 = plVar11 + 2;
            plVar7 = (long *)*plVar9;
            if ((long *)*plVar7 != plVar11) {
              do {
                lVar12 = *plVar9;
                plVar9 = (long *)(lVar12 + 0x10);
                plVar7 = (long *)*plVar9;
              } while (*plVar7 != lVar12);
            }
          }
          else {
            do {
              plVar7 = plVar9;
              plVar9 = (long *)*plVar7;
            } while ((long *)*plVar7 != (long *)0x0);
          }
          plVar11 = plVar7;
        } while (plVar7 != plVar6);
      }
    }
  }
  return;
}


