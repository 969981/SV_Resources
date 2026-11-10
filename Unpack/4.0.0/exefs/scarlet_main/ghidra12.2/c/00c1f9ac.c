/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c1f9ac; name: FUN_00c1f9ac
 */


void FUN_00c1f9ac(long *param_1)

{
  int iVar1;
  ulong uVar2;
  uint *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  byte *pbVar8;
  long *plVar9;
  byte *pbVar10;
  
  iVar1 = *(int *)(PTR_DAT_047dad98 + (ulong)*(byte *)(param_1 + 1) * 4);
  if (*(char *)((long)param_1 + 9) == '\0') {
    if (iVar1 == 10) {
      if ((long *)*param_1 == (long *)0x0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00c1fad4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)*param_1 + 8))();
      return;
    }
    if (iVar1 != 9) {
      return;
    }
    pbVar8 = (byte *)*param_1;
    if (pbVar8 == (byte *)0x0) {
      return;
    }
    if (((*pbVar8 & 1) != 0) && (lVar6 = *(long *)(pbVar8 + 0x10), lVar6 != 0)) {
      lVar7 = tpidr_el0;
      plVar9 = *(long **)(lVar7 + 0x30);
      if (plVar9 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar9 = DAT_04859430;
        *(long **)(lVar7 + 0x30) = DAT_04859430;
      }
      uVar2 = (**(code **)(*plVar9 + 0xf8))(plVar9);
      if (((uVar2 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
        (**(code **)(*plVar9 + 0x18))(plVar9,lVar6,0,8);
      }
      else {
        FUN_00c48fe8(plVar9,lVar6,0,8);
      }
    }
    goto LAB_00c1fa44;
  }
  switch(iVar1) {
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
    pbVar8 = (byte *)*param_1;
    if (pbVar8 == (byte *)0x0) {
      return;
    }
    puVar3 = *(uint **)(pbVar8 + 8);
    if ((puVar3 != (uint *)0x0) && (*(long *)puVar3 == 0)) goto LAB_00c1fa1c;
    break;
  case 9:
    pbVar8 = (byte *)*param_1;
    if (pbVar8 == (byte *)0x0) {
      return;
    }
    puVar3 = *(uint **)(pbVar8 + 0x10);
    if ((puVar3 != (uint *)0x0) && (*(long *)pbVar8 == 0)) {
      uVar2 = (ulong)*puVar3;
      if (0 < (int)*puVar3) {
        lVar6 = tpidr_el0;
        do {
          puVar3 = puVar3 + 2;
          pbVar10 = *(byte **)puVar3;
          if (pbVar10 != (byte *)0x0) {
            if (((*pbVar10 & 1) != 0) && (lVar7 = *(long *)(pbVar10 + 0x10), lVar7 != 0)) {
              plVar9 = *(long **)(lVar6 + 0x30);
              if (plVar9 == (long *)0x0) {
                if (((DAT_04859438 & 1) == 0) &&
                   (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
                  DAT_04859430 = DAT_04859418;
                  __cxa_guard_release(&DAT_04859438);
                }
                plVar9 = DAT_04859430;
                *(long **)(lVar6 + 0x30) = DAT_04859430;
              }
              uVar4 = (**(code **)(*plVar9 + 0xf8))(plVar9);
              if (((uVar4 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
                (**(code **)(*plVar9 + 0x18))(plVar9,lVar7,0,8);
              }
              else {
                FUN_00c48fe8(plVar9,lVar7,0,8);
              }
            }
            plVar9 = *(long **)(lVar6 + 0x30);
            if (plVar9 == (long *)0x0) {
              if (((DAT_04859438 & 1) == 0) &&
                 (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
                DAT_04859430 = DAT_04859418;
                __cxa_guard_release(&DAT_04859438);
              }
              plVar9 = DAT_04859430;
              *(long **)(lVar6 + 0x30) = DAT_04859430;
            }
            uVar4 = (**(code **)(*plVar9 + 0xf8))(plVar9);
            if (((uVar4 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
              (**(code **)(*plVar9 + 0x18))(plVar9,pbVar10,0,8);
            }
            else {
              FUN_00c48fe8(plVar9,pbVar10,0,8);
            }
          }
          uVar2 = uVar2 - 1;
        } while (uVar2 != 0);
        puVar3 = *(uint **)(pbVar8 + 0x10);
        if (puVar3 == (uint *)0x0) break;
      }
LAB_00c1fa1c:
      operator_delete__(puVar3);
    }
    break;
  case 10:
    pbVar8 = (byte *)*param_1;
    if (pbVar8 == (byte *)0x0) {
      return;
    }
    puVar3 = *(uint **)(pbVar8 + 0x10);
    if ((puVar3 != (uint *)0x0) && (*(long *)pbVar8 == 0)) {
      uVar2 = (ulong)*puVar3;
      if (0 < (int)*puVar3) {
        do {
          puVar3 = puVar3 + 2;
          if (*(long **)puVar3 != (long *)0x0) {
            (**(code **)(**(long **)puVar3 + 8))();
          }
          uVar2 = uVar2 - 1;
        } while (uVar2 != 0);
        puVar3 = *(uint **)(pbVar8 + 0x10);
        if (puVar3 == (uint *)0x0) goto LAB_00c1fb2c;
      }
      operator_delete__(puVar3);
    }
LAB_00c1fb2c:
    lVar6 = tpidr_el0;
    plVar9 = *(long **)(lVar6 + 0x30);
    if (plVar9 != (long *)0x0) goto LAB_00c1fa60;
    if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    goto LAB_00c1fe30;
  default:
    return;
  }
LAB_00c1fa44:
  lVar6 = tpidr_el0;
  plVar9 = *(long **)(lVar6 + 0x30);
  if (plVar9 == (long *)0x0) {
    if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
LAB_00c1fe30:
    plVar9 = DAT_04859430;
    *(long **)(lVar6 + 0x30) = DAT_04859430;
  }
LAB_00c1fa60:
  uVar2 = (**(code **)(*plVar9 + 0xf8))(plVar9);
  if (((uVar2 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x00c1faa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar9 + 0x18))(plVar9,pbVar8,0,8);
    return;
  }
  FUN_00c48fe8(plVar9,pbVar8,0,8);
  return;
}


