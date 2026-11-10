/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00360fb0; name: FUN_00360fb0
 */


undefined4 FUN_00360fb0(long param_1,long *param_2,ulong param_3)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  undefined4 uVar11;
  long local_48;
  
  lVar6 = DAT_047ef7c0;
  lVar9 = tpidr_el0;
  *(long *)(lVar9 + 0x70) = DAT_047ef7c0;
  if (param_1 < lVar6) {
    if (param_2 != (long *)0x0) {
      lVar9 = *param_2;
      if (lVar6 <= *param_2) {
        lVar9 = lVar6;
      }
      *param_2 = lVar9;
    }
    uVar11 = 1;
  }
  else {
    do {
      if (DAT_047ef7c8 != 0) {
        uVar11 = 0;
        ClearExclusiveLocal();
        if (param_3 < 5) {
          return 0;
        }
        goto LAB_003610b4;
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(0x47ef7c8,0x10);
      if (bVar3) {
        DAT_047ef7c8 = 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    FUN_0038db40(&DAT_047ef7d8);
    if (param_1 == 0x7fffffffffffffff) {
      lVar6 = *DAT_047ef790;
      uVar11 = 1;
      lVar7 = *(long *)(lVar6 + 0x60);
      while (lVar9 = 0x7fffffffffffffff, lVar7 != 0x7fffffffffffffff) {
        lVar9 = FUN_003612a0(lVar6,0x7fffffffffffffff,&local_48,param_3);
        plVar8 = DAT_047ef790;
        if (lVar9 != 0) {
          uVar11 = 2;
        }
        lVar9 = *DAT_047ef790;
        *(long *)(lVar9 + 0x60) = local_48;
        uVar1 = *(uint *)(lVar9 + 0x68);
        while (uVar1 != 0) {
          uVar4 = uVar1 - 1;
          lVar6 = plVar8[uVar4];
          if (*(long *)(lVar6 + 0x60) <= local_48) break;
          lVar7 = plVar8[uVar1];
          plVar8[uVar4] = lVar7;
          plVar8[uVar1] = lVar6;
          *(uint *)(lVar7 + 0x68) = uVar4;
          *(uint *)(lVar6 + 0x68) = uVar1;
          uVar1 = *(uint *)(lVar9 + 0x68);
        }
        uVar10 = DAT_047ef788 - 1;
        while (uVar5 = (ulong)uVar1, uVar5 < uVar10) {
          uVar4 = uVar1 + 1;
          lVar6 = plVar8[uVar4];
          if (local_48 <= *(long *)(lVar6 + 0x60)) break;
          lVar7 = plVar8[uVar5];
          plVar8[uVar5] = lVar6;
          plVar8[uVar4] = lVar7;
          *(uint *)(lVar6 + 0x68) = uVar1;
          *(uint *)(lVar7 + 0x68) = uVar4;
          uVar1 = *(uint *)(lVar9 + 0x68);
        }
        lVar6 = *plVar8;
        lVar7 = *(long *)(lVar6 + 0x60);
      }
    }
    else {
      uVar11 = 1;
      plVar8 = DAT_047ef790;
LAB_003610e8:
      lVar6 = *plVar8;
      lVar9 = *(long *)(lVar6 + 0x60);
      if ((lVar9 < param_1) || (lVar9 == param_1)) {
        lVar9 = FUN_003612a0(lVar6,param_1,&local_48,param_3);
        plVar8 = DAT_047ef790;
        if (lVar9 != 0) {
          uVar11 = 2;
        }
        lVar9 = *DAT_047ef790;
        *(long *)(lVar9 + 0x60) = local_48;
        uVar1 = *(uint *)(lVar9 + 0x68);
        while (uVar1 != 0) {
          uVar4 = uVar1 - 1;
          lVar6 = plVar8[uVar4];
          if (*(long *)(lVar6 + 0x60) <= local_48) break;
          lVar7 = plVar8[uVar1];
          plVar8[uVar4] = lVar7;
          plVar8[uVar1] = lVar6;
          *(uint *)(lVar7 + 0x68) = uVar4;
          *(uint *)(lVar6 + 0x68) = uVar1;
          uVar1 = *(uint *)(lVar9 + 0x68);
        }
        uVar10 = DAT_047ef788 - 1;
        while (uVar5 = (ulong)uVar1, uVar5 < uVar10) {
          uVar4 = uVar1 + 1;
          lVar6 = plVar8[uVar4];
          if (local_48 <= *(long *)(lVar6 + 0x60)) break;
          lVar7 = plVar8[uVar5];
          plVar8[uVar5] = lVar6;
          plVar8[uVar4] = lVar7;
          *(uint *)(lVar6 + 0x68) = uVar1;
          *(uint *)(lVar7 + 0x68) = uVar4;
          uVar1 = *(uint *)(lVar9 + 0x68);
        }
        goto LAB_003610e8;
      }
    }
    if (param_2 != (long *)0x0) {
      lVar7 = *param_2;
      if (lVar9 <= *param_2) {
        lVar7 = lVar9;
      }
      *param_2 = lVar7;
      lVar9 = *(long *)(lVar6 + 0x60);
    }
    DAT_047ef7c0 = lVar9;
    FUN_0038db60(&DAT_047ef7d8);
    DAT_047ef7c8 = 0;
    if (4 < param_3) {
LAB_003610b4:
      FUN_00350fd0(param_3);
    }
  }
  return uVar11;
}


