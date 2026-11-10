/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f9004c; name: FUN_01f9004c
 */


void FUN_01f9004c(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  code *pcVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  puVar7 = (undefined8 *)*param_1;
  if (puVar7 == (undefined8 *)0x0) {
    return;
  }
  puVar6 = (undefined8 *)param_1[1];
  if (puVar6 == puVar7) {
    puVar6 = puVar7;
  }
  else {
    pcVar5 = (code *)puVar6[-7];
    if (pcVar5 != (code *)0x0) {
      puVar6[-6] = 0;
      puVar6[-5] = 0;
      puVar6[-8] = 0;
      puVar6[-7] = 0;
      (*pcVar5)(puVar6 + -4);
    }
    if (puVar6 + -8 != puVar7) {
      pcVar5 = (code *)puVar6[-0xf];
      if (pcVar5 != (code *)0x0) {
        puVar6[-0xe] = 0;
        puVar6[-0xd] = 0;
        puVar6[-0x10] = 0;
        puVar6[-0xf] = 0;
        (*pcVar5)(puVar6 + -0xc);
      }
      if (puVar6 + -0x10 != puVar7) {
        pcVar5 = (code *)puVar6[-0x17];
        if (pcVar5 != (code *)0x0) {
          puVar6[-0x16] = 0;
          puVar6[-0x15] = 0;
          puVar6[-0x18] = 0;
          puVar6[-0x17] = 0;
          (*pcVar5)(puVar6 + -0x14);
        }
        if (puVar6 + -0x18 != puVar7) {
          do {
            pcVar5 = (code *)puVar6[-0x1f];
            if (pcVar5 != (code *)0x0) {
              puVar6[-0x1e] = 0;
              puVar6[-0x1d] = 0;
              puVar6[-0x20] = 0;
              puVar6[-0x1f] = 0;
              (*pcVar5)(puVar6 + -0x1c);
            }
            puVar6 = puVar6 + -8;
          } while (puVar7 + 0x18 != puVar6);
        }
      }
    }
    puVar6 = (undefined8 *)*param_1;
  }
  param_1[1] = puVar7;
  lVar1 = param_1[2];
  plVar2 = (long *)param_1[3];
  uVar3 = (**(code **)(*plVar2 + 0xf8))(plVar2);
  if (((uVar3 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x01f90104. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x18))(plVar2,puVar6,lVar1 - (long)puVar6,0x10);
    return;
  }
  FUN_00c48fe8(plVar2,puVar6,lVar1 - (long)puVar6,0x10);
  return;
}


