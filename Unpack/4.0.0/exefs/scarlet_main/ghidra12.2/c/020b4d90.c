/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 020b4d90; name: FUN_020b4d90
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020b4d90(undefined8 *param_1,undefined1 param_2 [16],undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  char local_70 [16];
  undefined8 local_60;
  undefined8 uStack_58;
  char local_50 [16];
  undefined8 local_40;
  undefined8 uStack_38;
  
  uVar2 = param_2._0_8_;
  iVar1 = (int)param_4;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  if (iVar1 == 2) {
    FUN_020b4eac(local_50,param_3,param_4,param_5);
    if (local_50[0] == '\0') {
      return;
    }
    *(undefined1 *)param_1 = 1;
LAB_020b4de4:
    param_1[2] = local_40;
    param_1[3] = uStack_38;
  }
  else {
    FUN_020b4f4c(local_50,uVar2,
                 CONCAT44(param_2._4_4_ + (float)((ulong)_DAT_03cabea0 >> 0x20),
                          param_2._0_4_ + (float)_DAT_03cabea0),2);
    if (local_50[0] == '\0') {
      FUN_020b4eac(local_70,uVar2,param_3,1,param_5);
      if (iVar1 != 1) {
        if (iVar1 != 0) {
          return;
        }
        if (local_70[0] == '\0') {
          return;
        }
        *(undefined1 *)param_1 = 1;
        uStack_38 = uStack_58;
        local_40 = local_60;
        goto LAB_020b4de4;
      }
    }
    else {
      if (iVar1 != 3) {
        return;
      }
      FUN_020b4eac(local_70,uVar2,param_3,2,param_5);
    }
    if (local_70[0] == '\0') {
      *(undefined1 *)param_1 = 1;
      param_1[3] = param_2._8_8_;
      param_1[2] = uVar2;
    }
  }
  return;
}


