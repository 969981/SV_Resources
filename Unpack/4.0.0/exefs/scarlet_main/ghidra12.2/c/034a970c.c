/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034a970c; name: FUN_034a970c
 */


void FUN_034a970c(long param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  
  FUN_034b098c(param_1,*(ushort *)((long)param_2 + 0x24) & 1);
  if (*(long *)(param_1 + 0x90) != 0) {
    if ((*(byte *)(*(long *)(param_1 + 0x90) + 0x98) & 1) == 0) {
      FUN_034b07f4(param_1,*param_2);
    }
    else {
      FUN_034b02d8(param_1);
    }
  }
  uVar1 = *(undefined1 *)(param_2 + 5);
  if (((*(ushort *)((long)param_2 + 0x24) & 1) != 0) && (*(long *)(param_1 + 0xa0) != 0)) {
    *(ushort *)((long)param_2 + 0x24) = *(ushort *)((long)param_2 + 0x24) & 0xfffe;
    *(undefined1 *)(param_2 + 5) = 0;
    (**(code **)(**(long **)(param_1 + 0xa0) + 0x120))(*(long **)(param_1 + 0xa0),param_2);
  }
  if (*(long *)(param_1 + 0x98) == 0) {
    return;
  }
  *(undefined1 *)(param_2 + 5) = uVar1;
  param_2[2] = param_1;
                    /* WARNING: Could not recover jumptable at 0x034a97b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x98) + 0x120))(*(long **)(param_1 + 0x98),param_2);
  return;
}


