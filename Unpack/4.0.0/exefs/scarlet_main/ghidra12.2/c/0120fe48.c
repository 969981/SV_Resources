/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0120fe48; name: FUN_0120fe48
 */


void FUN_0120fe48(long param_1,int *param_2)

{
  uint *puVar1;
  undefined2 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  int iVar9;
  undefined8 uVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  undefined1 local_a8 [4];
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  long *local_78;
  long *local_68;
  
  if ((0x14 < *(ushort *)((long)param_2 - (long)*param_2)) &&
     (((ushort *)((long)param_2 - (long)*param_2))[10] != 0)) {
    if ((*(char *)(param_1 + 0x58) != '\0') || (*(char *)(param_1 + 0x59) != '\0')) {
      uVar2 = *(undefined2 *)(param_1 + 0x58);
      plVar11 = (long *)(param_1 + 0x38);
      *(undefined2 *)(param_1 + 0x58) = 0;
      if (*(long *)(param_1 + 0x48) != 0) {
        FUN_00c6a584(*(long *)(param_1 + 0x48),plVar11);
      }
      (**(code **)(*plVar11 + 0x20))(plVar11,uVar2);
    }
    lVar17 = *(long *)(param_1 + 0x130);
    lVar16 = *(long *)(param_1 + 0x138);
    if (lVar16 != lVar17) {
      if (*(long **)(lVar16 + -8) != (long *)0x0) {
        (**(code **)(**(long **)(lVar16 + -8) + 0x20))();
      }
      if (lVar16 + -0x38 != lVar17) {
        do {
          if (*(long **)(lVar16 + -0x40) != (long *)0x0) {
            (**(code **)(**(long **)(lVar16 + -0x40) + 0x20))();
          }
          lVar16 = lVar16 + -0x38;
        } while (lVar17 + 0x38 != lVar16);
      }
    }
    *(long *)(param_1 + 0x138) = lVar17;
    puVar7 = PTR_DAT_047d8c30;
    puVar6 = PTR_DAT_047d4250;
    puVar5 = PTR_DAT_047d4248;
    puVar4 = PTR_DAT_047d4240;
    uVar12 = (ulong)*(ushort *)((long)param_2 + (0x14 - (long)*param_2));
    puVar1 = (uint *)((long)param_2 + uVar12);
    uVar14 = (ulong)*puVar1;
    uVar15 = (ulong)*(uint *)((long)puVar1 + uVar14);
    if (uVar15 != 0) {
      lVar16 = uVar14 + uVar12;
      lVar17 = 0;
      do {
        uVar12 = (ulong)*(uint *)((long)param_2 + lVar17 + lVar16 + 4);
        local_78 = (long *)0x0;
        lVar13 = lVar17 + uVar12 + lVar16;
        lVar3 = lVar17 + (uVar12 - (long)*(int *)((long)param_2 + lVar13 + 4)) + lVar16;
        if (*(ushort *)((long)param_2 + lVar3 + 4) < 5) {
          local_a8[0] = false;
        }
        else {
          uVar14 = (ulong)*(ushort *)((long)param_2 + lVar3 + 8);
          local_a8[0] = false;
          if (uVar14 != 0) {
            local_a8[0] = *(char *)((long)param_2 + lVar17 + uVar12 + uVar14 + lVar16 + 4) != '\0';
          }
        }
        lVar3 = lVar17 + (uVar12 - (long)*(int *)((long)param_2 + lVar13 + 4)) + lVar16;
        local_a4 = 0;
        if (6 < *(ushort *)((long)param_2 + lVar3 + 4)) {
          uVar14 = (ulong)*(ushort *)((long)param_2 + lVar3 + 10);
          local_a4 = 0;
          if (uVar14 != 0) {
            local_a4 = *(undefined4 *)((long)param_2 + lVar17 + uVar12 + uVar14 + lVar16 + 4);
          }
        }
        lVar3 = lVar17 + (uVar12 - (long)*(int *)((long)param_2 + lVar13 + 4)) + lVar16;
        local_a0 = 0;
        if (8 < *(ushort *)((long)param_2 + lVar3 + 4)) {
          uVar14 = (ulong)*(ushort *)((long)param_2 + lVar3 + 0xc);
          local_a0 = 0;
          if (uVar14 != 0) {
            local_a0 = *(undefined4 *)((long)param_2 + lVar17 + uVar12 + uVar14 + lVar16 + 4);
          }
        }
        lVar3 = lVar17 + (uVar12 - (long)*(int *)((long)param_2 + lVar13 + 4)) + lVar16;
        local_9c = 0;
        if (10 < *(ushort *)((long)param_2 + lVar3 + 4)) {
          uVar14 = (ulong)*(ushort *)((long)param_2 + lVar3 + 0xe);
          local_9c = 0;
          if (uVar14 != 0) {
            local_9c = *(undefined4 *)((long)param_2 + lVar17 + uVar12 + uVar14 + lVar16 + 4);
          }
        }
        lVar3 = lVar17 + (uVar12 - (long)*(int *)((long)param_2 + lVar13 + 4)) + lVar16;
        local_98 = 0;
        if (0xc < *(ushort *)((long)param_2 + lVar3 + 4)) {
          uVar14 = (ulong)*(ushort *)((long)param_2 + lVar3 + 0x10);
          local_98 = 0;
          if (uVar14 != 0) {
            local_98 = *(undefined4 *)((long)param_2 + lVar17 + uVar12 + uVar14 + lVar16 + 4);
          }
        }
        lVar3 = lVar17 + (uVar12 - (long)*(int *)((long)param_2 + lVar13 + 4)) + lVar16;
        local_94 = 0;
        if (0xe < *(ushort *)((long)param_2 + lVar3 + 4)) {
          uVar14 = (ulong)*(ushort *)((long)param_2 + lVar3 + 0x12);
          local_94 = 0;
          if (uVar14 != 0) {
            local_94 = *(undefined4 *)((long)param_2 + lVar17 + uVar12 + uVar14 + lVar16 + 4);
          }
        }
        lVar3 = lVar17 + (uVar12 - (long)*(int *)((long)param_2 + lVar13 + 4)) + lVar16;
        local_90 = 0;
        if (0x10 < *(ushort *)((long)param_2 + lVar3 + 4)) {
          uVar14 = (ulong)*(ushort *)((long)param_2 + lVar3 + 0x14);
          local_90 = 0;
          if (uVar14 != 0) {
            local_90 = *(undefined4 *)((long)param_2 + lVar17 + uVar12 + uVar14 + lVar16 + 4);
          }
        }
        lVar3 = lVar17 + (uVar12 - (long)*(int *)((long)param_2 + lVar13 + 4)) + lVar16;
        local_8c = 0;
        if (0x12 < *(ushort *)((long)param_2 + lVar3 + 4)) {
          uVar14 = (ulong)*(ushort *)((long)param_2 + lVar3 + 0x16);
          local_8c = 0;
          if (uVar14 != 0) {
            local_8c = *(undefined4 *)((long)param_2 + lVar17 + uVar12 + uVar14 + lVar16 + 4);
          }
        }
        lVar3 = lVar17 + (uVar12 - (long)*(int *)((long)param_2 + lVar13 + 4)) + lVar16;
        local_88 = 0;
        if (0x14 < *(ushort *)((long)param_2 + lVar3 + 4)) {
          uVar14 = (ulong)*(ushort *)((long)param_2 + lVar3 + 0x18);
          local_88 = 0;
          if (uVar14 != 0) {
            local_88 = *(undefined4 *)((long)param_2 + lVar17 + uVar12 + uVar14 + lVar16 + 4);
          }
        }
        lVar3 = lVar17 + (uVar12 - (long)*(int *)((long)param_2 + lVar13 + 4)) + lVar16;
        local_84 = 0;
        if (0x16 < *(ushort *)((long)param_2 + lVar3 + 4)) {
          uVar14 = (ulong)*(ushort *)((long)param_2 + lVar3 + 0x1a);
          local_84 = 0;
          if (uVar14 != 0) {
            local_84 = *(undefined4 *)((long)param_2 + lVar17 + uVar12 + uVar14 + lVar16 + 4);
          }
        }
        lVar3 = lVar17 + (uVar12 - (long)*(int *)((long)param_2 + lVar13 + 4)) + lVar16;
        if (*(ushort *)((long)param_2 + lVar3 + 4) < 0x19) {
          local_80 = 0;
        }
        else {
          uVar14 = (ulong)*(ushort *)((long)param_2 + lVar3 + 0x1c);
          local_80 = 0;
          if (uVar14 != 0) {
            local_80 = *(undefined4 *)((long)param_2 + lVar17 + uVar12 + uVar14 + lVar16 + 4);
          }
        }
        lVar3 = lVar17 + (uVar12 - (long)*(int *)((long)param_2 + lVar13 + 4)) + lVar16;
        if (*(ushort *)((long)param_2 + lVar3 + 4) < 0x1b) {
          local_7c = 0;
        }
        else {
          uVar14 = (ulong)*(ushort *)((long)param_2 + lVar3 + 0x1e);
          local_7c = 0;
          if (uVar14 != 0) {
            local_7c = *(undefined4 *)((long)param_2 + lVar17 + uVar12 + uVar14 + lVar16 + 4);
          }
        }
        lVar13 = lVar17 + (uVar12 - (long)*(int *)((long)param_2 + lVar13 + 4)) + lVar16;
        if ((*(ushort *)((long)param_2 + lVar13 + 4) < 0x1d) ||
           (uVar14 = (ulong)*(ushort *)((long)param_2 + lVar13 + 0x20), uVar14 == 0)) {
          if (((*PTR_DAT_047d8c28 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_047d8c28), iVar9 != 0)) {
            local_68 = (long *)FUN_00d44228();
            FUN_00d1e764(puVar7,&local_68);
            FUN_00100190(PTR_LAB_047d9240,puVar7,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d8c28);
          }
          plVar11 = *(long **)puVar7;
          if (plVar11 != (long *)0x0) {
            (**(code **)(*plVar11 + 0x18))(plVar11);
          }
          plVar8 = plVar11;
          if (local_78 != (long *)0x0) {
            lVar13 = *local_78;
            local_78 = plVar11;
            (**(code **)(lVar13 + 0x20))();
            plVar8 = local_78;
          }
        }
        else {
          lVar13 = uVar12 + uVar14;
          lVar13 = lVar13 + (ulong)*(uint *)((long)param_2 + lVar17 + lVar13 + lVar16 + 4);
          if (*(char *)((long)param_2 + lVar17 + lVar13 + lVar16 + 8) == '\0') {
            plVar11 = (long *)FUN_00d44228();
            if (plVar11 != (long *)0x0) {
              (**(code **)(*plVar11 + 0x18))(plVar11);
            }
          }
          else {
            if (((*puVar4 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar4), iVar9 != 0)) {
              FUN_00100190(PTR_LAB_047d4510,puVar5,&PTR_LOOP_04483000);
              __cxa_guard_release(puVar4);
            }
            uVar10 = *(undefined8 *)puVar5;
            *(undefined8 *)puVar6 = uVar10;
            FUN_00cf9884(&local_68,uVar10,(long)param_2 + lVar17 + lVar13 + lVar16 + 8);
            plVar11 = local_68;
            plVar8 = local_78;
            local_78 = (long *)0x0;
            if (plVar8 != (long *)0x0) {
              (**(code **)(*plVar8 + 0x20))();
            }
          }
          plVar8 = plVar11;
        }
        local_78 = plVar8;
        if (*(long *)(param_1 + 0x138) == *(long *)(param_1 + 0x140)) {
          FUN_012149c0();
        }
        else {
          FUN_012148b4(param_1 + 0x130,local_a8);
        }
        if (plVar11 != (long *)0x0) {
          (**(code **)(*plVar11 + 0x20))(plVar11);
        }
        lVar17 = lVar17 + 4;
      } while (uVar15 * 4 != lVar17);
    }
  }
  return;
}


