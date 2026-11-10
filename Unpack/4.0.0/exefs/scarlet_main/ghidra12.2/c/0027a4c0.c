/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0027a4c0; name: FUN_0027a4c0
 */


void FUN_0027a4c0(long param_1,uint param_2,undefined8 *param_3)

{
  long *plVar1;
  size_t __n;
  size_t sVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  char cVar7;
  long lVar8;
  bool bVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  long *plVar18;
  uint uVar19;
  ulong uVar20;
  undefined8 *puVar21;
  ulong uVar22;
  undefined8 *local_48;
  
  *(uint *)(param_1 + 0x38) = param_2;
  puVar11 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x18);
  if (puVar11 != (undefined8 *)0x0) {
    uVar12 = *param_3;
    *param_3 = 0;
    puVar11[2] = uVar12;
    *puVar11 = &PTR_LAB_0448cb20;
    puVar11[1] = 1;
  }
  puVar21 = *(undefined8 **)(param_1 + 0x40);
  if (puVar21 == (undefined8 *)0x0) {
LAB_0027a538:
    *(undefined8 **)(param_1 + 0x40) = puVar11;
  }
  else {
    plVar18 = puVar21 + 1;
    do {
      lVar14 = *plVar18;
      cVar7 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar9) {
        *plVar18 = lVar14 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar14 + -1 != 0) goto LAB_0027a538;
    (**(code **)*puVar21)(puVar21);
    FUN_0049e790(PTR_LAB_047cba48,puVar21);
    *(undefined8 **)(param_1 + 0x40) = puVar11;
  }
  if (((param_2 & 0xfffffffe) == 2) && (*(char *)(param_1 + 0xf0) != '\0')) {
    FUN_00360570(param_1 + 0xa0);
    *(undefined1 *)(param_1 + 0xf0) = 0;
  }
  lVar14 = *(long *)(param_1 + 0x10);
  if (*(long *)(lVar14 + 0x88) == param_1) {
    uVar19 = *(uint *)(param_1 + 0x38);
    if ((uVar19 | 2) == 2) {
      plVar18 = *(long **)(lVar14 + 0x28);
      local_48 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x10);
      if (local_48 != (undefined8 *)0x0) {
        uVar12 = 0;
        if (*(long *)(param_1 + 0x40) != 0) {
          plVar1 = (long *)(*(long *)(param_1 + 0x40) + 8);
          do {
            cVar7 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar9) {
              *plVar1 = *plVar1 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          uVar12 = *(undefined8 *)(param_1 + 0x40);
        }
        *local_48 = &PTR_FUN_0448cb40;
        local_48[1] = uVar12;
      }
                    /* try { // try from 0027a618 to 0027a627 has its CatchHandler @ 0027a810 */
      (**(code **)(*plVar18 + 0x18))(plVar18,uVar19,&local_48);
LAB_0027a628:
      puVar11 = local_48;
      local_48 = (undefined8 *)0x0;
      if (puVar11 == (undefined8 *)0x0) {
        return;
      }
      (**(code **)*puVar11)(puVar11);
      FUN_0049e790(PTR_LAB_047cba48,puVar11);
      return;
    }
    bVar9 = true;
    *(undefined8 *)(lVar14 + 0x88) = 0;
  }
  else {
    lVar3 = *(long *)(*(long *)(lVar14 + 0x40) + 0x28);
    lVar8 = *(long *)(*(long *)(lVar14 + 0x40) + 0x30) - lVar3;
    if (lVar8 == 0) {
      return;
    }
    bVar9 = (*(byte *)(param_1 + 0x18) & 1) == 0;
    pbVar16 = *(byte **)(param_1 + 0x28);
    if (bVar9) {
      pbVar16 = (byte *)(param_1 + 0x19);
    }
    uVar22 = (lVar8 >> 3) * -0x5555555555555555;
    __n = (ulong)(*(byte *)(param_1 + 0x18) >> 1);
    if (!bVar9) {
      __n = *(size_t *)(param_1 + 0x20);
    }
    uVar20 = 0;
    if (__n != 0) {
      do {
        pbVar15 = (byte *)(lVar3 + uVar20 * 0x18);
        bVar6 = *pbVar15;
        uVar13 = (ulong)(bVar6 >> 1);
        sVar2 = uVar13;
        if ((bVar6 & 1) != 0) {
          sVar2 = *(size_t *)(pbVar15 + 8);
        }
        if (sVar2 == __n) {
          if ((bVar6 & 1) == 0) {
            pbVar17 = pbVar16;
            while (pbVar15 = pbVar15 + 1, *pbVar15 == *pbVar17) {
              uVar13 = uVar13 - 1;
              pbVar17 = pbVar17 + 1;
              if (uVar13 == 0) goto LAB_0027a6c8;
            }
          }
          else {
            iVar10 = memcmp(*(void **)(lVar3 + uVar20 * 0x18 + 0x10),pbVar16,__n);
            if (iVar10 == 0) goto LAB_0027a6c8;
          }
        }
        uVar20 = (ulong)((int)uVar20 + 1);
        if (uVar22 <= uVar20) {
          return;
        }
      } while( true );
    }
    while( true ) {
      pbVar16 = (byte *)(lVar3 + uVar20 * 0x18);
      bVar6 = *pbVar16;
      uVar13 = (ulong)(bVar6 >> 1);
      if ((bVar6 & 1) != 0) {
        uVar13 = *(ulong *)(pbVar16 + 8);
      }
      if (uVar13 == 0) break;
      uVar20 = (ulong)((int)uVar20 + 1);
      if (uVar22 <= uVar20) {
        return;
      }
    }
LAB_0027a6c8:
    uVar19 = (uint)uVar20;
    if (uVar19 == 0xffffffff) {
      return;
    }
    uVar4 = *(uint *)(lVar14 + 0x80);
    if (uVar4 < uVar19) {
      return;
    }
    uVar5 = *(uint *)(param_1 + 0x38);
    if (uVar5 != 3) {
      if (uVar19 < uVar4) {
        if ((uVar5 | 2) == 2) {
          FUN_0027a8e4(lVar14,uVar20);
          return;
        }
        return;
      }
      plVar18 = *(long **)(lVar14 + 0x28);
      local_48 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x10);
      if (local_48 != (undefined8 *)0x0) {
        uVar12 = 0;
        if (*(long *)(param_1 + 0x40) != 0) {
          plVar1 = (long *)(*(long *)(param_1 + 0x40) + 8);
          do {
            cVar7 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar9) {
              *plVar1 = *plVar1 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          uVar12 = *(undefined8 *)(param_1 + 0x40);
        }
        *local_48 = &PTR_FUN_0448cb40;
        local_48[1] = uVar12;
      }
                    /* try { // try from 0027a7c4 to 0027a7d3 has its CatchHandler @ 0027a80c */
      (**(code **)(*plVar18 + 0x18))(plVar18,uVar5,&local_48);
      goto LAB_0027a628;
    }
    bVar9 = uVar19 == uVar4;
  }
  FUN_00279938(lVar14,bVar9);
  return;
}


