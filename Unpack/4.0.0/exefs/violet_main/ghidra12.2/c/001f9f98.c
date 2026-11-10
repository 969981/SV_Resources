/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001f9f98; name: FUN_001f9f98
 */


int FUN_001f9f98(long param_1,uint param_2,int param_3,undefined8 *param_4,undefined8 param_5,
                undefined8 param_6,undefined8 *param_7,undefined8 param_8)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  
  lVar1 = param_1 + 0x890;
  if (param_4 == (undefined8 *)0x0) {
    FUN_001eda20(&local_78);
  }
  else {
    local_78 = *param_4;
    local_70 = *(undefined4 *)(param_4 + 1);
    FUN_001eda5c(&local_78);
  }
  iVar2 = FUN_001f535c(&local_68,param_5,param_6,lVar1);
  if (iVar2 < 0) {
    return iVar2;
  }
  lVar3 = FUN_001f45a0(lVar1,0x98);
  if (lVar3 == 0) {
    iVar2 = -0x385;
LAB_001fa0dc:
    FUN_001f471c(local_68,lVar1);
  }
  else {
    FUN_001f9154(lVar3);
    if ((param_7 != (undefined8 *)0x0) && (param_7[1] != 0)) {
      uVar4 = param_7[1];
      *(undefined8 *)(lVar3 + 0x60) = *param_7;
      *(undefined8 *)(lVar3 + 0x68) = uVar4;
    }
    *(undefined8 *)(lVar3 + 0x70) = param_8;
    if (param_3 == -1) {
      param_3 = *(int *)(param_1 + 0x930);
      if (param_3 < 0) {
        iVar2 = -0x1fd;
        goto LAB_001fa0dc;
      }
      uVar4 = 0;
      *(int *)(param_1 + 0x930) = param_3 + 2;
      iVar5 = param_3;
    }
    else {
      uVar4 = 3;
      iVar5 = 0;
    }
    FUN_001f46c4(lVar3,param_2 & 0x21 | 4,param_3,uVar4,&local_78,local_68,param_6);
    iVar2 = FUN_001ee7d8(param_1,lVar3);
    if (iVar2 == 0) {
      return iVar5;
    }
    FUN_001f470c(lVar3,lVar1);
  }
  FUN_001f45b0(lVar1,lVar3);
  return iVar2;
}


