/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00bfee44; name: FUN_00bfee44
 */


void FUN_00bfee44(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  byte *pbVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  
  plVar5 = (long *)*param_1;
  lVar1 = tpidr_el0;
  lVar10 = (plVar5[1] - *plVar5) * 0x10000000 >> 0x20;
  lVar9 = lVar10 + 1;
  lVar10 = lVar10 << 4;
  do {
    lVar7 = *plVar5 + lVar10;
    if (*(int *)(lVar7 + -0xc) == 4) {
      pbVar6 = *(byte **)(lVar7 + -8);
      if (pbVar6 != (byte *)0x0) {
        if (*(long *)pbVar6 != 0) {
          FUN_00bfee44(pbVar6);
        }
        goto LAB_00bfef28;
      }
    }
    else if ((*(int *)(lVar7 + -0xc) == 3) &&
            (pbVar6 = *(byte **)(lVar7 + -8), pbVar6 != (byte *)0x0)) {
      if (((*pbVar6 & 1) != 0) && (lVar7 = *(long *)(pbVar6 + 0x10), lVar7 != 0)) {
        plVar5 = *(long **)(lVar1 + 0x30);
        if (plVar5 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar5 = DAT_04859430;
          *(long **)(lVar1 + 0x30) = DAT_04859430;
        }
        uVar3 = (**(code **)(*plVar5 + 0xf8))(plVar5);
        if ((uVar3 & 1) != 0) {
          lVar4 = FUN_00c4e600();
          if (0 < *(int *)(lVar4 + 0x12c8)) {
            FUN_00c48fe8(plVar5,lVar7,0,8);
            goto LAB_00bfef28;
          }
        }
        (**(code **)(*plVar5 + 0x18))(plVar5,lVar7,0,8);
      }
LAB_00bfef28:
      plVar5 = *(long **)(lVar1 + 0x30);
      if (plVar5 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar5 = DAT_04859430;
        *(long **)(lVar1 + 0x30) = DAT_04859430;
      }
      uVar3 = (**(code **)(*plVar5 + 0xf8))(plVar5);
      if ((uVar3 & 1) != 0) {
        lVar7 = FUN_00c4e600();
        if (0 < *(int *)(lVar7 + 0x12c8)) {
          FUN_00c48fe8(plVar5,pbVar6,0,8);
          goto LAB_00bfef70;
        }
      }
      (**(code **)(*plVar5 + 0x18))(plVar5,pbVar6,0,8);
    }
LAB_00bfef70:
    plVar5 = (long *)*param_1;
    lVar9 = lVar9 + -1;
    lVar10 = lVar10 + -0x10;
  } while (1 < lVar9);
  if (plVar5 == (long *)0x0) goto LAB_00bff100;
  lVar9 = *plVar5;
  if (lVar9 != 0) {
    plVar5[1] = lVar9;
    plVar8 = *(long **)(lVar1 + 0x30);
    if (plVar8 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar8 = DAT_04859430;
      *(long **)(lVar1 + 0x30) = DAT_04859430;
    }
    uVar3 = (**(code **)(*plVar8 + 0xf8))(plVar8);
    if ((uVar3 & 1) != 0) {
      lVar10 = FUN_00c4e600();
      if (0 < *(int *)(lVar10 + 0x12c8)) {
        FUN_00c48fe8(plVar8,lVar9,0,8);
        goto LAB_00bff0b8;
      }
    }
    (**(code **)(*plVar8 + 0x18))(plVar8,lVar9,0,8);
  }
LAB_00bff0b8:
  plVar8 = *(long **)(lVar1 + 0x30);
  if (plVar8 == (long *)0x0) {
    if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    plVar8 = DAT_04859430;
    *(long **)(lVar1 + 0x30) = DAT_04859430;
  }
  uVar3 = (**(code **)(*plVar8 + 0xf8))(plVar8);
  if ((uVar3 & 1) != 0) {
    lVar9 = FUN_00c4e600();
    if (0 < *(int *)(lVar9 + 0x12c8)) {
      FUN_00c48fe8(plVar8,plVar5,0,8);
      goto LAB_00bff100;
    }
  }
  (**(code **)(*plVar8 + 0x18))(plVar8,plVar5,0,8);
LAB_00bff100:
  *param_1 = 0;
  return;
}


