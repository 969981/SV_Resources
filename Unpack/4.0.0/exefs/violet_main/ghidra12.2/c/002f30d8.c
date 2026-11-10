/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002f30d8; name: FUN_002f30d8
 */


void FUN_002f30d8(long param_1,undefined8 param_2,long *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0038ccb0(param_2);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  if (param_3 == (long *)0x0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else {
    if ((*param_3 == 0) || (param_3[1] == 0)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar1 = FUN_0038c7b0(0x10);
    *(undefined8 *)(param_1 + 0x18) = uVar1;
    uVar1 = FUN_0038ccb0(param_3[1]);
    *(undefined8 *)(*(long *)(param_1 + 0x18) + 8) = uVar1;
    uVar1 = FUN_0038ccb0(*param_3);
    **(undefined8 **)(param_1 + 0x18) = uVar1;
  }
  if (param_4 == (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    return;
  }
  uVar2 = param_4[1];
  uVar1 = *param_4;
  *(undefined8 *)(param_1 + 0x38) = param_4[2];
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  return;
}


