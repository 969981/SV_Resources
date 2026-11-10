/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002761c8; name: FUN_002761c8
 */


void FUN_002761c8(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 *local_48;
  
  puVar5 = *(undefined8 **)(param_1 + 8);
  lVar7 = puVar5[2];
  puVar8 = *(undefined8 **)(lVar7 + 0xd8);
  puVar12 = *(undefined8 **)(lVar7 + 0xe0);
  if (puVar5 == puVar8) {
    if (puVar5 == puVar12) goto LAB_002761fc;
  }
  else {
    if (puVar5 != puVar12) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
LAB_002761fc:
    *(undefined8 **)(lVar7 + 0xd8) = puVar12;
    *(undefined8 *)(lVar7 + 0xe0) = 0;
    if (puVar8 != (undefined8 *)0x0) {
                    /* try { // try from 0027620c to 0027620f has its CatchHandler @ 00276408 */
      (**(code **)*puVar8)();
    }
  }
  *(long *)(lVar7 + 0xe8) = param_1;
  plVar9 = *(long **)(lVar7 + 0x28);
  puVar8 = *(undefined8 **)(param_1 + 0x10);
  plVar11 = puVar8 + 1;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar2) {
      *plVar11 = *plVar11 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  local_48 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x10);
  if (local_48 != (undefined8 *)0x0) {
    *local_48 = &PTR_FUN_0448c9d8;
    local_48[1] = puVar8;
    puVar8 = (undefined8 *)0x0;
  }
                    /* try { // try from 0027626c to 0027627b has its CatchHandler @ 0027640c */
  (**(code **)(*plVar9 + 0x18))(plVar9,2,&local_48);
  puVar12 = local_48;
  local_48 = (undefined8 *)0x0;
  if (puVar12 != (undefined8 *)0x0) {
    (**(code **)*puVar12)(puVar12);
    FUN_0049e790(PTR_LAB_047cba48,puVar12);
  }
  if (puVar8 != (undefined8 *)0x0) {
    plVar11 = puVar8 + 1;
    do {
      lVar7 = *plVar11;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar2) {
        *plVar11 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 + -1 == 0) {
      (**(code **)*puVar8)(puVar8);
      FUN_0049e790(PTR_LAB_047cba48,puVar8);
      lVar7 = *(long *)(param_1 + 8);
      uVar6 = *(ulong *)(lVar7 + 0x20);
      puVar3 = PTR_LAB_047cba48;
      goto joined_r0x00276318;
    }
  }
  lVar7 = *(long *)(param_1 + 8);
  uVar6 = *(ulong *)(lVar7 + 0x20);
  puVar3 = PTR_LAB_047cba48;
joined_r0x00276318:
  PTR_LAB_047cba48 = puVar3;
  if (1 < uVar6) {
    uVar10 = 0;
    do {
      if ((uVar6 & 1) == 0) {
        if (uVar10 != ((param_1 - lVar7) + -0x28 >> 3) * -0x3333333333333333) {
          lVar7 = lVar7 + 0x28;
          plVar11 = (long *)(lVar7 + uVar10 * 0x28 + 0x18);
          lVar4 = *plVar11;
joined_r0x002763a4:
          if (lVar4 != 0) {
            (**(code **)(**(long **)(lVar7 + uVar10 * 0x28 + 0x10) + 0x20))();
            *plVar11 = 0;
          }
          puVar12 = (undefined8 *)(lVar7 + uVar10 * 0x28 + 0x10);
          puVar8 = (undefined8 *)*puVar12;
          if (puVar8 != (undefined8 *)0x0) {
            plVar11 = puVar8 + 1;
            do {
              lVar7 = *plVar11;
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
              if (bVar2) {
                *plVar11 = lVar7 + -1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            if (lVar7 + -1 == 0) {
              (**(code **)*puVar8)(puVar8);
              FUN_0049e790(puVar3,puVar8);
            }
            *puVar12 = 0;
          }
        }
      }
      else if (uVar10 != (param_1 - *(long *)(lVar7 + 0x28) >> 3) * -0x3333333333333333) {
        lVar7 = *(long *)(lVar7 + 0x28);
        plVar11 = (long *)(lVar7 + uVar10 * 0x28 + 0x18);
        lVar4 = *plVar11;
        goto joined_r0x002763a4;
      }
      lVar7 = *(long *)(param_1 + 8);
      uVar10 = uVar10 + 1;
      uVar6 = *(ulong *)(lVar7 + 0x20);
    } while (uVar10 < uVar6 >> 1);
  }
  return;
}


