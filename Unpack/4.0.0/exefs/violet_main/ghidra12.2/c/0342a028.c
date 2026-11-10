/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0342a028; name: FUN_0342a028
 */


void FUN_0342a028(long *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  uint *puVar10;
  char *pcVar11;
  long lVar12;
  
  puVar3 = PTR_DAT_047e2fd0;
  if (param_2 == 0) {
    uVar5 = *(uint *)(param_1 + 1);
    if (uVar5 != 0) {
      lVar8 = *param_1;
      lVar7 = lVar8;
      do {
        lVar4 = *(long *)(lVar7 + 0x18);
        if (lVar4 != 0) {
          if (*(uint *)(lVar7 + 0x20) != 0) {
            lVar8 = (ulong)*(uint *)(lVar7 + 0x20) * 0x50;
            pcVar11 = (char *)(lVar4 + 0x48);
            do {
              if ((*(long *)(pcVar11 + -8) != 0) && (*pcVar11 != '\0')) {
                (**(code **)(puVar3 + 0x30))(9);
                *pcVar11 = '\0';
              }
              pcVar11[-8] = '\0';
              pcVar11[-7] = '\0';
              pcVar11[-6] = '\0';
              pcVar11[-5] = '\0';
              pcVar11[-4] = '\0';
              pcVar11[-3] = '\0';
              pcVar11[-2] = '\0';
              pcVar11[-1] = '\0';
              lVar8 = lVar8 + -0x50;
              pcVar11 = pcVar11 + 0x50;
            } while (lVar8 != 0);
            lVar4 = *(long *)(lVar7 + 0x18);
          }
          *(undefined4 *)(lVar7 + 0x20) = 0;
          (**(code **)(puVar3 + 0x30))(9,lVar4);
          *(undefined8 *)(lVar7 + 0x18) = 0;
          *(undefined4 *)(lVar7 + 0x24) = 0;
          lVar8 = *param_1;
          uVar5 = *(uint *)(param_1 + 1);
        }
        lVar7 = lVar7 + 0x28;
      } while (lVar7 != lVar8 + (ulong)uVar5 * 0x28);
    }
  }
  else {
    uVar5 = *(uint *)(param_1 + 1);
    if (uVar5 != 0) {
      lVar7 = *param_1;
      iVar6 = 0;
      do {
        iVar1 = iVar6 + (uVar5 >> 1);
        lVar8 = (long)iVar1;
        uVar2 = *(uint *)(lVar7 + (long)iVar1 * 0x28 + 0x10);
        if (uVar2 == param_2) {
          plVar9 = (long *)(lVar7 + lVar8 * 0x28 + 0x18);
          lVar4 = *plVar9;
          if (lVar4 == 0) {
            return;
          }
          puVar10 = (uint *)(lVar7 + lVar8 * 0x28 + 0x20);
          uVar5 = *puVar10;
          if (uVar5 != 0) {
            lVar12 = (ulong)uVar5 * 0x50;
            pcVar11 = (char *)(lVar4 + 0x48);
            do {
              if ((*(long *)(pcVar11 + -8) != 0) && (*pcVar11 != '\0')) {
                (**(code **)(puVar3 + 0x30))(9);
                *pcVar11 = '\0';
              }
              pcVar11[-8] = '\0';
              pcVar11[-7] = '\0';
              pcVar11[-6] = '\0';
              pcVar11[-5] = '\0';
              pcVar11[-4] = '\0';
              pcVar11[-3] = '\0';
              pcVar11[-2] = '\0';
              pcVar11[-1] = '\0';
              lVar12 = lVar12 + -0x50;
              pcVar11 = pcVar11 + 0x50;
            } while (lVar12 != 0);
            lVar4 = *plVar9;
          }
          *puVar10 = 0;
          (**(code **)(puVar3 + 0x30))(9,lVar4);
          *plVar9 = 0;
          *(undefined4 *)(lVar7 + lVar8 * 0x28 + 0x24) = 0;
          return;
        }
        if (uVar2 < param_2) {
          iVar6 = iVar1 + 1;
        }
        uVar5 = uVar5 - (uVar2 < param_2) >> 1;
      } while (uVar5 != 0);
    }
  }
  return;
}


