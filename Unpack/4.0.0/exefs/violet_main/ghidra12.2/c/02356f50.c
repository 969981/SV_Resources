/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02356f50; name: FUN_02356f50
 */


void FUN_02356f50(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  long *plStack_50;
  undefined8 local_48;
  undefined1 local_40;
  long *local_38;
  
  local_68 = *param_2;
  uStack_60 = param_2[1];
  local_58 = param_2[2];
  plVar1 = (long *)param_2[3];
  plStack_50 = plVar1;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))(plVar1);
  }
  local_48 = param_2[4];
  local_40 = *(undefined1 *)(param_2 + 5);
  plVar2 = (long *)param_2[6];
  local_38 = plVar2;
  if (plVar2 == (long *)0x0) {
    FUN_02357048(param_1,&local_68);
  }
  else {
    (**(code **)(*plVar2 + 0x18))(plVar2);
    FUN_02357048(param_1,&local_68);
    (**(code **)(*plVar2 + 0x20))(plVar2);
  }
  if (plVar1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x02357020. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x20))(plVar1);
  return;
}


