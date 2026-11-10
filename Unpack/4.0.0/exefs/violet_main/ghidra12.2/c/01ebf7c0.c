/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ebf7c0; name: FUN_01ebf7c0
 */


void FUN_01ebf7c0(int *param_1,long param_2,long *param_3)

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
    goto LAB_01ebf7f8;
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
    goto switchD_01ebf814_default;
  }
  param_3[2] = lVar6;
switchD_01ebf814_default:
  if (uVar5 == 2) {
    cVar3 = *(char *)(*param_3 + param_3[2]);
    param_3[2] = param_3[2] + 1;
    if (cVar3 == -0x47) {
      FUN_01ebf2ac(local_18,param_2,param_3);
      if (local_18[0] == 0) {
        cVar3 = *(char *)(*param_3 + param_3[2]);
        param_3[2] = param_3[2] + 1;
        if (cVar3 == -0x47) {
          FUN_01ebf2ac(param_1,param_2 + 4,param_3);
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
LAB_01ebf7f8:
  *param_1 = iVar4;
  return;
}


