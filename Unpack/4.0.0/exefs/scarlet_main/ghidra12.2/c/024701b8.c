/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 024701b8; name: FUN_024701b8
 */


undefined1  [16] FUN_024701b8(long *param_1,code *param_2,ulong param_3,undefined8 *param_4)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  auVar2 = ZEXT816(0);
  if ((*param_1 != 0) && (lVar1 = *(long *)(*param_1 + 0x10), auVar2 = ZEXT816(0), lVar1 != 0)) {
    if ((param_3 & 1) != 0) {
      param_2 = *(code **)(param_2 + *(long *)(lVar1 + ((long)param_3 >> 1) + -0x28));
    }
    auVar2 = (*param_2)(*param_4);
  }
  return auVar2;
}


