/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01a51cc0; name: FUN_01a51cc0
 */


undefined4 FUN_01a51cc0(long *param_1,code *param_2,ulong param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (*param_1 == 0) {
    uVar2 = 0xc4700000;
  }
  else {
    if ((param_3 & 1) != 0) {
      param_2 = *(code **)(param_2 + *(long *)(*param_1 + ((long)param_3 >> 1)));
    }
    puVar1 = (undefined4 *)(*param_2)();
    uVar2 = *puVar1;
  }
  return uVar2;
}


