/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001645b0; name: FUN_001645b0
 */


/* WARNING: Control flow encountered bad instruction data */

long FUN_001645b0(long *param_1,ulong param_2,ulong param_3)

{
  undefined4 *puVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  int __c;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  lVar2 = *param_1;
  uVar5 = param_1[1] << 1;
  uVar6 = param_1[1] + 0x800000;
  if (uVar6 <= uVar5) {
    uVar5 = uVar6;
  }
  if (uVar5 <= param_2) {
    uVar5 = param_2;
  }
  uVar6 = uVar5 * 4;
  if (0x1ff < uVar6) {
    uVar5 = uVar6 + 0xfff >> 2 & 0x3ffffffffffffc00;
  }
  if (0x10000 < uVar6) {
    uVar5 = uVar6 + 0xffff >> 2 & 0x3fffffffffffc000;
  }
  lVar4 = (**(code **)PTR_PTR_047cb890)(uVar5 << 2,0x10);
  if (lVar4 == 0) {
    FUN_0015ed40(uVar5 << 2);
    iVar3 = FUN_0015ed20("v:/devel/projects/oodle2/core/templates/rrvector.h",0xbf,"makefit1",
                         "pNew != NULL");
    if (iVar3 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (param_3 != 0) {
      memset((void *)0x0,__c,param_3 << 2);
    }
  }
  else if (param_3 != 0) {
    uVar6 = param_3 & 3;
    if (param_3 - 1 < 3) {
      lVar7 = 0;
    }
    else {
      lVar7 = 0;
      puVar8 = (undefined4 *)(lVar4 + 8);
      puVar9 = (undefined4 *)(lVar2 + 8);
      do {
        puVar8[-2] = puVar9[-2];
        puVar8[-1] = puVar9[-1];
        *puVar8 = *puVar9;
        puVar1 = puVar9 + 1;
        lVar7 = lVar7 + 4;
        puVar9 = puVar9 + 4;
        puVar8[1] = *puVar1;
        puVar8 = puVar8 + 4;
      } while (param_3 - uVar6 != lVar7);
    }
    if (uVar6 != 0) {
      puVar8 = (undefined4 *)(lVar2 + lVar7 * 4);
      puVar9 = (undefined4 *)(lVar4 + lVar7 * 4);
      do {
        uVar6 = uVar6 - 1;
        *puVar9 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar9 = puVar9 + 1;
      } while (uVar6 != 0);
    }
  }
  *param_1 = lVar4;
  param_1[1] = uVar5;
  return lVar2;
}


