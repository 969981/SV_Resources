/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01d1db58; name: FUN_01d1db58
 */


void FUN_01d1db58(undefined1 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  char local_270 [288];
  undefined1 auStack_150 [288];
  
  puVar1 = PTR_FUN_047d73b8;
  if (DAT_0482cfc8 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  FUN_01d1ec68(local_270,param_2,puVar1,0);
  if (local_270[0] == '\0') {
    *param_1 = 0;
    *(undefined8 *)(param_1 + 8) = 0;
  }
  else {
    *param_1 = 1;
    memcpy(auStack_150,(void *)((ulong)local_270 | 4),0x11c);
    FUN_01d1ecdc(param_1 + 8,auStack_150);
  }
  return;
}


