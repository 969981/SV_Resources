/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007ae194; name: FUN_007ae194
 */


undefined8 FUN_007ae194(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  int local_38 [4];
  undefined4 local_28 [2];
  
  if ((**(int **)(param_1 + 0x60) == 1) ||
     (uVar1 = FUN_0078cdf4(*(undefined8 *)(*(long *)(param_1 + 0x68) + 0x180)), (uVar1 & 1) != 0)) {
    return 5;
  }
  FUN_00cbd7c0(local_38,*(long *)(param_1 + 0x60) + 4);
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  if (local_38[0] == 0) {
    local_38[0] = 0;
    local_28[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_28);
    FUN_00cbd7c0(auStack_58,local_38);
    FUN_0078cb28(uVar2,auStack_58);
  }
  else {
    FUN_00cbd7c0(auStack_48,*(long *)(param_1 + 0x60) + 4);
    FUN_0078cb94(uVar2,auStack_48);
  }
  *(undefined8 *)(param_1 + 0x58) = 0;
  return 1;
}


