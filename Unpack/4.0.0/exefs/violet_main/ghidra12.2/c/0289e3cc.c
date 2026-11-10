/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0289e3cc; name: FUN_0289e3cc
 */


void FUN_0289e3cc(int *param_1,long param_2,long *param_3)

{
  long lVar1;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  int local_18 [2];
  
  lVar5 = *param_3;
  lVar4 = param_3[2];
  lVar1 = lVar4 + 1;
  bVar2 = *(byte *)(lVar5 + lVar4);
  uVar3 = (ulong)bVar2;
  param_3[2] = lVar1;
  if (0x83 < uVar3) {
    local_18[0] = 1;
    goto LAB_0289e47c;
  }
  switch(bVar2) {
  case 0x80:
    uVar3 = (ulong)*(byte *)(lVar5 + lVar1);
    lVar4 = lVar4 + 2;
    break;
  case 0x81:
    uVar3 = (ulong)*(ushort *)(lVar5 + lVar1);
    lVar4 = lVar4 + 3;
    break;
  case 0x82:
    uVar3 = (ulong)*(uint *)(lVar5 + lVar1);
    lVar4 = lVar4 + 5;
    break;
  case 0x83:
    uVar3 = *(ulong *)(lVar5 + lVar1);
    lVar4 = lVar4 + 9;
    break;
  default:
    goto switchD_0289e4a4_default;
  }
  param_3[2] = lVar4;
switchD_0289e4a4_default:
  if (uVar3 == 4) {
    FUN_0192eda0(local_18,param_2,param_3);
    if (((local_18[0] == 0) && (FUN_0192eda0(local_18,param_2 + 8,param_3), local_18[0] == 0)) &&
       (FUN_0192eda0(local_18,param_2 + 0x10,param_3), local_18[0] == 0)) {
      FUN_0192eda0(local_18,param_2 + 0x18,param_3);
    }
  }
  else {
    local_18[0] = 4;
  }
LAB_0289e47c:
  *param_1 = local_18[0];
  return;
}


