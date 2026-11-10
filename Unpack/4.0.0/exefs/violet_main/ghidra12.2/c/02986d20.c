/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02986d20; name: FUN_02986d20
 */


void FUN_02986d20(long param_1,uint param_2,undefined2 param_3)

{
  if ((param_2 & 0xff) == 10) {
    return;
  }
  FUN_0129aff0(*(undefined8 *)(param_1 + 0x18),0xa7,param_2,param_3);
  return;
}


