/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f89568; name: FUN_00f89568
 */


void FUN_00f89568(long param_1)

{
  long *plVar1;
  undefined2 uVar2;
  
  if ((*(char *)(param_1 + 0x58) != -0x7e) || (*(char *)(param_1 + 0x59) != -0x7e)) {
    uVar2 = *(undefined2 *)(param_1 + 0x58);
    plVar1 = (long *)(param_1 + 0x38);
    *(undefined2 *)(param_1 + 0x58) = 0x8282;
    if (*(long *)(param_1 + 0x48) != 0) {
      FUN_00c6a584(*(long *)(param_1 + 0x48),plVar1);
    }
    (**(code **)(*plVar1 + 0x20))(plVar1,uVar2);
  }
  FUN_00f8961c(param_1);
  if (*(long *)(param_1 + 0x208) != 0) {
    FUN_00f89938(param_1,*(long *)(param_1 + 0x208) + 0xb0,*(undefined1 *)(param_1 + 0x240));
    return;
  }
  if (*(char *)(param_1 + 0x240) == '\0') {
    *(undefined1 *)(param_1 + 0x11a) = 1;
  }
  return;
}


