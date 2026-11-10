/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003cc9a0; name: FUN_003cc9a0
 */


undefined8 FUN_003cc9a0(int *param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_2 + 8);
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 2) + 0xc0) + 0x60) >> 3 & 1) == 0) {
    if (lVar5 != 0) {
      uVar2 = 0x32;
      uVar3 = 0x67;
      uVar4 = 0x2f8;
      goto LAB_003cca14;
    }
  }
  else if (((lVar5 != 2) && (*param_1 == 0x100)) || ((lVar5 != 0 && (*param_1 != 0x100)))) {
    uVar2 = 0x32;
    uVar3 = 0x67;
    uVar4 = 0x2f1;
    goto LAB_003cca14;
  }
  if (*(long *)(*(long *)(param_1 + 0x2a) + 0x238) == 0) {
    FUN_003c3950(param_1,10,0x16b,0x85,"external/openssl/ssl/statem/statem_lib.c",0x300);
    return 0;
  }
  *(undefined4 *)(*(long *)(param_1 + 0x2a) + 0xf0) = 1;
  iVar1 = FUN_003ad0b0(param_1);
  if (iVar1 != 0) {
    if (((*(byte *)(*(long *)(*(long *)(param_1 + 2) + 0xc0) + 0x60) >> 3 & 1) != 0) &&
       (FUN_003a4290(param_1,1), *param_1 == 0x100)) {
      *(short *)(*(long *)(param_1 + 0x2c) + 0x110) =
           *(short *)(*(long *)(param_1 + 0x2c) + 0x110) + 1;
    }
    return 3;
  }
  uVar2 = 0x50;
  uVar3 = 0x44;
  uVar4 = 0x307;
LAB_003cca14:
  FUN_003c3950(param_1,uVar2,0x16b,uVar3,"external/openssl/ssl/statem/statem_lib.c",uVar4);
  return 0;
}


