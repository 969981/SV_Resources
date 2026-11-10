/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0038ed44; name: FUN_0038ed44
 */


void FUN_0038ed44(long *param_1,undefined8 *param_2)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  long lVar4;
  
  pbVar3 = (byte *)*param_2;
  bVar1 = *pbVar3;
  if (bVar1 != 0) {
    do {
      iVar2 = toupper((uint)bVar1);
      *pbVar3 = (byte)iVar2;
      bVar1 = pbVar3[1];
      pbVar3 = pbVar3 + 1;
    } while (bVar1 != 0);
    pbVar3 = (byte *)*param_2;
  }
  lVar4 = FUN_0038c920(pbVar3);
  if (lVar4 == 0) {
    lVar4 = FUN_0038ccb0(param_2[1]);
    *param_1 = lVar4;
    return;
  }
  *param_1 = lVar4;
  return;
}


