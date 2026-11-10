/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0167c508; name: FUN_0167c508
 */


void FUN_0167c508(long param_1,undefined1 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  undefined1 local_38 [4];
  char local_34 [4];
  char local_18 [4];
  char local_14 [4];
  
  *param_2 = 0;
  local_40 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_60 = 0;
  uStack_58 = 0;
  FUN_0167c844(*(undefined8 *)(param_1 + 0x38),*param_3,param_3[1],param_3[2],param_3[3],
               *(undefined2 *)(param_3 + 4),local_14,local_18,local_34,local_38,&local_60);
  if (local_14[0] != '\0') {
    *param_2 = 1;
    uVar2 = FUN_018ce3ac(&local_60);
    if ((uVar2 & 1) == 0) {
      if ((local_34[0] == '\0' && local_18[0] == '\0') && (*(char *)((long)param_3 + 0x22) != '\0'))
      {
        uVar1 = (**(code **)(*(long *)param_3[2] + 0x98))();
        FUN_0297ec30(param_1,uVar1,local_38[0]);
      }
    }
    else if (*(char *)((long)param_3 + 0x22) != '\0') {
      uVar1 = (**(code **)(*(long *)param_3[2] + 0x98))();
      FUN_0297ebcc(param_1,uVar1,local_38[0],&local_60);
      lVar3 = FUN_0149b698(param_1);
      *(char *)(lVar3 + 0xc0) = local_18[0];
    }
  }
  return;
}


