/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0196faa8; name: FUN_0196faa8
 */


undefined2 FUN_0196faa8(long param_1,byte param_2)

{
  uint *puVar1;
  ulong uVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  int *piVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  
  bVar3 = FUN_00cf4870();
  if (bVar3 <= param_2) {
    return 0;
  }
  if (((*PTR_DAT_047d7430 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d7430), iVar4 != 0))
  {
    FUN_00100190(PTR_LAB_047d7448,PTR_DAT_047d7438,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d7430);
  }
  lVar5 = *(long *)PTR_DAT_047d7438;
  *(long *)PTR_DAT_047d7440 = lVar5;
  uVar8 = *(ulong *)(lVar5 + 0x70);
  if (uVar8 != 0) {
    uVar7 = (ulong)*(ushort *)(param_1 + 10) + (ulong)*(ushort *)(param_1 + 8) * 10000;
    uVar9 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
    uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
    uVar9 = (uVar9 + (uVar9 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar9 < 2) {
      uVar10 = (int)uVar8 - 1 & uVar7;
    }
    else if (uVar7 < uVar8) {
      uVar10 = uVar7;
    }
    else {
      uVar10 = 0;
      if (uVar8 != 0) {
        uVar10 = uVar7 / uVar8;
      }
      uVar10 = uVar7 - uVar10 * uVar8;
    }
    plVar11 = *(long **)(*(long *)(lVar5 + 0x68) + uVar10 * 8);
    if ((plVar11 != (long *)0x0) && (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0)) {
      if (uVar9 < 2) {
        do {
          if (plVar11[1] == uVar7) {
            if (plVar11[2] == uVar7) goto LAB_0196fc70;
          }
          else if ((plVar11[1] & uVar8 - 1) != uVar10) break;
          plVar11 = (long *)*plVar11;
        } while (plVar11 != (long *)0x0);
      }
      else {
        do {
          uVar9 = plVar11[1];
          if (uVar9 == uVar7) {
            if (plVar11[2] == uVar7) goto LAB_0196fc70;
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
LAB_0196fbb0:
  piVar6 = (int *)*plVar11;
  puVar1 = (uint *)((long)piVar6 + (ulong)*(ushort *)((long)piVar6 + (0x32 - (long)*piVar6)));
  return *(undefined2 *)((long)puVar1 + (ulong)param_2 * 0x10 + (ulong)*puVar1 + 6);
LAB_0196fc70:
  plVar11 = plVar11 + 3;
  goto LAB_0196fbb0;
}


