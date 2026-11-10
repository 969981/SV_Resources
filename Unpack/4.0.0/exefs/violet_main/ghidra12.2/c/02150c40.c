/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02150c40; name: FUN_02150c40
 */


void FUN_02150c40(undefined8 *param_1)

{
  code *pcVar1;
  
  *param_1 = &PTR_FUN_04597600;
  param_1[0x27] = &PTR_LAB_04597810;
  pcVar1 = (code *)param_1[0xbb];
  param_1[4] = &PTR_LAB_04597768;
  param_1[5] = &DAT_045977b8;
  if (pcVar1 != (code *)0x0) {
    param_1[0xbd] = 0;
    param_1[0xbc] = 0;
    param_1[0xbb] = 0;
    param_1[0xba] = 0;
    (*pcVar1)(param_1 + 0xbe);
  }
  FUN_017a05c0(param_1);
  return;
}


