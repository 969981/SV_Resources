/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0272ae70; name: FUN_0272ae70
 */


undefined8 FUN_0272ae70(long param_1,void *param_2,long param_3,long *param_4)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  
  lVar1 = FUN_0272aeec(param_1 + 0x168,param_3);
  if (lVar1 == 0) {
    uVar2 = 0;
    if (*(long *)(*param_4 + 0xf8) != 0) {
      plVar3 = (long *)(*(long *)(*param_4 + 0xf8) + 0x30);
                    /* WARNING: Could not recover jumptable at 0x0272aee8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*plVar3 + 0x28))(plVar3,param_2,*(undefined8 *)(param_3 + 8));
      return uVar2;
    }
  }
  else {
    memcpy(param_2,(void *)(lVar1 + 0x30),0x40);
    uVar2 = 1;
  }
  return uVar2;
}


