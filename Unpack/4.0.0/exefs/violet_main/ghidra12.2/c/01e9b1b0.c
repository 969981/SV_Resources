/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e9b1b0; name: FUN_01e9b1b0
 */


void FUN_01e9b1b0(long param_1)

{
  code *pcVar1;
  undefined8 local_30;
  undefined8 uStack_28;
  
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  local_30 = 0;
  uStack_28 = 0;
  FUN_01e9a1bc(param_1 + 0x40,&local_30);
  FUN_01e9a4dc(&local_30);
  memset((void *)(param_1 + 0x50),0,0x108);
  pcVar1 = *(code **)(param_1 + 0x168);
  if (pcVar1 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x170) = 0;
    *(undefined8 *)(param_1 + 0x178) = 0;
    *(undefined8 *)(param_1 + 0x160) = 0;
    *(undefined8 *)(param_1 + 0x168) = 0;
    (*pcVar1)(param_1 + 0x180);
  }
  return;
}


