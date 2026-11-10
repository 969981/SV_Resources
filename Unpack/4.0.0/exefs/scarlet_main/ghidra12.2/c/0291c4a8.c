/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0291c4a8; name: FUN_0291c4a8
 */


char * FUN_0291c4a8(long param_1,short param_2,byte param_3)

{
  byte bVar1;
  short sVar2;
  ulong uVar3;
  ulong uVar4;
  char *pcVar5;
  
  bVar1 = *(byte *)(param_1 + 0x2420);
  uVar3 = (ulong)bVar1;
  if (param_3 < bVar1) {
    uVar4 = (ulong)param_3;
    pcVar5 = (char *)(param_1 + uVar4 * 0x8c + 0x91);
    do {
      if ((*pcVar5 == '\0') && (*(int *)(pcVar5 + -0x85) == 1)) {
        sVar2 = FUN_01855d50(pcVar5 + -0x89);
        if (sVar2 == param_2) {
          return pcVar5 + -0x89;
        }
        uVar3 = (ulong)*(byte *)(param_1 + 0x2420);
      }
      uVar4 = uVar4 + 1;
      pcVar5 = pcVar5 + 0x8c;
    } while (uVar4 < uVar3);
  }
  return (char *)0x0;
}


