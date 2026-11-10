/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ddac6c; name: FUN_01ddac6c
 */


void FUN_01ddac6c(long param_1,undefined4 param_2,undefined8 *param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x19a8);
  if (pcVar1 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x19b0) = 0;
    *(undefined8 *)(param_1 + 0x19b8) = 0;
    *(undefined8 *)(param_1 + 0x19a0) = 0;
    *(undefined8 *)(param_1 + 0x19a8) = 0;
    (*pcVar1)(param_1 + 0x19c0);
  }
  if ((code *)param_3[2] != (code *)0x0) {
    (*(code *)param_3[2])(param_3 + 4,param_1 + 0x19c0);
    uVar2 = param_3[3];
    *(undefined8 *)(param_1 + 0x19a8) = param_3[1];
    *(undefined8 *)(param_1 + 0x19b8) = uVar2;
    uVar2 = *param_3;
    *(undefined8 *)(param_1 + 0x19b0) = param_3[2];
    *(undefined8 *)(param_1 + 0x19a0) = uVar2;
  }
  FUN_01dda7a0(param_1,param_2);
  return;
}


