/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02c80e3c; name: FUN_02c80e3c
 */


bool FUN_02c80e3c(long param_1,undefined8 *param_2)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = (*(code *)**(undefined8 **)*param_2)
                    ((undefined8 *)*param_2,*(undefined4 *)(param_1 + 0x114));
  if (*(long *)(lVar2 + 8) == 0) {
    bVar1 = true;
  }
  else {
    bVar1 = *(char *)(param_1 + 0x11c) == '\0';
  }
  return bVar1;
}


