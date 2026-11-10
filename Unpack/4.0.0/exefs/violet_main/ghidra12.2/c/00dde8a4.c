/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00dde8a4; name: FUN_00dde8a4
 */


void FUN_00dde8a4(long param_1,ulong param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  if ((param_2 < *(ulong *)(param_1 + 0xb0)) &&
     ((*(ulong *)(param_1 + 0x48) <= param_2 ||
      ((*(ulong *)(*(long *)(param_1 + 0x40) + (param_2 >> 3 & 0x1ffffffffffffff8)) >>
        (param_2 & 0x3f) & 1) == 0)))) {
    puVar1 = (undefined8 *)(*(long *)(param_1 + 8) + param_2 * 0x80);
                    /* WARNING: Could not recover jumptable at 0x00dde8e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar1)(puVar1 + 4,param_3);
    return;
  }
  return;
}


