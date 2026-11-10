/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01d4f338; name: FUN_01d4f338
 */


void FUN_01d4f338(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 auStack_90 [112];
  
  puVar1 = PTR_FUN_047d79d0;
  if (DAT_04831078 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  FUN_01d4fa3c(auStack_90,param_2,puVar1,0);
  FUN_01d4fa90(param_1,auStack_90);
  FUN_01433e94(auStack_90);
  return;
}


