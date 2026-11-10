/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00b6be90; name: FUN_00b6be90
 */


void FUN_00b6be90(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  *param_1 = &PTR_FUN_04559d80;
  if (((*PTR_DAT_047d6e90 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_047d6e90), iVar3 != 0))
  {
    FUN_00100190(&LAB_00b0a8ac,PTR_DAT_047d6e98,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d6e90);
  }
  lVar6 = *(long *)PTR_DAT_047d6e98;
  *(long *)PTR_DAT_047d6ea0 = lVar6;
  if (lVar6 != 0) {
    *(undefined1 *)(lVar6 + 0xadf1) = 0;
    *(undefined1 *)(lVar6 + 0xae02) = 0;
    if (*(uint *)(lVar6 + 0xadf4) != 0xffffffff) {
      nn::bluetooth::DisconnectFromGattServer(*(uint *)(lVar6 + 0xadf4));
    }
  }
  lVar6 = param_1[2];
  if (lVar6 == 0) {
    return;
  }
  lVar1 = param_1[4];
  plVar2 = (long *)param_1[5];
  param_1[3] = lVar6;
  uVar4 = (**(code **)(*plVar2 + 0xf8))(plVar2);
  if ((uVar4 & 1) != 0) {
    lVar5 = FUN_00c4e600();
    if (0 < *(int *)(lVar5 + 0x12c8)) {
      FUN_00c48fe8(plVar2,lVar6,lVar1 - lVar6,4);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00b6bf48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x18))(plVar2,lVar6,lVar1 - lVar6,4);
  return;
}


