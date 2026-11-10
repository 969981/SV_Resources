/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0078bc34; name: FUN_0078bc34
 */


void FUN_0078bc34(long param_1,int param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  int local_30 [4];
  
  if (*PTR_DAT_047d08d8 != '\0') {
    uVar2 = FUN_0078c5f4();
    puVar1 = PTR_DAT_047d0868;
    *(undefined4 *)(PTR_DAT_047d0868 + 0xac) = uVar2;
    uVar2 = FUN_0078c618();
    *(undefined4 *)(puVar1 + 0xb0) = uVar2;
    lVar3 = FUN_0078c684();
    if (lVar3 != 0) {
      FUN_0078c684();
      FUN_0078c6a8();
    }
    FUN_0078c2d8();
    FUN_0078c624();
    lVar3 = param_1 + 0x20;
    uVar4 = FUN_0078cdf4(lVar3);
    if (((uVar4 & 1) == 0) && (uVar4 = FUN_0078a324(param_1 + 0x588), (uVar4 & 1) != 0)) {
      *(int *)(param_1 + 0x1c) = param_2;
      if (param_2 == 0) {
        *(undefined1 *)(param_1 + 0x580) = 1;
      }
      FUN_0078c750(local_30,lVar3,param_1,param_2);
      if (local_30[0] == 0) {
        FUN_0078cd58(lVar3,1);
        return;
      }
    }
  }
  return;
}


