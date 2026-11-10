/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f56eb8; name: FUN_01f56eb8
 */


void FUN_01f56eb8(long *param_1,ulong param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  
  if ((ulong)param_1[0x15] <= param_2) {
    return;
  }
  puVar1 = (undefined8 *)(*param_1 + param_2 * 0x80);
  pcVar2 = (code *)puVar1[1];
  if (pcVar2 != (code *)0x0) {
    puVar1[2] = 0;
    puVar1[3] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    (*pcVar2)(puVar1 + 4);
  }
  *puVar1 = FUN_00b58f5c;
  puVar1[1] = &LAB_00b58fd8;
  puVar1[2] = &LAB_00b58fdc;
  puVar1[3] = &LAB_00b58fe0;
  FUN_01f56b34(param_1,param_2);
  return;
}


