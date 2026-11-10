/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f89728; name: FUN_01f89728
 */


undefined8 FUN_01f89728(long param_1)

{
  long *plVar1;
  undefined2 uVar2;
  
  if (*(char *)(param_1 + 0x129) != '\0') {
    *(undefined1 *)(param_1 + 0x315) = 1;
    *(undefined4 *)(param_1 + 0x318) = 0;
  }
  if ((*(char *)(param_1 + 0x58) != '\x02') || (*(char *)(param_1 + 0x59) != '\x02')) {
    plVar1 = (long *)(param_1 + 0x38);
    uVar2 = *(undefined2 *)(param_1 + 0x58);
    *(undefined2 *)(param_1 + 0x58) = 0x202;
    if (*(long *)(param_1 + 0x48) != 0) {
      FUN_00c6a584(*(long *)(param_1 + 0x48),plVar1);
    }
    (**(code **)(*plVar1 + 0x20))(plVar1,uVar2);
  }
  return 1;
}


