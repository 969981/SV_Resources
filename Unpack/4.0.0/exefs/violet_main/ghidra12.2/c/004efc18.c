/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004efc18; name: FUN_004efc18
 */


long FUN_004efc18(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_2 + (ulong)*(uint *)(param_1 + 0x24));
  if ((uVar2 & 1) == 0) {
    lVar1 = FUN_00514564();
    return lVar1;
  }
  return (uVar2 & 0xfffffffffffffffe) + 8;
}


