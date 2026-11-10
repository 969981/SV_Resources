/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02b1d428; name: FUN_02b1d428
 */


bool FUN_02b1d428(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  byte bVar3;
  ushort uVar4;
  int iVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  ushort uVar13;
  long lVar14;
  int local_60 [4];
  long local_38;
  
  bVar3 = DAT_04839728;
  if (*(int *)(*(long *)(param_1 + 0x50) + 0x34) != 2) goto LAB_02b1d47c;
  uVar7 = (uint)*(byte *)(*(long *)(param_1 + 0x50) + 0x8d);
  if (uVar7 - 3 < 4) {
    return *(char *)(param_1 + 0xca) != '\0';
  }
  if (uVar7 != 0) goto LAB_02b1d47c;
  uVar7 = *(uint *)(param_1 + 0x58);
  uVar6 = (ulong)uVar7;
  if (*(uint *)(param_1 + 0x5c) == 0xff) {
    uVar9 = *(ulong *)(param_1 + 0x68);
    if (uVar9 == 0) {
      return true;
    }
    uVar10 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
    uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
    uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar10 < 2) {
      uVar11 = (ulong)((int)uVar9 - 1U & uVar7);
    }
    else {
      uVar11 = uVar6;
      if (uVar9 <= uVar6) {
        uVar11 = 0;
        if (uVar9 != 0) {
          uVar11 = uVar6 / uVar9;
        }
        uVar11 = uVar6 - uVar11 * uVar9;
      }
    }
    plVar12 = *(long **)(*(long *)(param_1 + 0x60) + uVar11 * 8);
    if (plVar12 == (long *)0x0) {
      return true;
    }
    plVar12 = (long *)*plVar12;
    if (plVar12 == (long *)0x0) {
      return true;
    }
    if (1 < uVar10) {
      do {
        uVar10 = plVar12[1];
        if (uVar10 == uVar6) {
          if (*(uint *)(plVar12 + 2) == uVar7) goto LAB_02b1d788;
        }
        else {
          if (uVar9 <= uVar10) {
            uVar1 = 0;
            if (uVar9 != 0) {
              uVar1 = uVar10 / uVar9;
            }
            uVar10 = uVar10 - uVar1 * uVar9;
          }
          if (uVar10 != uVar11) {
            return true;
          }
        }
        plVar12 = (long *)*plVar12;
        if (plVar12 == (long *)0x0) {
          return true;
        }
      } while( true );
    }
    do {
      if (plVar12[1] == uVar6) {
        if (*(uint *)(plVar12 + 2) == uVar7) goto LAB_02b1d788;
      }
      else if ((plVar12[1] & uVar9 - 1) != uVar11) {
        return true;
      }
      plVar12 = (long *)*plVar12;
      if (plVar12 == (long *)0x0) {
        return true;
      }
    } while( true );
  }
  if (uVar7 == *(uint *)(param_1 + 0x5c)) {
    return false;
  }
  goto LAB_02b1d794;
LAB_02b1d788:
  if ((int)plVar12[4] != 1) {
    return true;
  }
LAB_02b1d794:
  if (*(char *)(param_1 + 0xcb) != '\0') {
    *(undefined1 *)(param_1 + 0xcb) = 1;
    return true;
  }
  *(byte *)(param_1 + 0xcb) = DAT_04839728;
  if ((bVar3 & 1) != 0) {
    return true;
  }
LAB_02b1d47c:
  if ((*(char *)(param_1 + 200) != '\0') || (uVar6 = FUN_02114f8c(param_1), (uVar6 & 1) == 0)) {
    return true;
  }
  if (*(char *)(param_1 + 0xd0) == '\0') {
    if (((*PTR_DAT_047d6c98 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_047d6c98), iVar5 != 0)) {
      FUN_00100190(PTR_LAB_047d6cb0,PTR_DAT_047d6ca0,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d6c98);
    }
    lVar8 = *(long *)PTR_DAT_047d6ca0;
    uVar13 = 0;
    *(long *)PTR_DAT_047d6ca8 = lVar8;
    puVar2 = PTR_DAT_047d0860;
    if ((lVar8 != 0) && (DAT_045dfcb0 != 0)) {
      uVar13 = 0;
      uVar7 = 0;
      do {
        if (((*(long *)(lVar8 + 0x70) != 0) && ((uVar7 & 0xff) < DAT_045dfcb0)) &&
           (*(long *)puVar2 != 0)) {
          local_38 = 0;
          FUN_00da4118(local_60,*(long *)puVar2,&local_38,uVar7);
          if ((local_60[0] == 0) && (local_38 != 0)) {
            for (plVar12 = *(long **)(param_1 + 0x90); plVar12 != (long *)0x0;
                plVar12 = (long *)*plVar12) {
              if ((*(int *)((long)plVar12 + 0x1c) != 0xff) && (plVar12[5] == local_38)) {
                uVar13 = uVar13 + 1;
                break;
              }
            }
          }
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < DAT_045dfcb0);
    }
  }
  else if ((((*(long *)(param_1 + 0xd8) == 0) || (*(short *)(*(long *)(param_1 + 0xd8) + 0x1a) == 0)
            ) || (*(long *)(param_1 + 0xd8) == 0)) ||
          ((lVar8 = *(long *)(*(long *)(param_1 + 0xd8) + 0x10), lVar8 == 0 ||
           (uVar4 = FUN_01419488(lVar8 + -0x28), uVar4 == 0)))) {
    uVar13 = 0;
  }
  else {
    uVar6 = 0;
    uVar13 = 0;
    do {
      lVar8 = 0;
      if (*(long *)(param_1 + 0xd8) != 0) {
        lVar8 = *(long *)(*(long *)(param_1 + 0xd8) + 0x10);
        if (lVar8 != 0) {
          lVar14 = *(long *)(lVar8 + 0x148);
          *(undefined8 *)(lVar8 + 0x1a8) = 0;
          if (lVar14 != *(long *)(lVar8 + 0x150)) {
            do {
              FUN_013fcb68(lVar8 + 0x180,lVar14 + 8);
              lVar14 = lVar14 + 0x10;
            } while (lVar14 != *(long *)(lVar8 + 0x150));
            if (uVar6 < *(ulong *)(lVar8 + 0x1a8)) {
              lVar8 = *(long *)(*(long *)(lVar8 + 0x1a0) + uVar6 * 8);
              goto LAB_02b1d684;
            }
          }
        }
        lVar8 = 0;
      }
LAB_02b1d684:
      for (plVar12 = *(long **)(param_1 + 0x90); plVar12 != (long *)0x0; plVar12 = (long *)*plVar12)
      {
        if ((*(int *)((long)plVar12 + 0x1c) != 0xff) && (plVar12[5] == lVar8)) {
          uVar13 = uVar13 + 1;
          break;
        }
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 != uVar4);
  }
  uVar4 = FUN_02114e38(param_1);
  return uVar13 < (uVar4 & 0xff);
}


