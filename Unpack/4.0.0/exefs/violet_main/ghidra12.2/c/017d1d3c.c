/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017d1d3c; name: FUN_017d1d3c
 */


void FUN_017d1d3c(long param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x5b8);
  if (pcVar1 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x5c0) = 0;
    *(undefined8 *)(param_1 + 0x5c8) = 0;
    *(undefined8 *)(param_1 + 0x5b0) = 0;
    *(undefined8 *)(param_1 + 0x5b8) = 0;
    (*pcVar1)(param_1 + 0x5d0);
  }
  if ((code *)param_2[2] != (code *)0x0) {
    (*(code *)param_2[2])(param_2 + 4,param_1 + 0x5d0);
    uVar2 = param_2[3];
    *(undefined8 *)(param_1 + 0x5b8) = param_2[1];
    *(undefined8 *)(param_1 + 0x5c8) = uVar2;
    uVar2 = *param_2;
    *(undefined8 *)(param_1 + 0x5c0) = param_2[2];
    *(undefined8 *)(param_1 + 0x5b0) = uVar2;
  }
  nn::oe::EnterExitRequestHandlingSection();
  return;
}


