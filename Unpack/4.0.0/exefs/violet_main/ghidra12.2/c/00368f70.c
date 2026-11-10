/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00368f70; name: FUN_00368f70
 */


void FUN_00368f70(long param_1,ulong param_2,long *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *local_80;
  ulong uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  if (*(ulong *)(param_1 + 0x20) < param_2) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(ulong *)(param_1 + 0x20) = *(ulong *)(param_1 + 0x20) - param_2;
  lVar11 = *(long *)(param_1 + 0x10) + -1;
  puVar1 = (undefined8 *)(*(long *)(param_1 + 8) + lVar11 * 0x20);
  uStack_78 = puVar1[1];
  local_80 = (undefined8 *)*puVar1;
  uStack_68 = puVar1[3];
  local_70 = puVar1[2];
  bVar7 = local_80 == (undefined8 *)0x0;
  uVar12 = uStack_78 & 0xff;
  if (!bVar7) {
    uVar12 = uStack_78;
  }
  if (uVar12 <= param_2) {
    if (param_3 == (long *)0x0) {
      if (uVar12 != param_2) {
        do {
          if ((!bVar7) && (plVar10 = (long *)*local_80, plVar10 != (long *)0x0)) {
            do {
              lVar8 = *plVar10;
              cVar4 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
              if (bVar7) {
                *plVar10 = lVar8 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (lVar8 + -1 == 0) {
              (*(code *)local_80[3])(local_80[4]);
            }
          }
          *(long *)(param_1 + 0x10) = lVar11;
          lVar11 = lVar11 + -1;
          puVar1 = (undefined8 *)(*(long *)(param_1 + 8) + lVar11 * 0x20);
          param_2 = param_2 - uVar12;
          uStack_78 = puVar1[1];
          local_80 = (undefined8 *)*puVar1;
          uStack_68 = puVar1[3];
          local_70 = puVar1[2];
          bVar7 = local_80 == (undefined8 *)0x0;
          uVar12 = uStack_78 & 0xff;
          if (!bVar7) {
            uVar12 = uStack_78;
          }
          if (param_2 < uVar12) goto LAB_00368fd8;
        } while (param_2 != uVar12);
      }
LAB_003691a8:
      uVar6 = uStack_68;
      uVar5 = local_70;
      uVar12 = uStack_78;
      puVar1 = local_80;
      if (param_3 == (long *)0x0) {
        if ((!bVar7) && (plVar10 = (long *)*local_80, plVar10 != (long *)0x0)) {
          do {
            lVar8 = *plVar10;
            cVar4 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar7) {
              *plVar10 = lVar8 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar8 + -1 == 0) {
            (*(code *)local_80[3])(local_80[4]);
          }
        }
      }
      else {
        lVar8 = param_3[2];
        if (lVar8 == 0) {
          lVar13 = *param_3;
          param_3[1] = lVar13;
        }
        else {
          lVar13 = param_3[1];
          if ((lVar13 - *param_3 >> 5) + lVar8 == param_3[3]) {
            FUN_003693d0(param_3);
            lVar13 = param_3[1];
          }
        }
        puVar2 = (undefined8 *)(lVar13 + lVar8 * 0x20);
        *puVar2 = puVar1;
        puVar2[1] = uVar12;
        puVar2[3] = uVar6;
        puVar2[2] = uVar5;
        uVar3 = uVar12 & 0xff;
        if (!bVar7) {
          uVar3 = uVar12;
        }
        param_3[4] = param_3[4] + uVar3;
        param_3[2] = lVar8 + 1;
      }
      *(long *)(param_1 + 0x10) = lVar11;
      return;
    }
    lVar8 = *(long *)(param_1 + 0x10) * 0x20 + -0x40;
    do {
      uVar6 = uStack_68;
      uVar5 = local_70;
      uVar3 = uStack_78;
      puVar1 = local_80;
      param_2 = param_2 - uVar12;
      if (param_2 == 0) goto LAB_003691a8;
      lVar13 = param_3[2];
      if (lVar13 == 0) {
        lVar9 = *param_3;
        param_3[1] = lVar9;
      }
      else {
        lVar9 = param_3[1];
        if ((lVar9 - *param_3 >> 5) + lVar13 == param_3[3]) {
          FUN_003693d0(param_3);
          lVar9 = param_3[1];
        }
      }
      puVar2 = (undefined8 *)(lVar9 + lVar13 * 0x20);
      *puVar2 = puVar1;
      puVar2[1] = uVar3;
      puVar2[3] = uVar6;
      puVar2[2] = uVar5;
      uVar12 = uVar3 & 0xff;
      if (!bVar7) {
        uVar12 = uVar3;
      }
      param_3[4] = param_3[4] + uVar12;
      param_3[2] = lVar13 + 1;
      *(long *)(param_1 + 0x10) = lVar11;
      lVar11 = lVar11 + -1;
      puVar1 = (undefined8 *)(*(long *)(param_1 + 8) + lVar8);
      lVar8 = lVar8 + -0x20;
      uStack_78 = puVar1[1];
      local_80 = (undefined8 *)*puVar1;
      uStack_68 = puVar1[3];
      local_70 = puVar1[2];
      bVar7 = local_80 == (undefined8 *)0x0;
      uVar12 = uStack_78 & 0xff;
      if (!bVar7) {
        uVar12 = uStack_78;
      }
    } while (uVar12 <= param_2);
  }
LAB_00368fd8:
  FUN_00367f00(&local_a0,&local_80,uVar12 - param_2);
  uVar6 = uStack_68;
  uVar5 = local_70;
  uVar12 = uStack_78;
  puVar2 = local_80;
  puVar1 = (undefined8 *)(*(long *)(param_1 + 8) + lVar11 * 0x20);
  puVar1[1] = uStack_98;
  *puVar1 = local_a0;
  puVar1[3] = uStack_88;
  puVar1[2] = uStack_90;
  if (param_3 == (long *)0x0) {
    if ((local_80 != (undefined8 *)0x0) && (plVar10 = (long *)*local_80, plVar10 != (long *)0x0)) {
      do {
        lVar11 = *plVar10;
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar7) {
          *plVar10 = lVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar11 + -1 == 0) {
        (*(code *)local_80[3])(local_80[4]);
      }
    }
  }
  else {
    lVar11 = param_3[2];
    if (lVar11 == 0) {
      lVar8 = *param_3;
      param_3[1] = lVar8;
    }
    else {
      lVar8 = param_3[1];
      if ((lVar8 - *param_3 >> 5) + lVar11 == param_3[3]) {
        FUN_003693d0(param_3);
        lVar8 = param_3[1];
      }
    }
    puVar1 = (undefined8 *)(lVar8 + lVar11 * 0x20);
    *puVar1 = puVar2;
    puVar1[1] = uVar12;
    puVar1[3] = uVar6;
    puVar1[2] = uVar5;
    uVar3 = uVar12 & 0xff;
    if (puVar2 != (undefined8 *)0x0) {
      uVar3 = uVar12;
    }
    param_3[4] = param_3[4] + uVar3;
    param_3[2] = lVar11 + 1;
  }
  return;
}


