/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0182a5f0; name: FUN_0182a5f0
 */


void FUN_0182a5f0(undefined8 param_1,undefined1 param_2,undefined1 param_3,undefined2 *param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [16];
  
  lVar1 = FUN_0149b698();
  *(undefined2 *)(lVar1 + 0x10) = *param_4;
  *(undefined1 *)(lVar1 + 0x12) = param_2;
  *(undefined1 *)(lVar1 + 0x13) = param_3;
  *(undefined1 *)(lVar1 + 0x14) = 0;
  *(undefined2 *)(lVar1 + 0x16) = 0;
  FUN_0168125c(auStack_50);
  uVar2 = FUN_01678f00(param_1);
  FUN_01679420(uVar2,param_4,(undefined2 *)(lVar1 + 0x10),auStack_50);
  return;
}


