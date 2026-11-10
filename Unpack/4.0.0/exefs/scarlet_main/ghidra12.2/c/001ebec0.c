/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001ebec0; name: FUN_001ebec0
 */


undefined1 * FUN_001ebec0(void *param_1,undefined1 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  
  puVar2 = (undefined8 *)PTR_DAT_04484ee8;
  if (*(undefined8 **)PTR_PTR_047cb968 != &DAT_04484ef8) {
    puVar2 = *(undefined8 **)PTR_PTR_047cb968;
  }
  if (puVar2 != DAT_047ecee8) {
    DAT_047ecee8 = puVar2;
    if (PTR_DAT_04484ee8 == (undefined *)0x0) {
      puVar4 = &DAT_047ecef0;
    }
    else {
      puVar4 = &DAT_047ecef0;
      puVar3 = (undefined8 *)PTR_DAT_04484ee8;
      lVar7 = 0;
      do {
        puVar5 = puVar4;
        if (lVar7 != 0) {
          puVar3 = (undefined8 *)(&PTR_DAT_04484ee8)[lVar7];
          puVar5 = puVar4 + 1;
          *puVar4 = 0x20;
        }
        puVar6 = puVar5;
        if (puVar2 != puVar3) {
          puVar2 = (undefined8 *)(&PTR_DAT_04484ee8)[lVar7];
          puVar6 = puVar5 + 1;
          *puVar5 = 0x28;
        }
        lVar1 = (*(code *)puVar2[6])(puVar6,(long)&DAT_047ecfb8 - (long)puVar6);
        puVar2 = DAT_047ecee8;
        puVar6 = puVar6 + lVar1;
        puVar4 = puVar6;
        if (DAT_047ecee8 != (undefined8 *)(&PTR_DAT_04484ee8)[lVar7]) {
          puVar4 = puVar6 + 1;
          *puVar6 = 0x29;
        }
        puVar3 = (undefined8 *)(&DAT_04484ef0)[lVar7];
        lVar7 = lVar7 + 1;
      } while (puVar3 != (undefined8 *)0x0);
    }
    *puVar4 = 0;
    DAT_047ecfb8 = puVar4 + -0x47ecef0;
  }
  puVar4 = DAT_047ecfb8;
  if (param_2 < DAT_047ecfb8) {
    memcpy(param_1,&DAT_047ecef0,(size_t)(DAT_047ecfb8 + 1));
  }
  else {
    memcpy(param_1,&DAT_047ecef0,(size_t)(param_2 + -1));
    *(undefined1 *)((long)param_1 + (long)(param_2 + -1)) = 0;
  }
  return puVar4;
}


