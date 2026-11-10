/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0173a964; name: FUN_0173a964
 */


void FUN_0173a964(long *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  char cVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
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
  plVar14 = param_1 + 8;
  *plVar14 = lVar7;
  lVar7 = (**(code **)(*param_1 + 0xa8))(param_1);
  param_1[9] = lVar7;
  if (*plVar14 == 0) {
    if (lVar7 != 0) {
      lVar16 = param_1[1];
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
      *(long *)(lVar7 + 0x30) = lVar16;
      *(undefined2 *)(lVar7 + 0x38) = 1;
      uVar4 = (**(code **)(*param_1 + 0xa0))(param_1);
      puVar2 = PTR_DAT_047d8b70;
      if (uVar4 != 0) {
        lVar16 = 0;
        uVar17 = 0;
        do {
          (**(code **)(*param_1 + 0x80))(&local_80,param_1);
          std::to_string((int)uVar17);
          FUN_01499758(&local_b8,&local_80,local_a0);
          lVar9 = local_90;
          if (((local_a0[0] & 1) != 0) && (local_90 != 0)) {
            plVar11 = *(long **)(lVar7 + 0x30);
            if (plVar11 == (long *)0x0) {
              if (((DAT_04859438 & 1) == 0) &&
                 (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
                DAT_04859430 = DAT_04859418;
                __cxa_guard_release(&DAT_04859438);
              }
              plVar11 = DAT_04859430;
              *(long **)(lVar7 + 0x30) = DAT_04859430;
            }
            uVar10 = (**(code **)(*plVar11 + 0xf8))(plVar11);
            if (((uVar10 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
              (**(code **)(*plVar11 + 0x18))(plVar11,lVar9,0,8);
            }
            else {
              FUN_00c48fe8(plVar11,lVar9,0,8);
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
          lVar9 = FUN_00f844f4(uVar8,&local_80);
          puVar1 = (undefined8 *)puVar2;
          if (CONCAT44(uStack_b4,local_b8) != 0) {
            puVar1 = (undefined8 *)(CONCAT44(uStack_b4,local_b8) + 0x30);
          }
          local_c0[0] = (undefined4)*puVar1;
          lVar12 = param_1[9];
          uVar10 = (**(code **)(*param_1 + 0x88))(param_1);
          local_a0[0] = (uVar10 & 0xffffffff) * 0x170;
          cVar3 = FUN_0173af9c(lVar9,local_c0,lVar12 + lVar16,local_a0);
          if ((cVar3 == '\0') && (plVar11 = *(long **)(lVar9 + 0x60), plVar11 != (long *)0x0)) {
            (**(code **)(*plVar11 + 0x50))(plVar11,local_c0);
          }
          if (local_68 != (long *)0x0) {
            (**(code **)(*local_68 + 0x20))();
          }
          if ((long *)CONCAT44(uStack_b4,local_b8) != (long *)0x0) {
            (**(code **)(*(long *)CONCAT44(uStack_b4,local_b8) + 0x20))();
          }
          uVar17 = uVar17 + 1;
          lVar16 = lVar16 + 8;
        } while (uVar4 != uVar17);
      }
      *(long *)(lVar7 + 0x30) = local_b0;
      *(undefined2 *)(lVar7 + 0x38) = (undefined2)local_a8;
      goto LAB_0173ac18;
    }
LAB_0173ae48:
    uVar10 = 0;
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
    uVar17 = (**(code **)(*param_1 + 0x88))(param_1);
    local_b0 = (uVar17 & 0xffffffff) * 0x170;
    cVar3 = FUN_0173af9c(lVar7,&local_b8,plVar14,&local_b0);
    if ((cVar3 == '\0') && (plVar11 = *(long **)(lVar7 + 0x60), plVar11 != (long *)0x0)) {
      (**(code **)(*plVar11 + 0x50))(plVar11,&local_b8);
    }
    if (local_88 != (long *)0x0) {
      (**(code **)(*local_88 + 0x20))();
    }
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x20))();
    }
LAB_0173ac18:
    if (*plVar14 == 0) {
      uVar10 = 0;
      if (param_1[9] != 0) {
        uVar4 = (**(code **)(*param_1 + 0xa0))(param_1);
        uVar5 = (**(code **)(*param_1 + 0x88))(param_1);
        uVar13 = 0;
        uVar10 = 0;
        if ((uVar4 != 0) && (uVar5 != 0)) {
          uVar17 = 0;
          uVar13 = 1;
          uVar10 = 0;
          do {
            plVar14 = *(long **)(param_1[9] + uVar17 * 8);
            iVar6 = (int)uVar10;
            uVar15 = (ulong)uVar5;
            do {
              if (*plVar14 == 0) goto LAB_0173acc4;
              uVar10 = (ulong)((int)uVar10 + 1);
              uVar15 = uVar15 - 1;
              plVar14 = plVar14 + 0x2e;
            } while (uVar15 != 0);
            uVar17 = uVar17 + 1;
            uVar10 = (ulong)(iVar6 + uVar5);
          } while (uVar17 != uVar4);
          uVar13 = 0;
          uVar10 = (ulong)(uVar5 * ((ushort)(uVar4 - 1) + 1));
        }
        goto LAB_0173acc4;
      }
    }
    else {
      uVar5 = (**(code **)(*param_1 + 0x88))(param_1);
      if (uVar5 == 0) goto LAB_0173ae48;
      plVar14 = (long *)*plVar14;
      uVar17 = 0;
      uVar10 = (ulong)uVar5;
      do {
        if (*plVar14 == 0) {
          uVar13 = 1;
          uVar10 = uVar17 & 0xffffffff;
          goto LAB_0173acc4;
        }
        uVar17 = uVar17 + 1;
        plVar14 = plVar14 + 0x2e;
      } while (uVar10 != uVar17);
    }
  }
  uVar13 = 0;
LAB_0173acc4:
  param_1[10] = uVar13 | uVar10 << 0x20;
  return;
}


