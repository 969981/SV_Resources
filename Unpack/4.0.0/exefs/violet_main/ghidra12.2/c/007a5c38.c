/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007a5c38; name: FUN_007a5c38
 */


undefined8 FUN_007a5c38(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  int local_30 [4];
  undefined4 local_18 [2];
  
  if (*(char *)(*(long *)(param_1 + 0x58) + 0x28) == '\0') {
    uVar2 = *(undefined8 *)(param_1 + 0xa8);
    uVar1 = FUN_0079c0a0(uVar2);
    if (((uVar1 & 1) == 0) && (uVar1 = FUN_0079c92c(uVar2), (uVar1 & 1) == 0)) {
      local_30[0] = 0xc406;
    }
    else {
      FUN_00cbd7c0(local_30,*(long *)(param_1 + 0xa8) + 0x1a8);
      if (local_30[0] != 0) {
        FUN_00cbd7c0(local_30,*(long *)(param_1 + 0xa8) + 0x1a8);
        goto LAB_007a5c84;
      }
      uVar1 = (**(code **)(**(long **)(param_1 + 0xa8) + 0x158))();
      if ((uVar1 & 1) != 0) {
        return 5;
      }
      local_30[0] = 0;
    }
  }
  else {
    if (*(int *)(param_1 + 0x60) == 1) {
      FUN_0078cc8c();
    }
    local_30[0] = 0x6c05;
  }
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_30 | 4),(Result *)local_18);
LAB_007a5c84:
  FUN_018ff39c(param_1 + 0x94,local_30);
  *(undefined **)(param_1 + 0x30) = PTR_FUN_047d0b80;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = "NetNetworkStateJob::WaitBackgroundJobEnd";
  return 0;
}


