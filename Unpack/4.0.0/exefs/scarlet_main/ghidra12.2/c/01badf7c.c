/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01badf7c; name: FUN_01badf7c
 */


undefined8 FUN_01badf7c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined8 local_38;
  long *local_28;
  
  uVar1 = 0x18;
  if (DAT_0480c8c8 == '\0') {
    uVar1 = 0xffffffffffffffff;
  }
  FUN_01baf208(auStack_40,param_1,uVar1);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  return local_38;
}


