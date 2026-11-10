/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01974af0; name: FUN_01974af0
 */


undefined8 FUN_01974af0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined8 local_38;
  long *local_28;
  
  uVar1 = 0xc0;
  if (DAT_0481b870 == '\0') {
    uVar1 = 0;
  }
  FUN_01974b54(auStack_40,param_1,uVar1,DAT_0481b878);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  return local_38;
}


