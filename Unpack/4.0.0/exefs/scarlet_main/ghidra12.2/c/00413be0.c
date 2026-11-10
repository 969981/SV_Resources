/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00413be0; name: FUN_00413be0
 */


undefined8 FUN_00413be0(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_003eb8f0(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_2 + 0x40));
  uVar2 = 0;
  if (((lVar1 != 0) &&
      (lVar1 = FUN_003eb8f0(*(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_2 + 0x60)),
      uVar2 = 0, lVar1 != 0)) &&
     (lVar1 = FUN_003eb8f0(*(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_2 + 0x68)),
     uVar2 = 0, lVar1 != 0)) {
    uVar2 = 1;
    *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
  }
  return uVar2;
}


