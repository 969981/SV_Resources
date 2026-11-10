/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01eba4d4; name: FUN_01eba4d4
 */


undefined8 FUN_01eba4d4(long *param_1,undefined4 *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if ((lVar2 == 0) || (*(ulong *)(lVar2 + 0x10) < *(long *)(lVar2 + 0x18) + 5U)) {
    return 0;
  }
  *(undefined1 *)(*(long *)(lVar2 + 8) + *(long *)(lVar2 + 0x18)) = 0x88;
  lVar1 = *(long *)(lVar2 + 0x18) + 1;
  *(long *)(lVar2 + 0x18) = lVar1;
  *(undefined4 *)(*(long *)(lVar2 + 8) + lVar1) = *param_2;
  *(long *)(lVar2 + 0x18) = *(long *)(lVar2 + 0x18) + 4;
  return 1;
}


