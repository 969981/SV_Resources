/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004ee0fc; name: FUN_004ee0fc
 */


undefined8 FUN_004ee0fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long *plVar3;
  
  puVar1 = (undefined8 *)FUN_00521488();
  if ((puVar1 == (undefined8 *)0x0) || ((*(byte *)((long)puVar1 + 10) & 1) != 0)) {
    uVar2 = (**(code **)(*param_4 + 0x10))(param_4,param_3);
    return uVar2;
  }
  if ((*(byte *)((long)puVar1 + 10) >> 4 & 1) == 0) {
    return *puVar1;
  }
  plVar3 = (long *)*puVar1;
  uVar2 = (**(code **)(*param_4 + 0x10))(param_4,param_3);
                    /* WARNING: Could not recover jumptable at 0x004ee180. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*plVar3 + 0x18))(plVar3,uVar2);
  return uVar2;
}


