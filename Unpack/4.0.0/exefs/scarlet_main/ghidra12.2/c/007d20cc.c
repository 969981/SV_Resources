/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007d20cc; name: FUN_007d20cc
 */


undefined8
FUN_007d20cc(long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined1 *param_5,ulong param_6)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  int iVar4;
  undefined1 auStack_80 [32];
  uint local_60 [2];
  undefined4 local_58;
  undefined2 local_54;
  undefined1 local_52;
  undefined2 local_50;
  undefined1 local_4e;
  uint local_48 [2];
  
  local_52 = (undefined1)(param_6 >> 0x30);
  local_58 = (undefined4)param_6;
  local_54 = (undefined2)(param_6 >> 0x20);
  memset(local_60,0,4);
  memset(local_60,0xff,4);
  local_60[0] = local_60[0] & 0xffffff;
  if (((param_6 & 0xff00) == 0) &&
     (lVar1 = FUN_007eae4c(*(undefined8 *)(param_1 + 0x40),0), lVar1 != 0)) {
    iVar4 = 0;
    do {
      lVar1 = FUN_007eae4c(*(undefined8 *)(param_1 + 0x40),iVar4);
      uVar3 = FUN_007ebd8c(param_1,lVar1,*param_5,param_4,local_58._3_1_,param_2);
      if (((uVar3 & 1) != 0) && (*(uint *)(lVar1 + 0x5fc) == local_60[0])) goto LAB_007d21a0;
      iVar4 = iVar4 + 1;
      lVar1 = FUN_007eae4c(*(undefined8 *)(param_1 + 0x40),iVar4);
    } while (lVar1 != 0);
  }
  FUN_00796584(auStack_80);
  memset(local_48,0,4);
  memset(local_48,0xff,4);
  local_48[0] = local_48[0] & 0xffffff;
  local_50 = 0;
  local_4e = 0;
  lVar1 = FUN_007ebf58(param_1,auStack_80,local_48,param_2,&local_50,&local_58);
  uVar2 = 0;
  if (lVar1 != 0) {
LAB_007d21a0:
    uVar2 = FUN_007ebe4c(param_1,lVar1,param_3);
    local_54 = 0;
    FUN_007edee0(param_1 + 0x48,lVar1,uVar2,0,&local_58);
    uVar2 = 1;
  }
  return uVar2;
}


