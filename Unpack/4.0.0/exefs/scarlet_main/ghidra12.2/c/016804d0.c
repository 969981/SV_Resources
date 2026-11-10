/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 016804d0; name: FUN_016804d0
 */


void FUN_016804d0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar2 = FUN_0297edcc(param_1,*param_3,param_3[1],param_3[2]);
  if ((uVar2 & 1) == 0) {
    lVar3 = FUN_0149b698(param_1);
    if (*(char *)(lVar3 + 0xc0) == '\0') {
      lVar3 = FUN_0149b698(param_1);
      if (*(char *)(lVar3 + 0xc1) != '\0') {
        uVar4 = FUN_01243584(param_1);
        uVar1 = (**(code **)(*(long *)param_3[1] + 0x98))();
        FUN_0297ee68(uVar4,uVar1,0x237);
        return;
      }
    }
  }
  return;
}


