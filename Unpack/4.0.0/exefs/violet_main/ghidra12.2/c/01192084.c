/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01192084; name: FUN_01192084
 */


void FUN_01192084(long param_1)

{
  code *pcVar1;
  
  *(undefined4 *)(param_1 + 0x330) = 2;
  pcVar1 = *(code **)(param_1 + 0x238);
  if (pcVar1 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x248) = 0;
    *(undefined8 *)(param_1 + 0x240) = 0;
    *(undefined8 *)(param_1 + 0x238) = 0;
    *(undefined8 *)(param_1 + 0x230) = 0;
    (*pcVar1)(param_1 + 0x250);
  }
  pcVar1 = *(code **)(param_1 + 0x2b8);
  if (pcVar1 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x2c8) = 0;
    *(undefined8 *)(param_1 + 0x2c0) = 0;
    *(undefined8 *)(param_1 + 0x2b8) = 0;
    *(undefined8 *)(param_1 + 0x2b0) = 0;
    (*pcVar1)(param_1 + 0x2d0);
  }
  FUN_011920ec(param_1);
  return;
}


