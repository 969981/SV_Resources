/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02c719f0; name: FUN_02c719f0
 */


void FUN_02c719f0(long param_1)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  int local_60;
  undefined4 uStack_5c;
  int local_4c;
  long local_48;
  
  if (*(long *)(param_1 + 0xb0) != 0) {
    plVar7 = *(long **)(param_1 + 0xa8);
    do {
      if ((*plVar7 == 0) || (*(short *)(*plVar7 + 0x1a) == 0)) {
        FUN_0289fe40(&local_60,param_1 + 0x88);
        plVar7 = (long *)CONCAT44(uStack_5c,local_60);
      }
      else {
        plVar7 = plVar7 + 2;
      }
      plVar8 = *(long **)(param_1 + 0xa8);
      if (*(long *)(param_1 + 0xb0) != 0) {
        plVar8 = *(long **)(param_1 + 0xa8) + *(long *)(param_1 + 0xb0) * 2;
      }
    } while (plVar8 != plVar7);
  }
  if ((((*(char *)(param_1 + 0x60) != '\0') ||
       ((*(long *)(param_1 + 0x48) != 0 && (*(short *)(*(long *)(param_1 + 0x48) + 0x1a) != 0)))) &&
      (*(long **)(param_1 + 0x58) != (long *)0x0)) &&
     ((lVar5 = (**(code **)(**(long **)(param_1 + 0x58) + 0x20))(), puVar3 = PTR_DAT_047d0a08,
      lVar5 != 0 && (*(long *)PTR_DAT_047d0a08 != 0)))) {
    iVar4 = FUN_00f21480();
    puVar2 = PTR_DAT_047d0860;
    if ((iVar4 == 1) &&
       ((*(long *)PTR_DAT_047d0860 != 0 &&
        (lVar5 = FUN_00f21488(*(long *)PTR_DAT_047d0860 + 0x10,DAT_0485ea80,0x68), lVar5 != 0)))) {
      local_48 = 0;
      local_4c = 0;
      FUN_007fb120(&local_60,lVar5,&local_48,param_1 + 0x140,&local_4c,0x8000);
      if (local_60 == 0) {
        do {
          if (local_48 != 0) {
            plVar7 = *(long **)(param_1 + 0xa8);
            plVar8 = plVar7;
            if (*(long *)(param_1 + 0xb0) != 0) {
              plVar8 = plVar7 + *(long *)(param_1 + 0xb0) * 2;
            }
            if (plVar7 != plVar8) {
              do {
                if ((((*plVar7 != 0) && (lVar9 = *(long *)(*plVar7 + 0x10), lVar9 != 0)) &&
                    ((ushort)*(byte *)(lVar9 + 0x19) == (*(ushort *)(param_1 + 0x140) & 0xff))) &&
                   ((ushort)*(byte *)(lVar9 + 0x1a) == *(ushort *)(param_1 + 0x140) >> 8)) {
                  if (((*(char *)(lVar9 + 0x38) != '\0') ||
                      ((*(long *)(lVar9 + 0x20) != 0 &&
                       (*(short *)(*(long *)(lVar9 + 0x20) + 0x1a) != 0)))) &&
                     (puVar6 = *(undefined8 **)(lVar9 + 0x30), puVar6 != (undefined8 *)0x0)) {
                    (**(code **)*puVar6)(puVar6,param_1 + 0x142,local_4c + -2);
                  }
                  break;
                }
                plVar7 = plVar7 + 2;
              } while (plVar8 != plVar7);
            }
          }
          FUN_007fb120(&local_60,lVar5,&local_48,param_1 + 0x140,&local_4c,0x8000);
        } while (local_60 == 0);
      }
    }
    if (*(long *)puVar3 != 0) {
      iVar4 = FUN_00f21480();
      if (((iVar4 == 1) && (lVar5 = *(long *)puVar2, lVar5 != 0)) &&
         (plVar7 = (long *)FUN_00f21488(lVar5 + 0x10,DAT_0485ea68,0x7c), plVar7 != (long *)0x0)) {
        local_48 = 0;
        local_4c = 0;
        (**(code **)(*plVar7 + 0x68))(&local_60,plVar7,&local_48,param_1 + 0x140,&local_4c,0x8000);
        if (local_60 == 0) {
          do {
            if (local_48 != 0) {
              plVar8 = *(long **)(param_1 + 0xa8);
              plVar1 = plVar8;
              if (*(long *)(param_1 + 0xb0) != 0) {
                plVar1 = plVar8 + *(long *)(param_1 + 0xb0) * 2;
              }
              if (plVar8 != plVar1) {
                do {
                  if ((((*plVar8 != 0) && (lVar5 = *(long *)(*plVar8 + 0x10), lVar5 != 0)) &&
                      ((ushort)*(byte *)(lVar5 + 0x19) == (*(ushort *)(param_1 + 0x140) & 0xff))) &&
                     ((ushort)*(byte *)(lVar5 + 0x1a) == *(ushort *)(param_1 + 0x140) >> 8)) {
                    if (((*(char *)(lVar5 + 0x38) != '\0') ||
                        ((*(long *)(lVar5 + 0x20) != 0 &&
                         (*(short *)(*(long *)(lVar5 + 0x20) + 0x1a) != 0)))) &&
                       (puVar6 = *(undefined8 **)(lVar5 + 0x30), puVar6 != (undefined8 *)0x0)) {
                      (**(code **)*puVar6)(puVar6,param_1 + 0x142,local_4c + -2);
                    }
                    break;
                  }
                  plVar8 = plVar8 + 2;
                } while (plVar1 != plVar8);
              }
            }
            (**(code **)(*plVar7 + 0x68))
                      (&local_60,plVar7,&local_48,param_1 + 0x140,&local_4c,0x8000);
          } while (local_60 == 0);
        }
      }
      if (((*(long *)puVar3 != 0) && (iVar4 = FUN_00f21480(), iVar4 == 1)) &&
         ((lVar5 = *(long *)puVar2, lVar5 != 0 &&
          (plVar7 = (long *)FUN_00f21488(lVar5 + 0x10,DAT_0485ea74,0x80), plVar7 != (long *)0x0))))
      {
        local_48 = 0;
        local_4c = 0;
        (**(code **)(*plVar7 + 0x68))(&local_60,plVar7,&local_48,param_1 + 0x140,&local_4c,0x8000);
        if (local_60 == 0) {
          do {
            if (local_48 != 0) {
              plVar8 = *(long **)(param_1 + 0xa8);
              plVar1 = plVar8;
              if (*(long *)(param_1 + 0xb0) != 0) {
                plVar1 = plVar8 + *(long *)(param_1 + 0xb0) * 2;
              }
              if (plVar8 != plVar1) {
                do {
                  if ((((*plVar8 != 0) && (lVar5 = *(long *)(*plVar8 + 0x10), lVar5 != 0)) &&
                      ((ushort)*(byte *)(lVar5 + 0x19) == (*(ushort *)(param_1 + 0x140) & 0xff))) &&
                     ((ushort)*(byte *)(lVar5 + 0x1a) == *(ushort *)(param_1 + 0x140) >> 8)) {
                    if (((*(char *)(lVar5 + 0x38) != '\0') ||
                        ((*(long *)(lVar5 + 0x20) != 0 &&
                         (*(short *)(*(long *)(lVar5 + 0x20) + 0x1a) != 0)))) &&
                       (puVar6 = *(undefined8 **)(lVar5 + 0x30), puVar6 != (undefined8 *)0x0)) {
                      (**(code **)*puVar6)(puVar6,param_1 + 0x142,local_4c + -2);
                    }
                    break;
                  }
                  plVar8 = plVar8 + 2;
                } while (plVar1 != plVar8);
              }
            }
            (**(code **)(*plVar7 + 0x68))
                      (&local_60,plVar7,&local_48,param_1 + 0x140,&local_4c,0x8000);
          } while (local_60 == 0);
        }
      }
    }
  }
  if (*(long *)(param_1 + 0x8140) != 0) {
    FUN_00f6d438();
  }
  if ((*(long *)(param_1 + 0xc0) != 0) &&
     (lVar5 = *(long *)(*(long *)(param_1 + 0xc0) + 0x10), lVar5 != 0)) {
    (**(code **)(*(long *)(lVar5 + -0x28) + 0x68))();
  }
  if ((*(long *)(param_1 + 0xd0) != 0) &&
     (lVar5 = *(long *)(*(long *)(param_1 + 0xd0) + 0x10), lVar5 != 0)) {
    (**(code **)(*(long *)(lVar5 + -0x28) + 0x68))();
  }
  if ((*(long *)(param_1 + 0xe0) != 0) &&
     (lVar5 = *(long *)(*(long *)(param_1 + 0xe0) + 0x10), lVar5 != 0)) {
    (**(code **)(*(long *)(lVar5 + -0x28) + 0x68))();
  }
  if ((*(long *)(param_1 + 0xf0) != 0) &&
     (lVar5 = *(long *)(*(long *)(param_1 + 0xf0) + 0x10), lVar5 != 0)) {
    (**(code **)(*(long *)(lVar5 + -0x28) + 0x68))();
  }
  if ((*(long *)(param_1 + 0x100) != 0) &&
     (lVar5 = *(long *)(*(long *)(param_1 + 0x100) + 0x10), lVar5 != 0)) {
    (**(code **)(*(long *)(lVar5 + -0x28) + 0x68))();
  }
  if ((*(long *)(param_1 + 0x110) != 0) &&
     (lVar5 = *(long *)(*(long *)(param_1 + 0x110) + 0x10), lVar5 != 0)) {
    (**(code **)(*(long *)(lVar5 + -0x28) + 0x68))();
  }
  if ((*(long *)(param_1 + 0x120) != 0) &&
     (lVar5 = *(long *)(*(long *)(param_1 + 0x120) + 0x10), lVar5 != 0)) {
    (**(code **)(*(long *)(lVar5 + -0x28) + 0x68))();
  }
  if ((*(long *)(param_1 + 0x130) != 0) &&
     (lVar5 = *(long *)(*(long *)(param_1 + 0x130) + 0x10), lVar5 != 0)) {
    (**(code **)(*(long *)(lVar5 + -0x28) + 0x68))();
  }
  return;
}


