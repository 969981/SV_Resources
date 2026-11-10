/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0034b914; name: FUN_0034b914
 */


undefined1 FUN_0034b914(long param_1,ulong param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined1 auStack_40 [32];
  
  uVar5 = *(ulong *)(param_1 + 0x38) >> 1;
  uVar4 = *(ulong *)(param_1 + 0x50);
  if (uVar5 < uVar4) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (param_2 == 0) {
    if (*(char *)(param_1 + 0x30) == '\0') {
      param_2 = 0;
      if ((uVar4 != uVar5) && (*(char *)(param_1 + 0x108) == '\0')) {
        if ((*(ulong *)(param_1 + 0x38) & 1) == 0) {
          lVar8 = param_1 + 0x40;
          lVar6 = *(long *)(lVar8 + uVar4 * 8);
          if (lVar6 != 0) goto LAB_0034ba38;
LAB_0034ba60:
          plVar7 = (long *)0x0;
        }
        else {
          lVar8 = *(long *)(param_1 + 0x40);
          lVar6 = *(long *)(lVar8 + uVar4 * 8);
          if (lVar6 == 0) goto LAB_0034ba60;
LAB_0034ba38:
          plVar7 = (long *)(lVar6 + 8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar3) {
              *plVar7 = *plVar7 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          plVar7 = *(long **)(lVar8 + uVar4 * 8);
        }
                    /* try { // try from 0034ba74 to 0034ba7b has its CatchHandler @ 0034bac0 */
        (**(code **)(*plVar7 + 0x18))
                  (plVar7,*(undefined8 *)(param_1 + 0x78),param_1 + 0x58,param_1 + 0xf0);
        if (plVar7 != (long *)0x0) {
          plVar1 = plVar7 + 1;
          do {
            lVar8 = *plVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = lVar8 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar8 + -1 == 0) {
            (**(code **)*plVar7)(plVar7);
            FUN_0049e790(PTR_LAB_047cba48,plVar7);
          }
        }
        goto LAB_0034b960;
      }
    }
    else {
      FUN_003673f0(auStack_40,"handshaker shutdown");
      param_2 = FUN_00351340("external/com_google_grpc_base/src/core/lib/channel/handshaker.cc",0x8e
                             ,auStack_40,0,0);
      lVar8 = *(long *)(param_1 + 0xf0);
      if (lVar8 != 0) {
        uVar4 = param_2;
        if (4 < param_2) {
          uVar4 = FUN_00350fb0(param_2,param_2);
        }
        FUN_00350f30(lVar8,uVar4);
        FUN_00350f40(*(undefined8 *)(param_1 + 0xf0));
        *(undefined8 *)(param_1 + 0xf0) = 0;
        FUN_00343d90(*(undefined8 *)(param_1 + 0xf8));
        *(undefined8 *)(param_1 + 0xf8) = 0;
        FUN_00368470(*(undefined8 *)(param_1 + 0x100));
        free(*(void **)(param_1 + 0x100));
        *(undefined8 *)(param_1 + 0x100) = 0;
      }
    }
  }
  FUN_00360570(param_1 + 0x80);
  FUN_0035351c(auStack_40,param_1 + 0xd0,param_2);
  *(undefined1 *)(param_1 + 0x30) = 1;
LAB_0034b960:
  *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + 1;
  return *(undefined1 *)(param_1 + 0x30);
}


