/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0310117c; name: FUN_0310117c
 */


void FUN_0310117c(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  undefined1 *local_58;
  undefined8 local_50;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar6 = *(long *)(param_1 + 0x178);
  if (lVar6 != 0) {
    uVar10 = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(lVar6 + 0x28) = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(lVar6 + 0x20) = uVar10;
    *(undefined4 *)(*(long *)(param_1 + 0x178) + 0x58) = *(undefined4 *)(param_1 + 400);
    plVar8 = *(long **)(param_1 + 0x178);
    if (plVar8 != (long *)0x0) {
      if (plVar8[1] != 0) {
        plVar5 = plVar8 + 2;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar4) {
            *plVar5 = *plVar5 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      local_38 = 0;
      local_58 = auStack_48;
      local_50 = -0x7ffffffeffffffff;
      FUN_03102f44(param_1,plVar8,param_2,&local_58);
      FUN_030d10b4(*(undefined8 *)(*(long *)(param_1 + 0x118) + 0x250),local_58,
                   local_58 + local_38 * 0x10);
      if (local_38 != 0) {
        puVar2 = local_58 + local_38 * 0x10;
        puVar9 = local_58;
        do {
          plVar5 = *(long **)(puVar9 + 8);
          if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
            plVar1 = plVar5 + 2;
            do {
              lVar6 = *plVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar4) {
                *plVar1 = lVar6 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar6 + -1 == 0) {
              (**(code **)(*plVar5 + 0x18))();
            }
          }
          puVar9 = puVar9 + 0x10;
        } while (puVar9 != puVar2);
      }
      lVar6 = local_50;
      uVar7 = (ulong)local_50._4_4_;
      local_50 = (ulong)local_50._4_4_ << 0x20;
      if ((-1 < lVar6) && (local_58 != (undefined1 *)0x0)) {
        (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_58,uVar7 << 4);
      }
      if (plVar8[1] != 0) {
        plVar5 = plVar8 + 2;
        do {
          lVar6 = *plVar5;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar4) {
            *plVar5 = lVar6 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar6 + -1 == 0) {
          (**(code **)(*plVar8 + 0x18))(plVar8);
        }
      }
    }
  }
  return;
}


