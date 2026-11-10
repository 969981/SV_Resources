/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00dedda8; name: FUN_00dedda8
 */


undefined1 FUN_00dedda8(long param_1)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  
  if (((*PTR_DAT_047d7430 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_047d7430), iVar2 != 0))
  {
    FUN_00100190(PTR_LAB_047d7448,PTR_DAT_047d7438,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d7430);
  }
  lVar3 = *(long *)PTR_DAT_047d7438;
  *(long *)PTR_DAT_047d7440 = lVar3;
  uVar6 = *(ulong *)(lVar3 + 0x70);
  if (uVar6 != 0) {
    uVar5 = (ulong)*(ushort *)(param_1 + 10) + (ulong)*(ushort *)(param_1 + 8) * 10000;
    uVar7 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
    uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
    uVar7 = (uVar7 + (uVar7 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar7 < 2) {
      uVar8 = (int)uVar6 - 1 & uVar5;
    }
    else if (uVar5 < uVar6) {
      uVar8 = uVar5;
    }
    else {
      uVar8 = 0;
      if (uVar6 != 0) {
        uVar8 = uVar5 / uVar6;
      }
      uVar8 = uVar5 - uVar8 * uVar6;
    }
    plVar9 = *(long **)(*(long *)(lVar3 + 0x68) + uVar8 * 8);
    if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
      if (uVar7 < 2) {
        do {
          if (plVar9[1] == uVar5) {
            if (plVar9[2] == uVar5) goto LAB_00dedf58;
          }
          else if ((plVar9[1] & uVar6 - 1) != uVar8) break;
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
      else {
        do {
          uVar7 = plVar9[1];
          if (uVar7 == uVar5) {
            if (plVar9[2] == uVar5) goto LAB_00dedf58;
          }
          else {
            if (uVar6 <= uVar7) {
              uVar1 = 0;
              if (uVar6 != 0) {
                uVar1 = uVar7 / uVar6;
              }
              uVar7 = uVar7 - uVar1 * uVar6;
            }
            if (uVar7 != uVar8) break;
          }
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
    }
  }
  plVar9 = (long *)(lVar3 + 0xd0);
LAB_00dede98:
  piVar4 = (int *)*plVar9;
  return *(undefined1 *)
          ((long)piVar4 + (ulong)*(ushort *)((long)piVar4 + (0x30 - (long)*piVar4)) + 1);
LAB_00dedf58:
  plVar9 = plVar9 + 3;
  goto LAB_00dede98;
}


