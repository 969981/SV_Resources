/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01db9a28; name: FUN_01db9a28
 */


undefined8 FUN_01db9a28(undefined8 *param_1)

{
  int iVar1;
  ulong uVar2;
  
  if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
    DAT_04859430 = DAT_04859418;
    __cxa_guard_release(&DAT_04859438);
  }
  uVar2 = (**(code **)(*DAT_04859430 + 0x48))();
  if (uVar2 < 0x6400001) {
    FUN_0180546c(*param_1);
  }
  return 0;
}


