/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f97370; name: FUN_00f97370
 */


void FUN_00f97370(long *param_1,long *param_2,long *param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  
  puVar5 = PTR_DAT_047d8b70;
  plVar6 = (long *)*param_2;
  if (plVar6 != (long *)*param_3) {
    do {
      plVar1 = (long *)puVar5;
      if (plVar6[2] != 0) {
        plVar1 = (long *)(plVar6[2] + 0x30);
      }
      plVar2 = (long *)puVar5;
      if (*param_4 != 0) {
        plVar2 = (long *)(*param_4 + 0x30);
      }
      if (*plVar1 == *plVar2) {
        if ((plVar6[9] == 0) || (*(short *)(plVar6[9] + 0x1a) == 0)) break;
        plVar6 = (long *)*param_2;
      }
      plVar6 = (long *)*plVar6;
      *param_2 = (long)plVar6;
      if (plVar6 != (long *)0x0) {
        uVar9 = param_2[2];
        uVar8 = plVar6[1];
        if ((uVar9 & uVar9 - 1) == 0) {
          uVar8 = uVar9 - 1 & uVar8;
        }
        else if (uVar9 <= uVar8) {
          uVar4 = 0;
          if (uVar9 != 0) {
            uVar4 = uVar8 / uVar9;
          }
          uVar8 = uVar8 - uVar4 * uVar9;
        }
        if (uVar8 != param_2[1]) {
          plVar6 = (long *)0x0;
          *param_2 = 0;
        }
      }
    } while (plVar6 != (long *)*param_3);
  }
  lVar3 = *param_2;
  lVar7 = param_2[2];
  param_1[1] = param_2[1];
  param_1[2] = lVar7;
  *param_1 = lVar3;
  return;
}


