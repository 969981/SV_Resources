/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0298b124; name: FUN_0298b124
 */


void FUN_0298b124(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined1 auStack_68 [40];
  
  uVar1 = param_3[1];
  uVar2 = *(undefined2 *)*param_3;
  FUN_01243d7c(param_3[2]);
  lVar4 = FUN_0168003c(param_3[2]);
  if (lVar4 != 0) {
    do {
      uVar5 = FUN_01246e90(param_1);
      uVar3 = FUN_0293955c(uVar5,uVar1,lVar4,uVar2);
      FUN_01246154(auStack_68);
      FUN_0298b67c(param_1,auStack_68,uVar1,lVar4,uVar2);
      uVar6 = FUN_0298b6fc(param_1,lVar4,uVar3,auStack_68);
      if ((uVar6 & 1) != 0) {
        lVar4 = FUN_0149b698(param_1);
        FUN_0167a950(lVar4 + 0x10);
      }
      lVar4 = FUN_0168003c(param_3[2]);
    } while (lVar4 != 0);
  }
  return;
}


