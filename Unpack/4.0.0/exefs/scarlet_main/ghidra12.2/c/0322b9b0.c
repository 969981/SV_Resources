/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0322b9b0; name: FUN_0322b9b0
 */


undefined4 FUN_0322b9b0(undefined8 *param_1)

{
  long *__s1;
  long *plVar1;
  int iVar2;
  undefined4 uVar3;
  long *plVar5;
  long *plVar4;
  
  __s1 = (long *)*param_1;
  plVar1 = (long *)param_1[1];
  if (__s1 < plVar1) {
    plVar5 = __s1;
    do {
      plVar4 = (long *)((long)plVar5 + 1);
      if ((char)*plVar5 == '#') {
        if ((long)plVar1 - (long)__s1 == 8) {
          if (*__s1 == 0x3030464e49232e31) {
            return 1;
          }
          iVar2 = memcmp(__s1,"1.#QNAN0",8);
          uVar3 = 3;
        }
        else {
          if ((long)plVar1 - (long)__s1 != 9) {
            return 0xffffffff;
          }
          if (*__s1 == 0x30464e49232e312d && (char)__s1[1] == '0') {
            return 0;
          }
          iVar2 = memcmp(__s1,"-1.#QNAN0",9);
          if (iVar2 == 0) {
            return 2;
          }
          iVar2 = memcmp(__s1,"-1.#IND00",9);
          uVar3 = 4;
        }
        if (iVar2 != 0) {
          uVar3 = 0xffffffff;
        }
        return uVar3;
      }
      plVar5 = plVar4;
    } while (plVar1 != plVar4);
  }
  return 5;
}


