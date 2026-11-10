/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00370da0; name: FUN_00370da0
 */


void FUN_00370da0(long *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  undefined8 *puVar5;
  
  FUN_0038db40(&DAT_047f10e0);
  if (DAT_047f10d8 != 0) goto LAB_00370e78;
                    /* try { // try from 00370dd4 to 00370ddb has its CatchHandler @ 00370eac */
  DAT_047f10d8 = FUN_003736a0(0);
                    /* try { // try from 00370de4 to 00370e17 has its CatchHandler @ 00370eb0 */
  iVar3 = FUN_0038c900();
  if (iVar3 == 0) {
    iVar3 = 1;
LAB_00370e04:
    DAT_047f10d0 = iVar3;
    puVar1 = PTR_FUN_047cc978;
  }
  else {
    uVar4 = FUN_0038c900();
    if (0x20 < uVar4) {
      iVar3 = 0x20;
      goto LAB_00370e04;
    }
    iVar3 = FUN_0038c900();
    DAT_047f10d0 = iVar3;
    puVar1 = PTR_FUN_047cc978;
    if (iVar3 < 1) goto LAB_00370e78;
  }
  do {
    lVar2 = DAT_047f10d8;
                    /* try { // try from 00370e44 to 00370e6f has its CatchHandler @ 00370eb8 */
    puVar5 = (undefined8 *)FUN_0038c780(0x30);
    *puVar5 = &LAB_003735a4;
    puVar5[1] = lVar2;
    puVar5[5] = 0;
    puVar5[3] = puVar1;
    puVar5[4] = puVar5;
    FUN_003540d4(puVar5 + 2,0,0,1);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
LAB_00370e78:
  lVar2 = DAT_047f10d8;
                    /* try { // try from 00370e7c to 00370e83 has its CatchHandler @ 00370eb4 */
  FUN_0038db60(&DAT_047f10e0);
  *param_1 = lVar2;
  param_1[1] = 1;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[3] = param_2;
  return;
}


