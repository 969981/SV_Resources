/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007d1e94; name: FUN_007d1e94
 */


undefined8
FUN_007d1e94(long param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined1 *param_6,undefined8 param_7)

{
  bool bVar1;
  char cVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  int iVar6;
  undefined1 auStack_90 [32];
  uint local_70 [2];
  undefined4 local_68;
  short local_64;
  undefined1 local_62;
  undefined2 local_60;
  undefined1 local_5e;
  uint local_58 [2];
  
  local_68 = (undefined4)param_7;
  local_62 = (undefined1)((ulong)param_7 >> 0x30);
  local_64 = (short)((ulong)param_7 >> 0x20);
  memset(local_70,0,4);
  if ((~param_2 & 0xff) == 0) {
    memset(local_70,0xff,4);
    local_70[0] = local_70[0] & 0xffffff;
  }
  cVar2 = *(char *)(param_1 + 0x729);
  FUN_00796584(auStack_90);
  bVar1 = local_70[0] == 0;
  if (bVar1) {
    uVar5 = FUN_01f7c4e8(*(undefined8 *)PTR_DAT_047d0860);
    lVar3 = FUN_007e2afc(uVar5,param_2);
    FUN_00796828(auStack_90,lVar3 + 8);
    local_70[0] = 1 << (ulong)(*(byte *)(lVar3 + 0x28) & 0x1f) | local_70[0];
  }
  else {
  }
  if ((local_68._1_1_ == '\0') &&
     (lVar3 = FUN_007eae4c(*(undefined8 *)(param_1 + 0x40),0), lVar3 != 0)) {
    iVar6 = 0;
    do {
      lVar3 = FUN_007eae4c(*(undefined8 *)(param_1 + 0x40),iVar6);
      uVar4 = FUN_007ebd8c(param_1,lVar3,*param_6,param_5,local_68._3_1_,param_3);
      if ((((uVar4 & 1) != 0) && (*(uint *)(lVar3 + 0x5fc) == local_70[0])) &&
         (uVar4 = FUN_007967e8(lVar3 + 0x600,auStack_90), (uVar4 & 1) != 0)) goto LAB_007d207c;
      iVar6 = iVar6 + 1;
      lVar3 = FUN_007eae4c(*(undefined8 *)(param_1 + 0x40),iVar6);
    } while (lVar3 != 0);
  }
  memset(local_58,0,4);
  if ((~param_2 & 0xff) == 0) {
    memset(local_58,0xff,4);
    local_58[0] = local_58[0] & 0xffffff;
  }
  else {
    local_58[0] = local_58[0] | 1 << (ulong)(param_2 & 0x1f);
  }
  local_60 = 0;
  local_5e = 0;
  lVar3 = FUN_007ebf58(param_1,auStack_90,local_58,param_3,&local_60,&local_68);
  uVar5 = 0;
  if (lVar3 != 0) {
LAB_007d207c:
    uVar5 = FUN_007ebe4c(param_1,lVar3,param_4);
    local_64 = (ushort)(!bVar1 && cVar2 != '\0') << 8;
    FUN_007edee0(param_1 + 0x48,lVar3,uVar5,param_2 & 0xff,&local_68);
    uVar5 = 1;
  }
  return uVar5;
}


