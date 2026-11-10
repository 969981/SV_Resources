/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f7e2a0; name: FUN_00f7e2a0
 */


bool FUN_00f7e2a0(uint param_1,byte param_2,int param_3)

{
  int iVar1;
  
  if (4 < param_3) {
    return false;
  }
  iVar1 = 0;
  if (2 < param_1) {
    iVar1 = 5;
  }
  if (iVar1 != param_3) {
    iVar1 = 5;
    if (param_1 == 2) {
      iVar1 = 5;
      if (param_2 != 0) {
        iVar1 = 2;
      }
    }
    else if ((param_1 == 0) || (param_1 == 1)) {
      iVar1 = 1;
    }
    if (iVar1 != param_3) {
      iVar1 = 5;
      if (param_1 == 2) {
        iVar1 = 5;
        if (1 < param_2) {
          iVar1 = 3;
        }
      }
      else if (param_1 == 1) {
        if ((byte)(param_2 - 1) < 5) {
          iVar1 = *(int *)(&DAT_03d6a304 + (long)(char)(param_2 - 1) * 4);
        }
        else {
          iVar1 = 0;
        }
      }
      if (iVar1 != param_3) {
        if (param_1 == 2) {
          iVar1 = 4;
          if (param_2 < 3) {
            iVar1 = 5;
          }
        }
        else {
          iVar1 = 5;
          if (param_1 == 1) {
            if ((byte)(param_2 - 1) < 5) {
              iVar1 = *(int *)(&DAT_03d6a318 + (long)(char)(param_2 - 1) * 4);
            }
            else {
              iVar1 = 1;
            }
          }
        }
        if (iVar1 != param_3) {
          iVar1 = 5;
          if (param_1 == 2) {
            iVar1 = 1;
          }
          return iVar1 == param_3;
        }
      }
    }
  }
  return true;
}


