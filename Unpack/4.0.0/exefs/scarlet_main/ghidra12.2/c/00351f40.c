/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00351f40; name: FUN_00351f40
 */


undefined8 FUN_00351f40(ulong param_1,uint param_2,long *param_3)

{
  ulong uVar1;
  long lVar2;
  
  if (param_1 < 5) {
    if (param_2 != 3) {
      return 0;
    }
    lVar2 = (long)*(int *)(&DAT_04496148 + param_1 * 0x18);
  }
  else {
    uVar1 = (ulong)*(byte *)(param_1 + param_2 + 0x10);
    if (uVar1 == 0xff) {
      return 0;
    }
    if (param_3 == (long *)0x0) {
      return 1;
    }
    lVar2 = *(long *)(param_1 + uVar1 * 8 + 0x38);
  }
  *param_3 = lVar2;
  return 1;
}


