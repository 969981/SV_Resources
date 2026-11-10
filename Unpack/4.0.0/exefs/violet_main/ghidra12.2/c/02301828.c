/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02301828; name: FUN_02301828
 */


void FUN_02301828(undefined1 *param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_e0 [96];
  undefined1 auStack_80 [96];
  
  puVar1 = &LAB_02b839c0;
  if (DAT_04846508 == '\0') {
    puVar1 = (undefined1 *)0x0;
  }
  FUN_02303820(auStack_e0,param_2,puVar1,0);
  *param_1 = 1;
  memcpy(auStack_80,auStack_e0,0x60);
  FUN_02303904(param_1 + 8,auStack_80);
  return;
}


