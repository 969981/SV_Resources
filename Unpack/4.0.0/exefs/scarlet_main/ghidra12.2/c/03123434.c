/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03123434; name: FUN_03123434
 */


void FUN_03123434(long param_1,long *param_2)

{
  long *plVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 *puVar4;
  char cVar5;
  bool bVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  undefined *local_70;
  long local_68;
  undefined8 local_60;
  long *local_58;
  undefined8 local_50 [2];
  
  lVar12 = tpidr_el0;
  lVar9 = *(long *)(lVar12 + 0x1000b8);
  if (lVar9 == 0) {
    lVar9 = FUN_00e5d3b4();
    *(long *)(lVar12 + 0x1000b8) = lVar9;
  }
  plVar11 = *(long **)(lVar9 + 0x3e0);
  if (plVar11 != (long *)0x0) {
    lVar12 = *plVar11;
    if (*(code **)(lVar12 + 0x18) != (code *)0x0) {
      (**(code **)(lVar12 + 0x18))("commitAsyncProcessingRun",0x18,*(undefined8 *)(lVar12 + 0x28));
    }
    puVar4 = (undefined8 *)plVar11[2];
    uVar10 = (long)puVar4 + 0x17U & 0xfffffffffffffff8;
    if ((uVar10 <= (ulong)plVar11[3]) && (plVar11[2] = uVar10, puVar4 != (undefined8 *)0x0)) {
      *puVar4 = "TtcommitAsyncProcessingRun";
      uVar7 = nn::os::GetSystemTick();
      puVar4[1] = uVar7;
    }
    if (((*(byte *)(lVar12 + 0x38) & 1) != 0) && (plVar11[6] != 0)) {
      puVar4 = (undefined8 *)plVar11[2];
      uVar10 = (long)puVar4 + 0x17U & 0xfffffffffffffff8;
      if ((uVar10 <= (ulong)plVar11[3]) && (plVar11[2] = uVar10, puVar4 != (undefined8 *)0x0)) {
        *puVar4 = &DAT_03c4e575;
        puVar4[1] = *(undefined8 *)(plVar11[6] + 8);
      }
    }
  }
  local_50[0] = 0x1e08000010;
  FUN_00e08a00(param_1 + 0x28,param_1,local_50);
  lVar12 = *(long *)(*(long *)(param_1 + 0x4e8) + 0x68);
  plVar8 = (long *)0x0;
  if (lVar12 != 0) {
    plVar8 = (long *)(lVar12 + 0x18);
  }
  (**(code **)(*plVar8 + 0x20))(plVar8,param_1 + 0x4f8,1,8);
  plVar8 = *(long **)(param_1 + 0x4f0);
  *(undefined8 *)(param_1 + 0x4f0) = 0;
  if ((plVar8 != (long *)0x0) && (plVar8[1] != 0)) {
    plVar1 = plVar8 + 2;
    do {
      lVar12 = *plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar12 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar12 + -1 == 0) {
      (**(code **)(*plVar8 + 0x18))();
    }
  }
  FUN_03109280(&local_58,*(undefined8 *)(param_1 + 0x500));
  if (local_58 != (long *)0x0) {
    puVar2 = PTR_DAT_047e3318 + 0x10;
    local_60 = -0x8000000000000000;
    local_70 = puVar2;
    local_68 = 0;
    ppuVar3 = &local_70;
    if (param_2 != (long *)0x0) {
      ppuVar3 = (undefined **)param_2;
    }
    (**(code **)((long)*ppuVar3 + 0xb0))(ppuVar3,local_58,0);
    lVar12 = local_60;
    uVar10 = (ulong)local_60._4_4_;
    local_60 = (ulong)local_60._4_4_ << 0x20;
    local_70 = puVar2;
    if ((-1 < lVar12) && (local_68 != 0)) {
      (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_68,uVar10 << 3);
    }
    if ((local_58 != (long *)0x0) && (local_58[1] != 0)) {
      plVar8 = local_58 + 2;
      do {
        lVar12 = *plVar8;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar6) {
          *plVar8 = lVar12 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar12 + -1 == 0) {
        (**(code **)(*local_58 + 0x18))();
      }
    }
  }
  plVar8 = *(long **)(param_1 + 0x500);
  *(undefined8 *)(param_1 + 0x500) = 0;
  if ((plVar8 != (long *)0x0) && (plVar8[1] != 0)) {
    plVar1 = plVar8 + 2;
    do {
      lVar12 = *plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar12 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar12 + -1 == 0) {
      (**(code **)(*plVar8 + 0x18))();
    }
  }
  if (plVar11 != (long *)0x0) {
    lVar12 = *plVar11;
    if (((*(byte *)(lVar12 + 0x38) & 1) != 0) && (plVar11[6] != 0)) {
      puVar4 = (undefined8 *)plVar11[2];
      uVar10 = (long)puVar4 + 0x17U & 0xfffffffffffffff8;
      if ((uVar10 <= (ulong)plVar11[3]) && (plVar11[2] = uVar10, puVar4 != (undefined8 *)0x0)) {
        *puVar4 = &DAT_03c4e575;
        puVar4[1] = *(undefined8 *)(plVar11[6] + 8);
      }
    }
    puVar4 = (undefined8 *)plVar11[2];
    uVar10 = (long)puVar4 + 0x17U & 0xfffffffffffffff8;
    if ((uVar10 <= (ulong)plVar11[3]) && (plVar11[2] = uVar10, puVar4 != (undefined8 *)0x0)) {
      *puVar4 = &DAT_03c2d363;
      uVar7 = nn::os::GetSystemTick();
      puVar4[1] = uVar7;
    }
    if (*(code **)(lVar12 + 0x20) != (code *)0x0) {
      (**(code **)(lVar12 + 0x20))(*(undefined8 *)(lVar12 + 0x28));
    }
  }
  return;
}


