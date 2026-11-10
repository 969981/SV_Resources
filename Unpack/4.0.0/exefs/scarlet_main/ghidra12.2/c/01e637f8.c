/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e637f8; name: FUN_01e637f8
 */


void FUN_01e637f8(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  byte bVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  bVar2 = *(byte *)(*param_3 + param_3[2]);
  param_3[2] = param_3[2] + 1;
  if (bVar2 < 2) {
    *(bool *)param_2 = bVar2 != 0;
    lVar5 = *param_3;
    lVar4 = param_3[2];
    lVar1 = lVar4 + 1;
    bVar2 = *(byte *)(lVar5 + lVar4);
    param_3[2] = lVar1;
    if ((ulong)bVar2 < 0x84) {
      switch(bVar2) {
      case 0x80:
        uVar6 = (ulong)*(byte *)(lVar5 + lVar1);
        lVar4 = lVar4 + 2;
        break;
      case 0x81:
        uVar6 = (ulong)*(ushort *)(lVar5 + lVar1);
        lVar4 = lVar4 + 3;
        break;
      case 0x82:
        uVar6 = (ulong)*(uint *)(lVar5 + lVar1);
        lVar4 = lVar4 + 5;
        break;
      case 0x83:
        uVar6 = *(ulong *)(lVar5 + lVar1);
        lVar4 = lVar4 + 9;
        break;
      default:
        uVar3 = 0;
        *(ulong *)(param_2 + 8) = (ulong)bVar2;
        goto LAB_01e63850;
      }
      uVar3 = 0;
      param_3[2] = lVar4;
      *(ulong *)(param_2 + 8) = uVar6;
      goto LAB_01e63850;
    }
  }
  uVar3 = 1;
LAB_01e63850:
  *param_1 = uVar3;
  return;
}


