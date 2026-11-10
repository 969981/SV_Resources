/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01403d78; name: FUN_01403d78
 */


void FUN_01403d78(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 auStack_7ffffff8 [268435445];
  
  if (param_2 == (long *)0x0) {
    puVar7 = (undefined8 *)((long)register0x00000008 + -0x2000000000000050);
    iVar4 = 0;
    uVar3 = 0xffffffff;
    uVar5 = 0xffffffffffffffff;
  }
  else {
    plVar1 = (long *)(**(code **)(*param_2 + 0x38))(param_2);
    if (plVar1 == (long *)0x0) {
      uVar5 = 0;
      iVar4 = 1;
    }
    else {
      plVar1 = (long *)(**(code **)(*plVar1 + 0x38))();
      if (plVar1 == (long *)0x0) {
        iVar4 = 2;
        uVar5 = 1;
      }
      else {
        plVar1 = (long *)(**(code **)(*plVar1 + 0x38))();
        if (plVar1 == (long *)0x0) {
          iVar4 = 3;
          uVar5 = 2;
        }
        else {
          plVar1 = (long *)(**(code **)(*plVar1 + 0x38))();
          if (plVar1 == (long *)0x0) {
            iVar4 = 4;
            uVar5 = 3;
          }
          else {
            plVar1 = (long *)(**(code **)(*plVar1 + 0x38))();
            if (plVar1 == (long *)0x0) {
              iVar4 = 5;
              uVar5 = 4;
            }
            else {
              uVar5 = 4;
              do {
                plVar1 = (long *)(**(code **)(*plVar1 + 0x38))();
                iVar4 = (int)uVar5;
                uVar5 = (ulong)(iVar4 + 1);
              } while (plVar1 != (long *)0x0);
              iVar4 = iVar4 + 2;
            }
          }
        }
      }
    }
    puVar7 = (undefined8 *)((long)auStack_7ffffff8 + (0x7fffffa8 - (uVar5 * 8 + 0xf & 0xffffffff0)))
    ;
    uVar3 = (uint)uVar5;
    if (uVar3 == 0) {
      iVar4 = 1;
      goto LAB_01403ef8;
    }
  }
  puVar7[uVar5 - 1] = param_2;
  plVar1 = (long *)(**(code **)(*param_2 + 0x38))(param_2);
  if ((int)(uVar5 - 1) != 0) {
    puVar7[uVar5 - 2] = plVar1;
    plVar1 = (long *)(**(code **)(*plVar1 + 0x38))();
    if ((int)(uVar5 - 2) != 0) {
      puVar7[uVar5 - 3] = plVar1;
      plVar1 = (long *)(**(code **)(*plVar1 + 0x38))();
      if ((int)(uVar5 - 3) != 0) {
        puVar7[uVar5 - 4] = plVar1;
        plVar1 = (long *)(**(code **)(*plVar1 + 0x38))();
        if ((int)(uVar5 - 4) != 0) {
          do {
            puVar7[uVar5 - 5] = plVar1;
            plVar1 = (long *)(**(code **)(*plVar1 + 0x38))();
            uVar5 = uVar5 - 1;
          } while ((int)uVar5 != 4);
        }
      }
    }
  }
LAB_01403ef8:
  plVar1 = *(long **)(param_1 + 0x88);
  if (plVar1 != (long *)0x0) {
    plVar2 = *(long **)(param_1 + 0x90);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0xa0))(0,plVar2);
      plVar1 = *(long **)(param_1 + 0x88);
    }
    (**(code **)(*plVar1 + 0xe8))();
  }
  if (1 < iVar4) {
    plVar1 = (long *)*puVar7;
    (**(code **)(*plVar1 + 0xd8))(0,0,plVar1,0);
    (**(code **)(*plVar1 + 0xe0))(0,plVar1,0);
    if (uVar3 != 1) {
      plVar1 = (long *)puVar7[1];
      (**(code **)(*plVar1 + 0xd8))(0,0,plVar1,0);
      (**(code **)(*plVar1 + 0xe0))(0,plVar1,0);
      if (uVar3 != 2) {
        plVar1 = (long *)puVar7[2];
        (**(code **)(*plVar1 + 0xd8))(0,0,plVar1,0);
        (**(code **)(*plVar1 + 0xe0))(0,plVar1,0);
        if (uVar3 != 3) {
          plVar1 = (long *)puVar7[3];
          (**(code **)(*plVar1 + 0xd8))(0,0,plVar1,0);
          (**(code **)(*plVar1 + 0xe0))(0,plVar1,0);
          if (uVar3 != 4) {
            lVar6 = (ulong)uVar3 - 4;
            puVar7 = puVar7 + 4;
            do {
              plVar1 = (long *)*puVar7;
              (**(code **)(*plVar1 + 0xd8))(0,0,plVar1,0);
              (**(code **)(*plVar1 + 0xe0))(0,plVar1,0);
              lVar6 = lVar6 + -1;
              puVar7 = puVar7 + 1;
            } while (lVar6 != 0);
          }
        }
      }
    }
  }
  FUN_00e7cad4(0,param_1,0);
  return;
}


