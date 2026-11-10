/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ec61c4; name: FUN_01ec61c4
 */


void FUN_01ec61c4(int *param_1,long param_2,long *param_3)

{
  byte bVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  int local_18 [2];
  
  lVar3 = *param_3;
  lVar6 = param_3[2];
  lVar4 = lVar6 + 1;
  bVar1 = *(byte *)(lVar3 + lVar6);
  uVar5 = (ulong)bVar1;
  param_3[2] = lVar4;
  if (uVar5 < 0x84) {
    switch(bVar1) {
    case 0x80:
      uVar5 = (ulong)*(byte *)(lVar3 + lVar4);
      lVar4 = lVar6 + 2;
      break;
    case 0x81:
      uVar5 = (ulong)*(ushort *)(lVar3 + lVar4);
      lVar4 = lVar6 + 3;
      break;
    case 0x82:
      uVar5 = (ulong)*(uint *)(lVar3 + lVar4);
      lVar4 = lVar6 + 5;
      break;
    case 0x83:
      uVar5 = *(ulong *)(lVar3 + lVar4);
      lVar4 = lVar6 + 9;
      break;
    default:
      goto switchD_01ec636c_default;
    }
    param_3[2] = lVar4;
switchD_01ec636c_default:
    if (uVar5 != 6) {
      local_18[0] = 4;
      goto LAB_01ec6344;
    }
    cVar2 = *(char *)(lVar3 + lVar4);
    param_3[2] = lVar4 + 1;
    if (cVar2 == -0x47) {
      FUN_01ec65a0(local_18,param_2,param_3);
      if (local_18[0] != 0) goto LAB_01ec6344;
      cVar2 = *(char *)(*param_3 + param_3[2]);
      param_3[2] = param_3[2] + 1;
      if (cVar2 == -0x47) {
        FUN_01ec65a0(local_18,param_2 + 0x10,param_3);
        if (local_18[0] != 0) goto LAB_01ec6344;
        cVar2 = *(char *)(*param_3 + param_3[2]);
        param_3[2] = param_3[2] + 1;
        if (cVar2 == -0x47) {
          FUN_01ec65a0(local_18,param_2 + 0x20,param_3);
          if (local_18[0] != 0) goto LAB_01ec6344;
          cVar2 = *(char *)(*param_3 + param_3[2]);
          param_3[2] = param_3[2] + 1;
          if (cVar2 == -0x47) {
            FUN_01ec65a0(local_18,param_2 + 0x30,param_3);
            if (local_18[0] != 0) goto LAB_01ec6344;
            cVar2 = *(char *)(*param_3 + param_3[2]);
            param_3[2] = param_3[2] + 1;
            if (cVar2 == -0x47) {
              FUN_01ec65a0(local_18,param_2 + 0x40,param_3);
              if (local_18[0] != 0) goto LAB_01ec6344;
              cVar2 = *(char *)(*param_3 + param_3[2]);
              param_3[2] = param_3[2] + 1;
              if (cVar2 == -0x47) {
                FUN_01ec65a0(local_18,param_2 + 0x50,param_3);
                goto LAB_01ec6344;
              }
            }
          }
        }
      }
    }
  }
  local_18[0] = 1;
LAB_01ec6344:
  *param_1 = local_18[0];
  return;
}


