/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018ef13c; name: FUN_018ef13c
 */


long FUN_018ef13c(long param_1,int *param_2)

{
  char *__s;
  uint *puVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  ushort *puVar5;
  byte *pbVar6;
  undefined1 *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 *local_80;
  char *pcStack_78;
  size_t local_70;
  long *local_68;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_38;
  undefined4 local_34;
  
  puVar5 = (ushort *)((long)param_2 - (long)*param_2);
  uVar3 = *puVar5;
  if (uVar3 < 5) {
    local_34 = 0;
LAB_018ef2ac:
    local_38 = 0;
LAB_018ef2b0:
    local_54 = 0;
LAB_018ef2b4:
    local_58 = 0;
LAB_018ef2b8:
    local_5c = 0;
  }
  else {
    local_34 = 0;
    if ((ulong)puVar5[2] != 0) {
      local_34 = *(undefined4 *)((long)param_2 + (ulong)puVar5[2]);
    }
    if (uVar3 < 7) goto LAB_018ef2ac;
    local_38 = 0;
    if ((ulong)puVar5[3] != 0) {
      local_38 = *(undefined4 *)((long)param_2 + (ulong)puVar5[3]);
    }
    if (uVar3 < 9) goto LAB_018ef2b0;
    if ((ulong)puVar5[4] == 0) {
      local_54 = 0;
    }
    else {
      local_54 = *(undefined4 *)((long)param_2 + (ulong)puVar5[4]);
    }
    if (uVar3 < 0xb) goto LAB_018ef2b4;
    local_58 = 0;
    if ((ulong)puVar5[5] != 0) {
      local_58 = *(undefined4 *)((long)param_2 + (ulong)puVar5[5]);
    }
    if (uVar3 < 0xd) goto LAB_018ef2b8;
    local_5c = 0;
    if ((ulong)puVar5[6] != 0) {
      local_5c = *(undefined4 *)((long)param_2 + (ulong)puVar5[6]);
    }
    if ((0xe < uVar3) && (uVar8 = (ulong)puVar5[7], uVar8 != 0)) {
      puVar1 = (uint *)((long)param_2 + uVar8);
      uVar9 = (ulong)*puVar1;
      __s = (char *)((long)puVar1 + uVar9 + 4);
      puVar7 = &DAT_cbf29ce484222645;
      local_70 = strlen(__s);
      bVar2 = *(byte *)((long)puVar1 + uVar9 + 4);
      if (bVar2 != 0) {
        pbVar6 = (byte *)((long)param_2 + uVar9 + uVar8 + 5);
        do {
          puVar7 = (undefined1 *)(((ulong)puVar7 ^ (ulong)bVar2) * 0x100000001b3);
          bVar2 = *pbVar6;
          pbVar6 = pbVar6 + 1;
        } while (bVar2 != 0);
      }
      local_68 = (long *)0x0;
      local_80 = puVar7;
      pcStack_78 = __s;
      goto LAB_018ef254;
    }
  }
  if (((*PTR_DAT_047d3e28 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar4 != 0))
  {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  local_80 = *(undefined1 **)PTR_DAT_047d3e30;
  pcStack_78 = *(char **)(PTR_DAT_047d3e30 + 8);
  local_70 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
  local_68 = *(long **)(PTR_DAT_047d3e30 + 0x18);
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x18))();
  }
LAB_018ef254:
  FUN_018ef344(param_1,*(undefined8 *)(param_1 + 8),&local_34,&local_38,&local_54,&local_58,
               &local_5c,&local_80);
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  return param_1;
}


