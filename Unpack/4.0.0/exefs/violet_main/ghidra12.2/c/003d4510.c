/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003d4510; name: FUN_003d4510
 */


undefined8 FUN_003d4510(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  if (*(int *)(param_1 + 200) == 0) {
LAB_003d455c:
    uVar2 = *(undefined4 *)(*(long *)(param_1 + 0x5d0) + 0x1d8);
  }
  else {
    if ((*(byte *)(*(long *)(*(int **)(param_1 + 8) + 0x30) + 0x60) >> 3 & 1) != 0) {
      iVar1 = FUN_003a26e0(param_2,0,4);
      goto joined_r0x003d45f8;
    }
    iVar1 = **(int **)(param_1 + 8);
    uVar2 = 0;
    if ((0x303 < iVar1) && (iVar1 != 0x10000)) goto LAB_003d455c;
  }
  iVar1 = FUN_003a26e0(param_2,uVar2,4);
joined_r0x003d45f8:
  if (iVar1 == 0) {
    uVar3 = 0xf15;
  }
  else if (((((*(byte *)(*(long *)(*(int **)(param_1 + 8) + 0x30) + 0x60) >> 3 & 1) == 0) &&
            (iVar1 = **(int **)(param_1 + 8), 0x303 < iVar1)) && (iVar1 != 0x10000)) &&
          ((iVar1 = FUN_003a26e0(param_2,param_3,4), iVar1 == 0 ||
           (iVar1 = FUN_003a29e0(param_2,param_4,8,1), iVar1 == 0)))) {
    uVar3 = 0xf1d;
  }
  else {
    iVar1 = FUN_003a1e80(param_2,2);
    if (iVar1 != 0) {
      return 1;
    }
    uVar3 = 0xf25;
  }
  FUN_003c3950(param_1,0x50,0x27e,0x44,"external/openssl/ssl/statem/statem_srvr.c",uVar3);
  return 0;
}


