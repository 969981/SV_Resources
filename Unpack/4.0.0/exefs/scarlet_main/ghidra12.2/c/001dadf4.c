/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001dadf4; name: FUN_001dadf4
 */


void FUN_001dadf4(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  if ((0 < *(long *)(param_1 + 0x7f8)) &&
     (iVar1 = FUN_001e0e28(param_2,param_3,*(undefined8 *)(param_1 + 0x1050),
                           *(undefined8 *)(param_1 + 0x1058)), 2999 < iVar1)) {
    *(undefined8 *)(param_1 + 0x1050) = param_2;
    *(undefined8 *)(param_1 + 0x1058) = param_3;
    *(undefined8 *)(param_1 + 0x1060) = *(undefined8 *)(param_1 + 0xf90);
  }
  if ((0 < *(long *)(param_1 + 0x7f0)) &&
     (iVar1 = FUN_001e0e28(param_2,param_3,*(undefined8 *)(param_1 + 0x1038),
                           *(undefined8 *)(param_1 + 0x1040)), 2999 < iVar1)) {
    *(undefined8 *)(param_1 + 0x1038) = param_2;
    *(undefined8 *)(param_1 + 0x1040) = param_3;
    *(undefined8 *)(param_1 + 0x1048) = *(undefined8 *)(param_1 + 0xf98);
  }
  return;
}


