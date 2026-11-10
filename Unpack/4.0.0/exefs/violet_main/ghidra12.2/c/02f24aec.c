/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f24aec; name: FUN_02f24aec
 */


void FUN_02f24aec(long param_1,long param_2)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  uint uVar4;
  long *plVar5;
  long *plVar6;
  int iVar7;
  undefined8 *puVar8;
  
  if (*(long *)(param_1 + 8) != 0) {
    plVar2 = *(long **)(*(long *)(param_1 + 8) + 0x658);
    (**(code **)(*plVar2 + 0x38))(plVar2,param_1 + 0x4e8,3);
  }
  uVar4 = *(uint *)(param_1 + 0x548);
  if (*(char *)(param_1 + 0x53c) != '\0') {
    plVar2 = *(long **)(param_1 + 0x540);
    if ((int)uVar4 < 1) {
      plVar6 = plVar2;
    }
    else {
      plVar6 = plVar2;
      if (uVar4 != 1) {
        iVar7 = -(uVar4 & 0xfffffffe);
        do {
          plVar5 = plVar2;
          if (*plVar6 != 0) {
            plVar5 = plVar2 + 1;
            *plVar2 = *plVar6;
          }
          plVar2 = plVar5;
          if (plVar6[1] != 0) {
            plVar2 = plVar5 + 1;
            *plVar5 = plVar6[1];
          }
          plVar6 = plVar6 + 2;
          iVar7 = iVar7 + 2;
        } while (iVar7 != 0);
      }
      plVar5 = plVar2;
      if (((uVar4 & 1) != 0) && (*plVar6 != 0)) {
        plVar5 = plVar2 + 1;
        *plVar2 = *plVar6;
      }
      plVar2 = plVar5;
      plVar6 = *(long **)(param_1 + 0x540);
    }
    uVar4 = (uint)((ulong)((long)plVar2 - (long)plVar6) >> 3);
    *(undefined1 *)(param_1 + 0x53c) = 0;
  }
  if (uVar4 != 0) {
    if (param_2 == 0) {
      (**(code **)(**(long **)(param_1 + 0x530) + 0x28))
                (*(long **)(param_1 + 0x530),*(undefined8 *)(param_1 + 0x540));
    }
    else {
      FUN_031c2998(param_2,*(undefined8 *)(param_1 + 0x540));
    }
  }
  uVar4 = *(uint *)(param_1 + 0x648);
  *(undefined4 *)(param_1 + 0x548) = 0;
  *(undefined4 *)(param_1 + 0x538) = 0;
  if (*(char *)(param_1 + 0x63c) != '\0') {
    plVar2 = *(long **)(param_1 + 0x640);
    if ((int)uVar4 < 1) {
      plVar6 = plVar2;
    }
    else {
      plVar6 = plVar2;
      if (uVar4 != 1) {
        iVar7 = -(uVar4 & 0xfffffffe);
        do {
          plVar5 = plVar2;
          if (*plVar6 != 0) {
            plVar5 = plVar2 + 1;
            *plVar2 = *plVar6;
          }
          plVar2 = plVar5;
          if (plVar6[1] != 0) {
            plVar2 = plVar5 + 1;
            *plVar5 = plVar6[1];
          }
          plVar6 = plVar6 + 2;
          iVar7 = iVar7 + 2;
        } while (iVar7 != 0);
      }
      plVar5 = plVar2;
      if (((uVar4 & 1) != 0) && (*plVar6 != 0)) {
        plVar5 = plVar2 + 1;
        *plVar2 = *plVar6;
      }
      plVar2 = plVar5;
      plVar6 = *(long **)(param_1 + 0x640);
    }
    uVar4 = (uint)((ulong)((long)plVar2 - (long)plVar6) >> 3);
    *(undefined1 *)(param_1 + 0x63c) = 0;
  }
  if (uVar4 != 0) {
    if (param_2 == 0) {
      (**(code **)(**(long **)(param_1 + 0x630) + 0x28))
                (*(long **)(param_1 + 0x630),*(undefined8 *)(param_1 + 0x640));
    }
    else {
      FUN_031c2998(param_2,*(undefined8 *)(param_1 + 0x640));
    }
  }
  *(undefined4 *)(param_1 + 0x648) = 0;
  lVar3 = *(long *)(param_1 + 0x4b0);
  *(undefined4 *)(param_1 + 0x638) = 0;
  puVar1 = PTR_DAT_047d1a08;
  *(undefined8 *)(param_1 + 0x4b0) = 0;
  if (lVar3 != 0) {
    (**(code **)(puVar1 + 8))(0,lVar3,0);
  }
  puVar8 = *(undefined8 **)(param_1 + 0x4e0);
  if (puVar8 != (undefined8 *)0x0) {
    if (*(int *)(puVar8 + 0xb) != 0) {
      (**(code **)(*(long *)*puVar8 + 0x28))((long *)*puVar8,puVar8[1]);
      *(undefined4 *)(puVar8 + 0xb) = 0;
    }
    *(undefined4 *)(puVar8 + 2) = 0;
    if ((-1 < (int)*(uint *)((long)puVar8 + 0x14)) && (puVar8[1] != 0)) {
      (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
                (PTR_PTR_047d1a50,puVar8[1],(ulong)*(uint *)((long)puVar8 + 0x14) << 3);
    }
    puVar8[1] = 0;
    *(undefined4 *)((long)puVar8 + 0x14) = 0x80000000;
    (**(code **)(puVar1 + 8))(0,puVar8,0);
  }
  *(undefined8 *)(param_1 + 0x4e0) = 0;
  return;
}


