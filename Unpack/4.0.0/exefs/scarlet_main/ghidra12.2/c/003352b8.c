/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003352b8; name: FUN_003352b8
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_003352b8(long param_1,ulong *param_2)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 *******pppppppuVar5;
  undefined8 ******ppppppuVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *******pppppppuVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  char cVar14;
  undefined8 *******pppppppuVar15;
  undefined8 *******pppppppuVar16;
  undefined8 *local_140;
  undefined1 auStack_138 [176];
  undefined8 local_88;
  ulong local_80;
  undefined8 *puStack_78;
  ulong local_70;
  undefined8 *******local_68;
  ulong local_60;
  undefined8 *local_48;
  
  if (*(long *)(param_1 + 0x48) == 0) {
    return;
  }
  local_70 = 0;
  uVar13 = *param_2;
  plVar4 = *(long **)(param_1 + 0x40);
  if (plVar4 == (long *)0x0) {
    if (*(long *)(param_1 + 0x60) == 0) {
      cVar14 = '\0';
      puStack_78 = (undefined8 *)0x0;
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 0x60) + 8);
      do {
        cVar14 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *plVar4 = *plVar4 + 1;
          cVar14 = ExclusiveMonitorsStatus();
        }
      } while (cVar14 != '\0');
      puStack_78 = *(undefined8 **)(param_1 + 0x60);
      cVar14 = '\0';
    }
LAB_00335358:
    uVar11 = 0;
    puVar12 = puStack_78;
  }
  else {
                    /* try { // try from 003352f8 to 00335303 has its CatchHandler @ 003357d4 */
    (**(code **)(*plVar4 + 0x10))(&local_88,plVar4,param_2);
    cVar14 = (char)local_88;
    uVar11 = local_80;
    puVar12 = puStack_78;
    if ((local_80 != 0) && (local_88._1_1_ != '\0')) {
                    /* try { // try from 00335318 to 00335323 has its CatchHandler @ 00335754 */
      FUN_003349b8(param_1,local_80);
      goto LAB_00335358;
    }
  }
                    /* try { // try from 00335360 to 00335367 has its CatchHandler @ 003357dc */
  FUN_0032b8fc(&local_88,param_2[0x15]);
  if (puVar12 != (undefined8 *)0x0) {
    local_48 = puVar12;
    FUN_00330290(auStack_138,param_2);
                    /* try { // try from 0033537c to 0033538b has its CatchHandler @ 00335784 */
    FUN_00334b20(param_1,&local_48,auStack_138);
    FUN_00330188(auStack_138);
    puVar12 = local_48;
    if (local_48 != (undefined8 *)0x0) {
      plVar4 = local_48 + 1;
      do {
        lVar8 = *plVar4;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *plVar4 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 + -1 == 0) {
        (**(code **)*local_48)(local_48);
        FUN_0049e790(PTR_LAB_047cba48,puVar12);
        plVar4 = *(long **)(param_1 + 0x40);
        local_140 = local_88;
        goto joined_r0x003353b8;
      }
    }
  }
  plVar4 = *(long **)(param_1 + 0x40);
  local_140 = local_88;
joined_r0x003353b8:
  local_88 = local_140;
  if (plVar4 != (long *)0x0) {
    local_88 = (undefined8 *)0x0;
                    /* try { // try from 003353d8 to 003353df has its CatchHandler @ 00335760 */
    (**(code **)(*plVar4 + 0x18))(plVar4,cVar14 != '\0',&local_140);
    if (local_140 != (undefined8 *)0x0) {
      plVar4 = local_140 + 1;
      do {
        lVar8 = *plVar4;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *plVar4 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 + -1 == 0) {
        (**(code **)*local_140)(local_140);
        FUN_0049e790(PTR_LAB_047cba48,local_140);
      }
    }
  }
  if (cVar14 != '\0') {
    bVar3 = (local_70 & 1) != 0;
    pppppppuVar16 = &local_68;
    if (bVar3) {
      pppppppuVar16 = local_68;
    }
    uVar1 = 3;
    if (bVar3) {
      uVar1 = local_60;
    }
    if (local_70 >> 1 == uVar1) {
      pppppppuVar5 = (undefined8 *******)FUN_0049e770(PTR_FUN_047cba38,uVar1 << 4);
      pppppppuVar5[uVar1] = (undefined8 ******)"Service config changed";
      if (pppppppuVar5 != (undefined8 *******)0x0) {
        if (uVar1 != 0) {
          uVar7 = uVar1 & 3;
          if (uVar1 - 1 < 3) {
            uVar9 = 0;
          }
          else {
            uVar9 = 0;
            pppppppuVar10 = pppppppuVar5 + 2;
            pppppppuVar15 = pppppppuVar16;
            do {
              pppppppuVar16 = pppppppuVar15 + 4;
              pppppppuVar10[-2] = *pppppppuVar15;
              pppppppuVar10[-1] = pppppppuVar15[1];
              *pppppppuVar10 = pppppppuVar15[2];
              uVar9 = uVar9 + 4;
              pppppppuVar10[1] = pppppppuVar15[3];
              pppppppuVar10 = pppppppuVar10 + 4;
              pppppppuVar15 = pppppppuVar16;
            } while ((uVar1 & 0xfffffffffffffffc) != uVar9);
          }
          if (uVar7 != 0) {
            pppppppuVar10 = pppppppuVar5 + uVar9;
            do {
              uVar7 = uVar7 - 1;
              *pppppppuVar10 = *pppppppuVar16;
              pppppppuVar10 = pppppppuVar10 + 1;
              pppppppuVar16 = pppppppuVar16 + 1;
            } while (uVar7 != 0);
          }
        }
        if ((local_70 & 1) != 0) {
          FUN_0049e790(PTR_LAB_047cba48,local_68);
        }
        local_70 = local_70 | 1;
        local_68 = pppppppuVar5;
        local_60 = uVar1 << 1;
      }
    }
    else {
      pppppppuVar16[local_70 >> 1] = (undefined8 ******)"Service config changed";
    }
    local_70 = local_70 + 2;
  }
  if (uVar11 != 0) {
                    /* try { // try from 00335530 to 00335537 has its CatchHandler @ 0033575c */
    ppppppuVar6 = (undefined8 ******)FUN_00352270(uVar11);
    bVar3 = (local_70 & 1) != 0;
    pppppppuVar16 = &local_68;
    if (bVar3) {
      pppppppuVar16 = local_68;
    }
    uVar1 = 3;
    if (bVar3) {
      uVar1 = local_60;
    }
    if (local_70 >> 1 == uVar1) {
      pppppppuVar5 = (undefined8 *******)FUN_0049e770(PTR_FUN_047cba38,uVar1 << 4);
      pppppppuVar5[uVar1] = ppppppuVar6;
      if (pppppppuVar5 != (undefined8 *******)0x0) {
        if (uVar1 != 0) {
          uVar7 = uVar1 & 3;
          if (uVar1 - 1 < 3) {
            uVar9 = 0;
          }
          else {
            uVar9 = 0;
            pppppppuVar10 = pppppppuVar5 + 2;
            pppppppuVar15 = pppppppuVar16;
            do {
              pppppppuVar16 = pppppppuVar15 + 4;
              pppppppuVar10[-2] = *pppppppuVar15;
              pppppppuVar10[-1] = pppppppuVar15[1];
              *pppppppuVar10 = pppppppuVar15[2];
              uVar9 = uVar9 + 4;
              pppppppuVar10[1] = pppppppuVar15[3];
              pppppppuVar10 = pppppppuVar10 + 4;
              pppppppuVar15 = pppppppuVar16;
            } while ((uVar1 & 0xfffffffffffffffc) != uVar9);
          }
          if (uVar7 != 0) {
            pppppppuVar10 = pppppppuVar5 + uVar9;
            do {
              uVar7 = uVar7 - 1;
              *pppppppuVar10 = *pppppppuVar16;
              pppppppuVar10 = pppppppuVar10 + 1;
              pppppppuVar16 = pppppppuVar16 + 1;
            } while (uVar7 != 0);
          }
        }
        if ((local_70 & 1) != 0) {
          FUN_0049e790(PTR_LAB_047cba48,local_68);
        }
        local_70 = local_70 | 1;
        local_68 = pppppppuVar5;
        local_60 = uVar1 << 1;
      }
    }
    else {
      pppppppuVar16[local_70 >> 1] = ppppppuVar6;
    }
    local_70 = local_70 + 2;
  }
  FUN_00334ec4(param_1,1 < uVar13,&local_70);
                    /* try { // try from 00335668 to 00335683 has its CatchHandler @ 003357e4 */
  FUN_00335124(param_1,&local_70);
  if (4 < uVar11) {
    FUN_00350fd0(uVar11);
  }
  puVar12 = local_88;
  if (local_88 != (undefined8 *)0x0) {
    plVar4 = local_88 + 1;
    do {
      lVar8 = *plVar4;
      cVar14 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = lVar8 + -1;
        cVar14 = ExclusiveMonitorsStatus();
      }
    } while (cVar14 != '\0');
    if (lVar8 + -1 == 0) {
      (**(code **)*local_88)(local_88);
      FUN_0049e790(PTR_LAB_047cba48,puVar12);
    }
  }
  if ((local_70 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_68);
  }
  return;
}


