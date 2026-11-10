/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01eb6f20; name: FUN_01eb6f20
 */


void FUN_01eb6f20(long param_1,undefined1 param_2,undefined1 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = FUN_00e5f228(param_1 + 0x40);
  *(undefined1 *)(param_1 + 0xfb) = 1;
  lVar3 = param_1 + (uVar1 & 0xff) * 0x18;
  *(undefined2 *)(lVar3 + 0x100) = 0x101;
  *(uint *)(lVar3 + 0x104) = (uint)uVar1 & 0xff;
  uVar2 = FUN_019965ec(param_1 + 0x40);
  *(undefined8 *)(lVar3 + 0x108) = uVar2;
  *(undefined1 *)(lVar3 + 0x110) = param_2;
  *(undefined1 *)(lVar3 + 0x111) = param_3;
  return;
}


