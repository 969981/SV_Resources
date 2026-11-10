/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00b728a4; name: FUN_00b728a4
 */


void FUN_00b728a4(undefined8 *param_1)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  byte *pbVar7;
  long *plVar8;
  long *plVar9;
  
  puVar1 = PTR_DAT_047dabb0;
  *param_1 = &PTR_FUN_04559f40;
  pbVar7 = (byte *)param_1[4];
  lVar4 = tpidr_el0;
  if (pbVar7 != *(byte **)puVar1 && pbVar7 != (byte *)0x0) {
    if (((*pbVar7 & 1) != 0) && (lVar5 = *(long *)(pbVar7 + 0x10), lVar5 != 0)) {
      plVar8 = *(long **)(lVar4 + 0x30);
      if (plVar8 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar8 = DAT_04859430;
        *(long **)(lVar4 + 0x30) = DAT_04859430;
      }
      uVar3 = (**(code **)(*plVar8 + 0xf8))(plVar8);
      if (((uVar3 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
        (**(code **)(*plVar8 + 0x18))(plVar8,lVar5,0,8);
      }
      else {
        FUN_00c48fe8(plVar8,lVar5,0,8);
      }
    }
    plVar8 = *(long **)(lVar4 + 0x30);
    if (plVar8 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar8 = DAT_04859430;
      *(long **)(lVar4 + 0x30) = DAT_04859430;
    }
    uVar3 = (**(code **)(*plVar8 + 0xf8))(plVar8);
    if (((uVar3 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
      (**(code **)(*plVar8 + 0x18))(plVar8,pbVar7,0,8);
    }
    else {
      FUN_00c48fe8(plVar8,pbVar7,0,8);
    }
  }
  param_1[4] = 0;
  if ((((param_1[1] & 1) != 0) &&
      (plVar8 = (long *)(param_1[1] & 0xfffffffffffffffe), plVar8 != (long *)0x0)) &&
     (plVar8[1] == 0)) {
    if (*plVar8 != 0) {
      FUN_00bfee44(plVar8);
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
    if (((uVar3 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
      (**(code **)(*plVar9 + 0x18))(plVar9,plVar8,0,8);
    }
    else {
      FUN_00c48fe8(plVar9,plVar8,0,8);
    }
  }
  plVar8 = *(long **)(lVar4 + 0x30);
  if (plVar8 == (long *)0x0) {
    if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    plVar8 = DAT_04859430;
    *(long **)(lVar4 + 0x30) = DAT_04859430;
  }
  uVar3 = (**(code **)(*plVar8 + 0xf8))(plVar8);
  if (((uVar3 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x00b72a00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar8 + 0x18))(plVar8,param_1,0,8);
    return;
  }
  FUN_00c48fe8(plVar8,param_1,0,8);
  return;
}


