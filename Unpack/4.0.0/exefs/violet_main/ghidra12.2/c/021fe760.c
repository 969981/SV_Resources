/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021fe760; name: FUN_021fe760
 */


bool FUN_021fe760(long param_1)

{
  ushort uVar1;
  ulong uVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  int *piVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  
  if (((*PTR_DAT_047d7940 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d7940), iVar4 != 0))
  {
    FUN_00100190(PTR_LAB_047d7958,PTR_DAT_047d7948,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d7940);
  }
  lVar5 = *(long *)PTR_DAT_047d7948;
  *(long *)PTR_DAT_047d7950 = lVar5;
  uVar8 = *(ulong *)(lVar5 + 0x70);
  if (uVar8 != 0) {
    uVar9 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
    uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
    uVar1 = *(ushort *)(param_1 + 8);
    uVar7 = (ulong)uVar1;
    uVar9 = (uVar9 + (uVar9 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar9 < 2) {
      uVar10 = (int)uVar8 - 1 & uVar7;
    }
    else {
      uVar10 = uVar7;
      if (uVar8 <= uVar7) {
        uVar10 = 0;
        if (uVar8 != 0) {
          uVar10 = uVar7 / uVar8;
        }
        uVar10 = uVar7 - uVar10 * uVar8;
      }
    }
    plVar11 = *(long **)(*(long *)(lVar5 + 0x68) + uVar10 * 8);
    if ((plVar11 != (long *)0x0) && (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0)) {
      if (uVar9 < 2) {
        do {
          if (plVar11[1] == uVar7) {
            if (*(ushort *)(plVar11 + 2) == uVar1) goto LAB_021fe8cc;
          }
          else if ((plVar11[1] & uVar8 - 1) != uVar10) break;
          plVar11 = (long *)*plVar11;
        } while (plVar11 != (long *)0x0);
      }
      else {
        do {
          uVar9 = plVar11[1];
          if (uVar9 == uVar7) {
            if (*(ushort *)(plVar11 + 2) == uVar1) goto LAB_021fe8cc;
          }
          else {
            if (uVar8 <= uVar9) {
              uVar2 = 0;
              if (uVar8 != 0) {
                uVar2 = uVar9 / uVar8;
              }
              uVar9 = uVar9 - uVar2 * uVar8;
            }
            if (uVar9 != uVar10) break;
          }
          plVar11 = (long *)*plVar11;
        } while (plVar11 != (long *)0x0);
      }
    }
  }
  plVar11 = (long *)(lVar5 + 0xd0);
LAB_021fe874:
  piVar6 = (int *)*plVar11;
  if ((*(ushort *)((long)piVar6 - (long)*piVar6) < 0x53) ||
     (uVar8 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[0x29], uVar8 == 0)) {
    bVar3 = false;
  }
  else {
    bVar3 = *(char *)((long)piVar6 + uVar8) != '\0';
  }
  return bVar3;
LAB_021fe8cc:
  plVar11 = plVar11 + 3;
  goto LAB_021fe874;
}


