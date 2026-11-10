/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004ecde8; name: FUN_004ecde8
 */


void FUN_004ecde8(long *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar1 = PTR_DAT_047cda80;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = 0;
  puVar2 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x28);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[4] = 0;
    *(undefined4 *)(puVar2 + 4) = 0x3f800000;
    puVar2[1] = 0;
    *puVar2 = 0;
    puVar2[3] = 0;
    puVar2[2] = 0;
  }
  param_1[3] = (long)puVar2;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  *(undefined2 *)(param_1 + 4) = 1;
  *(undefined1 *)((long)param_1 + 0x22) = 0;
  return;
}


