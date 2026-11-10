/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 005c97cc; name: FUN_005c97cc
 */


void FUN_005c97cc(undefined8 param_1,ulong *param_2)

{
  byte bVar1;
  
  FUN_027c2bd0(param_2 + 0xd,param_2[0xe]);
  if ((param_2[9] & 1) == 0) {
    FUN_01cfa410(param_2 + 8);
    bVar1 = (byte)param_2[4];
  }
  else {
    (**(code **)(*(long *)param_2[0xc] + 0x18))
              ((long *)param_2[0xc],param_2[0xb],param_2[9] & 0xfffffffffffffffe,1);
    FUN_01cfa410(param_2 + 8);
    bVar1 = (byte)param_2[4];
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = (byte)*param_2;
  }
  else {
    (**(code **)(*(long *)param_2[7] + 0x18))
              ((long *)param_2[7],param_2[6],param_2[4] & 0xfffffffffffffffe,1);
    bVar1 = (byte)*param_2;
  }
  if ((bVar1 & 1) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x005c9874. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_2[3] + 0x18))
            ((long *)param_2[3],param_2[2],*param_2 & 0xfffffffffffffffe,1);
  return;
}


