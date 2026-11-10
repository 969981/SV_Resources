/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01939308; name: FUN_01939308
 */


void FUN_01939308(long *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  char cVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  undefined4 local_c0 [2];
  undefined4 local_b8;
  undefined4 uStack_b4;
  long local_b0;
  undefined8 local_a8;
  ulong local_a0 [2];
  long local_90;
  long *local_88;
  undefined1 *local_80;
  undefined *puStack_78;
  undefined8 local_70;
  long *local_68;
  
  lVar7 = (**(code **)(*param_1 + 0x98))();
  plVar13 = param_1 + 8;
  *plVar13 = lVar7;
  lVar7 = (**(code **)(*param_1 + 0xa8))(param_1);
  param_1[9] = lVar7;
  if (*plVar13 == 0) {
    if (lVar7 != 0) {
      lVar17 = param_1[1];
      lVar7 = tpidr_el0;
      if (*(long *)(lVar7 + 0x30) == 0) {
        if (((DAT_04859438 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        *(long **)(lVar7 + 0x30) = DAT_04859430;
      }
      local_b0 = *(long *)(lVar7 + 0x30);
      local_a8 = *(undefined8 *)(lVar7 + 0x38);
      *(long *)(lVar7 + 0x30) = lVar17;
      *(undefined2 *)(lVar7 + 0x38) = 1;
      uVar4 = (**(code **)(*param_1 + 0xa0))(param_1);
      puVar2 = PTR_DAT_047d8b70;
      if (uVar4 != 0) {
        lVar17 = 0;
        uVar9 = 0;
        do {
          (**(code **)(*param_1 + 0x80))(&local_80,param_1);
          std::to_string((int)uVar9);
          FUN_01499758(&local_b8,&local_80,local_a0);
          lVar11 = local_90;
          if (((local_a0[0] & 1) != 0) && (local_90 != 0)) {
            plVar10 = *(long **)(lVar7 + 0x30);
            if (plVar10 == (long *)0x0) {
              if (((DAT_04859438 & 1) == 0) &&
                 (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
                DAT_04859430 = DAT_04859418;
                __cxa_guard_release(&DAT_04859438);
              }
              plVar10 = DAT_04859430;
              *(long **)(lVar7 + 0x30) = DAT_04859430;
            }
            uVar14 = (**(code **)(*plVar10 + 0xf8))(plVar10);
            if (((uVar14 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
              (**(code **)(*plVar10 + 0x18))(plVar10,lVar11,0,8);
            }
            else {
              FUN_00c48fe8(plVar10,lVar11,0,8);
            }
          }
          if (local_68 != (long *)0x0) {
            (**(code **)(*local_68 + 0x20))();
          }
          if (((*PTR_DAT_047d4c98 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar6 != 0)) {
            FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d4c98);
          }
          uVar8 = *(undefined8 *)PTR_DAT_047d4ca0;
          *(undefined8 *)PTR_DAT_047d4ca8 = uVar8;
          local_70 = 4;
          local_68 = (long *)0x0;
          local_80 = &DAT_e4d07a996e5ef5e8;
          puStack_78 = &DAT_03c60f6f;
          lVar11 = FUN_00f844f4(uVar8,&local_80);
          puVar1 = (undefined8 *)puVar2;
          if (CONCAT44(uStack_b4,local_b8) != 0) {
            puVar1 = (undefined8 *)(CONCAT44(uStack_b4,local_b8) + 0x30);
          }
          local_c0[0] = (undefined4)*puVar1;
          lVar12 = param_1[9];
          uVar14 = (**(code **)(*param_1 + 0x88))(param_1);
          local_a0[0] = (uVar14 & 0xffffffff) << 4;
          cVar3 = FUN_0193993c(lVar11,local_c0,lVar12 + lVar17,local_a0);
          if ((cVar3 == '\0') && (plVar10 = *(long **)(lVar11 + 0x60), plVar10 != (long *)0x0)) {
            (**(code **)(*plVar10 + 0x50))(plVar10,local_c0);
          }
          if (local_68 != (long *)0x0) {
            (**(code **)(*local_68 + 0x20))();
          }
          if ((long *)CONCAT44(uStack_b4,local_b8) != (long *)0x0) {
            (**(code **)(*(long *)CONCAT44(uStack_b4,local_b8) + 0x20))();
          }
          uVar9 = uVar9 + 1;
          lVar17 = lVar17 + 8;
        } while (uVar4 != uVar9);
      }
      *(long *)(lVar7 + 0x30) = local_b0;
      *(undefined2 *)(lVar7 + 0x38) = (undefined2)local_a8;
      goto LAB_01939418;
    }
LAB_0193972c:
    uVar9 = 0;
  }
  else {
    if (((*PTR_DAT_047d4c98 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar6 != 0)) {
      FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4c98);
    }
    uVar8 = *(undefined8 *)PTR_DAT_047d4ca0;
    local_80 = &DAT_e4d07a996e5ef5e8;
    puStack_78 = &DAT_03c60f6f;
    local_70 = 4;
    local_68 = (long *)0x0;
    *(undefined8 *)PTR_DAT_047d4ca8 = uVar8;
    lVar7 = FUN_00f844f4(uVar8,&local_80);
    (**(code **)(*param_1 + 0x80))(local_a0,param_1);
    local_b8 = (undefined4)local_a0[0];
    uVar9 = (**(code **)(*param_1 + 0x88))(param_1);
    local_b0 = (uVar9 & 0xffffffff) << 4;
    cVar3 = FUN_0193993c(lVar7,&local_b8,plVar13,&local_b0);
    if ((cVar3 == '\0') && (plVar10 = *(long **)(lVar7 + 0x60), plVar10 != (long *)0x0)) {
      (**(code **)(*plVar10 + 0x50))(plVar10,&local_b8);
    }
    if (local_88 != (long *)0x0) {
      (**(code **)(*local_88 + 0x20))();
    }
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x20))();
    }
LAB_01939418:
    if (*plVar13 == 0) {
      uVar9 = 0;
      if (param_1[9] != 0) {
        uVar4 = (**(code **)(*param_1 + 0xa0))(param_1);
        uVar5 = (**(code **)(*param_1 + 0x88))(param_1);
        uVar14 = 0;
        uVar9 = 0;
        if ((uVar4 != 0) && (uVar5 != 0)) {
          uVar15 = 0;
          uVar14 = 1;
          uVar9 = 0;
          do {
            plVar13 = *(long **)(param_1[9] + uVar15 * 8);
            iVar6 = (int)uVar9;
            uVar16 = (ulong)uVar5;
            do {
              if (*plVar13 == 0) goto LAB_01939468;
              uVar9 = (ulong)((int)uVar9 + 1);
              uVar16 = uVar16 - 1;
              plVar13 = plVar13 + 2;
            } while (uVar16 != 0);
            uVar15 = uVar15 + 1;
            uVar9 = (ulong)(iVar6 + uVar5);
          } while (uVar15 != uVar4);
          uVar14 = 0;
          uVar9 = (ulong)(uVar5 * ((ushort)(uVar4 - 1) + 1));
        }
        goto LAB_01939468;
      }
    }
    else {
      uVar5 = (**(code **)(*param_1 + 0x88))(param_1);
      if (uVar5 == 0) goto LAB_0193972c;
      plVar13 = (long *)*plVar13;
      uVar15 = 0;
      uVar9 = (ulong)uVar5;
      do {
        if (*plVar13 == 0) {
          uVar14 = 1;
          uVar9 = uVar15 & 0xffffffff;
          goto LAB_01939468;
        }
        uVar15 = uVar15 + 1;
        plVar13 = plVar13 + 2;
      } while (uVar9 != uVar15);
    }
  }
  uVar14 = 0;
LAB_01939468:
  param_1[10] = uVar14 | uVar9 << 0x20;
  return;
}


