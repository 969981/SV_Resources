/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0167c08c; name: FUN_0167c08c
 */


void FUN_0167c08c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined2 *puVar1;
  byte bVar2;
  char cVar3;
  undefined2 uVar4;
  bool bVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  int *piVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  undefined8 uVar14;
  long *plVar15;
  char local_90 [8];
  undefined2 *local_88;
  undefined8 uStack_80;
  long *local_78;
  undefined8 uStack_70;
  undefined2 local_68;
  undefined1 local_66;
  
  uStack_80 = *param_3;
  local_88 = (undefined2 *)param_3[1];
  uStack_70 = param_3[2];
  local_78 = (long *)param_3[3];
  local_66 = 0;
  local_68 = 0x32;
  FUN_0167c404(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x360),local_90,&local_88);
  plVar13 = (long *)param_3[3];
  if ((*(char *)((long)plVar13 + 0xa7) == '\0') && (*(char *)((long)plVar13 + 0xa9) == '\0')) {
    bVar5 = false;
  }
  else {
    bVar5 = *(char *)((long)plVar13 + 0xa6) == '\0';
  }
  uVar10 = *param_3;
  puVar1 = (undefined2 *)param_3[1];
  uVar14 = param_3[2];
  FUN_0167d6f4(*(undefined8 *)(param_1 + 0x38),puVar1,uVar10,plVar13);
  local_68 = 0x34;
  local_66 = 0;
  local_88 = puVar1;
  uStack_80 = uVar10;
  local_78 = plVar13;
  uStack_70 = uVar14;
  FUN_0167c404(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x360),local_90,&local_88);
  FUN_0167dbac(*(undefined8 *)(param_1 + 0x38),puVar1,uVar10,plVar13);
  uVar10 = *param_3;
  puVar1 = (undefined2 *)param_3[1];
  uVar14 = param_3[2];
  plVar13 = (long *)param_3[3];
  uVar4 = *puVar1;
  if (((*PTR_DAT_047d7940 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d7940), iVar7 != 0))
  {
    FUN_00100190(PTR_LAB_047d7958,PTR_DAT_047d7948,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d7940);
  }
  uVar8 = *(undefined8 *)PTR_DAT_047d7948;
  *(undefined8 *)PTR_DAT_047d7950 = uVar8;
  piVar9 = (int *)FUN_00cf60cc(uVar8,uVar4);
  if ((((0x32 < *(ushort *)((long)piVar9 - (long)*piVar9)) &&
       (uVar11 = (ulong)((ushort *)((long)piVar9 - (long)*piVar9))[0x19], uVar11 != 0)) &&
      (*(char *)((long)piVar9 + uVar11) != '\0')) &&
     (*(undefined1 *)(plVar13 + 0x15) = 0, *(char *)((long)plVar13 + 0xa6) != '\0')) {
    plVar15 = (long *)*plVar13;
    *(undefined1 *)(plVar13 + 0x15) = 1;
    while (plVar15 != (long *)0x0) {
      uVar11 = (**(code **)(*plVar15 + 0x510))(plVar15,7);
      if ((uVar11 & 1) == 0) {
        uVar11 = FUN_0167e558(*(undefined8 *)(param_1 + 0x38),uVar10,plVar15,puVar1);
        if ((uVar11 & 1) == 0) {
          local_66 = 1;
          local_68 = 0x38;
          local_88 = puVar1;
          uStack_80 = uVar10;
          local_78 = plVar15;
          uStack_70 = uVar14;
          FUN_0167c508(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x300),local_90,&local_88);
          if (local_90[0] != '\0') goto LAB_0167c344;
        }
      }
      else {
        uVar11 = (**(code **)(*plVar15 + 0x510))(plVar15,0x10);
        if ((((uVar11 & 1) == 0) || (uVar11 = FUN_015d973c(*puVar1), (uVar11 & 1) != 0)) &&
           (uVar11 = FUN_0167e558(*(undefined8 *)(param_1 + 0x38),uVar10,plVar15,puVar1),
           (uVar11 & 1) == 0)) {
LAB_0167c344:
          cVar3 = *(char *)((long)puVar1 + 0x13);
          bVar2 = *(byte *)((long)plVar13 + 0xa6);
          FUN_0167bf08(plVar13,plVar15);
          lVar12 = FUN_0149b698(param_1);
          if ((bVar2 < 2 || cVar3 == '\0') && (*(char *)(lVar12 + 0xc0) == '\0')) {
            FUN_0297f1a8(param_1,uVar10,plVar15,puVar1);
          }
          lVar12 = FUN_0149b698(param_1);
          *(undefined1 *)(lVar12 + 0xc0) = 0;
        }
      }
      bVar2 = *(byte *)(plVar13 + 0x15);
      if (*(byte *)((long)plVar13 + 0xa6) <= bVar2) break;
      *(byte *)(plVar13 + 0x15) = bVar2 + 1;
      plVar15 = (long *)plVar13[bVar2];
    }
  }
  uStack_80 = *param_3;
  local_88 = (undefined2 *)param_3[1];
  uStack_70 = param_3[2];
  local_78 = (long *)param_3[3];
  local_66 = 0;
  local_68 = 0x39;
  FUN_0167c404(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x360),local_90,&local_88);
  if (((bVar5) ||
      (((lVar12 = param_3[3], *(char *)(lVar12 + 0xa7) == '\0' && (*(char *)(lVar12 + 0xa9) == '\0')
        ) || (*(char *)(lVar12 + 0xa6) != '\0')))) || (param_3[4] == 0)) {
    return;
  }
  uVar10 = FUN_01243584(param_1);
  uVar6 = (**(code **)(*(long *)*param_3 + 0x98))();
  FUN_0167bf90(uVar10,uVar6,4);
  return;
}


