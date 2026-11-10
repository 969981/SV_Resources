/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f6e5a0; name: FUN_00f6e5a0
 */


void FUN_00f6e5a0(uint *param_1,long param_2,long *param_3)

{
  long lVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  uint local_18 [2];
  
  lVar7 = *param_3;
  lVar6 = param_3[2];
  lVar1 = lVar6 + 1;
  bVar2 = *(byte *)(lVar7 + lVar6);
  uVar5 = (ulong)bVar2;
  param_3[2] = lVar1;
  if (0x83 < uVar5) {
    uVar4 = 1;
    goto LAB_00f6e600;
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
    goto switchD_00f6e5e8_default;
  }
  param_3[2] = lVar6;
switchD_00f6e5e8_default:
  if (uVar5 == 2) {
    cVar3 = *(char *)(*param_3 + param_3[2]);
    param_3[2] = param_3[2] + 1;
    if (cVar3 == -0x47) {
      FUN_00f6e6d8(local_18);
      if (local_18[0] == 0) {
        bVar2 = *(byte *)(*param_3 + param_3[2]);
        param_3[2] = param_3[2] + 1;
        if (1 >= bVar2) {
          *(bool *)(param_2 + 2) = bVar2 != 0;
        }
        *param_1 = (uint)(1 < bVar2);
        return;
      }
    }
    else {
      local_18[0] = 1;
    }
    *param_1 = local_18[0];
    return;
  }
  uVar4 = 5;
LAB_00f6e600:
  *param_1 = uVar4;
  return;
}


