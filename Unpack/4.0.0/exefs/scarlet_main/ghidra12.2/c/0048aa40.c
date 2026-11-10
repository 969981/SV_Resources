/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0048aa40; name: FUN_0048aa40
 */


undefined8 FUN_0048aa40(undefined8 param_1,int *param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  byte bVar7;
  long lVar8;
  long lVar9;
  byte local_90 [80];
  
  if (param_2 == (int *)0x0) {
LAB_0048ab1c:
    uVar4 = 0;
  }
  else {
    iVar3 = *param_2;
    if (0 < iVar3) {
      lVar9 = *(long *)(param_2 + 2);
      lVar8 = 0;
      iVar5 = 0;
      do {
        while( true ) {
          bVar2 = *(byte *)(lVar9 + lVar8);
          bVar7 = 0x2e;
          if (bVar2 < 0x7f) {
            bVar7 = bVar2;
            if (bVar2 != 10) {
              bVar7 = 0x2e;
            }
            bVar1 = bVar2;
            if (bVar2 != 0xd) {
              bVar1 = bVar7;
            }
            bVar7 = bVar2;
            if (bVar2 < 0x20) {
              bVar7 = bVar1;
            }
          }
          iVar6 = iVar5 + 1;
          local_90[iVar5] = bVar7;
          if (iVar5 < 0x4f) break;
          iVar3 = FUN_003e8f00(param_1,local_90,iVar6);
          if (iVar3 < 1) goto LAB_0048ab1c;
          iVar3 = *param_2;
          iVar6 = 0;
          lVar8 = lVar8 + 1;
          iVar5 = iVar6;
          if (iVar3 <= lVar8) goto LAB_0048aaf8;
        }
        lVar8 = lVar8 + 1;
        iVar5 = iVar6;
      } while (lVar8 < iVar3);
LAB_0048aaf8:
      if ((0 < iVar6) && (iVar3 = FUN_003e8f00(param_1,local_90), iVar3 < 1)) goto LAB_0048ab1c;
    }
    uVar4 = 1;
  }
  return uVar4;
}


