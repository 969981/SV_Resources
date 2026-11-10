/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02986828; name: FUN_02986828
 */


void FUN_02986828(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (*(char *)(param_2 + 0x28) == '\b') {
    uVar1 = FUN_01243584();
    FUN_0124dc24(uVar1,8,*(undefined4 *)(param_2 + 0x2c));
    return;
  }
  return;
}


