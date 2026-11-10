/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028b4530; name: FUN_028b4530
 */


void FUN_028b4530(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_28;
  undefined8 local_8;
  
  local_28 = param_3;
  local_8 = param_2;
  if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
    DAT_04859430 = DAT_04859418;
    __cxa_guard_release(&DAT_04859438);
  }
  uVar2 = FUN_028b45bc(DAT_04859430,&local_8,&local_28);
  FUN_028b479c(param_1,uVar2);
  return;
}


