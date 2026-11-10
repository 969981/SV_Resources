/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


