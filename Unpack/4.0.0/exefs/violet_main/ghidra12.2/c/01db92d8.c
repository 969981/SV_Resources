/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01db92d8; name: FUN_01db92d8
 */


void FUN_01db92d8(char *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_2 + 0x198);
  plVar1 = *(long **)(param_2 + 0x1b0);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))(plVar1);
  }
  if ((*(int *)(param_1 + 4) != 2) ||
     (((lVar2 != -0x4b6089bcf0c95f16 && (lVar2 != -0x4b6086bcf0c959fd)) &&
      (lVar2 != 0x21789bf2d9b9ffe9)))) {
    if (*param_1 == '\0') {
      FUN_01db94ec(param_2);
    }
    else {
      FUN_01db93ac(param_2);
    }
  }
  if (plVar1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01db93a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x20))(plVar1);
  return;
}


