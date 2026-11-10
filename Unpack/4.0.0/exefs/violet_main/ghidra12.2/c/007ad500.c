/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007ad500; name: FUN_007ad500
 */


undefined8 FUN_007ad500(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  int local_30 [4];
  
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  uVar1 = FUN_0079c0a0(uVar2);
  if (((((uVar1 & 1) == 0) && (uVar1 = FUN_0079c92c(uVar2), (uVar1 & 1) == 0)) ||
      (FUN_00cbd7c0(local_30,*(long *)(param_1 + 0x58) + 0x1a8), local_30[0] != 0)) ||
     ((FUN_007a2238(local_30,*(undefined8 *)(param_1 + 0x58)), local_30[0] != 0 ||
      ((**(code **)(**(long **)(param_1 + 0x58) + 0xd0))
                 (local_30,*(long **)(param_1 + 0x58),*(undefined1 *)(param_1 + 0x60)),
      local_30[0] != 0)))) {
    return 1;
  }
  *(undefined **)(param_1 + 0x30) = PTR_FUN_047d0d48;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = "NetUpdatePlayerNumBackgroundJob::WaitUpdatePlayerNum";
  return 0;
}


