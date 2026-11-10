/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018bb0c0; name: FUN_018bb0c0
 */


undefined8 FUN_018bb0c0(undefined8 *param_1)

{
  int iVar1;
  
  if (((DAT_0486ada0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0486ada0), iVar1 != 0)) {
    FUN_029b1bb0();
    DAT_0486ad98 = &DAT_0486ada8;
    __cxa_guard_release(&DAT_0486ada0);
  }
  while( true ) {
    if (param_1 == (undefined8 *)0x0) {
      return 0;
    }
    if ((undefined8 **)param_1 == &DAT_0486ad98) break;
    param_1 = (undefined8 *)*param_1;
  }
  return 1;
}


