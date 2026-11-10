/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031cf710; name: FUN_031cf710
 */


void FUN_031cf710(long param_1,long param_2,long param_3)

{
  if (param_2 == 0) {
    return;
  }
  if (*(ulong *)(param_1 + 0x28) < param_3 + 0x40U) {
    *(int *)(*(long *)(param_1 + 0x30) + 0x20) = *(int *)(*(long *)(param_1 + 0x30) + 0x20) + -1;
                    /* WARNING: Could not recover jumptable at 0x031cf74c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x10) + 0x18))
              (*(long **)(param_1 + 0x10),param_2 - *(int *)(param_2 + -4),param_3 + 0x44);
    return;
  }
  if (*(long *)(param_1 + 0x38) == (param_3 + 0x3fU & 0xffffffffffffffc0) + param_2) {
    *(long *)(param_1 + 0x38) = param_2;
    FUN_031cf578();
    return;
  }
  FUN_031cf778();
  return;
}


