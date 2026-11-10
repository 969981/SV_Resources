/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00424450; name: FUN_00424450
 */


undefined8
FUN_00424450(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined4 param_5,undefined8 param_6,undefined1 param_7)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_300 [120];
  undefined1 auStack_288 [56];
  undefined1 auStack_250 [256];
  undefined1 auStack_150 [256];
  
  lVar3 = 0x71;
  while( true ) {
    if ((byte)(&UNK_03c39bcb)[(int)lVar3 - 0x39] < *(byte *)(param_1 + lVar3)) {
      return 0;
    }
    if (*(byte *)(param_1 + lVar3) < (byte)(&UNK_03c39bcb)[(int)lVar3 - 0x39]) break;
    lVar3 = lVar3 + -1;
    if ((int)lVar3 == 0x38) {
      return 0;
    }
  }
  uVar2 = FUN_00426680(auStack_150,param_2);
  if ((int)uVar2 != -1) {
    return uVar2;
  }
  uVar2 = FUN_00426680(auStack_250,param_1);
  if ((int)uVar2 != -1) {
    return uVar2;
  }
  lVar3 = FUN_0042bbc0();
  if ((((lVar3 == 0) || (iVar1 = FUN_00424390(lVar3,param_5,param_6,param_7), iVar1 == 0)) ||
      (iVar1 = FUN_0042bd60(lVar3,param_1,0x39), iVar1 == 0)) ||
     (((iVar1 = FUN_0042bd60(lVar3,param_2,0x39), iVar1 == 0 ||
       (iVar1 = FUN_0042bd60(lVar3,param_3,param_4), iVar1 == 0)) ||
      (iVar1 = FUN_0042beb0(lVar3,auStack_300,0x72), iVar1 == 0)))) {
    FUN_0042bbe0(lVar3);
    return 0;
  }
  FUN_0042bbe0(lVar3);
  FUN_00429d40(auStack_288,auStack_300,0x72);
  FUN_00453300(auStack_300,0x72);
  FUN_00429280(auStack_288,PTR_DAT_047cd2d8,auStack_288);
  FUN_00429d40(auStack_300,param_1 + 0x39,0x39);
  FUN_00427f70(auStack_150,auStack_300,auStack_150,auStack_288);
  uVar2 = FUN_00424bc0(auStack_150,auStack_250);
  return uVar2;
}


