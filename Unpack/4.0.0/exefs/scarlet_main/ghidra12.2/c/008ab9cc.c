/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008ab9cc; name: FUN_008ab9cc
 */


void FUN_008ab9cc(float param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                 long param_5,long param_6,uint param_7,uint param_8)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  bool bVar4;
  undefined8 uVar5;
  float local_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  
  uVar5 = (**(code **)(*(long *)*param_2 + 0x60))((long *)*param_2,&local_58);
  param_8 = param_8 & 1;
  if ((param_5 == 0) ||
     ((bVar4 = (*(byte *)(param_5 + 4) & 2) == 0, param_6 == 0 && (bVar4 || (param_7 & 1) != 0)))) {
    param_2[9] = 0;
  }
  else {
    if (!bVar4 && (param_7 & 1) == 0) {
      param_8 = 0;
    }
    uVar5 = FUN_008ab508(uVar5,param_2 + 9,param_3,param_4,&local_58,0xb01,param_8);
  }
  local_58 = local_58 * param_1;
  fStack_54 = fStack_54 * param_1;
  if (param_6 == 0) {
    return;
  }
  uVar1 = (param_7 ^ 1) & (*(byte *)(param_6 + 8) & 0x20) >> 5;
  uVar2 = 0;
  if (uVar1 == 0) {
    uVar2 = param_8;
  }
  fStack_5c = (float)((uint)*(byte *)(param_6 + 0xc) << 1);
  local_60 = local_58 + fStack_5c;
  fStack_5c = fStack_54 + fStack_5c;
  uVar5 = FUN_008ab508(uVar5,param_2 + 0xf,param_3,param_4,&local_60,0x201,uVar2);
  if (uVar1 != 1) {
    return;
  }
  if ((*(byte *)(param_6 + 8) & 1) == 0) {
    param_2[0x10] = 0;
    bVar3 = *(byte *)(param_6 + 8);
  }
  else {
    uVar5 = FUN_008ab508(uVar5,param_2 + 0x10,param_3,param_4,&local_60,0xb01,0);
    bVar3 = *(byte *)(param_6 + 8);
  }
  if ((bVar3 >> 1 & 1) == 0) {
    param_2[0x11] = 0;
    bVar3 = *(byte *)(param_6 + 8);
  }
  else {
    uVar5 = FUN_008ab508(uVar5,param_2 + 0x11,param_3,param_4,&local_60,0xb01,0);
    bVar3 = *(byte *)(param_6 + 8);
  }
  if ((bVar3 >> 2 & 1) == 0) {
    param_2[0x12] = 0;
  }
  else {
    FUN_008ab508(uVar5,param_2 + 0x12,param_3,param_4,&local_60,0xb01,0);
  }
  return;
}


