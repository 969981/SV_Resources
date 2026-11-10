/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00882b00; name: FUN_00882b00
 */


undefined8 FUN_00882b00(int *param_1,int *param_2,int param_3)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = 0x80260201;
  if ((param_1 != (int *)0x0) && (param_2 != (int *)0x0)) {
    iVar4 = *param_1;
    if (iVar4 == 0x1020002) {
      if (param_1[1] != 0x40) {
        return 0x80260202;
      }
    }
    else {
      if (iVar4 != 0x1010002) {
        return 0x80260202;
      }
      if (param_1[1] != 0x10) {
        return 0x80260202;
      }
    }
    iVar3 = *param_2;
    iVar2 = iVar4;
    if ((iVar3 != 0x1010002) && (iVar3 != 0x1020002)) {
      *param_2 = iVar4;
      param_2[1] = param_1[1];
      iVar2 = *param_1;
      iVar3 = iVar4;
    }
    uVar1 = 0x80800008;
    if (iVar2 == 0x1020002) {
      if ((((iVar3 == 0x1020002) && (param_1[0xe] == 0)) && (param_1[0xf] == 0)) &&
         ((param_3 != 1 || ((float)param_1[2] == (float)param_1[3])))) {
        iVar4 = FUN_00880d60(param_1[2],0xc2c80000,0x41400000,0x80800008);
        param_2[2] = iVar4;
        iVar4 = FUN_00880d60(param_1[3],0xc2c80000,0x41400000);
        param_2[3] = iVar4;
        iVar4 = FUN_00880d60(param_1[4],0xc2c80000,0x41400000);
        param_2[4] = iVar4;
        iVar4 = FUN_00880d60(param_1[5],0xc2c80000,0x41400000);
        param_2[5] = iVar4;
        iVar4 = FUN_00880d60(param_1[6],0xc2c80000,0x41400000);
        param_2[6] = iVar4;
        iVar4 = FUN_00880d60(param_1[7],0xc2c80000,0x41400000);
        param_2[7] = iVar4;
        iVar4 = FUN_00880d60(param_1[8],0xc2c80000,0x41400000);
        param_2[8] = iVar4;
        iVar4 = FUN_00880d60(param_1[9],0xc2c80000,0x41400000);
        param_2[9] = iVar4;
        iVar4 = FUN_00880d60(param_1[10],0xc2c80000,0x41400000);
        param_2[10] = iVar4;
        iVar4 = FUN_00880d60(param_1[0xb],0xc2c80000,0x41400000);
        param_2[0xb] = iVar4;
        iVar4 = FUN_00880d60(param_1[0xc],0xc2c80000,0x41400000);
        param_2[0xc] = iVar4;
        iVar4 = FUN_00880d60(param_1[0xd],0xc2c80000,0x41400000);
LAB_00882d8c:
        param_2[0xd] = iVar4;
        param_2[0xe] = 0;
        param_2[0xf] = 0;
        return 0;
      }
    }
    else if (iVar2 == 0x1010002) {
      if (iVar3 == 0x1020002) {
        if (param_1[3] == 0) {
          iVar4 = FUN_00880d60(param_1[2],0xc2c80000,0x41400000,0x80800008);
          param_2[2] = iVar4;
          param_2[3] = iVar4;
          param_2[4] = iVar4;
          param_2[5] = iVar4;
          param_2[6] = iVar4;
          param_2[7] = iVar4;
          param_2[8] = iVar4;
          param_2[9] = iVar4;
          param_2[10] = iVar4;
          param_2[0xb] = iVar4;
          param_2[0xc] = iVar4;
          goto LAB_00882d8c;
        }
      }
      else if ((iVar3 == 0x1010002) && (param_1[3] == 0)) {
        iVar4 = FUN_00880d60(param_1[2],0xc2c80000,0x41400000,0x80800008);
        param_2[2] = iVar4;
        param_2[3] = param_1[3];
        return 0;
      }
    }
  }
  return uVar1;
}


