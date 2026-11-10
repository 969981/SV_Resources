/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c90574; name: FUN_00c90574
 */


long FUN_00c90574(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  
  if (*(long *)(param_1 + 0xb0) != 0) {
    uVar2 = 0;
    do {
      uVar1 = FUN_0225a0d4(param_1,uVar2,0,param_2,param_3,param_4);
      if ((uVar1 & 1) == 0) break;
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(ulong *)(param_1 + 0xb0));
  }
  return param_1 + 0xb8;
}


