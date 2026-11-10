/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c330ec; name: FUN_00c330ec
 */


void FUN_00c330ec(undefined8 *param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  
  *param_1 = &PTR_FUN_0455c820;
  plVar9 = *(long **)(param_1[3] + 0x10);
  if (plVar9 != (long *)0x0) {
    lVar4 = tpidr_el0;
    do {
      lVar5 = plVar9[3];
      if (lVar5 != 0) {
        if (*(long **)(lVar5 + 0x40) != (long *)0x0) {
          (**(code **)(**(long **)(lVar5 + 0x40) + 8))();
        }
        lVar6 = *(long *)(lVar5 + 0x48);
        if (lVar6 != 0) {
          plVar8 = *(long **)(lVar4 + 0x30);
          if (plVar8 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar8 = DAT_04859430;
            *(long **)(lVar4 + 0x30) = DAT_04859430;
          }
          uVar2 = (**(code **)(*plVar8 + 0xf8))(plVar8);
          if (((uVar2 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
            (**(code **)(*plVar8 + 0x18))(plVar8,lVar6,0,8);
          }
          else {
            FUN_00c48fe8(plVar8,lVar6,0,8);
          }
        }
        if (*(long **)(lVar5 + 0x38) != (long *)0x0) {
          (**(code **)(**(long **)(lVar5 + 0x38) + 8))();
        }
        if (*(void **)(lVar5 + 0x30) != (void *)0x0) {
          operator_delete__(*(void **)(lVar5 + 0x30));
        }
        plVar8 = *(long **)(lVar4 + 0x30);
        if (plVar8 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar8 = DAT_04859430;
          *(long **)(lVar4 + 0x30) = DAT_04859430;
        }
        uVar2 = (**(code **)(*plVar8 + 0xf8))(plVar8);
        if (((uVar2 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
          (**(code **)(*plVar8 + 0x18))(plVar8,lVar5,0,8);
        }
        else {
          FUN_00c48fe8(plVar8,lVar5,0,8);
        }
      }
      plVar9 = (long *)*plVar9;
    } while (plVar9 != (long *)0x0);
  }
  FUN_00bb1224(param_1 + 4);
  plVar9 = (long *)param_1[3];
  if (plVar9 == (long *)0x0) {
    return;
  }
  if ((long *)plVar9[2] != (long *)0x0) {
    lVar4 = tpidr_el0;
    plVar8 = (long *)plVar9[2];
    do {
      plVar10 = (long *)*plVar8;
      plVar7 = *(long **)(lVar4 + 0x30);
      if (plVar7 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar7 = DAT_04859430;
        *(long **)(lVar4 + 0x30) = DAT_04859430;
      }
      uVar2 = (**(code **)(*plVar7 + 0xf8))(plVar7);
      if (((uVar2 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
        (**(code **)(*plVar7 + 0x18))(plVar7,plVar8,0,8);
      }
      else {
        FUN_00c48fe8(plVar7,plVar8,0,8);
      }
      plVar8 = plVar10;
    } while (plVar10 != (long *)0x0);
  }
  lVar4 = *plVar9;
  *plVar9 = 0;
  if (lVar4 != 0) {
    lVar5 = tpidr_el0;
    plVar8 = *(long **)(lVar5 + 0x30);
    if (plVar8 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar8 = DAT_04859430;
      *(long **)(lVar5 + 0x30) = DAT_04859430;
    }
    uVar2 = (**(code **)(*plVar8 + 0xf8))(plVar8);
    if (((uVar2 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
      (**(code **)(*plVar8 + 0x18))(plVar8,lVar4,0,8);
    }
    else {
      FUN_00c48fe8(plVar8,lVar4,0,8);
    }
  }
  lVar4 = tpidr_el0;
  plVar8 = *(long **)(lVar4 + 0x30);
  if (plVar8 == (long *)0x0) {
    if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    plVar8 = DAT_04859430;
    *(long **)(lVar4 + 0x30) = DAT_04859430;
  }
  uVar2 = (**(code **)(*plVar8 + 0xf8))(plVar8);
  if (((uVar2 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x00c33498. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar8 + 0x18))(plVar8,plVar9,0,8);
    return;
  }
  FUN_00c48fe8(plVar8,plVar9,0,8);
  return;
}


