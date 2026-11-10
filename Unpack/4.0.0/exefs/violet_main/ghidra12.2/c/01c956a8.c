/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c956a8; name: FUN_01c956a8
 */


void FUN_01c956a8(undefined1 *param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_80 [48];
  undefined1 auStack_50 [48];
  
  puVar1 = &LAB_009709d8;
  if (DAT_04816ca8 == '\0') {
    puVar1 = (undefined1 *)0x0;
  }
  FUN_01c96ff8(auStack_80,param_2,puVar1,0);
  *param_1 = 1;
  memcpy(auStack_50,auStack_80,0x2e);
  FUN_01c97054(param_1 + 8,auStack_50);
  return;
}


