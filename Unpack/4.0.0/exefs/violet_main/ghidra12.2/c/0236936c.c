/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0236936c; name: FUN_0236936c
 */


void FUN_0236936c(undefined8 param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  
  puVar1 = &LAB_0236cf78;
  if (DAT_04849190 == '\0') {
    puVar1 = (undefined1 *)0x0;
  }
  uVar2 = FUN_0184ccb0(param_2);
  FUN_0236cf80(param_1,puVar1,0,uVar2);
  return;
}


