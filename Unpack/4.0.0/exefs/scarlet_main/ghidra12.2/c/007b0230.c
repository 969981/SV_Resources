/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007b0230; name: FUN_007b0230
 */


uint FUN_007b0230(long param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  long lVar5;
  
  uVar1 = FUN_0079ceb8();
  if ((*(char *)(param_1 + 0x249) == '\0') &&
     ((*(int *)(param_1 + 0x1c0) != 2 || (*(char *)(param_1 + 0x24a) != '\0')))) {
    lVar5 = *(long *)(param_1 + 0x128);
    iVar2 = FUN_007b0128(lVar5,param_2);
    if (iVar2 != -1) {
      iVar2 = *(int *)(lVar5 + (long)iVar2 * 0x40 + 0x108);
      if (*(int *)(param_1 + 0x1260) == iVar2) {
        lVar5 = 0;
        puVar4 = (undefined4 *)(param_1 + 0x1260);
      }
      else if (*(int *)(param_1 + 0x126c) == iVar2) {
        puVar4 = (undefined4 *)(param_1 + 0x126c);
        lVar5 = 1;
      }
      else if (*(int *)(param_1 + 0x1278) == iVar2) {
        puVar4 = (undefined4 *)(param_1 + 0x1278);
        lVar5 = 2;
      }
      else if (*(int *)(param_1 + 0x1284) == iVar2) {
        puVar4 = (undefined4 *)(param_1 + 0x1284);
        lVar5 = 3;
      }
      else if (*(int *)(param_1 + 0x1290) == iVar2) {
        puVar4 = (undefined4 *)(param_1 + 0x1290);
        lVar5 = 4;
      }
      else if (*(int *)(param_1 + 0x129c) == iVar2) {
        puVar4 = (undefined4 *)(param_1 + 0x129c);
        lVar5 = 5;
      }
      else if (*(int *)(param_1 + 0x12a8) == iVar2) {
        puVar4 = (undefined4 *)(param_1 + 0x12a8);
        lVar5 = 6;
      }
      else {
        if (*(int *)(param_1 + 0x12b4) != iVar2) goto LAB_007b0390;
        puVar4 = (undefined4 *)(param_1 + 0x12b4);
        lVar5 = 7;
      }
      uVar3 = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
      param_1 = param_1 + lVar5 * 0xc;
      *puVar4 = uVar3;
      *(undefined2 *)(param_1 + 0x1268) = 0;
      *(undefined4 *)(param_1 + 0x1264) = 0;
    }
  }
LAB_007b0390:
  return uVar1 & 1;
}


