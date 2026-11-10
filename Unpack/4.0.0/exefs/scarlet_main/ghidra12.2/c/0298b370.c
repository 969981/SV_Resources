/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0298b370; name: FUN_0298b370
 */


void FUN_0298b370(undefined8 param_1,long *param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  uVar4 = FUN_01246e90();
  uVar2 = FUN_02935cf0(uVar4,param_3,param_2);
  uVar3 = (**(code **)(*param_2 + 0x98))(param_2);
  cVar1 = FUN_0298b4b4(param_1,param_3,uVar2,uVar3);
  if (cVar1 == '\x02') {
    FUN_0298b538(param_1,param_2);
    return;
  }
  if (cVar1 == '\0') {
    lVar5 = FUN_0149b698();
    FUN_0167a950(lVar5 + 0x10);
    return;
  }
  uVar4 = FUN_01243584();
  uVar2 = (**(code **)(*param_2 + 0x98))(param_2);
  FUN_0167a95c(uVar4,uVar2);
  return;
}


