/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a81e94; name: FUN_01a81e94
 */


void FUN_01a81e94(long param_1,undefined8 *param_2,byte *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined1 *puVar5;
  byte bVar6;
  byte bVar7;
  char cVar8;
  char cVar9;
  ulong uVar10;
  long lVar11;
  byte *pbVar12;
  long *plVar13;
  undefined1 *puVar14;
  undefined1 *local_80;
  byte local_78;
  char local_77;
  undefined1 *local_70;
  long *local_68;
  
  plVar13 = *(long **)(param_1 + 0x40);
  plVar4 = *(long **)(param_1 + 0x48);
  if (plVar13 != plVar4) {
    do {
      if ((*plVar13 != 0) && (uVar10 = FUN_013fcabc(), uVar10 == *param_3)) goto LAB_01a81ef4;
      plVar13 = plVar13 + 1;
    } while (plVar4 != plVar13);
    plVar13 = plVar4;
LAB_01a81ef4:
    if ((plVar13 != *(long **)(param_1 + 0x48)) && (*plVar13 != 0)) {
      uVar10 = FUN_01f64924();
      if ((uVar10 & 1) != 0) {
        local_80 = (undefined1 *)*param_2;
        local_78 = 4;
        goto LAB_01a8200c;
      }
      uVar10 = FUN_0289c8fc(param_1,plVar13);
      if ((uVar10 & 1) == 0) {
        bVar6 = FUN_019f80c8(param_1,plVar13);
        bVar7 = FUN_01f64914(*plVar13);
        if (bVar6 < bVar7) {
          bVar6 = param_3[1];
          puVar14 = &DAT_cbf29ce484222645;
          if (bVar6 != 0) {
            pbVar12 = param_3 + 2;
            do {
              puVar14 = (undefined1 *)(((ulong)puVar14 ^ (ulong)bVar6) * 0x100000001b3);
              bVar6 = *pbVar12;
              pbVar12 = pbVar12 + 1;
            } while (bVar6 != 0);
          }
          FUN_01f648a0(&local_80,*plVar13);
          puVar5 = local_80;
          if (local_68 != (long *)0x0) {
            (**(code **)(*local_68 + 0x20))();
          }
          if (puVar14 != puVar5) {
            local_80 = (undefined1 *)*param_2;
            local_78 = 3;
            goto LAB_01a8200c;
          }
          cVar8 = FUN_0289c9a0(param_1,plVar13);
          if (cVar8 != -3) {
            lVar11 = FUN_013fcac4(*plVar13);
            puVar3 = *(undefined8 **)(lVar11 + 0x20);
            puVar2 = puVar3;
            if (*(long *)(lVar11 + 0x28) != 0) {
              puVar2 = puVar3 + *(long *)(lVar11 + 0x28);
            }
            if (puVar3 != puVar2) {
              lVar11 = param_1 + 0x270;
              cVar9 = FUN_0148d208(*plVar13,puVar3);
              if (cVar9 != -3) {
                local_78 = *param_3;
                local_80 = (undefined1 *)*puVar3;
                local_77 = cVar9;
                local_70 = local_80;
                FUN_0194f92c(lVar11,&local_80);
              }
              puVar1 = puVar3 + 1;
              if (puVar1 != puVar2) {
                cVar9 = FUN_0148d208(*plVar13,puVar1);
                if (cVar9 != -3) {
                  local_78 = *param_3;
                  local_80 = (undefined1 *)*puVar1;
                  local_77 = cVar9;
                  local_70 = local_80;
                  FUN_0194f92c(lVar11,&local_80);
                }
                for (puVar3 = puVar3 + 2; puVar3 != puVar2; puVar3 = puVar3 + 1) {
                  cVar9 = FUN_0148d208(*plVar13,puVar3);
                  if (cVar9 != -3) {
                    local_78 = *param_3;
                    local_80 = (undefined1 *)*puVar3;
                    local_77 = cVar9;
                    local_70 = local_80;
                    FUN_0194f92c(lVar11,&local_80);
                  }
                }
              }
            }
            local_78 = *param_3;
            local_80 = (undefined1 *)*param_2;
            local_77 = cVar8;
            local_70 = local_80;
            FUN_0194f92c(param_1 + 0x270,&local_80);
            return;
          }
        }
        local_80 = (undefined1 *)*param_2;
        local_78 = 2;
        goto LAB_01a8200c;
      }
    }
  }
  local_80 = (undefined1 *)*param_2;
  local_78 = 1;
LAB_01a8200c:
  FUN_01a82164(param_1 + 0x350,&local_80);
  return;
}


