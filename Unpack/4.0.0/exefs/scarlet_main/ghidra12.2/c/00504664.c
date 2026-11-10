/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00504664; name: FUN_00504664
 */


void FUN_00504664(long param_1,long *param_2)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  byte *pbVar5;
  uint *puVar6;
  long local_48;
  long local_40;
  uint *puStack_38;
  
  puStack_38 = (uint *)0x0;
  local_48 = *param_2;
  local_40 = 0;
  FUN_004e80a8(&local_48,param_1);
  uVar3 = (ulong)*(uint *)(param_1 + 8);
  if (0 < (int)*(uint *)(param_1 + 8)) {
    puVar4 = (undefined8 *)(*(long *)(param_1 + 0x10) + 8);
    do {
      while (pbVar5 = (byte *)*puVar4, (*pbVar5 & 1) != 0) {
        **(undefined1 **)(pbVar5 + 0x10) = 0;
        pbVar5[8] = 0;
        pbVar5[9] = 0;
        pbVar5[10] = 0;
        pbVar5[0xb] = 0;
        pbVar5[0xc] = 0;
        pbVar5[0xd] = 0;
        pbVar5[0xe] = 0;
        pbVar5[0xf] = 0;
        puVar4 = puVar4 + 1;
        uVar3 = uVar3 - 1;
        if (uVar3 == 0) goto LAB_005046e4;
      }
      pbVar5[0] = 0;
      pbVar5[1] = 0;
      puVar4 = puVar4 + 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
LAB_005046e4:
    *(undefined4 *)(param_1 + 8) = 0;
  }
  FUN_004e80a8(param_1,param_2);
  lVar1 = param_2[1];
  puVar6 = (uint *)param_2[2];
  param_2[2] = (long)puStack_38;
  param_2[1] = local_40;
  puVar2 = PTR_LAB_047cba48;
  if ((puVar6 != (uint *)0x0) && (local_48 == 0)) {
    uVar3 = (ulong)*puVar6;
    local_40 = lVar1;
    puStack_38 = puVar6;
    if (0 < (int)*puVar6) {
      do {
        puVar6 = puVar6 + 2;
        pbVar5 = *(byte **)puVar6;
        if (pbVar5 != (byte *)0x0) {
          if ((*pbVar5 & 1) != 0) {
            FUN_0049e790(puVar2,*(undefined8 *)(pbVar5 + 0x10));
          }
          FUN_0049e790(puVar2,pbVar5);
        }
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    FUN_0049e700(puStack_38);
  }
  return;
}


