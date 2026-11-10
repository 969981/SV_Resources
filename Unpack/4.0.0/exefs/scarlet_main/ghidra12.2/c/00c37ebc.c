/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c37ebc; name: FUN_00c37ebc
 */


void FUN_00c37ebc(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,long param_5)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  byte local_58 [8];
  ulong local_50;
  ulong local_48;
  
  if (*(char *)(param_1 + 5) == '\0') {
    plVar4 = (long *)(param_1 + 0x28);
    plVar6 = (long *)*plVar4;
    plVar8 = *(long **)(param_1 + 0x18);
    if (plVar6 != (long *)0x0) {
      plVar5 = plVar4;
      do {
        if ((ulong)plVar6[4] >= param_4) {
          plVar5 = plVar6;
        }
        plVar6 = (long *)plVar6[(ulong)plVar6[4] < param_4];
      } while (plVar6 != (long *)0x0);
      if ((plVar5 != plVar4) && ((ulong)plVar5[4] <= param_4)) {
        plVar8 = (long *)plVar5[5];
      }
    }
    (**(code **)(*plVar8 + 0x60))(local_58);
    uVar7 = (ulong)(local_58[0] >> 1);
    uVar2 = (ulong)local_58 | 1;
    if ((local_58[0] & 1) != 0) {
      uVar7 = local_50;
      uVar2 = local_48;
    }
    if (uVar7 == 0) {
      lVar3 = 0;
    }
    else {
      uVar9 = 0;
      lVar3 = 0;
      do {
        if (*(char *)(uVar2 + uVar9) == '\n') {
          FUN_02a007d0(param_5,uVar2 + lVar3,(uVar9 + 1) - lVar3);
          *(undefined1 *)(param_5 + 0x14) = 1;
          lVar3 = uVar9 + 1;
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 != uVar7);
    }
    FUN_02a007d0(param_5,uVar2 + lVar3,uVar7 - lVar3);
    if ((local_58[0] & 1) == 0) {
      return;
    }
    if (local_48 == 0) {
      return;
    }
    lVar3 = tpidr_el0;
    plVar8 = *(long **)(lVar3 + 0x30);
    uVar7 = local_48;
    if (plVar8 != (long *)0x0) goto LAB_00c380cc;
    if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
  }
  else {
    FUN_00c0ff30(local_58,*(undefined4 *)(param_4 + 0x38));
    uVar7 = (ulong)(local_58[0] >> 1);
    uVar2 = (ulong)local_58 | 1;
    if ((local_58[0] & 1) != 0) {
      uVar7 = local_50;
      uVar2 = local_48;
    }
    if (uVar7 == 0) {
      lVar3 = 0;
    }
    else {
      uVar9 = 0;
      lVar3 = 0;
      do {
        if (*(char *)(uVar2 + uVar9) == '\n') {
          FUN_02a007d0(param_5,uVar2 + lVar3,(uVar9 + 1) - lVar3);
          *(undefined1 *)(param_5 + 0x14) = 1;
          lVar3 = uVar9 + 1;
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 != uVar7);
    }
    FUN_02a007d0(param_5,uVar2 + lVar3,uVar7 - lVar3);
    if ((local_58[0] & 1) == 0) {
      return;
    }
    if (local_48 == 0) {
      return;
    }
    lVar3 = tpidr_el0;
    plVar8 = *(long **)(lVar3 + 0x30);
    uVar7 = local_48;
    if (plVar8 != (long *)0x0) goto LAB_00c380cc;
    if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
  }
  plVar8 = DAT_04859430;
  *(long **)(lVar3 + 0x30) = DAT_04859430;
  uVar7 = local_48;
LAB_00c380cc:
  uVar2 = (**(code **)(*plVar8 + 0xf8))(plVar8);
  if (((uVar2 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
    (**(code **)(*plVar8 + 0x18))(plVar8,uVar7,0,8);
  }
  else {
    FUN_00c48fe8(plVar8,uVar7,0,8);
  }
  return;
}


