/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01bc39d8; name: FUN_01bc39d8
 */


undefined2 * FUN_01bc39d8(byte *param_1)

{
  int iVar1;
  undefined2 *puVar2;
  
  if ((1 < *param_1) || (puVar2 = *(undefined2 **)(param_1 + 8), puVar2 == (undefined2 *)0x0)) {
    if ((DAT_0480d070 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_0480d070);
      if (iVar1 == 0) {
        puVar2 = &DAT_0480d068;
      }
      else {
        DAT_0480d068 = 0;
        __cxa_guard_release(&DAT_0480d070);
        puVar2 = &DAT_0480d068;
      }
    }
    else {
      puVar2 = &DAT_0480d068;
    }
  }
  return puVar2;
}


