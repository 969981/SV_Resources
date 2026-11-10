/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007e608c; name: FUN_007e608c
 */


void FUN_007e608c(long *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar1 = PTR_DAT_047d1480;
  puVar2 = (undefined8 *)param_1[0xe];
  param_1[0xc] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  *(undefined2 *)((long)param_1 + 0x5a) = 0;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2);
    FUN_007bfaa0(puVar2);
    param_1[0xe] = 0;
  }
  FUN_007ee1bc(param_1);
  return;
}


