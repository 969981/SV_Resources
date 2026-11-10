/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00367598; name: FUN_00367598
 */


void FUN_00367598(undefined8 *param_1,void *param_2,ulong param_3)

{
  undefined8 *puVar1;
  void *__dest;
  
  if (param_3 < 0x18) {
    *param_1 = 0;
    *(char *)(param_1 + 1) = (char)param_3;
    if (param_3 == 0) {
      return;
    }
  }
  else {
    puVar1 = (undefined8 *)FUN_0038c780(param_3 + 0x30);
    puVar1[5] = 1;
    *(undefined4 *)(puVar1 + 1) = 3;
    puVar1[2] = puVar1;
    puVar1[3] = &LAB_00368360;
    *puVar1 = puVar1 + 5;
    puVar1[4] = puVar1;
    *param_1 = puVar1;
    param_1[1] = param_3;
    param_1[2] = puVar1 + 6;
    if (puVar1 != (undefined8 *)0x0) {
      __dest = (void *)param_1[2];
      goto LAB_00367618;
    }
  }
  __dest = (void *)((long)param_1 + 9);
LAB_00367618:
  memcpy(__dest,param_2,param_3);
  return;
}


