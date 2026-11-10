/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01479540; name: FUN_01479540
 */


void FUN_01479540(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  code *pcVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  puVar8 = (undefined8 *)*param_1;
  if (puVar8 == (undefined8 *)0x0) {
    return;
  }
  puVar5 = (undefined8 *)param_1[1];
  puVar7 = puVar8;
  if (puVar5 != puVar8) {
    pcVar6 = (code *)puVar5[-0x11];
    puVar7 = puVar5 + -0x12;
    if (pcVar6 != (code *)0x0) {
      puVar5[-0x10] = 0;
      puVar5[-0xf] = 0;
      *puVar7 = 0;
      puVar5[-0x11] = 0;
      (*pcVar6)(puVar5 + -0xe);
    }
    while (puVar5 = puVar7, puVar5 != puVar8) {
      pcVar6 = (code *)puVar5[-0x11];
      puVar7 = puVar5 + -0x12;
      if (pcVar6 != (code *)0x0) {
        puVar5[-0x10] = 0;
        puVar5[-0xf] = 0;
        puVar5[-0x12] = 0;
        puVar5[-0x11] = 0;
        (*pcVar6)(puVar5 + -0xe);
      }
    }
    puVar7 = (undefined8 *)*param_1;
  }
  lVar1 = param_1[2];
  plVar2 = (long *)param_1[3];
  param_1[1] = puVar8;
  uVar3 = (**(code **)(*plVar2 + 0xf8))(plVar2);
  if (((uVar3 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x014795bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x18))(plVar2,puVar7,lVar1 - (long)puVar7,0x10);
    return;
  }
  FUN_00c48fe8(plVar2,puVar7,lVar1 - (long)puVar7,0x10);
  return;
}


