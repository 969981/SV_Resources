/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01796310; name: FUN_01796310
 */


undefined8 FUN_01796310(undefined4 param_1)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  int local_14;
  
  cVar1 = FUN_021fad50();
  if (cVar1 == '\x02') {
    bVar2 = FUN_01480e28(param_1);
    if (bVar2 != 0) {
      uVar3 = 0;
      while (FUN_018710a4(param_1,uVar3,&local_14), -1 < local_14) {
        uVar3 = uVar3 + 1;
        if (bVar2 == uVar3) {
          return 1;
        }
      }
    }
  }
  return 0;
}


