/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f9b688; name: FUN_02f9b688
 */


void FUN_02f9b688(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 *param_7,undefined8 *param_8,
                 long param_9)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  long lVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  long local_470;
  uint *local_468 [64];
  uint *local_268 [65];
  
  iVar1 = *(int *)(param_9 + 0x34);
  if (iVar1 != 0) {
    local_470 = nn::os::GetSystemTick();
  }
  param_8[1] = 0xff7fffeeff7fffee;
  *param_8 = 0xff7fffeeff7fffee;
  param_8[3] = 0x7f7fffee7f7fffee;
  param_8[2] = 0x7f7fffee7f7fffee;
  (**(code **)(*(long *)PTR_DAT_047d19f0 + (ulong)*(byte *)(param_4 + 0x18) * 0x200 + 0xe0))
            (param_4,param_1,param_2,param_3,param_6,param_5,param_7,param_8);
  if (iVar1 != 0) {
    lVar5 = nn::os::GetSystemTick();
    *(long *)(param_9 + 8) = (lVar5 - local_470) + *(long *)(param_9 + 8);
    *(int *)(param_9 + 0x10) = *(int *)(param_9 + 0x10) + 1;
  }
  iVar1 = *(int *)(param_7 + 1);
  *(int *)(param_9 + 0x30) = *(int *)(param_9 + 0x30) + iVar1;
  if (iVar1 < 2) {
    return;
  }
  local_268[0] = (uint *)*param_7;
  local_468[0] = local_268[0] + (iVar1 - 1);
  uVar4 = 0;
LAB_02f9b788:
  lVar5 = (long)(int)uVar4;
  puVar3 = local_268[0];
  do {
    puVar6 = local_468[0];
    puVar7 = puVar3;
    while( true ) {
      uVar4 = puVar7[(long)puVar6 - (long)puVar7 >> 3];
      local_468[0] = puVar6;
      puVar8 = puVar7;
      do {
        do {
          puVar3 = puVar8;
          puVar8 = puVar3 + 1;
        } while (*puVar3 < uVar4);
        puVar9 = local_468[0] + 1;
        do {
          local_468[0] = puVar9;
          puVar9 = local_468[0] + -1;
          uVar2 = *puVar9;
        } while (uVar4 < uVar2);
        if (puVar9 < puVar3) {
          local_468[0] = puVar9;
          puVar8 = puVar3;
        }
        else {
          local_468[0] = local_468[0] + -2;
          if (puVar3 != puVar9) {
            *puVar9 = *puVar3;
            *puVar3 = uVar2;
          }
        }
      } while (puVar8 <= local_468[0]);
      if (puVar7 < local_468[0]) break;
      puVar7 = puVar8;
      if (puVar6 <= puVar8) {
        uVar4 = (int)lVar5 - 1;
        if ((int)lVar5 < 1) {
          return;
        }
        local_268[0] = local_268[uVar4];
        local_468[0] = local_468[uVar4];
        goto LAB_02f9b788;
      }
    }
    puVar3 = puVar7;
    if (puVar8 < puVar6) {
      puVar9 = local_468[0];
      if ((long)puVar6 - (long)puVar8 <= (long)local_468[0] - (long)puVar7) {
        puVar3 = puVar8;
        puVar9 = puVar6;
        puVar6 = local_468[0];
        puVar8 = puVar7;
      }
      local_268[lVar5] = puVar8;
      local_468[lVar5] = puVar6;
      lVar5 = lVar5 + 1;
      local_468[0] = puVar9;
    }
  } while( true );
}


