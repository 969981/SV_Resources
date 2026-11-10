/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021ef21c; name: FUN_021ef21c
 */


void FUN_021ef21c(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = (**(code **)(*param_2 + 0x68))(param_2,0);
  lVar2 = (**(code **)(*param_1 + 0x60))(param_1,0);
  if (lVar1 != 0 && lVar2 != 0) {
    FUN_00feea48(lVar2,lVar1);
    lVar2 = param_2[0xc];
    lVar1 = param_1[0xc];
    *(undefined4 *)(lVar1 + 0x2c) = *(undefined4 *)(lVar2 + 0x2c);
    *(undefined4 *)(lVar1 + 0x30) = *(undefined4 *)(lVar2 + 0x30);
    *(undefined4 *)(lVar1 + 0x34) = *(undefined4 *)(lVar2 + 0x34);
    *(undefined4 *)(lVar1 + 0x38) = *(undefined4 *)(lVar2 + 0x38);
  }
  lVar1 = (**(code **)(*param_2 + 0x68))(param_2,1);
  lVar2 = (**(code **)(*param_1 + 0x60))(param_1,1);
  if ((lVar1 != 0) && (lVar2 != 0)) {
    FUN_00feea48(lVar2,lVar1);
    lVar2 = param_2[0xd];
    lVar1 = param_1[0xd];
    *(undefined4 *)(lVar1 + 0x2c) = *(undefined4 *)(lVar2 + 0x2c);
    *(undefined4 *)(lVar1 + 0x30) = *(undefined4 *)(lVar2 + 0x30);
    *(undefined4 *)(lVar1 + 0x34) = *(undefined4 *)(lVar2 + 0x34);
    *(undefined4 *)(lVar1 + 0x38) = *(undefined4 *)(lVar2 + 0x38);
  }
  lVar1 = (**(code **)(*param_2 + 0x68))(param_2,2);
  lVar2 = (**(code **)(*param_1 + 0x60))(param_1,2);
  if ((lVar1 != 0) && (lVar2 != 0)) {
    FUN_00feea48(lVar2,lVar1);
    lVar2 = param_2[0xe];
    lVar1 = param_1[0xe];
    *(undefined4 *)(lVar1 + 0x2c) = *(undefined4 *)(lVar2 + 0x2c);
    *(undefined4 *)(lVar1 + 0x30) = *(undefined4 *)(lVar2 + 0x30);
    *(undefined4 *)(lVar1 + 0x34) = *(undefined4 *)(lVar2 + 0x34);
    *(undefined4 *)(lVar1 + 0x38) = *(undefined4 *)(lVar2 + 0x38);
  }
  lVar1 = (**(code **)(*param_2 + 0x68))(param_2,3);
  lVar2 = (**(code **)(*param_1 + 0x60))(param_1,3);
  if ((lVar1 != 0) && (lVar2 != 0)) {
    FUN_00feea48(lVar2,lVar1);
    lVar2 = param_2[0xf];
    lVar1 = param_1[0xf];
    *(undefined4 *)(lVar1 + 0x2c) = *(undefined4 *)(lVar2 + 0x2c);
    *(undefined4 *)(lVar1 + 0x30) = *(undefined4 *)(lVar2 + 0x30);
    *(undefined4 *)(lVar1 + 0x34) = *(undefined4 *)(lVar2 + 0x34);
    *(undefined4 *)(lVar1 + 0x38) = *(undefined4 *)(lVar2 + 0x38);
  }
  lVar1 = (**(code **)(*param_2 + 0x68))(param_2,4);
  lVar2 = (**(code **)(*param_1 + 0x60))(param_1,4);
  if ((lVar1 != 0) && (lVar2 != 0)) {
    FUN_00feea48(lVar2,lVar1);
    lVar2 = param_2[0x10];
    lVar1 = param_1[0x10];
    *(undefined4 *)(lVar1 + 0x2c) = *(undefined4 *)(lVar2 + 0x2c);
    *(undefined4 *)(lVar1 + 0x30) = *(undefined4 *)(lVar2 + 0x30);
    *(undefined4 *)(lVar1 + 0x34) = *(undefined4 *)(lVar2 + 0x34);
    *(undefined4 *)(lVar1 + 0x38) = *(undefined4 *)(lVar2 + 0x38);
  }
  lVar1 = (**(code **)(*param_2 + 0x68))(param_2,5);
  lVar2 = (**(code **)(*param_1 + 0x60))(param_1,5);
  if ((lVar1 != 0) && (lVar2 != 0)) {
    FUN_00feea48(lVar2,lVar1);
    lVar2 = param_2[0x11];
    lVar1 = param_1[0x11];
    *(undefined4 *)(lVar1 + 0x2c) = *(undefined4 *)(lVar2 + 0x2c);
    *(undefined4 *)(lVar1 + 0x30) = *(undefined4 *)(lVar2 + 0x30);
    *(undefined4 *)(lVar1 + 0x34) = *(undefined4 *)(lVar2 + 0x34);
    *(undefined4 *)(lVar1 + 0x38) = *(undefined4 *)(lVar2 + 0x38);
  }
  *(char *)(param_1 + 0x12) = (char)param_2[0x12];
  return;
}


