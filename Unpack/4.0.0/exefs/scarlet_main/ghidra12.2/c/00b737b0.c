/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00b737b0; name: FUN_00b737b0
 */


void FUN_00b737b0(long param_1)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  byte *pbVar7;
  byte *pbVar8;
  long *plVar9;
  
  puVar1 = PTR_DAT_047dabb0;
  pbVar7 = *(byte **)PTR_DAT_047dabb0;
  pbVar8 = *(byte **)(param_1 + 0x20);
  if (pbVar8 != pbVar7 && pbVar8 != (byte *)0x0) {
    lVar4 = tpidr_el0;
    if (((*pbVar8 & 1) != 0) && (lVar6 = *(long *)(pbVar8 + 0x10), lVar6 != 0)) {
      plVar9 = *(long **)(lVar4 + 0x30);
      if (plVar9 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar9 = DAT_04859430;
        *(long **)(lVar4 + 0x30) = DAT_04859430;
      }
      uVar3 = (**(code **)(*plVar9 + 0xf8))(plVar9);
      if (((uVar3 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
        (**(code **)(*plVar9 + 0x18))(plVar9,lVar6,0,8);
      }
      else {
        FUN_00c48fe8(plVar9,lVar6,0,8);
      }
    }
    plVar9 = *(long **)(lVar4 + 0x30);
    if (plVar9 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar9 = DAT_04859430;
      *(long **)(lVar4 + 0x30) = DAT_04859430;
    }
    uVar3 = (**(code **)(*plVar9 + 0xf8))(plVar9);
    if (((uVar3 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar9 + 0x18))(plVar9,pbVar8,0,8);
    }
    else {
      FUN_00c48fe8(plVar9,pbVar8,0,8);
    }
    pbVar7 = *(byte **)puVar1;
  }
  pbVar8 = *(byte **)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (pbVar8 != pbVar7 && pbVar8 != (byte *)0x0) {
    if (((*pbVar8 & 1) != 0) && (lVar4 = *(long *)(pbVar8 + 0x10), lVar4 != 0)) {
      lVar6 = tpidr_el0;
      plVar9 = *(long **)(lVar6 + 0x30);
      if (plVar9 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar9 = DAT_04859430;
        *(long **)(lVar6 + 0x30) = DAT_04859430;
      }
      uVar3 = (**(code **)(*plVar9 + 0xf8))(plVar9);
      if (((uVar3 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
        (**(code **)(*plVar9 + 0x18))(plVar9,lVar4,0,8);
      }
      else {
        FUN_00c48fe8(plVar9,lVar4,0,8);
      }
    }
    lVar4 = tpidr_el0;
    plVar9 = *(long **)(lVar4 + 0x30);
    if (plVar9 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar9 = DAT_04859430;
      *(long **)(lVar4 + 0x30) = DAT_04859430;
    }
    uVar3 = (**(code **)(*plVar9 + 0xf8))(plVar9);
    if (((uVar3 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar9 + 0x18))(plVar9,pbVar8,0,8);
    }
    else {
      FUN_00c48fe8(plVar9,pbVar8,0,8);
    }
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  if ((DAT_0483a620 == param_1) || (*(long **)(param_1 + 0x18) == (long *)0x0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00b738d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x18) + 8))();
  return;
}


