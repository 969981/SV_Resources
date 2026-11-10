/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0298b048; name: FUN_0298b048
 */


void FUN_0298b048(undefined8 param_1,undefined8 param_2,undefined2 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  char local_38 [4];
  char local_34 [4];
  
  uVar3 = FUN_01246e90();
  uVar1 = FUN_02935674(uVar3,*(undefined8 *)(param_3 + 4),*param_3);
  FUN_01243d7c(*(undefined8 *)(param_3 + 8));
  lVar4 = FUN_0168003c(*(undefined8 *)(param_3 + 8));
  if (lVar4 != 0) {
    do {
      FUN_0298b5dc(param_1,local_38,local_34,*(undefined8 *)(param_3 + 4),lVar4,uVar1);
      if (local_38[0] == '\0') {
        if (local_34[0] == '\0') {
          uVar3 = FUN_01243584(param_1);
          uVar2 = (**(code **)(**(long **)(param_3 + 4) + 0x98))();
          FUN_0167a95c(uVar3,uVar2);
        }
      }
      else {
        lVar4 = FUN_0149b698(param_1);
        FUN_0167a950(lVar4 + 0x10);
      }
      lVar4 = FUN_0168003c(*(undefined8 *)(param_3 + 8));
    } while (lVar4 != 0);
  }
  return;
}


