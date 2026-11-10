/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e60be4; name: FUN_01e60be4
 */


void FUN_01e60be4(undefined4 *param_1,undefined8 param_2,void *param_3,long *param_4)

{
  long lVar1;
  byte bVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  lVar4 = *param_4;
  lVar5 = param_4[2];
  lVar1 = lVar5 + 1;
  bVar2 = *(byte *)(lVar4 + lVar5);
  param_4[2] = lVar1;
  if (0x83 < bVar2) {
    uVar3 = 1;
    goto LAB_01e60c20;
  }
  switch(bVar2) {
  case 0x80:
    param_4[2] = lVar5 + 2;
    goto switchD_01e60c48_default;
  case 0x81:
    uVar6 = (ulong)*(ushort *)(lVar4 + lVar1);
    lVar5 = lVar5 + 3;
    break;
  case 0x82:
    uVar6 = (ulong)*(uint *)(lVar4 + lVar1);
    lVar5 = lVar5 + 5;
    break;
  case 0x83:
    uVar6 = *(ulong *)(lVar4 + lVar1);
    lVar5 = lVar5 + 9;
    break;
  default:
    goto switchD_01e60c48_default;
  }
  param_4[2] = lVar5;
  if (uVar6 == 0x814) {
    memcpy(param_3,(void *)(lVar4 + lVar5),0x814);
    uVar3 = 0;
    param_4[2] = param_4[2] + 0x814;
  }
  else {
switchD_01e60c48_default:
    uVar3 = 4;
  }
LAB_01e60c20:
  *param_1 = uVar3;
  return;
}


