/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0127e5d0; name: FUN_0127e5d0
 */


void FUN_0127e5d0(long *param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  lVar5 = param_1[0x42];
  *param_1 = (long)&DAT_04609080;
  param_1[4] = (long)&PTR_LAB_04609118;
  param_1[5] = (long)&DAT_04609168;
  if (lVar5 != 0) {
    lVar4 = param_1[0x43];
    if (lVar4 == lVar5) {
      lVar4 = lVar5;
    }
    else {
      if (*(long **)(lVar4 + -8) != (long *)0x0) {
        (**(code **)(**(long **)(lVar4 + -8) + 0x20))();
      }
      if (*(long **)(lVar4 + -0x28) != (long *)0x0) {
        (**(code **)(**(long **)(lVar4 + -0x28) + 0x20))();
      }
      if (lVar4 + -0x40 != lVar5) {
        if (*(long **)(lVar4 + -0x48) != (long *)0x0) {
          (**(code **)(**(long **)(lVar4 + -0x48) + 0x20))();
        }
        if (*(long **)(lVar4 + -0x68) != (long *)0x0) {
          (**(code **)(**(long **)(lVar4 + -0x68) + 0x20))();
        }
        if (lVar4 + -0x80 != lVar5) {
          if (*(long **)(lVar4 + -0x88) != (long *)0x0) {
            (**(code **)(**(long **)(lVar4 + -0x88) + 0x20))();
          }
          if (*(long **)(lVar4 + -0xa8) != (long *)0x0) {
            (**(code **)(**(long **)(lVar4 + -0xa8) + 0x20))();
          }
          if (lVar4 + -0xc0 != lVar5) {
            if (*(long **)(lVar4 + -200) != (long *)0x0) {
              (**(code **)(**(long **)(lVar4 + -200) + 0x20))();
            }
            if (*(long **)(lVar4 + -0xe8) != (long *)0x0) {
              (**(code **)(**(long **)(lVar4 + -0xe8) + 0x20))();
            }
            if (lVar4 + -0x100 != lVar5) {
              if (*(long **)(lVar4 + -0x108) != (long *)0x0) {
                (**(code **)(**(long **)(lVar4 + -0x108) + 0x20))();
              }
              if (*(long **)(lVar4 + -0x128) != (long *)0x0) {
                (**(code **)(**(long **)(lVar4 + -0x128) + 0x20))();
              }
              if (lVar4 + -0x140 != lVar5) {
                if (*(long **)(lVar4 + -0x148) != (long *)0x0) {
                  (**(code **)(**(long **)(lVar4 + -0x148) + 0x20))();
                }
                if (*(long **)(lVar4 + -0x168) != (long *)0x0) {
                  (**(code **)(**(long **)(lVar4 + -0x168) + 0x20))();
                }
                if (lVar4 + -0x180 != lVar5) {
                  do {
                    if (*(long **)(lVar4 + -0x188) != (long *)0x0) {
                      (**(code **)(**(long **)(lVar4 + -0x188) + 0x20))();
                    }
                    if (*(long **)(lVar4 + -0x1a8) != (long *)0x0) {
                      (**(code **)(**(long **)(lVar4 + -0x1a8) + 0x20))();
                    }
                    lVar4 = lVar4 + -0x40;
                  } while (lVar5 + 0x180 != lVar4);
                }
              }
            }
          }
        }
      }
      lVar4 = param_1[0x42];
    }
    lVar3 = param_1[0x44];
    param_1[0x43] = lVar5;
    plVar6 = (long *)param_1[0x45];
    uVar2 = (**(code **)(*plVar6 + 0xf8))(plVar6);
    if (((uVar2 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
      (**(code **)(*plVar6 + 0x18))(plVar6,lVar4,lVar3 - lVar4,8);
    }
    else {
      FUN_00c48fe8(plVar6,lVar4,lVar3 - lVar4,8);
    }
  }
  puVar1 = PTR_DAT_047d9260;
  *param_1 = (long)(PTR_DAT_047d9260 + 0x10);
  param_1[4] = (long)(puVar1 + 0xa8);
  param_1[5] = (long)(puVar1 + 0xf8);
  FUN_0127e884(param_1 + 0x3e,0);
  FUN_00db9ce0(param_1);
  return;
}


