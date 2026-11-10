/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02552618; name: FUN_02552618
 */


void FUN_02552618(undefined1 *param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  
  puVar1 = &LAB_0255a094;
  if (DAT_04850ac0 == '\0') {
    puVar1 = (undefined1 *)0x0;
  }
  FUN_0255a2b4(param_2,puVar1,0);
  *param_1 = 1;
  FUN_0255a328(param_1 + 8);
  return;
}


