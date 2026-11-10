/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0345fec8; name: FUN_0345fec8
 */


undefined8 FUN_0345fec8(long param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  undefined *puVar2;
  bool bVar3;
  long *plVar4;
  uint uVar5;
  int iVar6;
  code *pcVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  bool bVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  long local_58;
  undefined2 local_38 [2];
  undefined1 auStack_34 [4];
  
  puVar2 = PTR_DAT_047e2fd0;
  plVar13 = *(long **)(param_1 + 0x60);
  if (plVar13 != (long *)0x0) {
    uVar5 = *(uint *)(plVar13 + 1);
    if (uVar5 == 0) {
      *(undefined8 *)(param_1 + 0x60) = 0;
    }
    else {
      do {
        lVar8 = *plVar13 + (ulong)uVar5 * 0x28;
        if (*(long *)(lVar8 + -0x10) == 0) {
          lVar14 = *(long *)(lVar8 + -0x28);
          if (lVar14 != 0) {
            bVar11 = false;
            lVar9 = lVar14;
            do {
              bVar3 = lVar9 == param_2;
              if ((!bVar11) && (!bVar3)) {
                lVar12 = *(long *)(lVar9 + 0xa0);
                if (lVar12 == 0) {
                  bVar3 = false;
                  bVar11 = false;
                }
                else {
                  do {
                    if (lVar12 == param_2) goto LAB_03460064;
                    lVar12 = *(long *)(lVar12 + 0xa0);
                  } while (lVar12 != 0);
                  bVar3 = false;
                  bVar11 = true;
                }
              }
              lVar9 = *(long *)(lVar9 + 0x98);
            } while ((lVar9 != 0) && (!bVar3));
            if (bVar3) {
LAB_03460064:
              iVar1 = *(int *)(param_1 + 0x68);
              iVar6 = iVar1 + -1;
              *(int *)(param_1 + 0x68) = iVar6;
              if (iVar6 != 0) {
                uVar10 = (ulong)(iVar1 - 2);
                do {
                  if (((uint)uVar10 < 0x20) &&
                     ((*(uint *)(param_1 + 0xac) >> (uVar10 & 0x3f) & 1) != 0)) break;
                  *(uint *)(param_1 + 0x68) = (uint)uVar10;
                  uVar10 = uVar10 - 1;
                  iVar6 = iVar6 + -1;
                } while (iVar6 != 0);
              }
              lVar8 = *plVar13 + (ulong)*(uint *)(plVar13 + 1) * 0x28;
              if (*(long **)(lVar8 + -0x20) != (long *)0x0) {
                (**(code **)(**(long **)(lVar8 + -0x20) + 0x10))();
                *(undefined8 *)(lVar8 + -0x20) = 0;
              }
              if (*(long **)(lVar8 + -0x10) != (long *)0x0) {
                (**(code **)(**(long **)(lVar8 + -0x10) + 0x30))();
                *(undefined8 *)(lVar8 + -0x10) = 0;
              }
              plVar4 = *(long **)(lVar8 + -0x28);
              if (plVar4 != (long *)0x0) {
                (**(code **)(*plVar4 + 0x30))();
                *(long *)(lVar8 + -0x28) = 0;
              }
              *(int *)(plVar13 + 1) = (int)plVar13[1] + -1;
              goto LAB_03460100;
            }
          }
          plVar13 = (long *)FUN_034c10c4(lVar14,param_3,local_38,auStack_34,lVar8 + -0x20,
                                         lVar8 + -0x18);
          if (plVar13 != (long *)0x0) {
            *(undefined2 *)(param_1 + 0x68 + (ulong)(*(int *)(param_1 + 0x68) - 1) * 2 + 4) =
                 local_38[0];
            *(int *)(param_1 + 0x30) = (int)plVar13[3];
            (**(code **)(*plVar13 + 0x30))();
            return 0;
          }
          plVar13 = *(long **)(param_1 + 0x60);
          if ((int)plVar13[1] != 0) {
            return 1;
          }
          break;
        }
        local_58 = 0;
        FUN_03499b7c(*(long *)(lVar8 + -0x10),*(undefined8 *)(lVar8 + -8),&local_58);
        plVar13 = *(long **)(param_1 + 0x60);
        lVar8 = *plVar13 + (ulong)*(uint *)(plVar13 + 1) * 0x28;
        if (*(long **)(lVar8 + -0x20) != (long *)0x0) {
          (**(code **)(**(long **)(lVar8 + -0x20) + 0x10))();
          *(undefined8 *)(lVar8 + -0x20) = 0;
        }
        if (*(long **)(lVar8 + -0x10) != (long *)0x0) {
          (**(code **)(**(long **)(lVar8 + -0x10) + 0x30))();
          *(undefined8 *)(lVar8 + -0x10) = 0;
        }
        plVar4 = *(long **)(lVar8 + -0x28);
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 0x30))();
          *(long *)(lVar8 + -0x28) = 0;
        }
        lVar8 = local_58;
        *(int *)(plVar13 + 1) = (int)plVar13[1] + -1;
        if (local_58 == 0) {
          plVar13 = *(long **)(param_1 + 0x60);
          *(undefined8 *)(param_1 + 0x60) = 0;
          if (plVar13 == (long *)0x0) {
            return 1;
          }
          iVar1 = (int)plVar13[2] + -1;
          *(int *)(plVar13 + 2) = iVar1;
          if (iVar1 != 0) {
            return 1;
          }
          FUN_034783fc(plVar13);
          pcVar7 = *(code **)(puVar2 + 0x30);
          goto LAB_03460148;
        }
        *(int *)(local_58 + 0x10) = *(int *)(local_58 + 0x10) + 1;
        lVar14 = *(long *)(param_1 + 0x60);
        *(long *)(param_1 + 0x60) = local_58;
        if ((lVar14 != 0) &&
           (iVar1 = *(int *)(lVar14 + 0x10) + -1, *(int *)(lVar14 + 0x10) = iVar1, iVar1 == 0)) {
          FUN_034783fc(lVar14);
          (**(code **)(puVar2 + 0x30))(0,lVar14);
        }
        iVar1 = *(int *)(lVar8 + 0x10) + -1;
        *(int *)(lVar8 + 0x10) = iVar1;
        if (iVar1 == 0) {
          FUN_034783fc(lVar8);
          (**(code **)(puVar2 + 0x30))(0,lVar8);
        }
LAB_03460100:
        plVar13 = *(long **)(param_1 + 0x60);
        uVar5 = *(uint *)(plVar13 + 1);
      } while (uVar5 != 0);
      *(undefined8 *)(param_1 + 0x60) = 0;
      if (plVar13 == (long *)0x0) {
        return 1;
      }
    }
    iVar1 = (int)plVar13[2] + -1;
    *(int *)(plVar13 + 2) = iVar1;
    if (iVar1 == 0) {
      FUN_034783fc(plVar13);
      pcVar7 = *(code **)(PTR_DAT_047e2fd0 + 0x30);
LAB_03460148:
      (*pcVar7)(0,plVar13);
    }
  }
  return 1;
}


