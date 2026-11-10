/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03305d90; name: FUN_03305d90
 */


/* WARNING: Removing unreachable block (ram,0x03305efc) */

void FUN_03305d90(undefined8 param_1)

{
  int *piVar1;
  long *plVar2;
  undefined4 uVar3;
  char cVar4;
  long lVar5;
  void *__s;
  long lVar6;
  ulong *puVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  bool bVar11;
  undefined8 local_c8;
  undefined8 uStack_c0;
  ulong local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a0 [3];
  long local_88;
  int local_7c;
  ulong *local_78;
  undefined4 local_70;
  long local_68 [2];
  ulong local_58;
  undefined4 local_48;
  
  lVar9 = tpidr_el0;
  lVar6 = *(long *)(lVar9 + 0x1000b8);
  if (lVar6 == 0) {
    lVar6 = FUN_00e5d3b4();
    *(long *)(lVar9 + 0x1000b8) = lVar6;
  }
  lVar9 = *(long *)(*(long *)(lVar6 + 0x3d0) + 0x10);
  if ((*(long *)(lVar9 + 8) == 0) && (local_68[0] = 0x80, lVar9 != 0)) {
    local_a0[0] = 0x80;
    if (0x7f < *(ulong *)(lVar9 + 0x28)) {
      __s = *(void **)(lVar9 + 0x38);
      if ((long)__s + 0x80U <= *(ulong *)(lVar9 + 0x40)) {
        *(ulong *)(lVar9 + 0x38) = (long)__s + 0x80U;
        goto LAB_03305e70;
      }
    }
    __s = (void *)FUN_031cf3b4(lVar9,local_a0);
  }
  else {
    local_68[0] = 0x80;
    __s = (void *)(**(code **)PTR_DAT_047d1a08)(1,local_68,0x40);
    lVar9 = 0;
  }
LAB_03305e70:
  memset(__s,0xff,0x80);
  FUN_03325b88(&local_c8,param_1,"faceMaskLookupTable");
  local_68[0] = CONCAT44(local_68[0]._4_4_,local_a8);
  FUN_03323c3c(local_a0,local_c8,uStack_c0,local_b0,local_68,0);
  FUN_03324ed0(local_a0,0x20);
  lVar6 = 0;
LAB_03305ec4:
  local_68[0] = local_88 + (long)local_7c * (long)(int)lVar6;
  uVar3 = *(undefined4 *)((long)__s + lVar6 * 4);
  if (local_78 != (ulong *)0x0) {
    puVar7 = local_78;
LAB_03305ee4:
    uVar8 = *puVar7;
    if (((uint)uVar8 >> 2 & 1) == 0) goto code_r0x03305eec;
    local_58 = puVar7[(uVar8 >> 1 & 1) + (uVar8 & 1) + 2];
    if ((local_58 & 1) != 0) {
      piVar1 = (int *)((local_58 & 0xfffffffffffffffe) + 8);
      do {
        cVar4 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar11) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      do {
        cVar4 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar11) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      do {
        cVar4 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar11) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      bVar11 = false;
      goto LAB_03305f84;
    }
    goto LAB_03305f20;
  }
  local_58 = 0;
  goto LAB_03305f20;
code_r0x03305eec:
  puVar7 = (ulong *)puVar7[1];
  if (puVar7 == (ulong *)0x0) goto code_r0x03305ef4;
  goto LAB_03305ee4;
code_r0x03305ef4:
  local_58 = 0;
LAB_03305f20:
  bVar11 = true;
LAB_03305f84:
  uVar8 = local_58;
  local_48 = local_70;
  if (local_68[0] != 0) {
    puVar7 = local_78;
    if ((*local_78 & 1) == 0) {
      do {
        puVar7 = (ulong *)puVar7[1];
      } while ((*puVar7 & 1) == 0);
    }
    if ((local_78 != (ulong *)0x0) && ((puVar7[2] & 0x1f) == 7)) {
      FUN_0331dcb8(local_68);
    }
  }
  if (!bVar11) {
    plVar10 = (long *)(uVar8 & 0xfffffffffffffffe);
    plVar2 = plVar10 + 1;
    do {
      lVar5 = *plVar2;
      cVar4 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar11) {
        *(int *)plVar2 = (int)lVar5 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((plVar10 != (long *)0x0) && ((int)lVar5 == 1)) {
      (**(code **)(*plVar10 + 8))(plVar10);
    }
    do {
      lVar5 = *plVar2;
      cVar4 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar11) {
        *(int *)plVar2 = (int)lVar5 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((plVar10 != (long *)0x0) && ((int)lVar5 == 1)) {
      (**(code **)(*plVar10 + 8))(plVar10);
    }
  }
  FUN_0331eaac(local_68,uVar3);
  if ((local_58 & 1) != 0) {
    plVar10 = (long *)(local_58 & 0xfffffffffffffffe);
    plVar2 = plVar10 + 1;
    do {
      lVar5 = *plVar2;
      cVar4 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar11) {
        *(int *)plVar2 = (int)lVar5 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((plVar10 != (long *)0x0) && ((int)lVar5 == 1)) {
      (**(code **)(*plVar10 + 8))();
    }
  }
  lVar6 = lVar6 + 1;
  if (lVar6 == 0x20) {
    if ((local_b8 & 1) != 0) {
      plVar10 = (long *)(local_b8 & 0xfffffffffffffffe);
      plVar2 = plVar10 + 1;
      do {
        lVar6 = *plVar2;
        cVar4 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar11) {
          *(int *)plVar2 = (int)lVar6 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((plVar10 != (long *)0x0) && ((int)lVar6 == 1)) {
        (**(code **)(*plVar10 + 8))();
      }
    }
    if (lVar9 == 0) {
      (**(code **)(PTR_DAT_047d1a08 + 8))(1,__s,0x80);
      return;
    }
    if ((*(ulong *)(lVar9 + 0x28) < 0x80) || (*(long *)(lVar9 + 0x38) != (long)__s + 0x80)) {
      if (__s == (void *)0x0) {
        return;
      }
      if (*(ulong *)(lVar9 + 0x28) < 0xc0) {
        *(int *)(*(long *)(lVar9 + 0x30) + 0x20) = *(int *)(*(long *)(lVar9 + 0x30) + 0x20) + -1;
        (**(code **)(**(long **)(lVar9 + 0x10) + 0x18))
                  (*(long **)(lVar9 + 0x10),(long)__s - (long)*(int *)((long)__s + -4),0xc4);
        return;
      }
      if (*(long *)(lVar9 + 0x38) != (long)__s + 0x80) {
        FUN_031cf778(lVar9,__s,0x80);
        return;
      }
      *(void **)(lVar9 + 0x38) = __s;
    }
    else {
      *(void **)(lVar9 + 0x38) = __s;
      if (*(void **)(lVar9 + 0x48) != __s) {
        return;
      }
    }
    FUN_031cf578(lVar9);
    return;
  }
  goto LAB_03305ec4;
}


