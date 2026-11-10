/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 026f2080; name: FUN_026f2080
 */


bool FUN_026f2080(long *param_1,undefined8 *param_2)

{
  short sVar1;
  long lVar2;
  ulong uVar3;
  
  if (*param_1 != 0) {
    lVar2 = FUN_026e4c70(*param_1 + 8);
    if (lVar2 == 0) {
      return false;
    }
    uVar3 = (**(code **)(*(long *)*param_1 + 0xc0))();
    if ((uVar3 & 1) == 0) {
      sVar1 = FUN_026f20f4(lVar2);
      return *(short *)*param_2 == sVar1;
    }
  }
  return false;
}


