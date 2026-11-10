/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01578440; name: FUN_01578440
 */


undefined8 FUN_01578440(long param_1,long param_2)

{
  short sVar1;
  undefined8 uVar2;
  
  *(undefined2 *)(param_1 + 8) = 0;
  uVar2 = 1;
  if ((param_2 != 0) && (*(long *)(param_1 + 0x10) != 0)) {
    sVar1 = FUN_0157854c(*(long *)(param_1 + 0x10));
    if ((sVar1 == 0) && (1 < **(uint **)(param_1 + 0x10))) {
      uVar2 = 0x16;
    }
    else {
      *(short *)(param_1 + 8) = sVar1;
      uVar2 = 1;
    }
  }
  return uVar2;
}


