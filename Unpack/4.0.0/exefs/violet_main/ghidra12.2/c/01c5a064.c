/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c5a064; name: FUN_01c5a064
 */


void FUN_01c5a064(undefined1 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_140 [144];
  undefined1 auStack_b0 [144];
  
  uVar1 = 0x68;
  if (DAT_04815c48 == '\0') {
    uVar1 = 0;
  }
  FUN_01c5a6a4(auStack_140,param_2,uVar1,DAT_04815c50);
  *param_1 = 1;
  memcpy(auStack_b0,auStack_140,0x8c);
  FUN_01c58a9c(param_1 + 8,auStack_b0);
  return;
}


