/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028f6ad0; name: FUN_028f6ad0
 */


void FUN_028f6ad0(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 local_38;
  
  puVar6 = (undefined8 *)*param_1;
  if (puVar6 != (undefined8 *)0x0) {
    puVar7 = (undefined8 *)param_1[1];
    puVar5 = puVar6;
    if (puVar7 != puVar6) {
      pcVar4 = (code *)puVar7[-10];
      if (pcVar4 != (code *)0x0) {
        local_38 = puVar7[-2];
        (*pcVar4)(puVar7 + -6,&local_38);
      }
      pcVar4 = (code *)puVar7[-9];
      if (pcVar4 != (code *)0x0) {
        puVar7[-8] = 0;
        puVar7[-7] = 0;
        puVar7[-10] = 0;
        puVar7[-9] = 0;
        (*pcVar4)(puVar7 + -6);
      }
      pcVar4 = (code *)puVar7[-0x11];
      if (pcVar4 != (code *)0x0) {
        puVar7[-0x10] = 0;
        puVar7[-0xf] = 0;
        puVar7[-0x12] = 0;
        puVar7[-0x11] = 0;
        (*pcVar4)(puVar7 + -0xe);
      }
      if (puVar7 + -0x12 != puVar6) {
        do {
          if ((code *)puVar7[-0x1c] != (code *)0x0) {
            local_38 = puVar7[-0x14];
            (*(code *)puVar7[-0x1c])(puVar7 + -0x18,&local_38);
          }
          pcVar4 = (code *)puVar7[-0x1b];
          if (pcVar4 != (code *)0x0) {
            puVar7[-0x1a] = 0;
            puVar7[-0x19] = 0;
            puVar7[-0x1c] = 0;
            puVar7[-0x1b] = 0;
            (*pcVar4)(puVar7 + -0x18);
          }
          pcVar4 = (code *)puVar7[-0x23];
          if (pcVar4 != (code *)0x0) {
            puVar7[-0x22] = 0;
            puVar7[-0x21] = 0;
            puVar7[-0x24] = 0;
            puVar7[-0x23] = 0;
            (*pcVar4)(puVar7 + -0x20);
          }
          puVar7 = puVar7 + -0x12;
        } while (puVar6 + 0x12 != puVar7);
      }
      puVar5 = (undefined8 *)*param_1;
    }
    param_1[1] = puVar6;
    lVar1 = param_1[2];
    plVar2 = (long *)param_1[3];
    uVar3 = FUN_00c4e564(plVar2);
    if ((uVar3 & 1) == 0) {
      (**(code **)(*plVar2 + 0x18))(plVar2,puVar5,lVar1 - (long)puVar5,0x10);
    }
    else {
      FUN_00c48fe8(plVar2,puVar5,lVar1 - (long)puVar5,0x10);
    }
  }
  return;
}


