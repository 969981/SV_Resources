/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001f4f5c; name: FUN_001f4f5c
 */


undefined8 FUN_001f4f5c(long *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *param_1;
  *(long *)(lVar3 + 0x18) = *(long *)(lVar3 + 0x18) + -9;
  FUN_001f4614();
  FUN_001ed53c(*(undefined8 *)(lVar3 + 0x20),*(undefined4 *)(param_2 + 0x10));
  lVar1 = *(long *)(lVar3 + 0x20) + 4;
  *(long *)(lVar3 + 0x20) = lVar1;
  FUN_001ed53c(lVar1,*(undefined4 *)(param_2 + 0x14));
  *(long *)(lVar3 + 0x20) = *(long *)(lVar3 + 0x20) + 4;
  uVar2 = FUN_001f4310(param_1,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x20));
  if ((int)uVar2 == -0x1f6) {
    uVar2 = 0xfffffdf6;
  }
  return uVar2;
}


