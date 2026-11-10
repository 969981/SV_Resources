/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0172b7f0; name: FUN_0172b7f0
 */


void FUN_0172b7f0(long param_1,undefined8 param_2,int param_3)

{
  ulong uVar1;
  
  if (param_3 != 0) {
    uVar1 = FUN_0172b830();
    if ((uVar1 & 1) != 0) {
      FUN_0172b8a0(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),param_3);
      return;
    }
  }
  return;
}


