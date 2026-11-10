/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ebf44c; name: FUN_01ebf44c
 */


void FUN_01ebf44c(undefined4 *param_1,byte *param_2,long *param_3)

{
  byte bVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  ushort uVar5;
  long lVar6;
  
  lVar3 = param_3[2];
  bVar1 = *(byte *)(*param_3 + lVar3);
  param_3[2] = lVar3 + 1;
  if (bVar1 < 0x81) {
    if (bVar1 == 0x80) {
      bVar1 = *(byte *)(*param_3 + lVar3 + 1);
      param_3[2] = lVar3 + 2;
    }
    *param_2 = bVar1;
    lVar6 = *param_3;
    lVar4 = param_3[2];
    lVar3 = lVar4 + 1;
    bVar1 = *(byte *)(lVar6 + lVar4);
    param_3[2] = lVar3;
    if (bVar1 < 0x82) {
      if (bVar1 == 0x80) {
        uVar5 = (ushort)*(byte *)(lVar6 + lVar3);
        lVar4 = lVar4 + 2;
      }
      else {
        if (bVar1 != 0x81) {
          uVar2 = 0;
          *(ushort *)(param_2 + 2) = (ushort)bVar1;
          goto LAB_01ebf4a4;
        }
        uVar5 = *(ushort *)(lVar6 + lVar3);
        lVar4 = lVar4 + 3;
      }
      uVar2 = 0;
      param_3[2] = lVar4;
      *(ushort *)(param_2 + 2) = uVar5;
      goto LAB_01ebf4a4;
    }
  }
  uVar2 = 1;
LAB_01ebf4a4:
  *param_1 = uVar2;
  return;
}


