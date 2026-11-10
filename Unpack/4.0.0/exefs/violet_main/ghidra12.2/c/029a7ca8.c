/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029a7ca8; name: FUN_029a7ca8
 */


void FUN_029a7ca8(undefined8 *param_1,int *param_2)

{
  uint *puVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  int iVar7;
  undefined8 uVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long *local_68;
  
  FUN_00d1a22c(param_1,0xc);
  *param_1 = &PTR_FUN_04601e20;
  param_1[4] = &PTR_LAB_04601f68;
  param_1[5] = &DAT_04602090;
  param_1[6] = &PTR_LAB_046020e8;
  param_1[7] = &PTR_LAB_04602110;
  if (*(ushort *)((long)param_2 - (long)*param_2) < 7) {
    bVar6 = false;
  }
  else {
    uVar11 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[3];
    bVar6 = false;
    if (uVar11 != 0) {
      bVar6 = *(char *)((long)param_2 + uVar11) != '\0';
    }
  }
  *(bool *)((long)param_1 + 0x11e) = bVar6;
  if ((*(ushort *)((long)param_2 - (long)*param_2) < 9) ||
     (uVar11 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[4], uVar11 == 0)) {
    bVar6 = true;
  }
  else {
    bVar6 = *(char *)((long)param_2 + uVar11) != '\0';
  }
  *(bool *)((long)param_1 + 0x11f) = bVar6;
  puVar1 = (uint *)((long)param_2 + (ulong)*(ushort *)((long)param_2 + (4 - (long)*param_2)));
  FUN_029a8a44(param_1 + 0x24,*(undefined4 *)((long)puVar1 + (ulong)*puVar1));
  *(undefined2 *)(param_1 + 0x2b) = 0;
  puVar5 = PTR_DAT_047d4250;
  puVar4 = PTR_DAT_047d4248;
  puVar3 = PTR_DAT_047d4240;
  uVar11 = (ulong)*(ushort *)((long)param_2 + (4 - (long)*param_2));
  puVar1 = (uint *)((long)param_2 + uVar11);
  uVar12 = (ulong)*puVar1;
  uVar13 = (ulong)*(uint *)((long)puVar1 + uVar12);
  lVar16 = uVar13 << 2;
  if (uVar13 != 0) {
    lVar17 = 0;
    lVar15 = (long)param_2 + uVar12 + uVar11 + 8;
    do {
      pcVar2 = (char *)(lVar15 + (ulong)*(uint *)(lVar15 + -4));
      if (*pcVar2 == '\0') {
        plVar10 = (long *)FUN_00d44228();
        if (plVar10 != (long *)0x0) {
          (**(code **)(*plVar10 + 0x18))(plVar10);
        }
      }
      else {
        if (((*puVar3 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar3), iVar7 != 0)) {
          FUN_00100190(PTR_LAB_047d4510,puVar4,&PTR_LOOP_04483000);
          __cxa_guard_release(puVar3);
        }
        uVar8 = *(undefined8 *)puVar4;
        *(undefined8 *)puVar5 = uVar8;
        FUN_00cf9884(&local_68,uVar8,pcVar2);
        plVar10 = local_68;
      }
      lVar14 = param_1[0x24];
      plVar9 = *(long **)(lVar14 + lVar17);
      *(undefined8 *)(lVar14 + lVar17) = 0;
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x20))();
      }
      *(long **)(lVar14 + lVar17) = plVar10;
      lVar17 = lVar17 + 8;
      lVar16 = lVar16 + -4;
      lVar15 = lVar15 + 4;
    } while (lVar16 != 0);
  }
  FUN_00c6a514(param_1 + 7,0x82);
  return;
}


