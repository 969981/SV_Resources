/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00330930; name: FUN_00330930
 */


ulong FUN_00330930(ulong *param_1,char *param_2,long *param_3,byte *param_4)

{
  int iVar1;
  undefined8 *puVar2;
  char *pcVar3;
  ulong uVar4;
  ulong *puVar5;
  char *pcVar6;
  ulong uVar7;
  ulong *puVar8;
  char *local_b8;
  size_t local_b0;
  char *local_88;
  size_t local_80;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  if (param_3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  puVar2 = (undefined8 *)FUN_0037b960(param_2,1);
  *param_3 = (long)puVar2;
  if ((puVar2 != (undefined8 *)0x0) && (uVar4 = *param_1, 1 < uVar4)) {
    pcVar6 = (char *)*puVar2;
    uVar7 = 0;
    puVar8 = param_1 + 1;
    do {
      puVar5 = puVar8;
      if ((uVar4 & 1) != 0) {
        puVar5 = (ulong *)param_1[1];
      }
      pcVar3 = (char *)(**(code **)(*(long *)puVar5[uVar7] + 0x18))();
      iVar1 = strcmp(pcVar6,pcVar3);
      if (iVar1 == 0) {
        if ((*param_1 & 1) != 0) {
          puVar8 = (ulong *)param_1[1];
        }
        if (puVar8[uVar7] != 0) {
          return puVar8[uVar7];
        }
        break;
      }
      uVar4 = *param_1;
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar4 >> 1);
  }
  FUN_0037bfa0(*param_3);
  local_88 = (char *)param_1[0xb];
  local_80 = 0;
  if (local_88 != (char *)0x0) {
    local_80 = strlen(local_88);
  }
  local_b8 = param_2;
  if (param_2 == (char *)0x0) {
    local_b0 = 0;
  }
  else {
    local_b0 = strlen(param_2);
  }
  FUN_003959c0(&local_58,&local_88,&local_b8);
  if ((*param_4 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(param_4 + 0x10));
  }
  *(undefined8 *)(param_4 + 0x10) = local_48;
  *(undefined8 *)(param_4 + 8) = uStack_50;
  *(undefined8 *)param_4 = local_58;
  if ((*param_4 & 1) == 0) {
    puVar2 = (undefined8 *)FUN_0037b960(param_4 + 1,1);
    *param_3 = (long)puVar2;
  }
  else {
    puVar2 = (undefined8 *)FUN_0037b960(*(undefined8 *)(param_4 + 0x10),1);
    *param_3 = (long)puVar2;
  }
  if ((puVar2 != (undefined8 *)0x0) && (uVar4 = *param_1, 1 < uVar4)) {
    pcVar6 = (char *)*puVar2;
    uVar7 = 0;
    puVar8 = param_1 + 1;
    do {
      puVar5 = puVar8;
      if ((uVar4 & 1) != 0) {
        puVar5 = (ulong *)param_1[1];
      }
      pcVar3 = (char *)(**(code **)(*(long *)puVar5[uVar7] + 0x18))();
      iVar1 = strcmp(pcVar6,pcVar3);
      if (iVar1 == 0) {
        if ((*param_1 & 1) != 0) {
          puVar8 = (ulong *)param_1[1];
        }
        if (puVar8[uVar7] != 0) {
          return puVar8[uVar7];
        }
        break;
      }
      uVar4 = *param_1;
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar4 >> 1);
  }
  FUN_0037b960(param_2,0);
  FUN_0037bfa0();
  if ((*param_4 & 1) == 0) {
    param_4 = param_4 + 1;
  }
  else {
    param_4 = *(byte **)(param_4 + 0x10);
  }
  FUN_0037b960(param_4,0);
  FUN_0037bfa0();
  return 0;
}


