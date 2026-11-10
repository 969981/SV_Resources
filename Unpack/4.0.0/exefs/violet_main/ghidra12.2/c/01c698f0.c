/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c698f0; name: FUN_01c698f0
 */


undefined8 * FUN_01c698f0(byte *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 local_30;
  undefined2 local_28;
  undefined1 local_26;
  
  if ((1 < *param_1) || (puVar2 = *(undefined8 **)(param_1 + 8), puVar2 == (undefined8 *)0x0)) {
    if (((DAT_04814078 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04814078), iVar1 != 0)) {
      FUN_015c4860(&local_30);
      DAT_04814068 = local_30;
      DAT_04814072 = local_26;
      DAT_04814070 = local_28;
      __cxa_guard_release(&DAT_04814078);
      puVar2 = &DAT_04814068;
    }
    else {
      puVar2 = &DAT_04814068;
    }
  }
  return puVar2;
}


