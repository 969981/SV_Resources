/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00305590; name: FUN_00305590
 */


undefined8 FUN_00305590(long param_1,long param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  uVar1 = 0;
  if ((((param_1 != 0) && (param_2 != 0)) && (param_3 != (undefined8 *)0x0)) &&
     (lVar2 = FUN_0038ace0(param_1,PTR_PTR_047cca38,param_2,&local_18), uVar1 = 0, lVar2 != 0)) {
    FUN_003676d0(&local_38,lVar2,local_18);
    uVar1 = 1;
    param_3[1] = uStack_30;
    *param_3 = local_38;
    param_3[3] = uStack_20;
    param_3[2] = local_28;
  }
  return uVar1;
}


