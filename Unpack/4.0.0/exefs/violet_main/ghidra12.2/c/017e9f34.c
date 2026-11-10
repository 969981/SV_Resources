/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017e9f34; name: FUN_017e9f34
 */


void FUN_017e9f34(undefined8 param_1)

{
  int iVar1;
  undefined8 local_18;
  
  local_18 = param_1;
  FUN_017e9fb4(param_1,&local_18);
  if (((DAT_0483aff0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0483aff0), iVar1 != 0)) {
    FUN_00100190(&LAB_02a3d9c0,&DAT_0483afe0,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_0483aff0);
  }
  DAT_0483aff8 = DAT_0483afe0;
  return;
}


