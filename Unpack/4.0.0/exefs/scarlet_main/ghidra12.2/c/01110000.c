/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01110000; name: FUN_01110000
 */


bool FUN_01110000(undefined8 *param_1)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  char *__s;
  
  __s = (char *)*param_1;
  pcVar3 = strchr(__s,0x2f);
  bVar1 = false;
  if (pcVar3 != (char *)0x0) {
    iVar2 = strncmp(__s,"aoc",3);
    bVar1 = iVar2 == 0;
  }
  return bVar1;
}


