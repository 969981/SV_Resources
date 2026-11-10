/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0342ac64; name: FUN_0342ac64
 */


undefined8 FUN_0342ac64(long *param_1,int param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  uint *puVar9;
  long lVar10;
  long *plVar11;
  char *pcVar12;
  ulong uVar13;
  
  uVar4 = *(uint *)(param_1 + 1);
  uVar1 = *(int *)((long)param_1 + 0xc) + param_2;
  lVar6 = (**(code **)(PTR_DAT_047e2fd0 + 0x10))(9,(ulong)uVar1 * 0x28);
  uVar7 = 0;
  if (lVar6 != 0) {
    lVar8 = *param_1;
    if ((lVar8 != 0) && (lVar8 != lVar6)) {
      if (uVar4 != 0) {
        uVar13 = 0;
        do {
          puVar2 = (undefined4 *)(lVar6 + uVar13 * 0x28);
          *puVar2 = 0;
          *(undefined8 *)(puVar2 + 2) = 0;
          puVar2[4] = 0;
          plVar11 = (long *)(puVar2 + 6);
          *plVar11 = 0;
          *(undefined8 *)(puVar2 + 8) = 0;
          puVar3 = (undefined4 *)(*param_1 + uVar13 * 0x28);
          puVar2[4] = puVar3[4];
          *(undefined8 *)(puVar2 + 2) = *(undefined8 *)(puVar3 + 2);
          *puVar2 = *puVar3;
          puVar3[4] = 0;
          *(undefined8 *)(puVar3 + 2) = 0;
          *puVar3 = 0;
          lVar8 = *plVar11;
          if (lVar8 != 0) {
            puVar9 = (uint *)(lVar6 + uVar13 * 0x28 + 0x20);
            uVar5 = *puVar9;
            if (uVar5 != 0) {
              lVar10 = (ulong)uVar5 * 0x50;
              pcVar12 = (char *)(lVar8 + 0x48);
              do {
                if ((*(long *)(pcVar12 + -8) != 0) && (*pcVar12 != '\0')) {
                  (**(code **)(PTR_DAT_047e2fd0 + 0x30))(9);
                  *pcVar12 = '\0';
                }
                pcVar12[-8] = '\0';
                pcVar12[-7] = '\0';
                pcVar12[-6] = '\0';
                pcVar12[-5] = '\0';
                pcVar12[-4] = '\0';
                pcVar12[-3] = '\0';
                pcVar12[-2] = '\0';
                pcVar12[-1] = '\0';
                lVar10 = lVar10 + -0x50;
                pcVar12 = pcVar12 + 0x50;
              } while (lVar10 != 0);
              lVar8 = *plVar11;
            }
            *puVar9 = 0;
            (**(code **)(PTR_DAT_047e2fd0 + 0x30))(9,lVar8);
            *plVar11 = 0;
            *(undefined4 *)(lVar6 + uVar13 * 0x28 + 0x24) = 0;
          }
          *plVar11 = *(long *)(puVar3 + 6);
          puVar2[8] = puVar3[8];
          puVar2[9] = puVar3[9];
          *(long *)(puVar3 + 6) = 0;
          *(undefined8 *)(puVar3 + 8) = 0;
          lVar8 = *param_1;
          plVar11 = (long *)(lVar8 + uVar13 * 0x28 + 8);
          if (*plVar11 != 0) {
            (**(code **)(PTR_DAT_047e2fd0 + 0x30))(9);
          }
          *plVar11 = 0;
          *(undefined4 *)(lVar8 + uVar13 * 0x28) = 0;
          uVar13 = uVar13 + 1;
        } while (uVar13 != uVar4);
        lVar8 = *param_1;
      }
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(9,lVar8);
    }
    uVar7 = 1;
    *param_1 = lVar6;
    *(uint *)((long)param_1 + 0xc) = uVar1;
  }
  return uVar7;
}


