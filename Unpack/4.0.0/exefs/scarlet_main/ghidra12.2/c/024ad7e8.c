/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 024ad7e8; name: FUN_024ad7e8
 */


void FUN_024ad7e8(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  long *plVar2;
  long lVar3;
  undefined8 local_18;
  
  plVar2 = (long *)FUN_024a6ff8(param_1,&local_18,param_2);
  if (*plVar2 == 0) {
    lVar3 = (**(code **)(**(long **)(param_1 + 0x10) + 0x10))(*(long **)(param_1 + 0x10),0x38,8);
    uVar1 = *(undefined4 *)(param_3 + 1);
    *(undefined8 *)(lVar3 + 0x20) = *param_3;
    *(undefined4 *)(lVar3 + 0x28) = uVar1;
    *(undefined8 *)(lVar3 + 0x30) = param_3[2];
    FUN_024a70b8(param_1,local_18,plVar2,lVar3);
  }
  return;
}


