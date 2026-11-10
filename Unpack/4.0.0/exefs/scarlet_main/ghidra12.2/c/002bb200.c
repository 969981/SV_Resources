/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002bb200; name: FUN_002bb200
 */


void FUN_002bb200(long param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long *local_70;
  long local_68;
  long local_60;
  undefined8 *local_58 [4];
  long *local_38;
  long local_30;
  long lStack_28;
  
  lVar5 = *(long *)(param_1 + 0x10);
  FUN_002bb588(&local_38,*(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x10) + 0x18) + 0x10),
               *(undefined1 *)(lVar5 + 0xf0),lVar5 + 0xf8);
  cVar1 = *(char *)(param_1 + 0x20);
  if (local_38 != &local_30) {
    plVar6 = local_38;
    do {
      while( true ) {
        plVar7 = (long *)plVar6[10];
        while (plVar7 != plVar6 + 0xb) {
          if (plVar7[7] != 0) goto LAB_002bb45c;
          plVar8 = (long *)plVar7[1];
          if ((long *)plVar7[1] == (long *)0x0) {
            plVar8 = plVar7 + 2;
            if (*(long **)*plVar8 == plVar7) {
              plVar7 = (long *)*plVar8;
            }
            else {
              do {
                lVar5 = *plVar8;
                plVar8 = (long *)(lVar5 + 0x10);
                plVar7 = (long *)*plVar8;
              } while (*plVar7 != lVar5);
            }
          }
          else {
            do {
              plVar7 = plVar8;
              plVar8 = (long *)*plVar7;
            } while ((long *)*plVar7 != (long *)0x0);
          }
        }
        plVar7 = (long *)plVar6[0xd];
        while (plVar7 != plVar6 + 0xe) {
          if ((((plVar7[5] != 0) || (plVar7[6] != 0)) || (plVar7[7] != 0)) || (plVar7[8] != 0))
          goto LAB_002bb45c;
          plVar8 = (long *)plVar7[9];
          while (plVar8 != plVar7 + 10) {
            if ((plVar8[7] != 0) || ((double)plVar8[8] != 0.0)) goto LAB_002bb45c;
            plVar9 = (long *)plVar8[1];
            if ((long *)plVar8[1] == (long *)0x0) {
              plVar9 = plVar8 + 2;
              if (*(long **)*plVar9 == plVar8) {
                plVar8 = (long *)*plVar9;
              }
              else {
                do {
                  lVar5 = *plVar9;
                  plVar9 = (long *)(lVar5 + 0x10);
                  plVar8 = (long *)*plVar9;
                } while (*plVar8 != lVar5);
              }
            }
            else {
              do {
                plVar8 = plVar9;
                plVar9 = (long *)*plVar8;
              } while ((long *)*plVar8 != (long *)0x0);
            }
          }
          plVar8 = (long *)plVar7[1];
          if ((long *)plVar7[1] == (long *)0x0) {
            plVar8 = plVar7 + 2;
            if (*(long **)*plVar8 == plVar7) {
              plVar7 = (long *)*plVar8;
            }
            else {
              do {
                lVar5 = *plVar8;
                plVar8 = (long *)(lVar5 + 0x10);
                plVar7 = (long *)*plVar8;
              } while (*plVar7 != lVar5);
            }
          }
          else {
            do {
              plVar7 = plVar8;
              plVar8 = (long *)*plVar7;
            } while ((long *)*plVar7 != (long *)0x0);
          }
        }
        plVar7 = (long *)plVar6[1];
        if ((long *)plVar6[1] == (long *)0x0) break;
        do {
          plVar6 = plVar7;
          plVar7 = (long *)*plVar6;
        } while ((long *)*plVar6 != (long *)0x0);
LAB_002bb3ec:
        if (plVar6 == &local_30) goto LAB_002bb404;
      }
      plVar7 = plVar6 + 2;
      plVar8 = (long *)*plVar7;
      if ((long *)*plVar8 != plVar6) {
        do {
          lVar5 = *plVar7;
          plVar7 = (long *)(lVar5 + 0x10);
          plVar6 = (long *)*plVar7;
        } while (*plVar6 != lVar5);
        goto LAB_002bb3ec;
      }
      plVar6 = plVar8;
    } while (plVar8 != &local_30);
  }
LAB_002bb404:
  *(undefined1 *)(param_1 + 0x20) = 1;
  if (cVar1 == '\0') {
LAB_002bb460:
    lVar5 = *(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x10) + 0x18) + 0x10);
    local_70 = local_38;
    local_68 = local_30;
    local_60 = lStack_28;
    if (lStack_28 == 0) {
      local_70 = &local_68;
    }
    else {
      *(long **)(local_30 + 0x10) = &local_68;
      local_30 = 0;
      lStack_28 = 0;
      local_38 = &local_30;
    }
                    /* try { // try from 002bb4a0 to 002bb4ab has its CatchHandler @ 002bb55c */
    FUN_002ab4d8(local_58,lVar5 + 0x38,&local_70);
    FUN_002c5654(&local_70,local_68);
                    /* try { // try from 002bb4b8 to 002bb4f7 has its CatchHandler @ 002bb570 */
    uVar4 = FUN_0036a600(local_58,1);
    *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x40) = uVar4;
    if ((local_58[0] != (undefined8 *)0x0) && (plVar6 = (long *)*local_58[0], plVar6 != (long *)0x0)
       ) {
      do {
        lVar5 = *plVar6;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *plVar6 = lVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar5 + -1 == 0) {
        (*(code *)local_58[0][3])(local_58[0][4]);
      }
    }
    uStack_88 = 0;
    local_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_b8 = 0;
    local_c0 = 1;
    uStack_a8 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    local_b0 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x40);
                    /* try { // try from 002bb524 to 002bb553 has its CatchHandler @ 002bb558 */
    iVar3 = FUN_0036cee0(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x20),&local_c0,1,
                         param_1 + 0x78);
    if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  else {
    if (PTR___tls_init_047cc328 != (undefined *)0x0) {
                    /* try { // try from 002bb41c to 002bb41f has its CatchHandler @ 002bb554 */
      grpc_core::ExecCtx::exec_ctx_::__tls_init();
    }
    lVar5 = tpidr_el0;
                    /* try { // try from 002bb438 to 002bb44f has its CatchHandler @ 002bb554 */
    lVar5 = FUN_0035347c(*(undefined8 *)(lVar5 + 0x48));
    FUN_00360550(param_1 + 0x28,*(long *)(param_1 + 0x18) + lVar5,param_1 + 0x58);
    *(undefined1 *)(param_1 + 0x21) = 1;
  }
  FUN_002c5654(&local_38,local_30);
  return;
LAB_002bb45c:
  *(undefined1 *)(param_1 + 0x20) = 0;
  goto LAB_002bb460;
}


