/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f6c0bc; name: FUN_00f6c0bc
 */


void FUN_00f6c0bc(long param_1)

{
  float fVar1;
  byte bVar2;
  int iVar3;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined2 extraout_var_03;
  undefined2 extraout_var_04;
  float fVar4;
  
  (**(code **)(**(long **)(param_1 + 200) + 0x60))(*(long **)(param_1 + 200),param_1 + 0x148);
  (**(code **)(**(long **)(param_1 + 200) + 0x60))(*(long **)(param_1 + 200),param_1 + 0x168);
  fVar4 = *(float *)(param_1 + 0x1a8);
  *(undefined4 *)(param_1 + 0x2a8) = 0;
  if (1.0 <= fVar4) {
    fVar1 = (float)CONCAT22(extraout_var_02,extraout_var) -
            (float)CONCAT22(extraout_var_03,extraout_var_00);
    if (fVar1 <= 0.0) {
      iVar3 = 0;
    }
    else {
      fVar1 = fVar1 - fVar4;
      if (fVar1 <= 0.0) {
        iVar3 = 1;
      }
      else {
        fVar1 = fVar1 - fVar4;
        if (fVar1 <= 0.0) {
          iVar3 = 2;
        }
        else {
          fVar1 = fVar1 - fVar4;
          if (fVar1 <= 0.0) {
            iVar3 = 3;
          }
          else {
            fVar1 = fVar1 - fVar4;
            if (fVar1 <= 0.0) {
              iVar3 = 4;
            }
            else {
              fVar1 = fVar1 - fVar4;
              if (fVar1 <= 0.0) {
                iVar3 = 5;
              }
              else {
                fVar1 = fVar1 - fVar4;
                if (0.0 < fVar1) {
                  iVar3 = 7;
                  while (fVar1 = fVar1 - fVar4, 0.0 < fVar1) {
                    iVar3 = iVar3 + 1;
                  }
                }
                else {
                  iVar3 = 6;
                }
              }
            }
          }
        }
      }
      *(int *)(param_1 + 0x2a8) = iVar3;
    }
    if (**(char **)(param_1 + 400) == '\0') {
      bVar2 = 0 < iVar3;
    }
    else {
      (**(code **)(**(long **)(param_1 + 200) + 0x60))(*(long **)(param_1 + 200),param_1 + 0x188);
      bVar2 = -((float)CONCAT22(extraout_var_04,extraout_var_01) <=
               (float)CONCAT22(extraout_var_02,extraout_var));
    }
    *(byte *)(param_1 + 0x2b0) = bVar2 & 1;
  }
  return;
}


