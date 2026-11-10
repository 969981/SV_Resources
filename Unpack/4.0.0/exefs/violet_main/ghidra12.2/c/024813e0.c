/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 024813e0; name: FUN_024813e0
 */


void FUN_024813e0(undefined1 *param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined1 local_30 [16];
  
  puVar1 = &LAB_02b97290;
  if (DAT_0484c258 == '\0') {
    puVar1 = (undefined1 *)0x0;
  }
  local_30 = FUN_02481924(param_2,puVar1,0);
  *param_1 = 1;
  FUN_00d200a4(param_1 + 8,local_30);
  return;
}


