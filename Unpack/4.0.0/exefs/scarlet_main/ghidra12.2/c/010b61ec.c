/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010b61ec; name: FUN_010b61ec
 */


void FUN_010b61ec(long *param_1,ulong param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  code *pcVar4;
  
  if ((ulong)param_1[0x15] <= param_2) {
    return;
  }
  puVar1 = (undefined8 *)(*param_1 + param_2 * 0x80);
  pcVar4 = (code *)puVar1[1];
  if (pcVar4 != (code *)0x0) {
    puVar1[2] = 0;
    puVar1[3] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    (*pcVar4)(puVar1 + 4);
  }
  puVar3 = PTR_LAB_047d97e8;
  puVar2 = PTR_LAB_047d97e0;
  *puVar1 = PTR_LAB_047d97d8;
  puVar1[1] = puVar2;
  puVar2 = PTR_LAB_047d97f0;
  puVar1[2] = puVar3;
  puVar1[3] = puVar2;
  FUN_010b4d84(param_1,param_2);
  return;
}


