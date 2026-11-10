/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003cec10; name: FUN_003cec10
 */


undefined8 FUN_003cec10(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_38 [8];
  
  iVar1 = FUN_0048c820(param_3,0);
  if (iVar1 < 0) {
    uVar4 = 0x39e;
    uVar3 = 7;
  }
  else {
    iVar2 = FUN_003a1ca0(param_2,iVar1,auStack_38,3);
    if ((iVar2 != 0) && (iVar2 = FUN_0048c820(param_3,auStack_38), iVar2 == iVar1)) {
      if (((*(byte *)(*(long *)(*(int **)(param_1 + 8) + 0x30) + 0x60) >> 3 & 1) == 0) &&
         (((iVar1 = **(int **)(param_1 + 8), 0x303 < iVar1 && (iVar1 != 0x10000)) &&
          (uVar3 = FUN_003babe0(param_1,param_2,0x1000,param_3,(long)param_4), (int)uVar3 == 0)))) {
        return uVar3;
      }
      return 1;
    }
    uVar3 = 0x44;
    uVar4 = 0x3a4;
  }
  FUN_003c3950(param_1,0x50,0x1ed,uVar3,"external/openssl/ssl/statem/statem_lib.c",uVar4);
  return 0;
}


