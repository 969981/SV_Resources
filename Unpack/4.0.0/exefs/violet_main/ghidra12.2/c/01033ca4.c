/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01033ca4; name: FUN_01033ca4
 */


void FUN_01033ca4(long param_1)

{
  long *plVar1;
  undefined2 uVar2;
  
  FUN_01033d28();
  if ((*(char *)(param_1 + 0x58) == -0x7e) && (*(char *)(param_1 + 0x59) == -0x7e)) {
    return;
  }
  uVar2 = *(undefined2 *)(param_1 + 0x58);
  plVar1 = (long *)(param_1 + 0x38);
  *(undefined2 *)(param_1 + 0x58) = 0x8282;
  if (*(long *)(param_1 + 0x48) != 0) {
    FUN_00c6a584(*(long *)(param_1 + 0x48),plVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x01033d08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x20))(plVar1,uVar2);
  return;
}


