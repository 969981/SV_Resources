/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01569e08; name: FUN_01569e08
 */


uint FUN_01569e08(ulong *param_1)

{
  ulong uVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  undefined1 *local_48;
  undefined *puStack_40;
  undefined8 local_38;
  long *local_30;
  int local_28 [2];
  
  if (((DAT_04840858 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04840858), iVar3 != 0)) {
    FUN_00100190(&LAB_02af32dc,&DAT_04840848,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04840858);
  }
  DAT_04840840 = DAT_04840848;
  local_28[0] = (int)*param_1;
  uVar6 = *(ulong *)(DAT_04840848 + 0x3a8);
  if (uVar6 != 0) {
    uVar7 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
    uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
    uVar10 = (uVar7 + (uVar7 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    uVar7 = *param_1 & 0xffffffff;
    if (uVar10 < 2) {
      uVar8 = (int)uVar6 - 1 & uVar7;
    }
    else if (uVar7 < uVar6) {
      uVar8 = uVar7;
    }
    else {
      uVar8 = 0;
      if (uVar6 != 0) {
        uVar8 = uVar7 / uVar6;
      }
      uVar8 = uVar7 - uVar8 * uVar6;
    }
    plVar9 = *(long **)(*(long *)(DAT_04840848 + 0x3a0) + uVar8 * 8);
    if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
      if (uVar10 < 2) {
        do {
          if (plVar9[1] == uVar7) {
            if ((int)plVar9[2] == local_28[0]) goto LAB_01569fe8;
          }
          else if ((plVar9[1] & uVar6 - 1) != uVar8) break;
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
      else {
        do {
          uVar10 = plVar9[1];
          if (uVar10 == uVar7) {
            if ((int)plVar9[2] == local_28[0]) {
LAB_01569fe8:
              return (uint)*(byte *)((long)plVar9 + 0x14);
            }
          }
          else {
            if (uVar6 <= uVar10) {
              uVar1 = 0;
              if (uVar6 != 0) {
                uVar1 = uVar10 / uVar6;
              }
              uVar10 = uVar10 - uVar1 * uVar6;
            }
            if (uVar10 != uVar8) break;
          }
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
    }
  }
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar3 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  uVar4 = *(undefined8 *)PTR_DAT_047d4ca0;
  local_48 = &DAT_e4d07a996e5ef5e8;
  puStack_40 = &DAT_03c60f6f;
  local_38 = 4;
  local_30 = (long *)0x0;
  *(undefined8 *)PTR_DAT_047d4ca8 = uVar4;
  lVar5 = FUN_00f844f4(uVar4,&local_48);
  uVar2 = FUN_0156a070(lVar5,local_28);
  if (((uVar2 & 0xff) == 0) && (plVar9 = *(long **)(lVar5 + 0x60), plVar9 != (long *)0x0)) {
    (**(code **)(*plVar9 + 0x50))(plVar9,local_28);
  }
  if (local_30 != (long *)0x0) {
    (**(code **)(*local_30 + 0x20))();
  }
  return uVar2 >> 8 & 0xff;
}


