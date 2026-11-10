/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02607a70; name: FUN_02607a70
 */


undefined8 FUN_02607a70(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined8 local_38;
  long *local_28;
  
  uVar1 = 0x10;
  if (DAT_04854778 == '\0') {
    uVar1 = 0;
  }
  FUN_02608160(auStack_40,param_1,uVar1,DAT_04854780);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  return local_38;
}


