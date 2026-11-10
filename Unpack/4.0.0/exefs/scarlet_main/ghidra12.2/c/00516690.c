/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00516690; name: FUN_00516690
 */


undefined2 * FUN_00516690(long *param_1,undefined2 *param_2,undefined8 *param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined2 *puVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  
  lVar8 = *param_1;
  lVar6 = param_1[1];
  if (0 < (int)((ulong)(lVar6 - lVar8) >> 4)) {
    lVar9 = 0;
    do {
      puVar1 = (uint *)(lVar8 + lVar9 * 0x10);
      if (puVar1[1] == 3) {
        if (param_2 < (undefined2 *)*param_3) {
          *param_2 = 0x100b;
          uVar7 = *puVar1;
          if (uVar7 < 0x80) goto LAB_005166d0;
LAB_00516740:
          *(byte *)(param_2 + 1) = (byte)uVar7 | 0x80;
          if (uVar7 >> 0xe == 0) {
            *(char *)((long)param_2 + 3) = (char)(uVar7 >> 7);
            param_2 = param_2 + 2;
          }
          else {
            param_2 = param_2 + 2;
            uVar7 = uVar7 >> 7;
            do {
              puVar5 = param_2;
              uVar2 = uVar7 >> 7;
              *(byte *)((long)puVar5 + -1) = (byte)uVar7 | 0x80;
              param_2 = (undefined2 *)((long)puVar5 + 1);
              uVar3 = uVar7 >> 0xe;
              uVar7 = uVar2;
            } while (uVar3 != 0);
            *(char *)puVar5 = (char)uVar2;
          }
        }
        else {
          param_2 = (undefined2 *)FUN_0052c6d8(param_3);
          *param_2 = 0x100b;
          uVar7 = *puVar1;
          if (0x7f < uVar7) goto LAB_00516740;
LAB_005166d0:
          *(char *)(param_2 + 1) = (char)uVar7;
          param_2 = (undefined2 *)((long)param_2 + 3);
        }
        *(undefined1 *)param_2 = 0x1a;
        puVar4 = (undefined1 *)FUN_00515778(puVar1,(undefined1 *)((long)param_2 + 1),param_3);
        if ((undefined1 *)*param_3 <= puVar4) {
          puVar4 = (undefined1 *)FUN_0052c6d8(param_3);
        }
        param_2 = (undefined2 *)(puVar4 + 1);
        *puVar4 = 0xc;
        lVar8 = *param_1;
        lVar6 = param_1[1];
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 < (int)((ulong)(lVar6 - lVar8) >> 4));
  }
  return param_2;
}


