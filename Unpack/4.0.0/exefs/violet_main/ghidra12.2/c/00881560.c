/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00881560; name: FUN_00881560
 */


undefined8 FUN_00881560(int *param_1,int *param_2,int param_3)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = 0x80260201;
  if ((param_1 != (int *)0x0) && (param_2 != (int *)0x0)) {
    iVar4 = *param_1;
    if ((iVar4 == 0x1020003) || (iVar4 == 0x1010003)) {
      uVar1 = 0x80260202;
      if (param_1[1] == 0x20) {
        iVar5 = *param_2;
        iVar3 = iVar4;
        if ((iVar5 != 0x1010003) && (iVar5 != 0x1020003)) {
          *param_2 = iVar4;
          param_2[1] = param_1[1];
          iVar3 = *param_1;
          iVar5 = iVar4;
        }
        if (iVar3 == 0x1020003) {
          if (iVar5 != 0x1020003) {
            return 0x80800008;
          }
          if (2 < (uint)param_1[2]) {
            return 0x80800008;
          }
          if (1 < (uint)param_1[7]) {
            return 0x80800008;
          }
          if ((param_3 == 1) && (param_1[7] != 1)) {
            return 0x80800008;
          }
          param_2[2] = param_1[2];
          iVar5 = 0;
          iVar4 = FUN_00880d60(param_1[3],0xc1f00000,0,0x80800008);
          param_2[3] = iVar4;
          uVar1 = 0;
          if (param_1[2] != 2) {
            uVar1 = 0x40266666;
          }
          iVar4 = FUN_00880d60(param_1[4],0,uVar1);
          param_2[4] = iVar4;
          iVar4 = FUN_00880d60(param_1[5],0,0x40a00000);
          param_2[5] = iVar4;
          if (param_1[2] == 2) {
            iVar5 = FUN_00880d60(param_1[6],0,-(float)param_2[3]);
          }
          param_2[6] = iVar5;
          uVar2 = param_1[7];
        }
        else {
          if (iVar3 != 0x1010003) {
            return 0x80800008;
          }
          if (iVar5 == 0x1020003) {
            if (2 < (uint)param_1[2]) {
              return 0x80800008;
            }
            if (param_1[6] != 0) {
              return 0x80800008;
            }
            if (param_1[7] != 0) {
              return 0x80800008;
            }
            param_2[2] = param_1[2];
            iVar4 = FUN_00880d60(param_1[3],0xc1f00000,0,0x80800008);
            param_2[3] = iVar4;
            uVar1 = 0;
            if (param_1[2] != 2) {
              uVar1 = 0x40266666;
            }
            iVar4 = FUN_00880d60(param_1[4],0,uVar1);
            param_2[4] = iVar4;
            iVar4 = FUN_00880d60(param_1[5],0,0x40a00000);
            param_2[5] = iVar4;
            uVar2 = (uint)(param_3 == 1);
            param_2[6] = 0;
          }
          else {
            if (iVar5 != 0x1010003) {
              return 0x80800008;
            }
            if (2 < (uint)param_1[2]) {
              return 0x80800008;
            }
            if (param_1[6] != 0) {
              return 0x80800008;
            }
            if (param_1[7] != 0) {
              return 0x80800008;
            }
            param_2[2] = param_1[2];
            iVar4 = FUN_00880d60(param_1[3],0xc1f00000,0,0x80800008);
            param_2[3] = iVar4;
            uVar1 = 0;
            if (param_1[2] != 2) {
              uVar1 = 0x40266666;
            }
            iVar4 = FUN_00880d60(param_1[4],0,uVar1);
            param_2[4] = iVar4;
            iVar4 = FUN_00880d60(param_1[5],0,0x40a00000);
            param_2[5] = iVar4;
            param_2[6] = param_1[6];
            uVar2 = param_1[7];
          }
        }
        uVar1 = 0;
        param_2[7] = uVar2;
      }
    }
    else {
      uVar1 = 0x80260202;
    }
  }
  return uVar1;
}


