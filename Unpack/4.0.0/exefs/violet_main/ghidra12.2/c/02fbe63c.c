/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02fbe63c; name: FUN_02fbe63c
 */


void FUN_02fbe63c(long param_1,long param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 *puVar18;
  uint *puVar19;
  float fVar20;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  lVar15 = *(long *)(param_2 + 8);
  fVar20 = *(float *)(lVar15 + 0x898);
  lVar16 = *(long *)(lVar15 + 0x490);
  iVar2 = *(int *)(lVar16 + 0xc60);
  if (0.0 < fVar20 || iVar2 != 0) {
    local_88 = CONCAT44(fVar20,fVar20);
    uStack_90 = *(undefined8 *)(lVar15 + 0x540);
    lVar17 = *(long *)(lVar15 + 0x150);
    lVar7 = *(long *)(param_2 + 0x30);
    puVar1 = (uint *)(param_1 + 0x34);
    do {
      uVar6 = *puVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar5) {
        *puVar1 = uVar6 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (uVar6 < *(uint *)(param_1 + 0x30)) {
      do {
        lVar8 = lVar15 + (long)(int)uVar6 * 0x18;
        if (iVar2 == 0) {
          if (1 < *(int *)(lVar8 + 0x188)) {
            lVar9 = *(long *)(lVar15 + 0x38);
            lVar12 = 1;
            do {
              uVar6 = *(uint *)(lVar17 + (ulong)*(uint *)(*(long *)(lVar8 + 0x180) + lVar12 * 4) *
                                         0x80 + 0x48);
              uVar10 = uVar6;
              do {
                uVar11 = (ulong)*(uint *)(lVar9 + (ulong)(uVar10 & 0xffffff) * 0xc0 + 0x50) &
                         0xffffff;
                lVar14 = *(long *)(*(long *)(lVar15 + 0xb0) + uVar11 * 8);
                if (lVar14 != 0) {
                  local_70 = 0;
                  local_68 = 0;
                  FUN_02f1ee38(&uStack_90,
                               lVar17 + (ulong)*(uint *)(lVar9 + uVar11 * 0xc0 + 0x80) * 0x80,lVar14
                               ,&local_88,&local_70);
                  lVar9 = *(long *)(lVar15 + 0x38);
                }
                uVar10 = *(uint *)(lVar9 + (ulong)(uVar10 & 0xffffff) * 0xc0 + 0x84);
              } while (uVar10 != uVar6);
              lVar12 = lVar12 + 1;
            } while (lVar12 < *(int *)(lVar8 + 0x188));
          }
        }
        else if (1 < *(int *)(lVar8 + 0x188)) {
          lVar9 = *(long *)(lVar15 + 0x38);
          lVar12 = 1;
          do {
            uVar6 = *(uint *)(lVar17 + (ulong)*(uint *)(*(long *)(lVar8 + 0x180) + lVar12 * 4) *
                                       0x80 + 0x48);
            uVar10 = uVar6;
            do {
              uVar11 = (ulong)*(uint *)(lVar9 + (ulong)(uVar10 & 0xffffff) * 0xc0 + 0x50) & 0xffffff
              ;
              lVar14 = *(long *)(*(long *)(lVar15 + 0xb0) + uVar11 * 8);
              if (lVar14 != 0) {
                puVar19 = (uint *)(lVar9 + uVar11 * 0xc0 + 0x80);
                local_68 = 0;
                lVar9 = lVar17 + (ulong)*puVar19 * 0x80;
                local_78 = local_88;
                local_70 = 0;
                uVar3 = *(uint *)(lVar7 + (ulong)*(ushort *)(lVar9 + 0x58) * 0x70 + 4) | 2;
                if ((*(uint *)(lVar16 + 0xc60) & uVar3) != 0) {
                  lVar13 = 0;
                  local_7c = (undefined4)local_88;
                  puVar18 = (undefined8 *)(lVar16 + 0xc70);
                  do {
                    if ((*(uint *)(puVar18 + -1) & uVar3) != 0) {
                      (**(code **)(*(long *)*puVar18 + 0xa8))
                                ((long *)*puVar18,param_2,*puVar19,lVar9,&local_7c,&local_70);
                    }
                    lVar13 = lVar13 + 1;
                    puVar18 = puVar18 + 2;
                  } while (lVar13 < *(int *)(lVar16 + 0xc64));
                  local_78 = CONCAT44(local_7c,local_7c);
                }
                FUN_02f1ee38(&uStack_90,lVar9,lVar14,&local_78,&local_70);
                lVar9 = *(long *)(lVar15 + 0x38);
              }
              uVar10 = *(uint *)(lVar9 + (ulong)(uVar10 & 0xffffff) * 0xc0 + 0x84);
            } while (uVar10 != uVar6);
            lVar12 = lVar12 + 1;
          } while (lVar12 < *(int *)(lVar8 + 0x188));
        }
        do {
          uVar6 = *puVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = uVar6 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      } while (uVar6 < *(uint *)(param_1 + 0x30));
    }
  }
  return;
}


