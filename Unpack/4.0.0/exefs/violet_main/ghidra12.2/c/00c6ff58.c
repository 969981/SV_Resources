/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c6ff58; name: FUN_00c6ff58
 */


void FUN_00c6ff58(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  uint *puVar3;
  uint *puVar4;
  char *pcVar5;
  char cVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  int iVar15;
  long *plVar16;
  char *pcVar17;
  long lVar18;
  uint uVar19;
  uint uVar20;
  long local_88;
  long lStack_80;
  long local_78;
  long *local_70;
  uint local_68;
  uint uStack_64;
  
  puVar9 = PTR_DAT_047d8b70;
  puVar8 = PTR_PTR_047d4508;
  pcVar17 = *(char **)(param_1 + 8);
  pcVar5 = *(char **)(param_1 + 0x10);
  if (pcVar17 == pcVar5) {
    return;
  }
  uVar19 = *(uint *)(param_1 + 0x4c);
  puVar1 = param_2 + 4;
LAB_00c6ffc4:
  lVar18 = *(long *)(pcVar17 + 8);
  if (lVar18 != 0) {
    cVar6 = *pcVar17;
    if (cVar6 == '\x01') {
      plVar14 = *(long **)(lVar18 + 8);
LAB_00c700b4:
      plVar2 = (long *)puVar9;
      if (plVar14 != (long *)0x0) {
        plVar2 = plVar14 + 6;
      }
      local_88 = *plVar2;
      plVar2 = (long *)puVar8;
      if (plVar14 != (long *)0x0) {
        plVar2 = plVar14 + 7;
      }
      lStack_80 = *plVar2;
      if (plVar14 == (long *)0x0) {
        local_78 = 0;
      }
      else {
        local_78 = plVar14[8];
        local_70 = (long *)0x0;
        (**(code **)(*plVar14 + 0x18))(plVar14);
      }
      local_70 = plVar14;
      uVar10 = (*(code *)*param_2)(puVar1,&local_88);
      if (local_70 != (long *)0x0) {
        (**(code **)(*local_70 + 0x20))();
      }
      uVar20 = (uint)uVar10;
      if (0x7fffffff < (uint)uVar10 || (uVar10 & 0xff00000000) == 0) {
        uVar20 = uVar19;
      }
    }
    else {
      uVar20 = uVar19;
      if (cVar6 == '\x03') {
        if (*(char *)(lVar18 + 0x78) != '\0') {
          uVar20 = *(uint *)(param_1 + 0x48);
        }
        plVar16 = *(long **)(lVar18 + 8);
        plVar14 = (long *)puVar8;
        plVar2 = (long *)puVar9;
        if (plVar16 != (long *)0x0) {
          plVar14 = plVar16 + 7;
          plVar2 = plVar16 + 6;
        }
        local_88 = *plVar2;
        lStack_80 = *plVar14;
        if (plVar16 == (long *)0x0) {
          local_78 = 0;
        }
        else {
          local_78 = plVar16[8];
          local_70 = (long *)0x0;
          (**(code **)(*plVar16 + 0x18))(plVar16);
        }
        local_70 = plVar16;
        uVar10 = (*(code *)*param_2)(puVar1,&local_88);
        if (local_70 != (long *)0x0) {
          (**(code **)(*local_70 + 0x20))();
        }
        if ((uVar10 & 0xff00000000) != 0) {
          uVar11 = *(ulong *)(lVar18 + 0x18);
          if (uVar11 != 0) {
            uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
            uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
            uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
            iVar15 = (int)uVar10;
            uVar10 = (ulong)iVar15;
            if (uVar12 < 2) {
              uVar13 = uVar11 - 1 & uVar10;
            }
            else if (uVar10 < uVar11) {
              uVar13 = uVar10;
            }
            else {
              uVar13 = 0;
              if (uVar11 != 0) {
                uVar13 = uVar10 / uVar11;
              }
              uVar13 = uVar10 - uVar13 * uVar11;
            }
            plVar14 = *(long **)(*(long *)(lVar18 + 0x10) + uVar13 * 8);
            if (plVar14 != (long *)0x0) {
              plVar14 = (long *)*plVar14;
              if (plVar14 != (long *)0x0) {
                if (uVar12 < 2) {
                  do {
                    if (plVar14[1] == uVar10) {
                      if ((int)plVar14[2] == iVar15) goto LAB_00c70228;
                    }
                    else if ((plVar14[1] & uVar11 - 1) != uVar13) break;
                    plVar14 = (long *)*plVar14;
                  } while (plVar14 != (long *)0x0);
                }
                else {
                  do {
                    uVar12 = plVar14[1];
                    if (uVar12 == uVar10) {
                      if ((int)plVar14[2] == iVar15) goto LAB_00c70228;
                    }
                    else {
                      if (uVar11 <= uVar12) {
                        uVar7 = 0;
                        if (uVar11 != 0) {
                          uVar7 = uVar12 / uVar11;
                        }
                        uVar12 = uVar12 - uVar7 * uVar11;
                      }
                      if (uVar12 != uVar13) break;
                    }
                    plVar14 = (long *)*plVar14;
                  } while (plVar14 != (long *)0x0);
                }
              }
            }
          }
        }
      }
      else if (cVar6 == '\x02') {
        plVar16 = *(long **)(lVar18 + 8);
        plVar14 = (long *)puVar8;
        plVar2 = (long *)puVar9;
        if (plVar16 != (long *)0x0) {
          plVar14 = plVar16 + 7;
          plVar2 = plVar16 + 6;
        }
        uVar19 = *(uint *)(param_1 + 0x48);
        local_88 = *plVar2;
        lStack_80 = *plVar14;
        if (plVar16 == (long *)0x0) {
          local_78 = 0;
        }
        else {
          local_78 = plVar16[8];
          local_70 = (long *)0x0;
          (**(code **)(*plVar16 + 0x18))(plVar16);
        }
        local_70 = plVar16;
        uVar10 = (*(code *)*param_2)(puVar1,&local_88);
        if (local_70 != (long *)0x0) {
          (**(code **)(*local_70 + 0x20))();
        }
        uVar20 = uVar19;
        if (((uVar10 & 0xff00000000) != 0) && ((int)uVar10 != 0)) {
          plVar14 = *(long **)(lVar18 + 0x10);
          goto LAB_00c700b4;
        }
      }
    }
    goto LAB_00c70120;
  }
  goto LAB_00c70158;
LAB_00c70228:
  uVar20 = *(uint *)((long)plVar14 + 0x14);
LAB_00c70120:
  local_88 = CONCAT44(local_88._4_4_,uVar20);
  local_68 = *(uint *)(param_1 + 0x44);
  uStack_64 = *(uint *)(param_1 + 0x40);
  puVar3 = &local_68;
  if ((int)uVar20 <= (int)*(uint *)(param_1 + 0x44)) {
    puVar3 = (uint *)&local_88;
  }
  puVar4 = &uStack_64;
  if ((int)*(uint *)(param_1 + 0x40) <= (int)uVar20) {
    puVar4 = puVar3;
  }
  uVar19 = *puVar4;
  if (*(uint *)(param_1 + 0x4c) != uVar19) {
    *(uint *)(param_1 + 0x4c) = uVar19;
    *(undefined1 *)(param_1 + 0x54) = 1;
  }
LAB_00c70158:
  pcVar17 = pcVar17 + 0x28;
  if (pcVar17 == pcVar5) {
    return;
  }
  goto LAB_00c6ffc4;
}


