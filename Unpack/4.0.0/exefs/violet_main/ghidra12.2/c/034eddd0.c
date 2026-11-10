/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034eddd0; name: FUN_034eddd0
 */


long FUN_034eddd0(long *param_1,long param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long local_50;
  long lStack_48;
  undefined8 *local_40;
  long local_38;
  
  lVar5 = *(long *)(param_2 + 0x28);
  if (lVar5 == 0) {
    lVar4 = *param_1;
  }
  else {
    lVar4 = *param_1;
    do {
      lVar6 = *(long *)(lVar5 + 0x198);
      if (((*(long *)(lVar6 + 0x60) == lVar4) && (*(long *)(lVar6 + 0x68) == param_1[1])) &&
         (*(long *)(lVar6 + 0x70) == param_1[2])) {
        return 0;
      }
      lVar5 = *(long *)(lVar5 + 0x20);
    } while (lVar5 != 0);
  }
  lVar5 = param_1[1];
  puVar1 = (undefined8 *)param_1[2];
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (DAT_048b0810 != 0) {
    lVar6 = (ulong)DAT_048b0810 << 3;
    plVar7 = DAT_048b0808;
    do {
      lVar8 = *plVar7;
      if (((*(long *)(lVar8 + 0x60) == lVar4) && (*(long *)(lVar8 + 0x68) == lVar5)) &&
         ((*(undefined8 **)(lVar8 + 0x70) == puVar1 &&
          ((*(long *)(lVar8 + 8) == 0 ||
           (*(char *)(*(long *)(*(long *)(lVar8 + 8) + 0x10) + 0x84) != '\0')))))) {
        if (puVar1 == (undefined8 *)0x0) goto LAB_034edf60;
        iVar2 = *(int *)(puVar1 + 0x10);
        uVar3 = iVar2 - 1;
        *(uint *)(puVar1 + 0x10) = uVar3;
        if (iVar2 == 0 || uVar3 == 0) {
          if (uVar3 != 0) goto LAB_034edf60;
LAB_034edfbc:
          lVar5 = puVar1[5];
          if (lVar5 != 0) {
            uVar3 = ((uint)lVar5 ^ (uint)lVar5 >> 0x10) * -0x7a143595;
            uVar3 = (uVar3 ^ uVar3 >> 0xd) * -0x3d4d51cb;
            local_50 = lVar5;
            FUN_034c6294(&DAT_048b02b8,&local_50,uVar3 ^ uVar3 >> 0x10);
            uVar3 = *(uint *)(puVar1 + 0x10);
          }
        }
        else {
          if (1 < uVar3) goto LAB_034edf60;
          if (*(char *)((long)puVar1 + 0x84) != '\0') goto LAB_034edfbc;
        }
        if (uVar3 == 0) {
          (**(code **)*puVar1)(puVar1);
          (**(code **)(PTR_DAT_047e2fd0 + 0x30))(4,puVar1);
        }
        goto LAB_034edf60;
      }
      plVar7 = plVar7 + 1;
      lVar6 = lVar6 + -8;
    } while (lVar6 != 0);
  }
  local_50 = lVar4;
  lStack_48 = lVar5;
  local_40 = puVar1;
  lVar8 = FUN_034eeb10(&local_50);
  puVar1 = local_40;
  if (local_40 == (undefined8 *)0x0) goto LAB_034edf5c;
  iVar2 = *(int *)(local_40 + 0x10);
  uVar3 = iVar2 - 1;
  *(uint *)(local_40 + 0x10) = uVar3;
  if (iVar2 == 0 || uVar3 == 0) {
    if (uVar3 == 0) {
LAB_034edee8:
      lVar5 = local_40[5];
      if (lVar5 != 0) {
        uVar3 = ((uint)lVar5 ^ (uint)lVar5 >> 0x10) * -0x7a143595;
        uVar3 = (uVar3 ^ uVar3 >> 0xd) * -0x3d4d51cb;
        local_38 = lVar5;
        FUN_034c6294(&DAT_048b02b8,&local_38,uVar3 ^ uVar3 >> 0x10);
        uVar3 = *(uint *)(puVar1 + 0x10);
      }
      goto LAB_034edf2c;
    }
  }
  else if (uVar3 < 2) {
    if (*(char *)((long)local_40 + 0x84) != '\0') goto LAB_034edee8;
LAB_034edf2c:
    if (uVar3 == 0) {
      (**(code **)*puVar1)(puVar1);
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(4,puVar1);
    }
  }
  local_40 = (undefined8 *)0x0;
LAB_034edf5c:
  if (lVar8 != 0) {
LAB_034edf60:
    FUN_035000f0(param_2,lVar8,param_3);
  }
  return lVar8;
}


