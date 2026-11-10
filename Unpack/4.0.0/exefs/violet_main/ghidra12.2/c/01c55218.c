/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c55218; name: FUN_01c55218
 */


undefined4 * FUN_01c55218(byte *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_4;
  
  if ((1 < *param_1) || (puVar2 = *(undefined4 **)(param_1 + 8), puVar2 == (undefined4 *)0x0)) {
    if (((DAT_04813420 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04813420), iVar1 != 0)) {
      FUN_01c53e14(&local_4);
      DAT_04813418 = local_4;
      __cxa_guard_release(&DAT_04813420);
      puVar2 = &DAT_04813418;
    }
    else {
      puVar2 = &DAT_04813418;
    }
  }
  return puVar2;
}


