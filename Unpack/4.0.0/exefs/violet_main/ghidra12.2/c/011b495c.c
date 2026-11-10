/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011b495c; name: FUN_011b495c
 */


undefined8 FUN_011b495c(long param_1)

{
  undefined8 uVar1;
  char *in_x4;
  undefined8 *in_x5;
  undefined4 uVar2;
  
  if ((*in_x4 == '\0') && (*(char *)(param_1 + 0x1c) != '\0')) {
    *in_x5 = 0;
    in_x5[1] = 0;
    uVar2 = *(undefined4 *)(param_1 + 0x18);
    uVar1 = 1;
    in_x5[3] = 0;
    *(undefined4 *)(in_x5 + 2) = 0;
  }
  else {
    *in_x4 = '\x01';
    uVar1 = FUN_011b49d0(param_1 + 0x10);
    if ((int)uVar1 != 1) {
      return uVar1;
    }
    in_x5[1] = 0;
    uVar2 = *(undefined4 *)(param_1 + 0x18);
  }
  *(undefined4 *)(in_x5 + 5) = uVar2;
  return uVar1;
}


