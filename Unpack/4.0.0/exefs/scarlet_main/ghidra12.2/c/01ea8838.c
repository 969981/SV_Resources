/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ea8838; name: FUN_01ea8838
 */


void FUN_01ea8838(undefined4 *param_1,ushort *param_2,long *param_3)

{
  long lVar1;
  byte bVar2;
  ushort uVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = *param_3;
  lVar5 = param_3[2];
  lVar1 = lVar5 + 1;
  bVar2 = *(byte *)(lVar6 + lVar5);
  uVar3 = (ushort)bVar2;
  param_3[2] = lVar1;
  if (0x81 < bVar2) {
    uVar4 = 1;
    goto LAB_01ea886c;
  }
  if (bVar2 == 0x80) {
    uVar3 = (ushort)*(byte *)(lVar6 + lVar1);
    lVar5 = lVar5 + 2;
LAB_01ea887c:
    param_3[2] = lVar5;
  }
  else if (bVar2 == 0x81) {
    uVar3 = *(ushort *)(lVar6 + lVar1);
    lVar5 = lVar5 + 3;
    goto LAB_01ea887c;
  }
  uVar4 = 0;
  *param_2 = uVar3;
LAB_01ea886c:
  *param_1 = uVar4;
  return;
}


