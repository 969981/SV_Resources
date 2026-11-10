/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029427a0; name: FUN_029427a0
 */


undefined4 FUN_029427a0(long param_1,byte param_2)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x38) + 0x78);
  lVar3 = *(long *)(lVar2 + 0x30);
  if (lVar3 == 0) {
    return 0;
  }
  uVar1 = 0;
  if ((-1 < (char)param_2) && ((uint)param_2 < *(uint *)(lVar3 + 0xc))) {
    lVar2 = *(long *)(lVar2 + (ulong)param_2 * 8 + 0x38);
    if (lVar2 == 0) {
      return 0;
    }
    uVar1 = *(undefined4 *)(lVar2 + 0xc);
  }
  return uVar1;
}


