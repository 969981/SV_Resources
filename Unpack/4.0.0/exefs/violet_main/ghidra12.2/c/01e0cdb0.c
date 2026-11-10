/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e0cdb0; name: FUN_01e0cdb0
 */


void FUN_01e0cdb0(long param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x138);
  if (pcVar1 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x140) = 0;
    *(undefined8 *)(param_1 + 0x148) = 0;
    *(undefined8 *)(param_1 + 0x130) = 0;
    *(undefined8 *)(param_1 + 0x138) = 0;
    (*pcVar1)(param_1 + 0x150);
  }
  if ((code *)param_2[2] != (code *)0x0) {
    (*(code *)param_2[2])(param_2 + 4,param_1 + 0x150);
    uVar2 = param_2[3];
    *(undefined8 *)(param_1 + 0x138) = param_2[1];
    *(undefined8 *)(param_1 + 0x148) = uVar2;
    uVar2 = *param_2;
    *(undefined8 *)(param_1 + 0x140) = param_2[2];
    *(undefined8 *)(param_1 + 0x130) = uVar2;
  }
  return;
}


