/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03456880; name: FUN_03456880
 */


void FUN_03456880(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  undefined *puVar4;
  long *plVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  
  puVar4 = PTR_DAT_047e6f28;
  plVar12 = *(long **)(param_1 + 0x50);
  if (plVar12 != (long *)0x0) {
    plVar11 = (long *)0x0;
    do {
      lVar9 = plVar12[2];
      plVar5 = (long *)FUN_0344ec90(*(undefined8 *)puVar4,
                                    *(undefined4 *)(*(long *)(lVar9 + 8) + 0x30),
                                    *(byte *)(*(long *)(lVar9 + 8) + 0x36) >> 6 & 1);
      if (*(long *)(lVar9 + 8) == param_2) {
        if (*(int *)(lVar9 + 0x34) != 0) {
          *(int *)(lVar9 + 0x34) = *(int *)(lVar9 + 0x34) + -1;
          goto LAB_034568f4;
        }
        FUN_03455744(param_1,lVar9);
        plVar10 = (long *)*plVar12;
        plVar7 = (long *)(param_1 + 0x50);
        if (*(long **)(param_1 + 0x50) != plVar12) {
          plVar7 = plVar11;
        }
        *plVar7 = (long)plVar10;
        if (*(long **)(param_1 + 0x58) == plVar12) {
          *(long **)(param_1 + 0x58) = plVar11;
        }
        *plVar12 = *(long *)(param_1 + 0x60);
        *(long **)(param_1 + 0x60) = plVar12;
        *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + -1;
      }
      else {
LAB_034568f4:
        plVar10 = (long *)*plVar12;
        plVar11 = plVar12;
      }
      plVar12 = plVar10;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x30))(plVar5);
      }
    } while (plVar12 != (long *)0x0);
  }
  plVar12 = *(long **)(param_1 + 0x28);
  do {
    if (plVar12 == (long *)0x0) {
      return;
    }
    lVar9 = *(long *)(plVar12[2] + 8);
    plVar11 = (long *)FUN_0344ec90(*(undefined8 *)puVar4,*(undefined4 *)(lVar9 + 0x30),
                                   *(byte *)(lVar9 + 0x36) >> 6 & 1);
    if ((((lVar9 == param_2) && (*(short *)(param_2 + 0x34) == 0x503)) &&
        (plVar5 = *(long **)(param_2 + 0x48), plVar5 != (long *)0x0)) &&
       ((*plVar5 == 0x4000000 || (*plVar5 == 0x2000000)))) {
      lVar9 = *(long *)(param_2 + 0xd8);
      if (lVar9 != 0) {
        uVar3 = *(uint *)(plVar5 + 6);
        if (uVar3 != 0) {
          plVar7 = (long *)plVar5[5];
          plVar10 = plVar7 + uVar3;
          if (*plVar7 != lVar9) {
            lVar8 = (ulong)uVar3 * 8;
            do {
              lVar8 = lVar8 + -8;
              if (lVar8 == 0) {
                plVar7 = plVar10;
                break;
              }
              plVar2 = plVar7 + 1;
              plVar1 = plVar7 + 1;
              plVar7 = plVar2;
            } while (*plVar1 != lVar9);
          }
          if (plVar10 != plVar7) {
            if (uVar3 < 2) {
              iVar6 = 0;
            }
            else {
              *plVar7 = plVar10[-1];
              iVar6 = (int)plVar5[6] + -1;
            }
            *(int *)(plVar5 + 6) = iVar6;
          }
        }
      }
      *(undefined8 *)(param_2 + 0x48) = 0;
    }
    plVar12 = (long *)*plVar12;
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 0x30))();
    }
  } while( true );
}


