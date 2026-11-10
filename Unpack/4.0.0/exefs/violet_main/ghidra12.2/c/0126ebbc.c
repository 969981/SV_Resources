/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0126ebbc; name: FUN_0126ebbc
 */


void FUN_0126ebbc(long param_1,undefined1 *param_2,int *param_3)

{
  undefined1 uVar1;
  
  uVar1 = FUN_0126ec0c(*(undefined8 *)(param_1 + 0x38));
  if (*param_3 != 0) {
    uVar1 = FUN_0126ee6c(*(undefined8 *)(param_1 + 0x38));
  }
  *param_2 = uVar1;
  return;
}


