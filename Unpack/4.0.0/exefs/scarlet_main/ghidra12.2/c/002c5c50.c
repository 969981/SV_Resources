/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002c5c50; name: FUN_002c5c50
 */


void FUN_002c5c50(undefined8 param_1,long param_2,long param_3)

{
  byte bVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  byte *pbVar6;
  ulong *puVar7;
  
  puVar2 = PTR_LAB_047cba48;
  if (param_2 != 0) {
    while (param_3 != 0) {
      param_3 = param_3 + -1;
      pbVar6 = (byte *)(param_2 + param_3 * 0x88);
      lVar5 = param_2 + param_3 * 0x88;
      puVar7 = (ulong *)(pbVar6 + 0x18);
      uVar4 = *puVar7;
      uVar3 = uVar4 & 1;
      if ((uVar4 & 1) == 0) {
        lVar5 = lVar5 + 0x20;
        if (uVar4 >> 1 != 0 && lVar5 != 0) {
LAB_002c5cd4:
          uVar4 = uVar4 >> 1;
          lVar5 = lVar5 + uVar4 * 0x68 + -0x30;
          do {
            FUN_002c5ba4(lVar5 + 0x18);
            FUN_0025cef0(lVar5,*(undefined8 *)(lVar5 + 8));
            if ((*(byte *)(lVar5 + -0x18) & 1) == 0) {
              bVar1 = *(byte *)(lVar5 + -0x38);
            }
            else {
              FUN_0049e790(puVar2,*(undefined8 *)(lVar5 + -8));
              bVar1 = *(byte *)(lVar5 + -0x38);
            }
            if ((bVar1 & 1) != 0) {
              FUN_0049e790(puVar2,*(undefined8 *)(lVar5 + -0x28));
            }
            uVar4 = uVar4 - 1;
            lVar5 = lVar5 + -0x68;
          } while (uVar4 != 0);
          uVar3 = *puVar7 & 1;
        }
      }
      else {
        lVar5 = *(long *)(lVar5 + 0x20);
        if (uVar4 >> 1 != 0 && lVar5 != 0) goto LAB_002c5cd4;
      }
      if (uVar3 != 0) {
        FUN_0049e790(puVar2,*(undefined8 *)(param_2 + param_3 * 0x88 + 0x20));
      }
      if ((*pbVar6 & 1) != 0) {
        FUN_0049e790(puVar2,*(undefined8 *)(param_2 + param_3 * 0x88 + 0x10));
      }
    }
  }
  return;
}


