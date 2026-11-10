/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 014778b8; name: FUN_014778b8
 */


void FUN_014778b8(long param_1,char param_2)

{
  long *plVar1;
  undefined2 uVar2;
  
  if ((*(char *)(param_1 + 0x58) == param_2) && (*(char *)(param_1 + 0x59) == param_2)) {
    return;
  }
  plVar1 = (long *)(param_1 + 0x38);
  uVar2 = *(undefined2 *)(param_1 + 0x58);
  *(char *)(param_1 + 0x58) = param_2;
  *(char *)(param_1 + 0x59) = param_2;
  if (*(long *)(param_1 + 0x48) != 0) {
    FUN_00c6a584(*(long *)(param_1 + 0x48),plVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x0147790c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x20))(plVar1,uVar2);
  return;
}


