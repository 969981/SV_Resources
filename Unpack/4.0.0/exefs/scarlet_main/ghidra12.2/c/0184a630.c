/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0184a630; name: FUN_0184a630
 */


long FUN_0184a630(ulong *param_1)

{
  ulong uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  undefined1 auVar10 [16];
  undefined1 *local_48;
  undefined *puStack_40;
  undefined8 local_38;
  long *local_30;
  int local_28 [2];
  
  if (((DAT_04840858 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04840858), iVar2 != 0)) {
    FUN_00100190(&LAB_02af32dc,&DAT_04840848,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04840858);
  }
  DAT_04840840 = DAT_04840848;
  local_28[0] = (int)*param_1;
  uVar5 = *(ulong *)(DAT_04840848 + 0x340);
  if (uVar5 != 0) {
    uVar6 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
    uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
    uVar9 = (uVar6 + (uVar6 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    uVar6 = *param_1 & 0xffffffff;
    if (uVar9 < 2) {
      uVar7 = (int)uVar5 - 1 & uVar6;
    }
    else if (uVar6 < uVar5) {
      uVar7 = uVar6;
    }
    else {
      uVar7 = 0;
      if (uVar5 != 0) {
        uVar7 = uVar6 / uVar5;
      }
      uVar7 = uVar6 - uVar7 * uVar5;
    }
    plVar8 = *(long **)(*(long *)(DAT_04840848 + 0x338) + uVar7 * 8);
    if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
      if (uVar9 < 2) {
        do {
          if (plVar8[1] == uVar6) {
            if ((int)plVar8[2] == local_28[0]) goto LAB_0184a810;
          }
          else if ((plVar8[1] & uVar5 - 1) != uVar7) break;
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
      else {
        do {
          uVar9 = plVar8[1];
          if (uVar9 == uVar6) {
            if ((int)plVar8[2] == local_28[0]) {
LAB_0184a810:
              return plVar8[3];
            }
          }
          else {
            if (uVar5 <= uVar9) {
              uVar1 = 0;
              if (uVar5 != 0) {
                uVar1 = uVar9 / uVar5;
              }
              uVar9 = uVar9 - uVar1 * uVar5;
            }
            if (uVar9 != uVar7) break;
          }
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
    }
  }
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar2 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  uVar3 = *(undefined8 *)PTR_DAT_047d4ca0;
  local_48 = &DAT_e4d07a996e5ef5e8;
  puStack_40 = &DAT_03c60f6f;
  local_38 = 4;
  local_30 = (long *)0x0;
  *(undefined8 *)PTR_DAT_047d4ca8 = uVar3;
  lVar4 = FUN_00f844f4(uVar3,&local_48);
  auVar10 = FUN_0184a898(lVar4,local_28);
  if (((auVar10._0_8_ & 0xff) == 0) && (plVar8 = *(long **)(lVar4 + 0x60), plVar8 != (long *)0x0)) {
    (**(code **)(*plVar8 + 0x50))(plVar8,local_28);
  }
  if (local_30 != (long *)0x0) {
    (**(code **)(*local_30 + 0x20))();
  }
  return auVar10._8_8_;
}


