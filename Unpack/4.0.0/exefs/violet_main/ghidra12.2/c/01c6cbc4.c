/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c6cbc4; name: FUN_01c6cbc4
 */


undefined8 * FUN_01c6cbc4(byte *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 local_30;
  undefined4 local_28;
  
  if ((1 < *param_1) || (puVar2 = *(undefined8 **)(param_1 + 8), puVar2 == (undefined8 *)0x0)) {
    if (((DAT_04814a50 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04814a50), iVar1 != 0)) {
      FUN_019482e4(&local_30);
      DAT_04814a40 = local_30;
      DAT_04814a48 = local_28;
      __cxa_guard_release(&DAT_04814a50);
      puVar2 = &DAT_04814a40;
    }
    else {
      puVar2 = &DAT_04814a40;
    }
  }
  return puVar2;
}


