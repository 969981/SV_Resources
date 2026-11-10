/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e9b344; name: FUN_01e9b344
 */


void FUN_01e9b344(undefined8 *param_1)

{
  code *pcVar1;
  
  *param_1 = &DAT_045537d8;
  param_1[4] = &PTR_LAB_04553818;
  param_1[5] = &PTR_LAB_04553838;
  pcVar1 = (code *)param_1[0x2d];
  if (pcVar1 != (code *)0x0) {
    param_1[0x2e] = 0;
    param_1[0x2f] = 0;
    param_1[0x2c] = 0;
    param_1[0x2d] = 0;
    (*pcVar1)(param_1 + 0x30);
  }
  FUN_01e9a4dc(param_1 + 8);
  return;
}


