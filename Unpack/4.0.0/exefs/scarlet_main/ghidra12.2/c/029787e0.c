/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029787e0; name: FUN_029787e0
 */


undefined8 FUN_029787e0(long param_1,char param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 local_30;
  undefined8 uStack_28;
  
  if (*(char *)(param_1 + 0x18) == param_2) {
    uVar1 = 0;
  }
  else {
    if (*(int *)(param_1 + 200) != 0) {
      *(undefined8 *)(param_1 + 0x3d0) = 0;
      *(undefined8 *)(param_1 + 0x3c8) = 0;
      *(undefined4 *)(param_1 + 0x58) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined4 *)(param_1 + 200) = 0;
      *(undefined8 *)(param_1 + 0x240) = 0;
      *(undefined8 *)(param_1 + 0x248) = 0;
      *(undefined8 *)(param_1 + 0x250) = 0;
      *(undefined8 *)(param_1 + 600) = 0;
      *(undefined8 *)(param_1 + 0x260) = 0;
      *(undefined4 *)(param_1 + 0x268) = 0;
    }
    if (param_2 != '\0') {
      local_30 = param_3;
      uStack_28 = param_4;
      FUN_02978668(param_1,8,&local_30,param_2);
    }
    uVar1 = 1;
    *(char *)(param_1 + 0x18) = param_2;
  }
  return uVar1;
}


