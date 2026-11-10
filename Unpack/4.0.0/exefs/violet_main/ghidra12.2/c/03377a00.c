/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03377a00; name: FUN_03377a00
 */


int FUN_03377a00(long *param_1,undefined8 *param_2,undefined8 *param_3,undefined4 *param_4)

{
  long *plVar1;
  int *piVar2;
  undefined8 uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  ThreadType *pTVar8;
  long *plVar9;
  ulong uVar10;
  byte *pbVar11;
  ulong *puVar12;
  uint uVar13;
  uint uVar14;
  ulong *puVar15;
  ulong *puVar16;
  undefined8 *puVar17;
  int iVar18;
  ulong uVar19;
  long lVar20;
  int *piVar21;
  ulong *local_b8 [2];
  undefined8 *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  ulong local_90;
  undefined8 local_88;
  char *pcStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  long local_60;
  ulong local_58;
  int local_50 [2];
  ulong *local_48;
  
  puVar15 = (ulong *)param_2[1];
  uVar10 = 0;
  do {
    uVar14 = (uint)*puVar15;
    if ((uVar14 >> 0x15 & 1) == 0) {
      uVar19 = 0;
    }
    else {
      uVar19 = CONCAT44(uVar14,uVar14) & 0x1fffff001fffff;
      uVar19 = puVar15[(ulong)(byte)(POPCOUNT((char)uVar19) + POPCOUNT((char)(uVar19 >> 8)) +
                                    POPCOUNT((char)(uVar19 >> 0x10))) + 2];
    }
    uVar10 = uVar19 | uVar10;
  } while (((*puVar15 & 1) == 0) && (puVar15 = (ulong *)puVar15[1], puVar15 != (ulong *)0x0));
  if (((uint)uVar10 >> 6 & 1) == 0) goto LAB_03377be4;
  local_60 = 0;
  local_58 = 0;
  local_68 = 0;
  local_50[0] = (**(code **)(*(long *)(param_3[2] & 0xfffffffffffffffe) + 0x50))
                          ((long *)(param_3[2] & 0xfffffffffffffffe),*param_3,param_3[1],&local_68);
  if (local_50[0] < 0) {
    if (DAT_0488dd78 == '\0') {
      if ((local_58 & 1) == 0) {
        return local_50[0];
      }
      plVar9 = (long *)(local_58 & 0xfffffffffffffffe);
      plVar1 = plVar9 + 1;
      do {
        iVar6 = (int)*plVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *(int *)plVar1 = iVar6 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    else {
      local_b8[0] = (ulong *)0x0;
      local_a8 = &DAT_0488dd28;
      uStack_a0 = 1;
      pTVar8 = (ThreadType *)nn::os::GetCurrentThread();
      local_98 = nn::os::GetThreadId(pTVar8);
      local_88 = 0;
      pcStack_80 = 
      "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Detail/hkSerializeDetail.cpp"
      ;
      local_90 = 0;
      local_78 = 0x2c8;
      uStack_70 = 0;
      FUN_0322c554(local_b8,"HK_RETURN_IF_FAILED({}) returning {}. ",PTR_DAT_047e5dc8,
                   "src.getValue(&pointed)",local_50);
      FUN_0322c554(local_b8,&DAT_03c886bc,PTR_DAT_047d1b38);
      FUN_0322c8e0(local_b8);
      if ((local_90 & 1) != 0) {
        (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_90 - 1,0);
      }
      if ((local_58 & 1) == 0) {
        return local_50[0];
      }
      plVar9 = (long *)(local_58 & 0xfffffffffffffffe);
      plVar1 = plVar9 + 1;
      do {
        iVar6 = (int)*plVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *(int *)plVar1 = iVar6 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    goto LAB_03377fb0;
  }
  if (local_68 != 0) {
    lVar20 = param_1[2];
    lVar7 = FUN_03378c94(lVar20,&local_68);
    if (lVar7 == 0) {
      uVar13 = 0;
      uVar14 = 0xffffffff;
    }
    else {
      uVar14 = *(uint *)(lVar7 + 4);
      uVar13 = ((int)lVar7 - (int)*(undefined8 *)(lVar20 + 0x10)) * 0x20000000;
    }
    if ((int)(uVar14 | uVar13) < 0) {
      pbVar11 = (byte *)param_2[1];
      do {
        if ((*pbVar11 >> 1 & 1) != 0) {
          puVar15 = *(ulong **)(pbVar11 + 0x18);
          if (puVar15 != (ulong *)0x0) {
            if (puVar15 == (ulong *)PTR_DAT_047ddc28) goto LAB_03377e7c;
            local_b8[0] = puVar15;
            goto LAB_03377c78;
          }
          break;
        }
        pbVar11 = *(byte **)(pbVar11 + 8);
      } while (pbVar11 != (byte *)0x0);
      goto LAB_03377d74;
    }
  }
  goto LAB_03377bac;
LAB_03377c78:
  uVar14 = (uint)*local_b8[0];
  if ((uVar14 >> 0xd & 1) == 0) {
    if (((*local_b8[0] & 1) != 0) ||
       (local_b8[0] = (ulong *)local_b8[0][1], local_b8[0] == (ulong *)0x0)) goto LAB_03377cbc;
    goto LAB_03377c78;
  }
  if (local_b8[0] != (ulong *)0x0) {
    uVar10 = CONCAT44(uVar14,uVar14) & 0x1fff00001fff;
    local_b8[0] = local_b8[0] +
                  (ulong)(byte)(POPCOUNT((char)uVar10) + POPCOUNT((char)(uVar10 >> 8))) + 2;
    goto LAB_03377cc4;
  }
LAB_03377cbc:
  local_b8[0] = (ulong *)0x0;
LAB_03377cc4:
  local_48 = (ulong *)PTR_DAT_047ddc28;
  while( true ) {
    uVar14 = (uint)*local_48;
    if ((uVar14 >> 0xd & 1) != 0) break;
    if (((*local_48 & 1) != 0) || (local_48 = (ulong *)local_48[1], local_48 == (ulong *)0x0))
    goto LAB_03377d24;
  }
  if (local_48 != (ulong *)0x0) {
    uVar10 = CONCAT44(uVar14,uVar14) & 0x1fff00001fff;
    local_48 = local_48 + (ulong)(byte)(POPCOUNT((char)uVar10) + POPCOUNT((char)(uVar10 >> 8))) + 2;
    if (local_b8[0] == (ulong *)0x0) goto LAB_03377d28;
    uVar10 = FUN_031dd354(local_b8,&local_48);
    if ((uVar10 & 1) == 0) goto LAB_03377d5c;
    goto LAB_03377e7c;
  }
LAB_03377d24:
  local_48 = (ulong *)0x0;
LAB_03377d28:
  puVar12 = (ulong *)PTR_DAT_047ddc28;
  do {
    if ((*puVar12 & 1) != 0) break;
    puVar12 = (ulong *)puVar12[1];
  } while (puVar12 != (ulong *)0x0);
  puVar16 = puVar15;
  do {
    if (puVar16 == puVar12) goto LAB_03377e7c;
    puVar16 = (ulong *)puVar16[1];
  } while (puVar16 != (ulong *)0x0);
LAB_03377d5c:
  for (; (*puVar15 & 1) == 0; puVar15 = (ulong *)puVar15[1]) {
  }
  if ((puVar15[2] & 0x1f) == 7) {
LAB_03377d74:
    puVar15 = (ulong *)(**(code **)(*param_1 + 0x28))(param_1,param_3[1]);
    if (puVar15 != (ulong *)0x0) {
      if (puVar15 == (ulong *)PTR_DAT_047ddc28) {
LAB_03377e7c:
        plVar1 = param_1 + 3;
        iVar6 = FUN_03379970(plVar1,&local_68);
        if ((int)param_1[4] == iVar6) {
          iVar18 = iVar6;
          if ((int)(*(uint *)((long)param_1 + 0x24) & 0x7fffffff) <= iVar6) {
            FUN_03379ae4(plVar1,(long)(iVar6 + 1));
            iVar18 = (int)param_1[4];
          }
          lVar7 = *plVar1;
          plVar9 = (long *)(lVar7 + (long)iVar18 * 0x28);
          *plVar9 = local_68;
          plVar9[1] = local_60;
          plVar9[2] = local_58;
          if ((local_58 & 1) != 0) {
            piVar21 = (int *)((local_58 & 0xfffffffffffffffe) + 8);
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar21,0x10);
              if (bVar5) {
                *piVar21 = *piVar21 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          lVar7 = lVar7 + (long)iVar18 * 0x28;
          *(undefined8 *)(lVar7 + 0x18) = 0;
          *(undefined8 *)(lVar7 + 0x20) = 0x8000000000000000;
          *(int *)(param_1 + 4) = iVar6 + 1;
        }
        lVar20 = *plVar1 + (long)iVar6 * 0x28;
        piVar21 = (int *)(lVar20 + 0x20);
        iVar6 = *piVar21;
        lVar7 = (long)iVar6;
        if ((int)(*(uint *)(lVar20 + 0x24) & 0x7fffffff) <= iVar6) {
          FUN_03379d6c((long *)(lVar20 + 0x18),lVar7 + 1);
          iVar6 = *piVar21;
        }
        puVar17 = (undefined8 *)(*(long *)(lVar20 + 0x18) + (long)iVar6 * 0x18);
        uVar3 = param_2[1];
        *puVar17 = *param_2;
        puVar17[1] = uVar3;
        uVar10 = param_2[2];
        puVar17[2] = uVar10;
        if ((uVar10 & 1) != 0) {
          piVar2 = (int *)((uVar10 & 0xfffffffffffffffe) + 8);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar5) {
              *piVar2 = *piVar2 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        *piVar21 = (int)(lVar7 + 1);
        *param_4 = 0;
        local_50[0] = 0;
        if ((local_58 & 1) == 0) {
          return 0;
        }
        plVar9 = (long *)(local_58 & 0xfffffffffffffffe);
        plVar1 = plVar9 + 1;
        do {
          iVar6 = (int)*plVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *(int *)plVar1 = iVar6 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
LAB_03377fb0:
        if (plVar9 == (long *)0x0) {
          return local_50[0];
        }
        if (iVar6 == 1) {
          (**(code **)(*plVar9 + 8))();
          return local_50[0];
        }
        return local_50[0];
      }
      local_b8[0] = puVar15;
      while( true ) {
        uVar14 = (uint)*local_b8[0];
        if ((uVar14 >> 0xd & 1) != 0) break;
        if (((*local_b8[0] & 1) != 0) ||
           (local_b8[0] = (ulong *)local_b8[0][1], local_b8[0] == (ulong *)0x0)) goto LAB_03377de4;
      }
      if (local_b8[0] != (ulong *)0x0) {
        uVar10 = CONCAT44(uVar14,uVar14) & 0x1fff00001fff;
        local_b8[0] = local_b8[0] +
                      (ulong)(byte)(POPCOUNT((char)uVar10) + POPCOUNT((char)(uVar10 >> 8))) + 2;
        goto LAB_03377dec;
      }
LAB_03377de4:
      local_b8[0] = (ulong *)0x0;
LAB_03377dec:
      local_48 = (ulong *)PTR_DAT_047ddc28;
      while( true ) {
        uVar14 = (uint)*local_48;
        if ((uVar14 >> 0xd & 1) != 0) break;
        if (((*local_48 & 1) != 0) || (local_48 = (ulong *)local_48[1], local_48 == (ulong *)0x0))
        goto LAB_03377e4c;
      }
      if (local_48 != (ulong *)0x0) {
        uVar10 = CONCAT44(uVar14,uVar14) & 0x1fff00001fff;
        local_48 = local_48 +
                   (ulong)(byte)(POPCOUNT((char)uVar10) + POPCOUNT((char)(uVar10 >> 8))) + 2;
        if (local_b8[0] == (ulong *)0x0) goto LAB_03377e50;
        uVar10 = FUN_031dd354(local_b8,&local_48);
        if ((uVar10 & 1) == 0) goto LAB_03377bac;
        goto LAB_03377e7c;
      }
LAB_03377e4c:
      local_48 = (ulong *)0x0;
LAB_03377e50:
      puVar12 = (ulong *)PTR_DAT_047ddc28;
      do {
        if ((*puVar12 & 1) != 0) break;
        puVar12 = (ulong *)puVar12[1];
      } while (puVar12 != (ulong *)0x0);
      do {
        if (puVar15 == puVar12) goto LAB_03377e7c;
        puVar15 = (ulong *)puVar15[1];
      } while (puVar15 != (ulong *)0x0);
    }
  }
LAB_03377bac:
  if ((local_58 & 1) != 0) {
    plVar9 = (long *)(local_58 & 0xfffffffffffffffe);
    plVar1 = plVar9 + 1;
    do {
      lVar7 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = (int)lVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((plVar9 != (long *)0x0) && ((int)lVar7 == 1)) {
      (**(code **)(*plVar9 + 8))();
    }
  }
LAB_03377be4:
  iVar6 = (**(code **)(*(long *)param_1[1] + 0x20))((long *)param_1[1],param_2,param_3,param_4);
  return iVar6;
}


