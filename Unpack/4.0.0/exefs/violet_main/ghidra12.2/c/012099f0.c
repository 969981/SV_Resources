/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012099f0; name: FUN_012099f0
 */


void FUN_012099f0(undefined8 *param_1)

{
  code *pcVar1;
  
  *param_1 = &DAT_04596df0;
  param_1[4] = &PTR_LAB_04596f68;
  param_1[5] = &DAT_04596fb8;
  pcVar1 = (code *)param_1[0xb5];
  if (pcVar1 != (code *)0x0) {
    param_1[0xb7] = 0;
    param_1[0xb6] = 0;
    param_1[0xb5] = 0;
    param_1[0xb4] = 0;
    (*pcVar1)(param_1 + 0xb8);
  }
  pcVar1 = (code *)param_1[0xa5];
  if (pcVar1 != (code *)0x0) {
    param_1[0xa7] = 0;
    param_1[0xa6] = 0;
    param_1[0xa5] = 0;
    param_1[0xa4] = 0;
    (*pcVar1)(param_1 + 0xa8);
  }
  pcVar1 = (code *)param_1[0x95];
  if (pcVar1 != (code *)0x0) {
    param_1[0x97] = 0;
    param_1[0x96] = 0;
    param_1[0x95] = 0;
    param_1[0x94] = 0;
    (*pcVar1)(param_1 + 0x98);
  }
  pcVar1 = (code *)param_1[0x85];
  if (pcVar1 != (code *)0x0) {
    param_1[0x87] = 0;
    param_1[0x86] = 0;
    param_1[0x85] = 0;
    param_1[0x84] = 0;
    (*pcVar1)(param_1 + 0x88);
  }
  FUN_01209aa8(param_1);
  return;
}


