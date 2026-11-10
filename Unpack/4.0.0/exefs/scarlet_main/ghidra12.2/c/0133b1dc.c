/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0133b1dc; name: FUN_0133b1dc
 */


void FUN_0133b1dc(long param_1,long *param_2)

{
  ulong *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  ulong *extraout_x1;
  char *__s2;
  undefined8 uVar12;
  ulong *puVar13;
  undefined8 *puVar14;
  code *pcVar15;
  ulong uVar16;
  char *__s1;
  long lVar17;
  undefined8 local_88;
  long *local_80;
  long *local_78;
  long *local_70;
  undefined8 uStack_68;
  undefined1 local_60;
  undefined8 local_58;
  long *local_38;
  
  puVar5 = PTR_DAT_047d1a08;
  local_80 = (long *)0x0;
  local_78 = (long *)0x0;
  local_88 = 0;
  local_38 = (long *)0x8;
  plVar8 = (long *)(**(code **)PTR_DAT_047d1a08)(0,&local_38,0);
  if (*(code **)(puVar5 + 0x10) != (code *)0x0) {
    (**(code **)(puVar5 + 0x10))(plVar8,"Cloner");
  }
  local_38 = (long *)&DAT_000000c0;
  lVar9 = (**(code **)puVar5)(0,&local_38,0);
  if (*(code **)(puVar5 + 0x10) != (code *)0x0) {
    (**(code **)(puVar5 + 0x10))(lVar9,"CloneImpl");
  }
  FUN_00cb44e4(lVar9);
  *plVar8 = lVar9;
  puVar6 = PTR_DAT_047ddc48;
  local_60 = 1;
  local_58 = 0;
  uStack_68 = 0;
  *(undefined1 *)(lVar9 + 0x5d) = 0;
  local_88 = *(undefined8 *)puVar6;
  local_70 = plVar8;
  uVar10 = (**(code **)(**(long **)(param_1 + 8) + 0x70))();
  if (*(long *)(param_1 + 8) == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = *(undefined8 *)(*(long *)(param_1 + 8) + 0x1d8);
  }
  FUN_00cb42bc(&local_38,&local_88,uVar10,uVar12,0);
  plVar8 = local_70;
  if (local_70 != (long *)0x0) {
    lVar9 = *local_70;
    if (lVar9 != 0) {
      FUN_00cb4718(lVar9);
      (**(code **)(puVar5 + 8))(0,lVar9,0);
    }
    (**(code **)(puVar5 + 8))(0,plVar8,0);
  }
  if ((local_78 != (long *)0x0) && (local_78[1] != 0)) {
    plVar8 = local_78 + 2;
    do {
      lVar9 = *plVar8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 + -1 == 0) {
      (**(code **)(*local_78 + 0x18))();
    }
  }
  if ((local_80 != (long *)0x0) && (local_80[1] != 0)) {
    plVar8 = local_80 + 2;
    do {
      lVar9 = *plVar8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 + -1 == 0) {
      (**(code **)(*local_80 + 0x18))();
    }
  }
  if (local_38 != (long *)0x0) {
    plVar8 = (long *)(**(code **)(*local_38 + 0x40))(local_38,PTR_DAT_047ddc18);
    puVar5 = PTR_DAT_047ddc28;
    if (plVar8 != (long *)0x0) {
      puVar13 = (ulong *)PTR_DAT_047ddc50;
      while (uVar16 = *puVar13, ((uint)uVar16 >> 3 & 1) == 0) {
        if (((uVar16 & 1) != 0) || (puVar13 = (ulong *)puVar13[1], puVar13 == (ulong *)0x0))
        goto LAB_0133b3c8;
      }
      if (puVar13 != (ulong *)0x0) {
        __s1 = (char *)puVar13[(ulong)(byte)POPCOUNT((byte)uVar16 & 7) + 2];
        goto LAB_0133b3cc;
      }
LAB_0133b3c8:
      __s1 = (char *)0x0;
LAB_0133b3cc:
      if (0 < (int)plVar8[1]) {
        lVar9 = 0;
        do {
          lVar17 = *plVar8;
          plVar11 = *(long **)(lVar17 + lVar9 * 0x18 + 0x10);
          if (plVar11 == (long *)0x0) {
LAB_0133b424:
            __s2 = (char *)(*(ulong *)(lVar17 + lVar9 * 0x18 + 8) & 0xfffffffffffffffe);
joined_r0x0133b430:
            if ((__s2 != (char *)0x0) && (iVar7 = strcmp(__s1,__s2), iVar7 == 0)) {
              lVar9 = *(long *)(*plVar8 + lVar9 * 0x18 + 0x10);
              if ((lVar9 != 0) && (*(long *)(lVar9 + 8) != 0)) {
                plVar8 = (long *)(lVar9 + 0x10);
                do {
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
                  if (bVar4) {
                    *plVar8 = *plVar8 + 1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
              }
              goto LAB_0133b480;
            }
          }
          else {
            puVar14 = (undefined8 *)*plVar11;
            if (puVar14 == (undefined8 *)0x0) {
              puVar14 = (undefined8 *)puVar5;
              do {
                puVar13 = (ulong *)puVar5;
                if (((uint)*puVar14 >> 0xb & 1) != 0) {
                  uVar2 = (uint)*puVar14 & 0x7ff;
                  pcVar15 = (code *)puVar14[(ulong)(byte)(POPCOUNT((char)uVar2) +
                                                         POPCOUNT((char)(uVar2 >> 8))) + 2];
                  if (pcVar15 != (code *)0x0) goto LAB_0133b404;
                  break;
                }
                puVar14 = (undefined8 *)puVar14[1];
              } while (puVar14 != (undefined8 *)0x0);
            }
            else {
              pcVar15 = (code *)*puVar14;
LAB_0133b404:
              (*pcVar15)();
              puVar13 = extraout_x1;
              if (extraout_x1 == (ulong *)0x0) goto LAB_0133b424;
            }
            do {
              uVar16 = *puVar13;
              if (((uint)uVar16 >> 3 & 1) != 0) {
                __s2 = (char *)puVar13[(ulong)(byte)POPCOUNT((byte)uVar16 & 7) + 2];
                goto joined_r0x0133b430;
              }
            } while (((uVar16 & 1) == 0) &&
                    (puVar1 = puVar13 + 1, puVar13 = (ulong *)*puVar1,
                    (ulong *)*puVar1 != (ulong *)0x0));
          }
          lVar9 = lVar9 + 1;
        } while (lVar9 < (int)plVar8[1]);
      }
      lVar9 = 0;
LAB_0133b480:
      plVar8 = (long *)*param_2;
      *param_2 = lVar9;
      if ((plVar8 != (long *)0x0) && (plVar8[1] != 0)) {
        plVar11 = plVar8 + 2;
        do {
          lVar9 = *plVar11;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar4) {
            *plVar11 = lVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar9 + -1 == 0) {
          (**(code **)(*plVar8 + 0x18))();
        }
      }
    }
    if ((local_38 != (long *)0x0) && (local_38[1] != 0)) {
      plVar8 = local_38 + 2;
      do {
        lVar9 = *plVar8;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *plVar8 = lVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar9 + -1 == 0) {
        (**(code **)(*local_38 + 0x18))();
      }
    }
  }
  return;
}


