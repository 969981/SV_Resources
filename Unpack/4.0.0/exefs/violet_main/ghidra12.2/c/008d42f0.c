/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008d42f0; name: FUN_008d42f0
 */


void FUN_008d42f0(long param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = param_1 + 0x1fU & 0xffffffffffffffe0;
  (**(code **)(**(long **)PTR_DAT_047d2530 + 0x10))(*(long **)PTR_DAT_047d2530,uVar1,param_2);
  *(ulong *)PTR_DAT_047d2538 = *(long *)PTR_DAT_047d2538 + uVar1;
  return;
}


