/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018947c8; name: FUN_018947c8
 */


undefined1 FUN_018947c8(long param_1)

{
  ushort uVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  int *piVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  
  if (((*PTR_DAT_047d7940 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_047d7940), iVar3 != 0))
  {
    FUN_00100190(PTR_LAB_047d7958,PTR_DAT_047d7948,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d7940);
  }
  lVar4 = *(long *)PTR_DAT_047d7948;
  *(long *)PTR_DAT_047d7950 = lVar4;
  uVar7 = *(ulong *)(lVar4 + 0x70);
  if (uVar7 != 0) {
    uVar8 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
    uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
    uVar1 = *(ushort *)(param_1 + 8);
    uVar6 = (ulong)uVar1;
    uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar8 < 2) {
      uVar9 = (int)uVar7 - 1 & uVar6;
    }
    else {
      uVar9 = uVar6;
      if (uVar7 <= uVar6) {
        uVar9 = 0;
        if (uVar7 != 0) {
          uVar9 = uVar6 / uVar7;
        }
        uVar9 = uVar6 - uVar9 * uVar7;
      }
    }
    plVar10 = *(long **)(*(long *)(lVar4 + 0x68) + uVar9 * 8);
    if ((plVar10 != (long *)0x0) && (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0)) {
      if (uVar8 < 2) {
        do {
          if (plVar10[1] == uVar6) {
            if (*(ushort *)(plVar10 + 2) == uVar1) goto LAB_01894918;
          }
          else if ((plVar10[1] & uVar7 - 1) != uVar9) break;
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
      }
      else {
        do {
          uVar8 = plVar10[1];
          if (uVar8 == uVar6) {
            if (*(ushort *)(plVar10 + 2) == uVar1) goto LAB_01894918;
          }
          else {
            if (uVar7 <= uVar8) {
              uVar2 = 0;
              if (uVar7 != 0) {
                uVar2 = uVar8 / uVar7;
              }
              uVar8 = uVar8 - uVar2 * uVar7;
            }
            if (uVar8 != uVar9) break;
          }
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
      }
    }
  }
  plVar10 = (long *)(lVar4 + 0xd0);
LAB_018948dc:
  piVar5 = (int *)*plVar10;
  return *(undefined1 *)
          ((long)piVar5 + (ulong)*(ushort *)((long)piVar5 + (0x1a - (long)*piVar5)) + 5);
LAB_01894918:
  plVar10 = plVar10 + 3;
  goto LAB_018948dc;
}


