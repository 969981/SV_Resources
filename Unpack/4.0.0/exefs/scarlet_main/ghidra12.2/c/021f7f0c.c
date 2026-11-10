/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021f7f0c; name: FUN_021f7f0c
 */


void FUN_021f7f0c(long param_1,uint param_2,long param_3)

{
  char cVar1;
  short sVar2;
  short sVar3;
  uint uVar4;
  undefined4 uVar5;
  long lVar6;
  char cVar7;
  
  sVar2 = FUN_00eedbc8(*(undefined8 *)(param_1 + 0x70),0);
  sVar3 = FUN_00eedbc8(*(undefined8 *)(param_1 + 0x70),1);
  cVar7 = '\x02';
  if (sVar2 == 0) {
    cVar7 = '\x01';
  }
  cVar1 = sVar2 != 0;
  if (sVar3 != 0) {
    cVar1 = cVar7;
  }
  sVar2 = FUN_00eedbc8(*(undefined8 *)(param_1 + 0x70),2);
  if (sVar2 != 0) {
    cVar1 = cVar1 + '\x01';
  }
  sVar2 = FUN_00eedbc8(*(undefined8 *)(param_1 + 0x70),3);
  if (sVar2 != 0) {
    cVar1 = cVar1 + '\x01';
  }
  if ((cVar1 != '\x01') ||
     (uVar4 = FUN_00eedbc8(*(undefined8 *)(param_1 + 0x70),0),
     (uVar4 & 0xffff) != (param_2 & 0xffff))) {
    uVar4 = FUN_020e7e5c(param_1,param_2);
    if ((uVar4 & 0xff) < 4) {
      FUN_00eee5f0(*(undefined8 *)(param_1 + 0x70),uVar4,0);
      FUN_00eee290(*(undefined8 *)(param_1 + 0x70),uVar4,0);
      FUN_00eedf30(*(undefined8 *)(param_1 + 0x70),uVar4,0);
      FUN_020e7f54(param_1);
      if (param_3 != 0) {
        if (*(short *)(param_3 + 0x10) == 0) {
          lVar6 = 0;
        }
        else if (*(short *)(param_3 + 0x12) == 0) {
          lVar6 = 1;
        }
        else if (*(short *)(param_3 + 0x14) == 0) {
          lVar6 = 2;
        }
        else {
          if (*(short *)(param_3 + 0x16) != 0) {
            return;
          }
          lVar6 = 3;
        }
        *(short *)(param_3 + lVar6 * 2 + 0x10) = (short)param_2;
      }
    }
    return;
  }
  FUN_00eee5f0(*(undefined8 *)(param_1 + 0x70),0,0);
  FUN_00eee290(*(undefined8 *)(param_1 + 0x70),0,0);
  FUN_00eedf30(*(undefined8 *)(param_1 + 0x70),0,0);
  uVar5 = FUN_00cf5fe0(0x5d,0);
  FUN_00eee5f0(*(undefined8 *)(param_1 + 0x70),0,0x5d);
  FUN_00eee290(*(undefined8 *)(param_1 + 0x70),0,0);
  FUN_00eedf30(*(undefined8 *)(param_1 + 0x70),0,uVar5);
  if (param_3 == 0) {
    return;
  }
  if (*(short *)(param_3 + 0x10) == 0) {
    lVar6 = 0;
  }
  else if (*(short *)(param_3 + 0x12) == 0) {
    lVar6 = 1;
  }
  else if (*(short *)(param_3 + 0x14) == 0) {
    lVar6 = 2;
  }
  else {
    if (*(short *)(param_3 + 0x16) != 0) goto LAB_021f80f4;
    lVar6 = 3;
  }
  *(short *)(param_3 + lVar6 * 2 + 0x10) = (short)param_2;
LAB_021f80f4:
  if (*(short *)(param_3 + 8) == 0) {
    lVar6 = 0;
  }
  else if (*(short *)(param_3 + 10) == 0) {
    lVar6 = 1;
  }
  else if (*(short *)(param_3 + 0xc) == 0) {
    lVar6 = 2;
  }
  else {
    if (*(short *)(param_3 + 0xe) != 0) {
      return;
    }
    lVar6 = 3;
  }
  *(undefined2 *)(param_3 + lVar6 * 2 + 8) = 0x5d;
  return;
}


