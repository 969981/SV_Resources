/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02addd90; name: FUN_02addd90
 */


void FUN_02addd90(long param_1)

{
  long *plVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  long *local_b0 [10];
  long *local_48;
  
  *(short *)(param_1 + 0x34a) = *(short *)(param_1 + 0x178);
  if (*(short *)(param_1 + 0x178) == 0xf) {
    if (((*PTR_DAT_047d4c98 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar5 != 0)) {
      FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4c98);
    }
    lVar8 = *(long *)PTR_DAT_047d4ca0;
    *(long *)PTR_DAT_047d4ca8 = lVar8;
    puVar4 = PTR_DAT_047d48d8;
    puVar3 = PTR_DAT_047d48d0;
    plVar1 = *(long **)(lVar8 + 0x1c8);
    for (plVar12 = *(long **)(lVar8 + 0x1c0); plVar12 != plVar1; plVar12 = plVar12 + 1) {
      lVar8 = *plVar12;
      plVar6 = (long *)(*(code *)**(undefined8 **)(lVar8 + 0x28))((undefined8 *)(lVar8 + 0x28));
      if (((*puVar3 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar3), iVar5 != 0)) {
        uVar10 = FUN_01b3fb0c();
        *(undefined8 *)puVar4 = uVar10;
        __cxa_guard_release(puVar3);
      }
      for (; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
        if (plVar6 == (long *)puVar4) {
          if ((*(long *)(lVar8 + 0xb70) != 0) || (*(int *)(lVar8 + 0xb7c) != -1)) {
            *(undefined4 *)(lVar8 + 0xb78) = 0xffffffff;
            *(undefined8 *)(lVar8 + 0xb70) = 0;
            memset((void *)(lVar8 + 0xb7c),0xff,0x58);
            *(undefined4 *)(lVar8 + 0xc04) = 0;
            *(undefined8 *)(lVar8 + 0xbd8) = 0;
            *(undefined8 *)(lVar8 + 0xbe0) = 0;
            *(undefined8 *)(lVar8 + 0xbe8) = 0;
            *(undefined8 *)(lVar8 + 0xbf0) = 0;
            *(undefined8 *)(lVar8 + 0xbf8) = 0;
            *(undefined2 *)(lVar8 + 0xc00) = 0;
            if (DAT_04835790 != (code *)0x0) {
              (*DAT_04835790)(&DAT_048357b0);
            }
          }
          goto LAB_02added4;
        }
      }
    }
  }
LAB_02added4:
  puVar9 = *(undefined8 **)(param_1 + 0xb00);
  *(undefined8 *)(param_1 + 0xb00) = 0;
  if (puVar9 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar8 = FUN_00c4e600();
    iVar2 = *(int *)(lVar8 + 0x12c8);
    iVar5 = iVar2 + 1;
    *(int *)(lVar8 + 0x12c8) = iVar5;
    if (*(int *)(lVar8 + 0x12cc) <= iVar2) {
      *(int *)(lVar8 + 0x12cc) = iVar5;
    }
    (**(code **)*puVar9)(puVar9);
    plVar12 = *(long **)(param_1 + 0xb08);
    uVar10 = *(undefined8 *)(param_1 + 0xb10);
    uVar11 = *(undefined8 *)(param_1 + 0xb18);
    uVar7 = (**(code **)(*plVar12 + 0xf8))(plVar12);
    if (((uVar7 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar9,uVar10,uVar11);
    }
    else {
      FUN_00c48fe8(plVar12,puVar9,uVar10,uVar11);
    }
    lVar8 = FUN_00c4e600();
    iVar5 = *(int *)(lVar8 + 0x12c8) + -1;
    *(int *)(lVar8 + 0x12c8) = iVar5;
    if (iVar5 == 0) {
      plVar12 = (long *)FUN_00c4e600();
      if (plVar12[600] != 0) {
        local_48 = plVar12 + plVar12[600] * 3;
        local_b0[0] = plVar12;
        FUN_00c4ea30(local_b0,&local_48);
        plVar6 = (long *)*plVar12;
        plVar1 = plVar12;
        if (plVar12[600] != 0) {
          plVar1 = plVar12 + plVar12[600] * 3;
        }
        if (plVar1 == plVar12) {
          lVar15 = 0;
          lVar14 = 0;
        }
        else {
          lVar14 = 0;
          lVar15 = 0;
          plVar13 = plVar12;
          do {
            (**(code **)(*(long *)*plVar13 + 0xd0))();
            if ((long *)*plVar13 != plVar6) {
              (**(code **)(*plVar6 + 0x100))(plVar6,plVar12 + lVar15 * 3,plVar13);
              plVar6 = (long *)*plVar13;
              lVar15 = lVar14;
            }
            plVar13 = plVar13 + 3;
            lVar14 = lVar14 + 1;
          } while (plVar1 != plVar13);
        }
        (**(code **)(*plVar6 + 0x100))(plVar6,plVar12 + lVar15 * 3,plVar12 + lVar14 * 3);
        plVar12[600] = 0;
      }
      *(undefined4 *)(lVar8 + 0x12cc) = 0;
    }
  }
  memset((void *)((ulong)local_b0 | 2),0,0x48);
  *(undefined2 *)(param_1 + 0x178) = 0;
  memcpy((void *)(param_1 + 0x17a),local_b0,0x4a);
  return;
}


