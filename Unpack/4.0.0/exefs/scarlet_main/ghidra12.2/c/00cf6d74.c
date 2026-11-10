/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00cf6d74; name: FUN_00cf6d74
 */


void FUN_00cf6d74(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  undefined1 auStack_8 [8];
  
  plVar2 = (long *)*param_2;
  if (plVar2 != (long *)0x0) {
    lVar1 = plVar2[0x86];
    plVar2[0x87] = plVar2[0x87] | 4;
    *(undefined1 *)(plVar2 + 0x86) = 1;
    if ((char)lVar1 == '\0') {
      FUN_00d37964(plVar2,2,1);
      (**(code **)(*plVar2 + 0x108))(plVar2);
      FUN_00cf6de0(plVar2 + 0x21,auStack_8);
    }
  }
  return;
}


