/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02102e50; name: FUN_02102e50
 */


uint FUN_02102e50(long *param_1)

{
  uint uVar1;
  ulong uVar2;
  
  if (((param_1 == (long *)0x0) || (uVar2 = (**(code **)(*param_1 + 0x200))(), (uVar2 & 1) != 0)) ||
     (uVar2 = (**(code **)(*param_1 + 0x228))(param_1,0), (uVar2 & 1) != 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*param_1 + 0x220))(param_1,3);
    uVar1 = ~uVar1 & 1;
  }
  return uVar1;
}


