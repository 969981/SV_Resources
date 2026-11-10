/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c75974; name: FUN_01c75974
 */


void FUN_01c75974(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  if ((DAT_04839928 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_04839928);
    if (iVar1 != 0) {
      FUN_00100190(&LAB_00b1ce58,&DAT_04839918,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04839928);
    }
  }
  DAT_04839910 = DAT_04839918;
  if (DAT_04839918 == 0) {
    return;
  }
  FUN_01eb7168(DAT_04839918,param_1,param_2);
  return;
}


