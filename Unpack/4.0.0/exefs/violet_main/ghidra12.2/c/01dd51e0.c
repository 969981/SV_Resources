/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01dd51e0; name: FUN_01dd51e0
 */


undefined2 FUN_01dd51e0(long param_1)

{
  ulong uVar1;
  undefined2 uVar2;
  int iVar3;
  long lVar4;
  int *piVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  
  if (((*PTR_DAT_047d7430 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_047d7430), iVar3 != 0))
  {
    FUN_00100190(PTR_LAB_047d7448,PTR_DAT_047d7438,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d7430);
  }
  lVar4 = *(long *)PTR_DAT_047d7438;
  *(long *)PTR_DAT_047d7440 = lVar4;
  uVar7 = *(ulong *)(lVar4 + 0x70);
  if (uVar7 != 0) {
    uVar6 = (ulong)*(ushort *)(param_1 + 10) + (ulong)*(ushort *)(param_1 + 8) * 10000;
    uVar8 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
    uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
    uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar8 < 2) {
      uVar9 = (int)uVar7 - 1 & uVar6;
    }
    else if (uVar6 < uVar7) {
      uVar9 = uVar6;
    }
    else {
      uVar9 = 0;
      if (uVar7 != 0) {
        uVar9 = uVar6 / uVar7;
      }
      uVar9 = uVar6 - uVar9 * uVar7;
    }
    plVar10 = *(long **)(*(long *)(lVar4 + 0x68) + uVar9 * 8);
    if ((plVar10 != (long *)0x0) && (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0)) {
      if (uVar8 < 2) {
        do {
          if (plVar10[1] == uVar6) {
            if (plVar10[2] == uVar6) goto LAB_01dd53a4;
          }
          else if ((plVar10[1] & uVar7 - 1) != uVar9) break;
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
      }
      else {
        do {
          uVar8 = plVar10[1];
          if (uVar8 == uVar6) {
            if (plVar10[2] == uVar6) goto LAB_01dd53a4;
          }
          else {
            if (uVar7 <= uVar8) {
              uVar1 = 0;
              if (uVar7 != 0) {
                uVar1 = uVar8 / uVar7;
              }
              uVar8 = uVar8 - uVar1 * uVar7;
            }
            if (uVar8 != uVar9) break;
          }
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
      }
    }
  }
  plVar10 = (long *)(lVar4 + 0xd0);
LAB_01dd52d0:
  piVar5 = (int *)*plVar10;
  if ((*(ushort *)((long)piVar5 - (long)*piVar5) < 9) ||
     (uVar7 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[4], uVar7 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined2 *)((long)piVar5 + uVar7);
  }
  return uVar2;
LAB_01dd53a4:
  plVar10 = plVar10 + 3;
  goto LAB_01dd52d0;
}


