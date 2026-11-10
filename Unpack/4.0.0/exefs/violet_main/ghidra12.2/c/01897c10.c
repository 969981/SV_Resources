/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01897c10; name: FUN_01897c10
 */


undefined8 FUN_01897c10(long *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  if (7 < (ulong)param_1[1]) {
    uVar1 = *(uint *)(*param_1 + 4);
    if ((0 < (int)uVar1) && ((ulong)uVar1 + 4 <= param_1[1] - 1U)) {
      uVar2 = FUN_028ffddc(*param_1 + 4 + (ulong)uVar1,param_1);
      return uVar2;
    }
  }
  return 0;
}


