/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f61328; name: FUN_01f61328
 */


void FUN_01f61328(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  
  if (((*(char *)(param_1 + 0x60) != '\0') ||
      ((*(long *)(param_1 + 0x48) != 0 && (*(short *)(*(long *)(param_1 + 0x48) + 0x1a) != 0)))) &&
     (plVar7 = *(long **)(param_1 + 0x58), plVar7 != (long *)0x0)) {
    plVar8 = (long *)(param_1 + 0xd0);
    if (*plVar8 != 0) {
      lVar2 = (**(code **)(*plVar7 + 0x60))(plVar7);
      plVar6 = *(long **)(lVar2 + 0x20);
      lVar3 = *plVar8;
      plVar5 = plVar6;
      if (*(long *)(lVar2 + 0x28) != 0) {
        plVar5 = plVar6 + *(long *)(lVar2 + 0x28);
      }
      if ((plVar5 != plVar6) && (*plVar6 != lVar3)) {
        plVar4 = plVar6;
        do {
          if (plVar5 + -1 == plVar4) goto LAB_01f614c0;
          plVar6 = plVar4 + 1;
          plVar1 = plVar4 + 1;
          plVar4 = plVar6;
        } while (*plVar1 != lVar3);
      }
      if (plVar5 == plVar6) {
LAB_01f614c0:
        if (*(char *)(param_1 + 0xd8) != '\0') {
          FUN_01f62a80(param_1,lVar3,0);
        }
        FUN_01f6063c(0);
        *(undefined4 *)(param_1 + 0xd7) = 0;
        *plVar8 = 0;
      }
    }
    if (*(long *)(param_1 + 0x100) != 0) {
      lVar2 = (**(code **)(*plVar7 + 0x60))(plVar7);
      plVar8 = *(long **)(lVar2 + 0x20);
      lVar3 = *(long *)(param_1 + 0x100);
      plVar6 = plVar8;
      if (*(long *)(lVar2 + 0x28) != 0) {
        plVar6 = plVar8 + *(long *)(lVar2 + 0x28);
      }
      if ((plVar6 != plVar8) && (*plVar8 != lVar3)) {
        plVar5 = plVar8;
        do {
          if (plVar6 + -1 == plVar5) goto LAB_01f6150c;
          plVar8 = plVar5 + 1;
          plVar4 = plVar5 + 1;
          plVar5 = plVar8;
        } while (*plVar4 != lVar3);
      }
      if (plVar6 == plVar8) {
LAB_01f6150c:
        if (*(char *)(param_1 + 0x108) != '\0') {
          FUN_01f62a80(param_1,lVar3,1);
        }
        FUN_01f6063c(1);
        *(undefined4 *)(param_1 + 0x107) = 0;
        *(long *)(param_1 + 0x100) = 0;
      }
    }
    if (*(long *)(param_1 + 0x130) != 0) {
      lVar2 = (**(code **)(*plVar7 + 0x60))(plVar7);
      plVar8 = *(long **)(lVar2 + 0x20);
      lVar3 = *(long *)(param_1 + 0x130);
      plVar6 = plVar8;
      if (*(long *)(lVar2 + 0x28) != 0) {
        plVar6 = plVar8 + *(long *)(lVar2 + 0x28);
      }
      if ((plVar6 != plVar8) && (*plVar8 != lVar3)) {
        plVar5 = plVar8;
        do {
          if (plVar6 + -1 == plVar5) goto LAB_01f61558;
          plVar8 = plVar5 + 1;
          plVar4 = plVar5 + 1;
          plVar5 = plVar8;
        } while (*plVar4 != lVar3);
      }
      if (plVar6 == plVar8) {
LAB_01f61558:
        if (*(char *)(param_1 + 0x138) != '\0') {
          FUN_01f62a80(param_1,lVar3,2);
        }
        FUN_01f6063c(2);
        *(undefined4 *)(param_1 + 0x137) = 0;
        *(long *)(param_1 + 0x130) = 0;
      }
    }
    if (*(long *)(param_1 + 0x160) != 0) {
      lVar2 = (**(code **)(*plVar7 + 0x60))(plVar7);
      plVar7 = *(long **)(lVar2 + 0x20);
      lVar3 = *(long *)(param_1 + 0x160);
      plVar8 = plVar7;
      if (*(long *)(lVar2 + 0x28) != 0) {
        plVar8 = plVar7 + *(long *)(lVar2 + 0x28);
      }
      if ((plVar8 != plVar7) && (*plVar7 != lVar3)) {
        plVar6 = plVar7;
        do {
          if (plVar8 + -1 == plVar6) goto LAB_01f615a4;
          plVar7 = plVar6 + 1;
          plVar5 = plVar6 + 1;
          plVar6 = plVar7;
        } while (*plVar5 != lVar3);
      }
      if (plVar8 == plVar7) {
LAB_01f615a4:
        if (*(char *)(param_1 + 0x168) != '\0') {
          FUN_01f62a80(param_1,lVar3,3);
        }
        FUN_01f6063c(3);
        *(undefined4 *)(param_1 + 0x167) = 0;
        *(long *)(param_1 + 0x160) = 0;
      }
    }
  }
  return;
}


