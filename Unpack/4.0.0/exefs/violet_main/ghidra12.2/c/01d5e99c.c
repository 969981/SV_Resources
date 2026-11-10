/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01d5e99c; name: FUN_01d5e99c
 */


void FUN_01d5e99c(undefined4 param_1,undefined2 *param_2)

{
  int iVar1;
  undefined2 local_28;
  undefined2 local_26;
  undefined1 local_24;
  undefined1 local_23;
  undefined1 local_22;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  
  if ((DAT_048383f8 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_048383f8);
    if (iVar1 != 0) {
      FUN_00100190(&LAB_00aa519c,&DAT_048383e8,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_048383f8);
    }
  }
  DAT_04838400 = DAT_048383e8;
  local_28 = *param_2;
  local_26 = param_2[1];
  local_24 = *(undefined1 *)(param_2 + 2);
  local_23 = *(undefined1 *)((long)param_2 + 5);
  local_22 = *(undefined1 *)(param_2 + 3);
  local_20 = *(undefined4 *)(param_2 + 4);
  uStack_1c = *(undefined4 *)(param_2 + 6);
  local_18 = *(undefined4 *)(param_2 + 8);
  FUN_017dac64(DAT_048383e8,param_1,&local_28);
  return;
}


