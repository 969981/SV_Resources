/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 023337c4; name: FUN_023337c4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_023337c4(long param_1,code *param_2,ulong param_3,undefined4 *param_4)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    uVar1 = uRam0000000000000001;
  }
  else {
    if ((param_3 & 1) != 0) {
      param_2 = *(code **)(param_2 + *(long *)(param_1 + ((long)param_3 >> 1)));
    }
    uVar1 = (*param_2)(*param_4);
  }
  return uVar1;
}


