/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019aed00; name: FUN_019aed00
 */


void FUN_019aed00(undefined4 *param_1,uint *param_2,long *param_3)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  
  bVar1 = *(byte *)(*param_3 + param_3[2]);
  param_3[2] = param_3[2] + 1;
  if (0x82 < bVar1) {
    *param_1 = 1;
    return;
  }
  uVar2 = (uint)bVar1;
  if (uVar2 == 0x80) {
    uVar2 = (uint)*(byte *)(*param_3 + param_3[2]);
    lVar3 = param_3[2] + 1;
  }
  else if (bVar1 == 0x82) {
    uVar2 = *(uint *)(*param_3 + param_3[2]);
    lVar3 = param_3[2] + 4;
  }
  else {
    if (bVar1 != 0x81) goto LAB_019aed78;
    uVar2 = (uint)*(ushort *)(*param_3 + param_3[2]);
    lVar3 = param_3[2] + 2;
  }
  param_3[2] = lVar3;
LAB_019aed78:
  *param_2 = uVar2;
  *param_1 = 0;
  return;
}


