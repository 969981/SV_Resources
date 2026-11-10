/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003df000; name: FUN_003df000
 */


undefined8 FUN_003df000(long param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  
  if (param_2 == (undefined4 *)0x0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 4) = param_2[1];
  uVar1 = FUN_003df070(param_1,*(undefined8 *)(param_2 + 2),*param_2);
  if ((int)uVar1 != 0) {
    uVar2 = *(ulong *)(param_1 + 0x10) & 0x80;
    *(ulong *)(param_1 + 0x10) = uVar2;
    uVar1 = 1;
    *(ulong *)(param_1 + 0x10) = *(ulong *)(param_2 + 4) & 0xffffffffffffff7f | uVar2;
  }
  return uVar1;
}


