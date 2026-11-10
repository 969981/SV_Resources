/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03476bdc; name: FUN_03476bdc
 */


void FUN_03476bdc(float param_1,undefined4 param_2,undefined4 param_3,long param_4,long *param_5,
                 long param_6)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  uint uVar9;
  float fVar10;
  
  puVar5 = PTR_DAT_047e2fd0;
  if (*(int *)(param_4 + 0x28) != 0) {
    plVar7 = *(long **)(param_4 + 0x20);
    do {
      fVar10 = *(float *)(plVar7 + 2) * param_1;
      if (*(float *)PTR_DAT_047e70f8 < fVar10) {
        if (*plVar7 == -1) {
          if (*(int *)(param_6 + 0x18) != 0) {
            puVar8 = *(undefined8 **)(param_6 + 0x10);
            do {
              uVar4 = *(uint *)(param_5 + 1);
              uVar9 = *(uint *)((long)param_5 + 0xc);
              if (uVar4 < uVar9) {
LAB_03476d24:
                if (uVar4 < uVar9) {
                  uVar9 = *(uint *)(param_5 + 1);
                  *(uint *)(param_5 + 1) = uVar9 + 1;
                  if (*param_5 != 0) {
                    puVar3 = (undefined8 *)(*param_5 + (ulong)uVar9 * 0x20);
                    *puVar3 = *puVar8;
                    lVar6 = plVar7[1];
                    *(float *)((long)puVar3 + 0xc) = fVar10;
                    *(int *)(puVar3 + 1) = (int)lVar6;
                    *(undefined4 *)((long)puVar3 + 0x14) = param_2;
                    *(undefined4 *)(puVar3 + 3) = param_3;
                    *(undefined4 *)(puVar3 + 2) = 1;
                  }
                }
              }
              else {
                iVar1 = uVar9 + (uVar9 >> 1);
                if (uVar9 == 0) {
                  iVar1 = 1;
                }
                uVar9 = iVar1 + uVar9;
                lVar6 = (**(code **)(puVar5 + 0x20))(0,*param_5,(ulong)uVar9 << 5);
                if (lVar6 != 0) {
                  *param_5 = lVar6;
                  *(uint *)((long)param_5 + 0xc) = uVar9;
                  goto LAB_03476d24;
                }
              }
              puVar8 = puVar8 + 1;
            } while (puVar8 != (undefined8 *)
                               (*(long *)(param_6 + 0x10) + (ulong)*(uint *)(param_6 + 0x18) * 8));
          }
        }
        else {
          uVar4 = *(uint *)(param_5 + 1);
          uVar9 = *(uint *)((long)param_5 + 0xc);
          if (uVar9 <= uVar4) {
            iVar1 = uVar9 + (uVar9 >> 1);
            if (uVar9 == 0) {
              iVar1 = 1;
            }
            uVar9 = iVar1 + uVar9;
            lVar6 = (**(code **)(puVar5 + 0x20))(0,*param_5,(ulong)uVar9 << 5);
            if (lVar6 == 0) goto LAB_03476d7c;
            *param_5 = lVar6;
            *(uint *)((long)param_5 + 0xc) = uVar9;
          }
          if (uVar4 < uVar9) {
            uVar9 = *(uint *)(param_5 + 1);
            *(uint *)(param_5 + 1) = uVar9 + 1;
            if (*param_5 != 0) {
              plVar2 = (long *)(*param_5 + (ulong)uVar9 * 0x20);
              *plVar2 = *plVar7;
              lVar6 = plVar7[1];
              *(float *)((long)plVar2 + 0xc) = fVar10;
              *(int *)(plVar2 + 1) = (int)lVar6;
              *(undefined4 *)((long)plVar2 + 0x14) = param_2;
              *(undefined4 *)(plVar2 + 3) = param_3;
              *(undefined4 *)(plVar2 + 2) = 1;
            }
          }
        }
      }
LAB_03476d7c:
      plVar7 = plVar7 + 3;
    } while (plVar7 != (long *)(*(long *)(param_4 + 0x20) + (ulong)*(uint *)(param_4 + 0x28) * 0x18)
            );
  }
  return;
}


