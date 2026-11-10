/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0212bfcc; name: FUN_0212bfcc
 */


void FUN_0212bfcc(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  long *plVar2;
  
  if (param_2 == (undefined8 *)0x0) {
    return;
  }
  FUN_0212bfcc(param_1,*param_2);
  FUN_0212bfcc(param_1,param_2[1]);
  if ((long *)param_2[0xb] != (long *)0x0) {
    (**(code **)(*(long *)param_2[0xb] + 0x20))();
  }
  if ((long *)param_2[7] != (long *)0x0) {
    (**(code **)(*(long *)param_2[7] + 0x20))();
  }
  plVar2 = *(long **)(param_1 + 0x10);
  uVar1 = FUN_00c4e564(plVar2);
  if ((uVar1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0212c038. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x18))(plVar2,param_2,0x60,8);
    return;
  }
  FUN_00c48fe8(plVar2,param_2,0x60,8);
  return;
}


