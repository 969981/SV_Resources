/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01971bc8; name: FUN_01971bc8
 */


void FUN_01971bc8(int *param_1,long param_2,long *param_3)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int local_18 [2];
  
  lVar6 = *param_3;
  lVar5 = param_3[2];
  lVar4 = lVar5 + 1;
  bVar1 = *(byte *)(lVar6 + lVar5);
  uVar3 = (ulong)bVar1;
  param_3[2] = lVar4;
  if (0x83 < uVar3) {
    iVar2 = 1;
    goto LAB_01971c28;
  }
  switch(bVar1) {
  case 0x80:
    uVar3 = (ulong)*(byte *)(lVar6 + lVar4);
    lVar5 = lVar5 + 2;
    break;
  case 0x81:
    uVar3 = (ulong)*(ushort *)(lVar6 + lVar4);
    lVar5 = lVar5 + 3;
    break;
  case 0x82:
    uVar3 = (ulong)*(uint *)(lVar6 + lVar4);
    lVar5 = lVar5 + 5;
    break;
  case 0x83:
    uVar3 = *(ulong *)(lVar6 + lVar4);
    lVar5 = lVar5 + 9;
    break;
  default:
    goto switchD_01971c10_default;
  }
  param_3[2] = lVar5;
switchD_01971c10_default:
  if (uVar3 == 5) {
    FUN_01971ce8(local_18);
    if (local_18[0] == 0) {
      lVar4 = param_3[2];
      bVar1 = *(byte *)(*param_3 + lVar4);
      param_3[2] = lVar4 + 1;
      if (bVar1 < 0x81) {
        if (bVar1 == 0x80) {
          bVar1 = *(byte *)(*param_3 + lVar4 + 1);
          param_3[2] = lVar4 + 2;
        }
        *(byte *)(param_2 + 0x98) = bVar1;
        *param_1 = 0;
      }
      else {
        *param_1 = 1;
      }
    }
    else {
      *param_1 = local_18[0];
    }
    return;
  }
  iVar2 = 5;
LAB_01971c28:
  *param_1 = iVar2;
  return;
}


