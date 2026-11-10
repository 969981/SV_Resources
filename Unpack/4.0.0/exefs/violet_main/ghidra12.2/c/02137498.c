/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02137498; name: FUN_02137498
 */


void FUN_02137498(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 local_18;
  
  if (*(long *)(param_2 + 0x58) == 0) {
    uVar1 = FUN_019c52dc(*(undefined8 *)(param_2 + 8));
    FUN_019c5220(&local_18,uVar1);
    FUN_019c516c((long *)(param_2 + 0x58),0);
    uVar1 = local_18;
    local_18 = 0;
    *(undefined8 *)(param_2 + 0x58) = uVar1;
    FUN_019c51a8(&local_18);
    FUN_02137520(param_1,*(undefined8 *)(param_2 + 0x58));
    return;
  }
  FUN_02137520(param_1);
  return;
}


