/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00a3a174; name: FUN_00a3a174
 */


void FUN_00a3a174(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_019d8b6c();
  if (*(long *)(lVar1 + 0xf0) == 0) {
    uVar2 = (**(code **)(**(long **)(param_1 + 8) + 0x10))(*(long **)(param_1 + 8),0xff000,8);
    *(undefined8 *)(lVar1 + 0xf0) = uVar2;
  }
  FUN_0192cbc0(lVar1 + 0xe8);
  lVar1 = FUN_019d8b6c();
  if (*(long *)(lVar1 + 0x110) == 0) {
    uVar2 = (**(code **)(**(long **)(param_1 + 8) + 0x10))(*(long **)(param_1 + 8),0xff000,8);
    *(undefined8 *)(lVar1 + 0x110) = uVar2;
  }
  FUN_0192cbc0(lVar1 + 0x108);
  lVar1 = FUN_019d8b6c();
  if (*(long *)(lVar1 + 0x130) == 0) {
    uVar2 = (**(code **)(**(long **)(param_1 + 8) + 0x10))(*(long **)(param_1 + 8),0xff000,8);
    *(undefined8 *)(lVar1 + 0x130) = uVar2;
  }
  FUN_0192cbc0(lVar1 + 0x128);
  lVar1 = FUN_019d8b6c();
  if (*(long *)(lVar1 + 0x150) == 0) {
    uVar2 = (**(code **)(**(long **)(param_1 + 8) + 0x10))(*(long **)(param_1 + 8),0xff000,8);
    *(undefined8 *)(lVar1 + 0x150) = uVar2;
  }
  FUN_0192cbc0(lVar1 + 0x148);
  return;
}


