/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001eda90; name: FUN_001eda90
 */


undefined8 FUN_001eda90(long param_1,undefined4 param_2,undefined4 param_3,char *param_4)

{
  size_t sVar1;
  undefined8 uVar2;
  
  if ((*(byte *)(param_1 + 0x9ab) & 1) == 0) {
    *(undefined4 *)(param_1 + 0x280) = 0xf;
    if (param_4 == (char *)0x0) {
      sVar1 = 0;
    }
    else {
      sVar1 = strlen(param_4);
    }
    uVar2 = FUN_001f3328(param_1,param_2,param_3,param_4,sVar1,1);
    if ((int)uVar2 == 0) {
      *(byte *)(param_1 + 0x9ab) = *(byte *)(param_1 + 0x9ab) | 1;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


