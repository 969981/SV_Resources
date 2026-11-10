/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028ff3d0; name: FUN_028ff3d0
 */


void FUN_028ff3d0(long param_1,undefined4 param_2)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = *(long *)(param_1 + 0x140) - *(long *)(param_1 + 0x138);
  *(undefined4 *)(param_1 + 0x394) = param_2;
  if ((ulong)(lVar1 != 8) < (ulong)(lVar1 >> 3)) {
    uVar2 = (ulong)(lVar1 != 8);
    do {
      FUN_019449f8(param_1,uVar2);
      uVar2 = (ulong)((int)uVar2 + 1);
    } while (uVar2 < (ulong)(*(long *)(param_1 + 0x140) - *(long *)(param_1 + 0x138) >> 3));
  }
  return;
}


