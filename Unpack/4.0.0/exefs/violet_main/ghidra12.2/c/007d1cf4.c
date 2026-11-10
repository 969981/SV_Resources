/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007d1cf4; name: FUN_007d1cf4
 */


undefined8
FUN_007d1cf4(long param_1,long param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined1 *param_6,ulong param_7)

{
  byte bVar1;
  undefined1 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  undefined4 local_70;
  undefined2 local_6c;
  undefined1 local_6a;
  undefined2 local_68;
  undefined1 local_66;
  uint local_58 [2];
  
  local_6a = (undefined1)(param_7 >> 0x30);
  local_70 = (undefined4)param_7;
  local_6c = (undefined2)(param_7 >> 0x20);
  if (((param_7 & 0xff00) == 0) &&
     (lVar4 = FUN_007eae4c(*(undefined8 *)(param_1 + 0x40),0), lVar4 != 0)) {
    iVar6 = 0;
    do {
      lVar4 = FUN_007eae4c(*(undefined8 *)(param_1 + 0x40),iVar6);
      uVar3 = FUN_007ebd8c(param_1,lVar4,*param_6,param_5,(param_7 & 0xff000000) != 0,param_3);
      if (((uVar3 & 1) != 0) && (uVar3 = FUN_007967e8(lVar4 + 0x600,param_2), (uVar3 & 1) != 0)) {
        if (lVar4 != 0) goto LAB_007d1e40;
        break;
      }
      iVar6 = iVar6 + 1;
      lVar4 = FUN_007eae4c(*(undefined8 *)(param_1 + 0x40),iVar6);
    } while (lVar4 != 0);
  }
  bVar1 = *(byte *)(param_2 + 0x20);
  memset(local_58,0,4);
  if (bVar1 == 0xff) {
    memset(local_58,0xff,4);
    local_58[0] = local_58[0] & 0xffffff;
  }
  else {
    local_58[0] = local_58[0] | 1 << (ulong)(bVar1 & 0x1f);
  }
  local_68 = 0;
  local_66 = 0;
  lVar4 = FUN_007ebf58(param_1,param_2,local_58,param_3,&local_68,&local_70);
  uVar5 = 0;
  if (lVar4 != 0) {
LAB_007d1e40:
    uVar2 = *(undefined1 *)(param_2 + 0x20);
    uVar5 = FUN_007ebe4c(param_1,lVar4,param_4);
    local_6c = 0;
    FUN_007edee0(param_1 + 0x48,lVar4,uVar5,uVar2,&local_70);
    uVar5 = 1;
  }
  return uVar5;
}


