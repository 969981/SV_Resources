/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021ebce0; name: FUN_021ebce0
 */


bool FUN_021ebce0(long *param_1,undefined8 *param_2)

{
  long lVar1;
  ulong uVar2;
  
  if (*param_1 != 0) {
    lVar1 = FUN_017ac504(*param_1 + 8);
    if (lVar1 == 0) {
      return false;
    }
    uVar2 = (**(code **)(*(long *)*param_1 + 0xc0))();
    if ((uVar2 & 1) == 0) {
      return *(long *)(lVar1 + 0xf0) == *(long *)*param_2;
    }
  }
  return false;
}


