/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0052a87c; name: FUN_0052a87c
 */


void FUN_0052a87c(undefined8 *param_1)

{
  int iVar1;
  undefined *puVar2;
  uint *puVar3;
  byte *pbVar4;
  undefined8 *puVar5;
  ulong uVar6;
  
  puVar2 = PTR_LAB_047cba48;
  iVar1 = *(int *)(PTR_DAT_047cdbe8 + (ulong)*(byte *)(param_1 + 1) * 4);
  if (*(char *)((long)param_1 + 9) == '\0') {
    if (iVar1 == 10) {
      pbVar4 = (byte *)*param_1;
      if (pbVar4 == (byte *)0x0) {
        return;
      }
      (*(code *)**(undefined8 **)pbVar4)(pbVar4);
    }
    else {
      if (iVar1 != 9) {
        return;
      }
      pbVar4 = (byte *)*param_1;
      if (pbVar4 == (byte *)0x0) {
        return;
      }
      if ((*pbVar4 & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(pbVar4 + 0x10));
      }
    }
  }
  else {
    switch(iVar1) {
    case 1:
    case 8:
      pbVar4 = (byte *)*param_1;
      if (pbVar4 == (byte *)0x0) {
        return;
      }
      FUN_00531260(pbVar4);
      break;
    case 2:
      pbVar4 = (byte *)*param_1;
      if (pbVar4 == (byte *)0x0) {
        return;
      }
      FUN_00531830(pbVar4);
      break;
    case 3:
      pbVar4 = (byte *)*param_1;
      if (pbVar4 == (byte *)0x0) {
        return;
      }
      FUN_00531548(pbVar4);
      break;
    case 4:
      pbVar4 = (byte *)*param_1;
      if (pbVar4 == (byte *)0x0) {
        return;
      }
      FUN_00531b18(pbVar4);
      break;
    case 5:
      pbVar4 = (byte *)*param_1;
      if (pbVar4 == (byte *)0x0) {
        return;
      }
      FUN_005320e8(pbVar4);
      break;
    case 6:
      pbVar4 = (byte *)*param_1;
      if (pbVar4 == (byte *)0x0) {
        return;
      }
      FUN_00531e00(pbVar4);
      break;
    case 7:
      pbVar4 = (byte *)*param_1;
      if (pbVar4 == (byte *)0x0) {
        return;
      }
      FUN_00530f80(pbVar4);
      break;
    case 9:
      pbVar4 = (byte *)*param_1;
      if (pbVar4 == (byte *)0x0) {
        return;
      }
      FUN_005322a4(pbVar4);
      break;
    case 10:
      pbVar4 = (byte *)*param_1;
      if (pbVar4 == (byte *)0x0) {
        return;
      }
      puVar3 = *(uint **)(pbVar4 + 0x10);
      if ((puVar3 != (uint *)0x0) && (*(long *)pbVar4 == 0)) {
        uVar6 = (ulong)*puVar3;
        if (0 < (int)*puVar3) {
          do {
            puVar3 = puVar3 + 2;
            puVar5 = *(undefined8 **)puVar3;
            if (puVar5 != (undefined8 *)0x0) {
              (**(code **)*puVar5)(puVar5);
              FUN_0049e790(puVar2,puVar5);
            }
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
          puVar3 = *(uint **)(pbVar4 + 0x10);
        }
        FUN_0049e700(puVar3);
      }
      puVar2 = PTR_LAB_047cba48;
      pbVar4[0x10] = 0;
      pbVar4[0x11] = 0;
      pbVar4[0x12] = 0;
      pbVar4[0x13] = 0;
      pbVar4[0x14] = 0;
      pbVar4[0x15] = 0;
      pbVar4[0x16] = 0;
      pbVar4[0x17] = 0;
      goto LAB_0052a9bc;
    default:
      return;
    }
  }
  puVar2 = PTR_LAB_047cba48;
LAB_0052a9bc:
  FUN_0049e790(puVar2,pbVar4);
  return;
}


