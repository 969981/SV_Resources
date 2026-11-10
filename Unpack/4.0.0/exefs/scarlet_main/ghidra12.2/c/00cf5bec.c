/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00cf5bec; name: FUN_00cf5bec
 */


undefined8 FUN_00cf5bec(long param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  
  cVar1 = FUN_00cf5c50(*(undefined8 *)(param_1 + 0x70));
  if ((((char)param_2[1] == cVar1) &&
      (iVar2 = FUN_00dbf838(*(undefined8 *)(param_1 + 0x70)), iVar2 == *param_2)) &&
     (uVar3 = FUN_021f418c(*(undefined8 *)(param_1 + 0x70),(long)param_2 + 6), (uVar3 & 1) != 0)) {
    return 1;
  }
  return 0;
}


