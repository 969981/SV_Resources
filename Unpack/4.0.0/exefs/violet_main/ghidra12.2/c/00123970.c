/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00123970; name: FUN_00123970
 */


void FUN_00123970(undefined8 param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  undefined1 auStack_b8 [8];
  undefined *local_b0;
  char *local_a8;
  
  iVar1 = FUN_00125280(param_1,0,auStack_b8);
  if (iVar1 == 0) {
    FUN_00123a70(param_1,"bad argument #%d (%s)",param_2,param_3);
  }
  else {
    FUN_00125400(param_1,&DAT_03c4d2b5,auStack_b8);
    iVar1 = strcmp(local_a8,"method");
    if ((iVar1 == 0) && (param_2 = param_2 + -1, param_2 == 0)) {
      FUN_00123a70(param_1,"calling \'%s\' on bad self (%s)",local_b0,param_3);
    }
    else {
      if (local_b0 == (undefined *)0x0) {
        iVar1 = FUN_00123b80(param_1,auStack_b8);
        if (iVar1 == 0) {
          local_b0 = &DAT_03c1ceec;
        }
        else {
          local_b0 = (undefined *)FUN_00c646d0(param_1,0xffffffff,0);
        }
      }
      FUN_00123a70(param_1,"bad argument #%d to \'%s\' (%s)",param_2,local_b0,param_3);
    }
  }
  return;
}


