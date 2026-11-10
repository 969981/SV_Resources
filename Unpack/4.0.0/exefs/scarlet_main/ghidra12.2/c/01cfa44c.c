/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01cfa44c; name: FUN_01cfa44c
 */


void FUN_01cfa44c(long param_1,undefined8 *param_2)

{
  if (param_2 == (undefined8 *)0x0) {
    return;
  }
  FUN_01cfa44c(param_1,*param_2);
  FUN_01cfa44c(param_1,param_2[1]);
  if ((*(byte *)(param_2 + 8) & 1) != 0) {
    (**(code **)(*(long *)param_2[0xb] + 0x18))
              ((long *)param_2[0xb],param_2[10],param_2[8] & 0xfffffffffffffffe,1);
  }
  if ((*(byte *)(param_2 + 4) & 1) != 0) {
    (**(code **)(*(long *)param_2[7] + 0x18))
              ((long *)param_2[7],param_2[6],param_2[4] & 0xfffffffffffffffe,1);
  }
                    /* WARNING: Could not recover jumptable at 0x01cfa4e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x18))(*(long **)(param_1 + 0x10),param_2,0x60,8);
  return;
}


