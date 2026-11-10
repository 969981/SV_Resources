/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001cbd44; name: FUN_001cbd44
 */


undefined8
FUN_001cbd44(long param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined8 param_5,
            undefined8 param_6)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0x2b;
  }
  else {
    if (*(code **)(param_1 + 0x38) != (code *)0x0) {
      (**(code **)(param_1 + 0x38))(*(undefined8 *)(param_1 + 0x40));
    }
    uVar1 = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(undefined8 *)(param_1 + 0xb8) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(long *)(param_1 + 0x40) = param_1;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0xa8) = 0;
    *(undefined8 *)(param_1 + 0xb0) = 0;
    if (param_3 != 0) {
      *(long *)(param_1 + 0x28) = param_3;
      *(undefined8 *)(param_1 + 0x30) = param_4;
      *(undefined8 *)(param_1 + 0x78) = param_2;
      *(undefined4 *)(param_1 + 0x18) = 3;
      *(undefined8 *)(param_1 + 0x38) = param_5;
      *(undefined8 *)(param_1 + 0x40) = param_6;
    }
  }
  return uVar1;
}


