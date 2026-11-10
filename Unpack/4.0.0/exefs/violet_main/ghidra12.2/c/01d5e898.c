/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01d5e898; name: FUN_01d5e898
 */


void FUN_01d5e898(undefined8 *param_1,uint param_2)

{
  long *plVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long *plStack_38;
  
  if ((DAT_048383f8 & 1) == 0) {
    iVar3 = __cxa_guard_acquire(&DAT_048383f8);
    if (iVar3 != 0) {
      FUN_00100190(&LAB_00aa519c,&DAT_048383e8,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_048383f8);
    }
  }
  uVar2 = DAT_048383e8;
  DAT_04838400 = DAT_048383e8;
  local_50 = *param_1;
  uStack_48 = param_1[1];
  local_40 = param_1[2];
  plVar1 = (long *)param_1[3];
  plStack_38 = plVar1;
  if (plVar1 == (long *)0x0) {
    FUN_01e29aac(DAT_048383e8,&local_50,param_2 & 1);
    return;
  }
  (**(code **)(*plVar1 + 0x18))(plVar1);
  FUN_01e29aac(uVar2,&local_50,param_2 & 1);
                    /* WARNING: Could not recover jumptable at 0x01d5e948. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x20))(plVar1);
  return;
}


