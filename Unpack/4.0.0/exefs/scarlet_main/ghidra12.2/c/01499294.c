/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01499294; name: FUN_01499294
 */


void FUN_01499294(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  ushort uVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
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
  
  if (param_1[8] == 0) {
    if (param_1[9] != 0) {
      lVar10 = param_1[1];
      lVar2 = tpidr_el0;
      if (*(long *)(lVar2 + 0x30) == 0) {
        if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        *(long **)(lVar2 + 0x30) = DAT_04859430;
      }
      local_b0 = *(long *)(lVar2 + 0x30);
      local_a8 = *(undefined8 *)(lVar2 + 0x38);
      *(long *)(lVar2 + 0x30) = lVar10;
      *(undefined2 *)(lVar2 + 0x38) = 1;
      uVar4 = (**(code **)(*param_1 + 0xa0))(param_1);
      puVar3 = PTR_DAT_047d8b70;
      if (uVar4 != 0) {
        lVar10 = 0;
        uVar11 = 0;
        do {
          (**(code **)(*param_1 + 0x80))(&local_80,param_1);
          std::to_string((int)uVar11);
          FUN_01499758(&local_b8,&local_80,local_a0);
          lVar9 = local_90;
          if (((local_a0[0] & 1) != 0) && (local_90 != 0)) {
            plVar12 = *(long **)(lVar2 + 0x30);
            if (plVar12 == (long *)0x0) {
              if (((DAT_04859438 & 1) == 0) &&
                 (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0)) {
                DAT_04859430 = DAT_04859418;
                __cxa_guard_release(&DAT_04859438);
              }
              plVar12 = DAT_04859430;
              *(long **)(lVar2 + 0x30) = DAT_04859430;
            }
            uVar7 = (**(code **)(*plVar12 + 0xf8))(plVar12);
            if (((uVar7 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
              (**(code **)(*plVar12 + 0x18))(plVar12,lVar9,0,8);
            }
            else {
              FUN_00c48fe8(plVar12,lVar9,0,8);
            }
          }
          if (local_68 != (long *)0x0) {
            (**(code **)(*local_68 + 0x20))();
          }
          if (((*PTR_DAT_047d4c98 & 1) == 0) &&
             (iVar5 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar5 != 0)) {
            FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d4c98);
          }
          uVar6 = *(undefined8 *)PTR_DAT_047d4ca0;
          *(undefined8 *)PTR_DAT_047d4ca8 = uVar6;
          local_70 = 4;
          local_68 = (long *)0x0;
          local_80 = &DAT_e4d07a996e5ef5e8;
          puStack_78 = &DAT_03c60f6f;
          uVar6 = FUN_00f844f4(uVar6,&local_80);
          puVar1 = (undefined8 *)puVar3;
          if (CONCAT44(uStack_b4,local_b8) != 0) {
            puVar1 = (undefined8 *)(CONCAT44(uStack_b4,local_b8) + 0x30);
          }
          local_c0[0] = (undefined4)*puVar1;
          lVar9 = param_1[9];
          uVar7 = (**(code **)(*param_1 + 0x88))(param_1);
          local_a0[0] = (uVar7 & 0xffffffff) * 0x170;
          FUN_014997f8(uVar6,local_c0,lVar9 + lVar10,local_a0);
          if (local_68 != (long *)0x0) {
            (**(code **)(*local_68 + 0x20))();
          }
          if ((long *)CONCAT44(uStack_b4,local_b8) != (long *)0x0) {
            (**(code **)(*(long *)CONCAT44(uStack_b4,local_b8) + 0x20))();
          }
          uVar11 = uVar11 + 1;
          lVar10 = lVar10 + 8;
        } while (uVar4 != uVar11);
      }
      *(long *)(lVar2 + 0x30) = local_b0;
      *(undefined2 *)(lVar2 + 0x38) = (undefined2)local_a8;
    }
  }
  else {
    if (((*PTR_DAT_047d4c98 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar5 != 0)) {
      FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4c98);
    }
    uVar6 = *(undefined8 *)PTR_DAT_047d4ca0;
    local_80 = &DAT_e4d07a996e5ef5e8;
    puStack_78 = &DAT_03c60f6f;
    local_70 = 4;
    local_68 = (long *)0x0;
    *(undefined8 *)PTR_DAT_047d4ca8 = uVar6;
    uVar6 = FUN_00f844f4(uVar6,&local_80);
    (**(code **)(*param_1 + 0x80))(local_a0,param_1);
    local_b8 = (undefined4)local_a0[0];
    uVar11 = (**(code **)(*param_1 + 0x88))(param_1);
    local_b0 = (uVar11 & 0xffffffff) * 0x170;
    FUN_014997f8(uVar6,&local_b8,param_1 + 8,&local_b0);
    if (local_88 != (long *)0x0) {
      (**(code **)(*local_88 + 0x20))();
    }
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x20))();
    }
  }
  return;
}


