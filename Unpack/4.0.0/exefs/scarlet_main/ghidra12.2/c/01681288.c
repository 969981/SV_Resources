/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01681288; name: FUN_01681288
 */


void FUN_01681288(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  char local_24 [4];
  
  if (*(short *)*param_3 == 0x11d) {
    FUN_0298b7ac(param_1,param_3[1],param_3[2]);
    return;
  }
  if (*(short *)*param_3 == 0xa4) {
    uVar3 = FUN_0298b7e4(param_1,param_3[1]);
    if ((uVar3 & 1) != 0) {
      lVar4 = FUN_0149b698(param_1);
      FUN_0167a950(lVar4 + 0x10);
      return;
    }
  }
  else {
    uVar2 = FUN_01246e90(param_1);
    uVar3 = FUN_01ab3e28(uVar2,*param_3,param_3[1],param_3[2],local_24);
    if ((uVar3 & 1) == 0) {
      if (local_24[0] != '\0') {
        lVar4 = FUN_0149b698(param_1);
        if (*(char *)(lVar4 + 0xc0) == '\0') {
          uVar2 = FUN_01243584(param_1);
          uVar1 = (**(code **)(*(long *)param_3[1] + 0x98))();
          FUN_0167a95c(uVar2,uVar1);
        }
      }
    }
    else {
      lVar4 = FUN_0149b698(param_1);
      FUN_0167a950(lVar4 + 0x10);
    }
  }
  return;
}


