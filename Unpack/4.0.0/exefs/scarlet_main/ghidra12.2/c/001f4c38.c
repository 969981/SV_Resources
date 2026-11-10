/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001f4c38; name: FUN_001f4c38
 */


undefined8 FUN_001f4c38(long *param_1,ulong *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if ((ulong)(*(long *)(lVar3 + 0x10) - *(long *)(lVar3 + 0x20)) < *param_2) {
    uVar1 = 0xfffffdf6;
  }
  else {
    *(long *)(lVar3 + 0x18) = *(long *)(lVar3 + 0x18) + -9;
    FUN_001f4614();
    lVar2 = FUN_001f4ca8(*(undefined8 *)(lVar3 + 0x20),param_2[3],param_2[2]);
    uVar1 = 0;
    *(long *)(lVar3 + 0x20) = *(long *)(lVar3 + 0x20) + lVar2;
  }
  return uVar1;
}


