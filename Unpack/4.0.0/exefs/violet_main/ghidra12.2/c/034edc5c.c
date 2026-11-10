/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034edc5c; name: FUN_034edc5c
 */


void FUN_034edc5c(undefined8 param_1,long *param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long *plVar7;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 *local_40;
  long local_38;
  
  uVar5 = *(uint *)(*(long *)PTR_DAT_047e6cc0 + 0x38);
  if (uVar5 != 0) {
    uVar2 = 0;
    uVar4 = (uint)*param_2;
    if (uVar5 != 0) {
      uVar2 = uVar4 / uVar5;
    }
    for (plVar7 = *(long **)(*(long *)(*(long *)PTR_DAT_047e6cc0 + 0x30) +
                            (ulong)(uVar4 - uVar2 * uVar5) * 8); plVar7 != (long *)0x0;
        plVar7 = (long *)*plVar7) {
      if (plVar7[1] == *param_2) {
        lVar6 = plVar7[2];
        uVar5 = *(uint *)(lVar6 + 0x80);
        if (uVar5 < 2) {
          *(uint *)(lVar6 + 0x80) = uVar5 + 1;
          if (uVar5 != 0 && *(char *)(lVar6 + 0x84) != '\0') {
            FUN_034c60b0();
          }
        }
        else {
          *(uint *)(lVar6 + 0x80) = uVar5 + 1;
        }
        local_40 = (undefined8 *)plVar7[2];
        goto LAB_034edcc0;
      }
    }
  }
  local_40 = (undefined8 *)0x0;
LAB_034edcc0:
  uStack_48 = 0;
  local_50 = param_1;
  FUN_034eddd0(&local_50,param_3,(int)param_2[2]);
  puVar3 = local_40;
  if (local_40 == (undefined8 *)0x0) {
    return;
  }
  iVar1 = *(int *)(local_40 + 0x10);
  uVar5 = iVar1 - 1;
  *(uint *)(local_40 + 0x10) = uVar5;
  if (iVar1 == 0 || uVar5 == 0) {
    if (uVar5 != 0) {
      return;
    }
  }
  else {
    if (1 < uVar5) {
      return;
    }
    if (*(char *)((long)local_40 + 0x84) == '\0') goto LAB_034edd4c;
  }
  lVar6 = local_40[5];
  if (lVar6 != 0) {
    uVar5 = ((uint)lVar6 ^ (uint)lVar6 >> 0x10) * -0x7a143595;
    uVar5 = (uVar5 ^ uVar5 >> 0xd) * -0x3d4d51cb;
    local_38 = lVar6;
    FUN_034c6294(&DAT_048b02b8,&local_38,uVar5 ^ uVar5 >> 0x10);
    uVar5 = *(uint *)(puVar3 + 0x10);
  }
LAB_034edd4c:
  if (uVar5 == 0) {
    (**(code **)*puVar3)(puVar3);
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(4,puVar3);
  }
  return;
}


