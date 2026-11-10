/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d97010; name: FUN_00d97010
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00d97010(undefined8 param_1)

{
  long *plVar1;
  code *pcVar2;
  long *plVar3;
  int iVar4;
  byte bVar5;
  bool bVar6;
  int iVar7;
  undefined8 *puVar8;
  byte *__s;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  byte *pbVar12;
  char *pcVar13;
  long *plVar14;
  ulong uVar15;
  char local_b8 [8];
  undefined8 *local_b0;
  long *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  long *local_90;
  byte *pbStack_88;
  size_t local_80;
  long *local_78;
  undefined **local_70;
  undefined8 local_68;
  undefined **local_60;
  undefined8 uStack_58;
  
  puVar8 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar8 == (undefined8 *)0x0) || (pcVar13 = (char *)*puVar8, (char *)*puVar8 == (char *)0x0))
  {
    if ((*PTR_DAT_047d48b8 & 1) == 0) {
      iVar7 = __cxa_guard_acquire(PTR_DAT_047d48b8);
      pcVar13 = PTR_DAT_047d48c0;
      if (iVar7 != 0) {
        *PTR_DAT_047d48c0 = 0;
        *(undefined8 *)(pcVar13 + 8) = 0;
        FUN_00100190(PTR_FUN_047d7b60,pcVar13,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d48b8);
      }
    }
    else {
      pcVar13 = PTR_DAT_047d48c0;
    }
  }
  __s = (byte *)FUN_00c646d0(param_1,2,0);
  if (((DAT_048546c8 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_048546c8), iVar7 != 0)) {
    DAT_048548f0 = '\x01';
    __cxa_guard_release(&DAT_048546c8);
  }
  pcVar2 = (code *)PTR_FUN_047e0238;
  if (DAT_048548f0 == '\0') {
    pcVar2 = (code *)0x0;
  }
  if (__s == (byte *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar7 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_90 = *(long **)PTR_DAT_047d3e30;
    pbStack_88 = *(byte **)(PTR_DAT_047d3e30 + 8);
    local_80 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
    local_78 = *(long **)(PTR_DAT_047d3e30 + 0x18);
    if (local_78 != (long *)0x0) {
      (**(code **)(*local_78 + 0x18))();
    }
  }
  else {
    local_80 = strlen((char *)__s);
    bVar5 = *__s;
    local_90 = (long *)&DAT_cbf29ce484222645;
    pbVar12 = __s;
    while (bVar5 != 0) {
      pbVar12 = pbVar12 + 1;
      local_90 = (long *)(((ulong)local_90 ^ (ulong)bVar5) * 0x100000001b3);
      bVar5 = *pbVar12;
    }
    local_78 = (long *)0x0;
    pbStack_88 = __s;
  }
  if (((*pcVar13 == '\x01') || (*pcVar13 == '\0')) && (*(long *)(pcVar13 + 8) != 0)) {
    (*pcVar2)(&local_70,*(long *)(pcVar13 + 8),&local_90);
  }
  else {
    local_70 = &PTR_LAB_045c6530;
    local_68 = _DAT_00000009;
  }
  local_b8[0] = '\x01';
  local_60 = &PTR_LAB_045c6530;
  uStack_58 = local_68;
  FUN_00d97998(&local_b0,&local_60);
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  FUN_00d97620(param_1,local_b8);
  puVar8 = local_b0;
  if ((local_b8[0] == '\x01') && (local_b0 = (undefined8 *)0x0, puVar8 != (undefined8 *)0x0)) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar9 = FUN_00c4e600();
    iVar4 = *(int *)(lVar9 + 0x12c8);
    iVar7 = iVar4 + 1;
    *(int *)(lVar9 + 0x12c8) = iVar7;
    if (*(int *)(lVar9 + 0x12cc) <= iVar4) {
      *(int *)(lVar9 + 0x12cc) = iVar7;
    }
    (**(code **)*puVar8)(puVar8);
    uVar10 = (**(code **)(*local_a8 + 0xf8))(local_a8);
    if (((uVar10 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
      (**(code **)(*local_a8 + 0x18))(local_a8,puVar8,uStack_a0,local_98);
    }
    else {
      FUN_00c48fe8(local_a8,puVar8,uStack_a0,local_98);
    }
    lVar9 = FUN_00c4e600();
    iVar7 = *(int *)(lVar9 + 0x12c8) + -1;
    *(int *)(lVar9 + 0x12c8) = iVar7;
    if (iVar7 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_60 = (undefined **)(plVar11 + plVar11[600] * 3);
        local_90 = plVar11;
        FUN_00c4ea30(&local_90,&local_60);
        plVar14 = (long *)*plVar11;
        plVar3 = plVar11;
        if (plVar11[600] != 0) {
          plVar3 = plVar11 + plVar11[600] * 3;
        }
        if (plVar3 == plVar11) {
          uVar15 = 0;
          uVar10 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar11 + 0xd0))();
          if ((long *)*plVar11 != plVar14) {
            (**(code **)(*plVar14 + 0x100))(plVar14,plVar11,plVar11);
            plVar14 = (long *)*plVar11;
          }
          plVar1 = plVar11 + 3;
          if (plVar3 == plVar1) {
            uVar15 = 0;
            uVar10 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar1 + 0xd0))();
            bVar6 = (long *)*plVar1 != plVar14;
            if (bVar6) {
              (**(code **)(*plVar14 + 0x100))(plVar14,plVar11,plVar11 + 3);
              plVar14 = (long *)plVar11[3];
            }
            uVar15 = (ulong)bVar6;
            plVar1 = plVar11 + 6;
            if (plVar3 == plVar1) {
              uVar10 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar1 + 0xd0))();
              if ((long *)*plVar1 != plVar14) {
                (**(code **)(*plVar14 + 0x100))(plVar14,plVar11 + uVar15 * 3,plVar11 + 6);
                plVar14 = (long *)plVar11[6];
                uVar15 = 2;
              }
              plVar1 = plVar11 + 9;
              if (plVar3 == plVar1) {
                uVar10 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar1 + 0xd0))();
                if ((long *)*plVar1 != plVar14) {
                  (**(code **)(*plVar14 + 0x100))(plVar14,plVar11 + uVar15 * 3,plVar11 + 9);
                  plVar14 = (long *)plVar11[9];
                  uVar15 = 3;
                }
                plVar1 = plVar11 + 0xc;
                if (plVar3 == plVar1) {
                  uVar10 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar1 + 0xd0))();
                  if ((long *)*plVar1 != plVar14) {
                    (**(code **)(*plVar14 + 0x100))(plVar14,plVar11 + uVar15 * 3,plVar11 + 0xc);
                    plVar14 = (long *)plVar11[0xc];
                    uVar15 = 4;
                  }
                  plVar1 = plVar11 + 0xf;
                  if (plVar3 == plVar1) {
                    uVar10 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar1 + 0xd0))();
                    if ((long *)*plVar1 != plVar14) {
                      (**(code **)(*plVar14 + 0x100))(plVar14,plVar11 + uVar15 * 3,plVar11 + 0xf);
                      plVar14 = (long *)plVar11[0xf];
                      uVar15 = 5;
                    }
                    uVar10 = 6;
                    for (plVar1 = plVar11 + 0x12; plVar3 != plVar1; plVar1 = plVar1 + 3) {
                      (**(code **)(*(long *)*plVar1 + 0xd0))();
                      if ((long *)*plVar1 != plVar14) {
                        (**(code **)(*plVar14 + 0x100))(plVar14,plVar11 + uVar15 * 3,plVar1);
                        plVar14 = (long *)*plVar1;
                        uVar15 = uVar10;
                      }
                      uVar10 = uVar10 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar14 + 0x100))(plVar14,plVar11 + uVar15 * 3,plVar11 + uVar10 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar9 + 0x12cc) = 0;
    }
  }
  return 1;
}


