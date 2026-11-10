/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028ab910; name: FUN_028ab910
 */


void FUN_028ab910(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  
  plVar9 = *(long **)(param_1 + 8);
  plVar8 = *(long **)(param_1 + 0x10);
  if (plVar8 != plVar9) {
    uVar6 = *(ulong *)(param_1 + 0x20);
    lVar10 = plVar9[uVar6 / 0x2a] + (uVar6 % 0x2a) * 0x60;
    uVar5 = *(long *)(param_1 + 0x28) + uVar6;
    lVar11 = plVar9[uVar5 / 0x2a] + (uVar5 % 0x2a) * 0x60;
    if (lVar11 != lVar10) {
      plVar9 = plVar9 + uVar6 / 0x2a;
      lVar2 = tpidr_el0;
      do {
        lVar7 = *(long *)(lVar10 + 0x38);
        if (lVar7 != 0) {
          *(long *)(lVar10 + 0x40) = lVar7;
          plVar8 = *(long **)(lVar2 + 0x30);
          if (plVar8 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar8 = DAT_04859430;
            *(long **)(lVar2 + 0x30) = DAT_04859430;
          }
          uVar5 = (**(code **)(*plVar8 + 0xf8))(plVar8);
          if (((uVar5 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
            (**(code **)(*plVar8 + 0x18))(plVar8,lVar7,0,8);
          }
          else {
            FUN_00c48fe8(plVar8,lVar7,0,8);
          }
        }
        lVar7 = *(long *)(lVar10 + 0x20);
        if (lVar7 != 0) {
          *(long *)(lVar10 + 0x28) = lVar7;
          plVar8 = *(long **)(lVar2 + 0x30);
          if (plVar8 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar8 = DAT_04859430;
            *(long **)(lVar2 + 0x30) = DAT_04859430;
          }
          uVar5 = (**(code **)(*plVar8 + 0xf8))(plVar8);
          if (((uVar5 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
            (**(code **)(*plVar8 + 0x18))(plVar8,lVar7,0,8);
          }
          else {
            FUN_00c48fe8(plVar8,lVar7,0,8);
          }
        }
        lVar10 = lVar10 + 0x60;
        if (lVar10 - *plVar9 == 0xfc0) {
          plVar9 = plVar9 + 1;
          lVar10 = *plVar9;
        }
      } while (lVar11 != lVar10);
      plVar9 = *(long **)(param_1 + 8);
      plVar8 = *(long **)(param_1 + 0x10);
    }
  }
  uVar5 = (long)plVar8 - (long)plVar9 >> 3;
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (2 < uVar5) {
    lVar10 = tpidr_el0;
    do {
      lVar11 = *plVar9;
      if (lVar11 != 0) {
        plVar9 = *(long **)(lVar10 + 0x30);
        if (plVar9 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar9 = DAT_04859430;
          *(long **)(lVar10 + 0x30) = DAT_04859430;
        }
        uVar5 = (**(code **)(*plVar9 + 0xf8))(plVar9);
        if (((uVar5 & 1) == 0) || (lVar2 = FUN_00c4e600(), *(int *)(lVar2 + 0x12c8) < 1)) {
          (**(code **)(*plVar9 + 0x18))(plVar9,lVar11,0,8);
        }
        else {
          FUN_00c48fe8(plVar9,lVar11,0,8);
        }
      }
      plVar9 = (long *)(*(long *)(param_1 + 8) + 8);
      uVar5 = *(long *)(param_1 + 0x10) - (long)plVar9 >> 3;
      *(long **)(param_1 + 8) = plVar9;
    } while (2 < uVar5);
  }
  if (uVar5 == 1) {
    uVar4 = 0x15;
  }
  else {
    if (uVar5 != 2) {
      return;
    }
    uVar4 = 0x2a;
  }
  *(undefined8 *)(param_1 + 0x20) = uVar4;
  return;
}


