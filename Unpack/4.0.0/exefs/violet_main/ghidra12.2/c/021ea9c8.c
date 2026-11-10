/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021ea9c8; name: FUN_021ea9c8
 */


void FUN_021ea9c8(undefined8 *param_1)

{
  code *pcVar1;
  
  *param_1 = &PTR_FUN_045a8bc0;
  pcVar1 = (code *)param_1[0x51];
  if (pcVar1 != (code *)0x0) {
    param_1[0x53] = 0;
    param_1[0x52] = 0;
    param_1[0x51] = 0;
    param_1[0x50] = 0;
    (*pcVar1)(param_1 + 0x54);
  }
  pcVar1 = (code *)param_1[0x41];
  if (pcVar1 != (code *)0x0) {
    param_1[0x43] = 0;
    param_1[0x42] = 0;
    param_1[0x41] = 0;
    param_1[0x40] = 0;
    (*pcVar1)(param_1 + 0x44);
  }
  pcVar1 = (code *)param_1[0x31];
  if (pcVar1 != (code *)0x0) {
    param_1[0x32] = 0;
    param_1[0x33] = 0;
    param_1[0x30] = 0;
    param_1[0x31] = 0;
    (*pcVar1)(param_1 + 0x34);
  }
  pcVar1 = (code *)param_1[0x21];
  if (pcVar1 != (code *)0x0) {
    param_1[0x22] = 0;
    param_1[0x23] = 0;
    param_1[0x20] = 0;
    param_1[0x21] = 0;
    (*pcVar1)(param_1 + 0x24);
  }
  pcVar1 = (code *)param_1[0x11];
  if (pcVar1 != (code *)0x0) {
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    (*pcVar1)(param_1 + 0x14);
  }
  FUN_021eaa90(param_1);
  return;
}


