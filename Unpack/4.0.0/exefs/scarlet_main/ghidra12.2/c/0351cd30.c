/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0351cd30; name: FUN_0351cd30
 */


void FUN_0351cd30(long *param_1,undefined4 *param_2)

{
  long lVar1;
  long *local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined2 local_24;
  undefined1 local_22;
  
  lVar1 = param_1[0xb];
  *(short *)(param_1 + 0xb) = (short)lVar1 + 1;
  if ((short)lVar1 == 0) {
    if (param_1[8] != 0) {
      FUN_034e6c0c(0,*(undefined8 *)PTR_DAT_047e7038,param_1[8],0x4000000,*param_2,param_2[1],0);
      return;
    }
    local_30 = *param_2;
    uStack_2c = param_2[1];
    local_48 = param_1 + 5;
    local_40 = 0x4000000;
    local_38 = 0x3f800000;
    local_28 = 0x19;
    local_24 = 0x100;
    local_22 = 0;
    lVar1 = FUN_034e6ab0(*(undefined8 *)PTR_DAT_047e7038,&local_48,0);
    param_1[8] = lVar1;
    if (lVar1 == 0) {
      (**(code **)(*param_1 + 0x60))(local_38._4_4_,param_1,local_40,1);
    }
  }
  return;
}


