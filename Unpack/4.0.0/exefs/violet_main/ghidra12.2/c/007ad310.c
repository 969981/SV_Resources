/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007ad310; name: FUN_007ad310
 */


undefined8 FUN_007ad310(long param_1)

{
  ulong uVar1;
  undefined1 auStack_20 [16];
  
  if (**(int **)(param_1 + 0x70) == 1) {
    return 5;
  }
  uVar1 = FUN_0078cdf4(*(undefined8 *)(param_1 + 0x68));
  if ((uVar1 & 1) != 0) {
    return 5;
  }
  FUN_00cbd7c0(auStack_20,*(long *)(param_1 + 0x70) + 4);
  if (*(char *)(param_1 + 0x60) == *(char *)(param_1 + 0x61)) {
    return 1;
  }
  *(undefined **)(param_1 + 0x30) = PTR_FUN_047d0d28;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = "NetUpdatePlayerNumJob::RetryUpdatePlayerNum";
  return 0;
}


