/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c8794c; name: FUN_01c8794c
 */


undefined * FUN_01c8794c(byte *param_1)

{
  int iVar1;
  undefined *puVar2;
  
  if ((1 < *param_1) || (puVar2 = *(undefined **)(param_1 + 8), puVar2 == (undefined *)0x0)) {
    if (((DAT_04816198 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04816198), iVar1 != 0)) {
      memset(&DAT_04815ed0,0,0x2c8);
      __cxa_guard_release(&DAT_04816198);
      puVar2 = &DAT_04815ed0;
    }
    else {
      puVar2 = &DAT_04815ed0;
    }
  }
  return puVar2;
}


