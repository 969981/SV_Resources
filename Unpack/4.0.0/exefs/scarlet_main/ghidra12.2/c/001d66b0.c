/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001d66b0; name: FUN_001d66b0
 */


undefined8 FUN_001d66b0(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (*(long *)(param_2 + 8) == 0) {
    uVar1 = 0x17;
  }
  else {
    *(undefined1 **)(param_2 + 0x58) = &LAB_001d676c;
    *(undefined1 **)(param_2 + 0x60) = &LAB_001d6778;
    uVar1 = FUN_003800e0(param_2 + 0x18,"1.2.11.f-NINTENDO-SDK-v1",0x70);
    if ((int)uVar1 == 0) {
      *(undefined4 *)(param_2 + 0x10) = 1;
    }
    else {
      FUN_001d6780(param_1,param_2 + 0x18);
      uVar1 = 0x3d;
    }
  }
  return uVar1;
}


