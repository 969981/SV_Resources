/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01bbdecc; name: FUN_01bbdecc
 */


undefined8 * FUN_01bbdecc(byte *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  if ((1 < *param_1) || (puVar2 = *(undefined8 **)(param_1 + 8), puVar2 == (undefined8 *)0x0)) {
    if ((DAT_0480cf30 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_0480cf30);
      if (iVar1 == 0) {
        puVar2 = &DAT_0480cf00;
      }
      else {
        DAT_0480cf20 = 0;
        DAT_0480cf28 = 0;
        DAT_0480cf10 = 0;
        DAT_0480cf18 = 0;
        DAT_0480cf00 = 0;
        DAT_0480cf08 = 0;
        __cxa_guard_release(&DAT_0480cf30);
        puVar2 = &DAT_0480cf00;
      }
    }
    else {
      puVar2 = &DAT_0480cf00;
    }
  }
  return puVar2;
}


