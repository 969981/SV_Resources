/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00b6bfc8; name: FUN_00b6bfc8
 */


void FUN_00b6bfc8(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  *param_1 = &PTR_FUN_04559d80;
  if (((*PTR_DAT_047d6e90 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_047d6e90), iVar2 != 0))
  {
    FUN_00100190(&LAB_00b0a8ac,PTR_DAT_047d6e98,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d6e90);
  }
  lVar5 = *(long *)PTR_DAT_047d6e98;
  *(long *)PTR_DAT_047d6ea0 = lVar5;
  if (lVar5 != 0) {
    *(undefined1 *)(lVar5 + 0xadf1) = 0;
    *(undefined1 *)(lVar5 + 0xae02) = 0;
    if (*(uint *)(lVar5 + 0xadf4) != 0xffffffff) {
      nn::bluetooth::DisconnectFromGattServer(*(uint *)(lVar5 + 0xadf4));
    }
  }
  lVar5 = param_1[2];
  if (lVar5 != 0) {
    lVar1 = param_1[4];
    plVar6 = (long *)param_1[5];
    param_1[3] = lVar5;
    uVar3 = (**(code **)(*plVar6 + 0xf8))(plVar6);
    if ((uVar3 & 1) != 0) {
      lVar4 = FUN_00c4e600();
      if (0 < *(int *)(lVar4 + 0x12c8)) {
        FUN_00c48fe8(plVar6,lVar5,lVar1 - lVar5,4);
        goto LAB_00b6c078;
      }
    }
    (**(code **)(*plVar6 + 0x18))(plVar6,lVar5,lVar1 - lVar5,4);
  }
LAB_00b6c078:
  lVar5 = tpidr_el0;
  plVar6 = *(long **)(lVar5 + 0x30);
  if (plVar6 == (long *)0x0) {
    if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    plVar6 = DAT_04859430;
    *(long **)(lVar5 + 0x30) = DAT_04859430;
  }
  uVar3 = (**(code **)(*plVar6 + 0xf8))(plVar6);
  if ((uVar3 & 1) != 0) {
    lVar5 = FUN_00c4e600();
    if (0 < *(int *)(lVar5 + 0x12c8)) {
      FUN_00c48fe8(plVar6,param_1,0,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00b6c0cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar6 + 0x18))(plVar6,param_1,0,8);
  return;
}


