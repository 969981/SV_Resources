/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0167a874; name: FUN_0167a874
 */


void FUN_0167a874(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  bool bVar5;
  
  FUN_01243d7c(param_3[3]);
  lVar2 = FUN_0168003c(param_3[3]);
  if (lVar2 != 0) {
    bVar5 = false;
    do {
      while (uVar3 = FUN_0167a974(param_1,*param_3,param_3[1],param_3[2],lVar2), (uVar3 & 1) != 0) {
        lVar2 = FUN_0149b698(param_1);
        FUN_0167a950(lVar2 + 0x10);
        lVar2 = FUN_0168003c(param_3[3]);
        bVar5 = true;
        if (lVar2 == 0) {
          return;
        }
      }
      lVar2 = FUN_0168003c(param_3[3]);
    } while (lVar2 != 0);
    if (bVar5) {
      return;
    }
  }
  lVar2 = FUN_0149b698(param_1);
  if (*(char *)(lVar2 + 0xc0) == '\0') {
    uVar4 = FUN_01243584(param_1);
    uVar1 = (**(code **)(*(long *)param_3[2] + 0x98))();
    FUN_0167a95c(uVar4,uVar1);
    return;
  }
  return;
}


