/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00524cc0; name: FUN_00524cc0
 */


undefined8 FUN_00524cc0(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  
  puVar1 = PTR_DAT_047cdbe8;
  if (*(ushort *)(param_1 + 8) < 0x101) {
    if (*(short *)(param_1 + 10) == 0) {
      return 1;
    }
    lVar7 = *(long *)(param_1 + 0x10);
    do {
      if (*(int *)(puVar1 + (ulong)*(byte *)(lVar7 + 0x10) * 4) == 10) {
        if (*(char *)(lVar7 + 0x11) == '\0') {
          if ((*(byte *)(lVar7 + 0x12) & 1) == 0) {
            if ((*(byte *)(lVar7 + 0x12) >> 4 & 1) == 0) {
              uVar2 = (**(code **)(**(long **)(lVar7 + 8) + 0x30))();
            }
            else {
              uVar2 = (**(code **)(**(long **)(lVar7 + 8) + 0x48))();
            }
            if ((uVar2 & 1) == 0) {
              return 0;
            }
          }
        }
        else {
          lVar3 = *(long *)(lVar7 + 8);
          if (0 < *(int *)(lVar3 + 8)) {
            lVar9 = 0;
            do {
              uVar2 = (**(code **)(**(long **)(*(long *)(lVar3 + 0x10) + lVar9 * 8 + 8) + 0x30))();
              if ((uVar2 & 1) == 0) {
                return 0;
              }
              lVar3 = *(long *)(lVar7 + 8);
              lVar9 = lVar9 + 1;
            } while (lVar9 < *(int *)(lVar3 + 8));
          }
        }
      }
      lVar7 = lVar7 + 0x20;
    } while (lVar7 != *(long *)(param_1 + 0x10) + (ulong)*(ushort *)(param_1 + 10) * 0x20);
  }
  else {
    plVar6 = *(undefined8 **)(param_1 + 0x10) + 1;
    plVar8 = (long *)**(undefined8 **)(param_1 + 0x10);
    if (plVar8 != plVar6) {
      do {
        if (*(int *)(puVar1 + (ulong)*(byte *)(plVar8 + 6) * 4) == 10) {
          if (*(char *)((long)plVar8 + 0x31) == '\0') {
            if ((*(byte *)((long)plVar8 + 0x32) & 1) == 0) {
              if ((*(byte *)((long)plVar8 + 0x32) >> 4 & 1) == 0) {
                uVar2 = (**(code **)(*(long *)plVar8[5] + 0x30))();
              }
              else {
                uVar2 = (**(code **)(*(long *)plVar8[5] + 0x48))();
              }
              if ((uVar2 & 1) == 0) {
                return 0;
              }
            }
          }
          else {
            lVar7 = plVar8[5];
            if (0 < *(int *)(lVar7 + 8)) {
              lVar3 = 0;
              do {
                uVar2 = (**(code **)(**(long **)(*(long *)(lVar7 + 0x10) + lVar3 * 8 + 8) + 0x30))()
                ;
                if ((uVar2 & 1) == 0) {
                  return 0;
                }
                lVar7 = plVar8[5];
                lVar3 = lVar3 + 1;
              } while (lVar3 < *(int *)(lVar7 + 8));
            }
          }
        }
        plVar4 = (long *)plVar8[1];
        if ((long *)plVar8[1] == (long *)0x0) {
          plVar4 = plVar8 + 2;
          plVar5 = (long *)*plVar4;
          if ((long *)*plVar5 != plVar8) {
            do {
              lVar7 = *plVar4;
              plVar4 = (long *)(lVar7 + 0x10);
              plVar5 = (long *)*plVar4;
            } while (*plVar5 != lVar7);
          }
        }
        else {
          do {
            plVar5 = plVar4;
            plVar4 = (long *)*plVar5;
          } while ((long *)*plVar5 != (long *)0x0);
        }
        plVar8 = plVar5;
      } while (plVar5 != plVar6);
      return 1;
    }
  }
  return 1;
}


