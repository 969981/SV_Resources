/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 024aebf0; name: FUN_024aebf0
 */


void FUN_024aebf0(long param_1,undefined8 *param_2,int *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 local_58;
  int local_50;
  undefined8 local_48;
  
  puVar1 = (undefined8 *)(param_1 + 0x28);
  if ((undefined8 *)*param_2 == puVar1) {
    lVar4 = param_1;
  }
  else {
    lVar4 = ((undefined8 *)*param_2)[6];
  }
  uVar2 = FUN_024af2ac(param_1,lVar4,param_4);
  param_2 = (undefined8 *)*param_2;
  if (((param_2 != puVar1) && (*param_3 == *(int *)(param_2 + 4))) &&
     ((*param_3 != 1 || (*(int *)(param_2 + 5) == param_3[2])))) {
    FUN_024a8b14(param_1 + 0x20,param_2);
    (**(code **)(**(long **)(param_1 + 0x30) + 0x18))(*(long **)(param_1 + 0x30),param_2,0x38,8);
  }
  puVar3 = (undefined8 *)FUN_024a89a0(param_3,*puVar1,puVar1);
  if (((puVar1 == puVar3) || (*(int *)(puVar3 + 4) != *param_3)) ||
     ((*(int *)(puVar3 + 4) == 1 && (param_3[2] != *(int *)(puVar3 + 5))))) {
    local_58 = *(undefined8 *)param_3;
    local_50 = param_3[2];
    local_48 = uVar2;
    FUN_024af340(param_1 + 0x20,&local_58,&local_58);
  }
  return;
}


