/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034fdcc0; name: FUN_034fdcc0
 */


void FUN_034fdcc0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  puVar2 = PTR_DAT_047e7450;
  puVar1 = PTR_DAT_047e2fd0;
  lVar5 = *(long *)(param_1 + 0x20);
  if (lVar5 != 0) {
    do {
      while( true ) {
        lVar3 = *(long *)(lVar5 + 400);
        puVar9 = *(undefined8 **)(lVar3 + 0x28);
        if (puVar9 == (undefined8 *)0x0) break;
        if (puVar9[0x33] == param_1) {
          puVar4 = (undefined8 *)0x0;
        }
        else {
          do {
            puVar4 = puVar9;
            puVar9 = (undefined8 *)puVar4[4];
            if (puVar9 == (undefined8 *)0x0) {
              if (lVar5 == 0) {
                return;
              }
              goto LAB_034fddf4;
            }
          } while (puVar9[0x33] != param_1);
        }
        if (*(long *)(lVar3 + 8) != 0) {
          *(undefined4 *)(*(long *)(lVar3 + 8) + 0x114) = 0x42ca0000;
        }
        if ((*(byte *)(lVar3 + 0x50) >> 2 & 1) != 0) {
          *puVar2 = 1;
        }
        lVar5 = puVar9[0x33];
        puVar7 = (undefined8 *)0x0;
        puVar8 = (undefined8 *)(lVar5 + 0x20);
        do {
          puVar6 = puVar7;
          puVar7 = (undefined8 *)*puVar8;
          puVar8 = puVar7 + 3;
        } while (puVar7 != (undefined8 *)0x0 && puVar9 != puVar7);
        if (puVar7 != (undefined8 *)0x0) {
          puVar8 = (undefined8 *)(lVar5 + 0x20);
          if (*(undefined8 **)(lVar5 + 0x20) != puVar7) {
            puVar8 = puVar6 + 3;
          }
          *puVar8 = puVar7[3];
          if (*(undefined8 **)(lVar5 + 0x18) == puVar7) {
            *(undefined8 **)(lVar5 + 0x18) = puVar6;
          }
        }
        puVar8 = (undefined8 *)(lVar3 + 0x28);
        if (*(undefined8 **)(lVar3 + 0x28) != puVar9) {
          puVar8 = puVar4 + 4;
        }
        *puVar8 = puVar9[4];
        (**(code **)*puVar9)(puVar9);
        (**(code **)(puVar1 + 0x30))(5,puVar9);
        lVar5 = *(long *)(param_1 + 0x20);
        if (lVar5 == 0) {
          return;
        }
      }
LAB_034fddf4:
      lVar5 = *(long *)(lVar5 + 0x18);
      if (lVar5 == 0) {
        *(undefined8 *)(param_1 + 0x18) = 0;
        *(undefined8 *)(param_1 + 0x20) = 0;
        return;
      }
      *(long *)(param_1 + 0x20) = lVar5;
    } while (lVar5 != 0);
  }
  return;
}


