/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007a5bf0; name: FUN_007a5bf0
 */


undefined8 FUN_007a5bf0(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_0078ce3c(*(undefined8 *)(*(long *)(param_1 + 0xa8) + 0x180));
  if ((uVar1 & 1) == 0) {
    *(undefined **)(param_1 + 0x30) = PTR_LAB_047d0b98;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "NetNetworkStateJob::CompleteProcess";
    return 0;
  }
  return 5;
}


