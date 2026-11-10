/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ec8660; name: FUN_01ec8660
 */


void FUN_01ec8660(int *param_1,long param_2,long *param_3)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  ushort uVar4;
  long lVar5;
  int local_18 [2];
  
  FUN_01ec8708(local_18);
  if (local_18[0] != 0) {
    *param_1 = local_18[0];
    return;
  }
  lVar5 = *param_3;
  lVar3 = param_3[2];
  lVar1 = lVar3 + 1;
  bVar2 = *(byte *)(lVar5 + lVar3);
  param_3[2] = lVar1;
  if (0x81 < bVar2) {
    *param_1 = 1;
    return;
  }
  if (bVar2 == 0x80) {
    uVar4 = (ushort)*(byte *)(lVar5 + lVar1);
    lVar3 = lVar3 + 2;
  }
  else {
    if (bVar2 != 0x81) {
      *(ushort *)(param_2 + 2) = (ushort)bVar2;
      goto LAB_01ec86d4;
    }
    uVar4 = *(ushort *)(lVar5 + lVar1);
    lVar3 = lVar3 + 3;
  }
  param_3[2] = lVar3;
  *(ushort *)(param_2 + 2) = uVar4;
LAB_01ec86d4:
  *param_1 = 0;
  return;
}


