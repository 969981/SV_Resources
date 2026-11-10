/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00319780; name: FUN_00319780
 */


void FUN_00319780(undefined8 *param_1,uint param_2,long param_3)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  undefined4 *puVar4;
  long lVar5;
  undefined4 *puVar6;
  ulong uVar7;
  
  plVar1 = (long *)param_1[1];
  uVar7 = param_1[2];
  puVar6 = (undefined4 *)*param_1;
  if ((uVar7 != 0) && (param_2 <= (uint)puVar6[uVar7 - 1])) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (uVar7 == param_1[4]) {
    if (uVar7 >> 2 < (ulong)param_1[3]) {
      uVar2 = 0;
      if (uVar7 != 0) {
        plVar3 = plVar1;
        puVar4 = puVar6;
        do {
          lVar5 = *plVar3;
          if (lVar5 != 0) {
            puVar6[uVar2] = *puVar4;
            plVar1[uVar2] = lVar5;
            uVar2 = uVar2 + 1;
          }
          uVar7 = uVar7 - 1;
          puVar4 = puVar4 + 1;
          plVar3 = plVar3 + 1;
        } while (uVar7 != 0);
      }
      param_1[3] = 0;
      uVar7 = uVar2;
    }
    else {
      param_1[4] = uVar7 << 1;
      puVar6 = (undefined4 *)FUN_0038c7f0(puVar6,uVar7 << 3);
      *param_1 = puVar6;
      plVar1 = (long *)FUN_0038c7f0(plVar1,uVar7 << 4);
      param_1[1] = plVar1;
    }
  }
  puVar6[uVar7] = param_2;
  plVar1[uVar7] = param_3;
  param_1[2] = uVar7 + 1;
  return;
}


