/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ec65a0; name: FUN_01ec65a0
 */


void FUN_01ec65a0(int *param_1,long param_2,long *param_3)

{
  long lVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  int local_18 [2];
  
  lVar7 = *param_3;
  lVar6 = param_3[2];
  lVar1 = lVar6 + 1;
  bVar2 = *(byte *)(lVar7 + lVar6);
  uVar5 = (ulong)bVar2;
  param_3[2] = lVar1;
  if (0x83 < uVar5) {
    iVar4 = 1;
    goto LAB_01ec65d8;
  }
  switch(bVar2) {
  case 0x80:
    uVar5 = (ulong)*(byte *)(lVar7 + lVar1);
    lVar6 = lVar6 + 2;
    break;
  case 0x81:
    uVar5 = (ulong)*(ushort *)(lVar7 + lVar1);
    lVar6 = lVar6 + 3;
    break;
  case 0x82:
    uVar5 = (ulong)*(uint *)(lVar7 + lVar1);
    lVar6 = lVar6 + 5;
    break;
  case 0x83:
    uVar5 = *(ulong *)(lVar7 + lVar1);
    lVar6 = lVar6 + 9;
    break;
  default:
    goto switchD_01ec65f4_default;
  }
  param_3[2] = lVar6;
switchD_01ec65f4_default:
  if (uVar5 == 2) {
    cVar3 = *(char *)(*param_3 + param_3[2]);
    param_3[2] = param_3[2] + 1;
    if (cVar3 == -0x47) {
      FUN_01ec66d8(local_18);
      if (local_18[0] == 0) {
        cVar3 = *(char *)(*param_3 + param_3[2]);
        param_3[2] = param_3[2] + 1;
        if (cVar3 == -0x47) {
          FUN_01ec66d8(param_1,param_2 + 8,param_3);
          return;
        }
        *param_1 = 1;
        return;
      }
    }
    else {
      local_18[0] = 1;
    }
    *param_1 = local_18[0];
    return;
  }
  iVar4 = 5;
LAB_01ec65d8:
  *param_1 = iVar4;
  return;
}


