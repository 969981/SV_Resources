/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007ad24c; name: FUN_007ad24c
 */


undefined8 FUN_007ad24c(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  int local_30 [4];
  
  uVar1 = FUN_0079c92c(*(undefined8 *)(param_1 + 0x58));
  if ((uVar1 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x58);
    uVar1 = FUN_0079c0a0(uVar2);
    if ((((uVar1 & 1) != 0) || (uVar1 = FUN_0079c92c(uVar2), (uVar1 & 1) != 0)) &&
       (*(char *)(param_1 + 0x60) != *(char *)(param_1 + 0x61))) {
      FUN_007ad46c(local_30,*(undefined8 *)(param_1 + 0x68));
      if (local_30[0] == 0) {
        *(undefined1 *)(param_1 + 0x60) = *(undefined1 *)(param_1 + 0x61);
        FUN_0078cd58(*(undefined8 *)(param_1 + 0x68),1);
        *(undefined **)(param_1 + 0x30) = PTR_FUN_047d0d30;
        *(undefined8 *)(param_1 + 0x38) = 0;
        *(char **)(param_1 + 0x40) = "NetUpdatePlayerNumJob::WaitUpdatePlayerNum";
        return 0;
      }
      return 5;
    }
  }
  return 1;
}


