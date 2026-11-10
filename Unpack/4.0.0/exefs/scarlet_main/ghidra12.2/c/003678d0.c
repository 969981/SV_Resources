/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003678d0; name: FUN_003678d0
 */


void FUN_003678d0(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  size_t __n;
  undefined8 *puVar2;
  char *__s;
  
  __s = (char *)*param_2;
  __n = strlen(__s);
  *param_2 = 0;
  if (__n < 0x18) {
    *param_1 = 0;
    *(char *)(param_1 + 1) = (char)__n;
    memcpy((void *)((long)param_1 + 9),__s,__n);
  }
  else {
    puVar2 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x38);
    if (puVar2 != (undefined8 *)0x0) {
      puVar2[5] = 1;
      *puVar2 = puVar2 + 5;
      *(undefined4 *)(puVar2 + 1) = 3;
      puVar1 = PTR_LAB_047ccee8;
      puVar2[4] = puVar2;
      puVar2[2] = puVar2;
      puVar2[3] = puVar1;
      puVar2[6] = __s;
      param_1[1] = __n;
      param_1[2] = __s;
      *param_1 = puVar2;
      return;
    }
    param_1[1] = __n;
    param_1[2] = __s;
    *param_1 = 0;
  }
  if (__s != (char *)0x0) {
                    /* try { // try from 0036798c to 0036798f has its CatchHandler @ 003679a0 */
    free(__s);
  }
  return;
}


