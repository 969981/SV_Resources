/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0101c344; name: FUN_0101c344
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0101c344(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_0101c3b8(param_1);
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined2 *)(param_1 + 0x90) = 0x101;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  uVar2 = _UNK_03caa728;
  uVar1 = _DAT_03caa720;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0x3f00000000000000;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x138) = uVar2;
  *(undefined8 *)(param_1 + 0x130) = uVar1;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 200) = uVar2;
  *(undefined8 *)(param_1 + 0xc0) = uVar1;
  uVar2 = _UNK_03cabe58;
  uVar1 = _DAT_03cabe50;
  *(undefined4 *)(param_1 + 0xd8) = 1;
  *(undefined8 *)(param_1 + 0xf8) = uVar2;
  *(undefined8 *)(param_1 + 0xf0) = uVar1;
  return;
}


