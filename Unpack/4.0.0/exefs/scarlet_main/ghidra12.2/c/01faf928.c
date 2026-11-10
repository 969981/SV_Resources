/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01faf928; name: FUN_01faf928
 */


void FUN_01faf928(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  double dVar5;
  double dVar6;
  float fVar7;
  float local_d0;
  float fStack_cc;
  code *local_b8;
  undefined1 auStack_a0 [108];
  float local_34;
  
  if (*(char *)(param_1 + 0x50) != '\0') {
    if (*(int *)(param_1 + 0x48) < *(int *)(param_1 + 0x4c)) {
      *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
    }
    else {
      puVar2 = (undefined8 *)FUN_00e31554();
      lVar3 = FUN_01fafa90(*puVar2);
      iVar1 = *(int *)(param_1 + 0x44) + 1;
      dVar6 = (double)*(long *)(lVar3 + 8) / 1000000.0;
      dVar5 = *(double *)(param_1 + 0x30) + dVar6;
      *(int *)(param_1 + 0x44) = iVar1;
      *(double *)(param_1 + 0x28) = dVar6;
      *(double *)(param_1 + 0x30) = dVar5;
      if (*(int *)(param_1 + 0x40) <= iVar1) {
        dVar5 = (dVar5 / (double)*(int *)(param_1 + 0x40)) * 2.9999999400000013;
        plVar4 = *(long **)(param_1 + 0x88);
        *(undefined8 *)(param_1 + 0x44) = 0;
        *(double *)(param_1 + 0x38) = dVar5;
        *(undefined8 *)(param_1 + 0x30) = 0;
        if (plVar4 != (long *)0x0) {
          fVar7 = (float)dVar5;
          do {
            lVar3 = plVar4[4];
            local_b8 = (code *)0x0;
            if ((code *)plVar4[8] != (code *)0x0) {
              (*(code *)plVar4[8])(plVar4 + 10,auStack_a0);
              local_b8 = (code *)plVar4[7];
              if ((((code *)plVar4[6] != (code *)0x0) &&
                  (fStack_cc = (float)((ulong)lVar3 >> 0x20), fStack_cc <= fVar7)) &&
                 (local_d0 = (float)lVar3, fVar7 <= local_d0)) {
                local_34 = fVar7;
                (*(code *)plVar4[6])(auStack_a0,&local_34);
              }
            }
            if (local_b8 != (code *)0x0) {
              (*local_b8)(auStack_a0);
            }
            plVar4 = (long *)*plVar4;
          } while (plVar4 != (long *)0x0);
        }
      }
    }
  }
  return;
}


