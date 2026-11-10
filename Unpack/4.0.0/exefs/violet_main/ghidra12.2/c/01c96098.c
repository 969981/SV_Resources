/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c96098; name: FUN_01c96098
 */


void FUN_01c96098(undefined1 *param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_e0 [96];
  undefined1 auStack_80 [96];
  
  puVar1 = &LAB_00970a04;
  if (DAT_04816cc0 == '\0') {
    puVar1 = (undefined1 *)0x0;
  }
  FUN_01c97d78(auStack_e0,param_2,puVar1,0);
  *param_1 = 1;
  memcpy(auStack_80,auStack_e0,0x60);
  FUN_01c97dd0(param_1 + 8,auStack_80);
  return;
}


