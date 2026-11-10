/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01eb4b30; name: FUN_01eb4b30
 */


void FUN_01eb4b30(undefined4 *param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  byte bVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = *param_3;
  lVar5 = param_3[2];
  lVar1 = lVar5 + 1;
  bVar2 = *(byte *)(lVar6 + lVar5);
  uVar4 = (ulong)bVar2;
  param_3[2] = lVar1;
  if (0x83 < uVar4) {
    uVar3 = 1;
    goto LAB_01eb4b68;
  }
  switch(bVar2) {
  case 0x80:
    uVar4 = (ulong)*(byte *)(lVar6 + lVar1);
    lVar5 = lVar5 + 2;
    break;
  case 0x81:
    uVar4 = (ulong)*(ushort *)(lVar6 + lVar1);
    lVar5 = lVar5 + 3;
    break;
  case 0x82:
    uVar4 = (ulong)*(uint *)(lVar6 + lVar1);
    lVar5 = lVar5 + 5;
    break;
  case 0x83:
    uVar4 = *(ulong *)(lVar6 + lVar1);
    lVar5 = lVar5 + 9;
    break;
  default:
    goto switchD_01eb4b84_default;
  }
  param_3[2] = lVar5;
switchD_01eb4b84_default:
  if (uVar4 == 6) {
    FUN_01eb6990();
    return;
  }
  uVar3 = 5;
LAB_01eb4b68:
  *param_1 = uVar3;
  return;
}


