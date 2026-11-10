/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008ad43c; name: FUN_008ad43c
 */


void FUN_008ad43c(undefined8 param_1,long *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar2 = FUN_008a6694(param_1,6);
  lVar3 = FUN_00d36bcc(param_1,0x12);
  if (lVar3 != 0) {
    lVar4 = FUN_0113ca0c(param_1);
    uVar5 = *(undefined8 *)(lVar4 + 0x20);
    lVar4 = FUN_0113ca0c(param_1);
    uVar5 = FUN_008942ac(uVar5,*(undefined2 *)(lVar4 + 0x4a));
    uVar1 = FUN_008f1cbc(uVar5,4,3,"uProceduralShape");
    *(undefined4 *)(lVar3 + 4) = uVar1;
    if (param_2 != (long *)0x0) {
      lVar3 = FUN_008b4d30(param_3,0x10,0x120);
      *param_2 = *param_2 + lVar3;
      if ((*(byte *)(lVar2 + 4) >> 4 & 1) != 0) {
        lVar2 = FUN_008b4d30(param_3,0x10,0x230);
        *param_2 = *param_2 + lVar2;
        lVar2 = FUN_008b4d30(param_3,0x10,0x120);
        *param_2 = *param_2 + lVar2;
      }
    }
  }
  return;
}


