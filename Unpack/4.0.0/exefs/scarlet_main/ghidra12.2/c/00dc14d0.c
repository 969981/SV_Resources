/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00dc14d0; name: FUN_00dc14d0
 */


void FUN_00dc14d0(long param_1)

{
  ulong uVar1;
  long *plVar2;
  undefined2 uVar3;
  bool bVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  char cVar11;
  char cVar12;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  if (*(int *)(param_1 + 0x128) == 4) {
    lVar6 = (**(code **)(**(long **)(*(long *)(param_1 + 0xe8) + 0x48) + 0x68))();
    FUN_00dc183c(*(undefined8 *)(lVar6 + 0x30),0,*(undefined8 *)(param_1 + 0x130));
    plVar9 = *(long **)(param_1 + 0x1a8);
    plVar2 = *(long **)(param_1 + 0x1b0);
    if (plVar9 != plVar2) {
      if (*(char *)(*(long *)(param_1 + 0x130) + 0x100) == '\0') {
        uVar10 = 0;
        do {
          lVar6 = *plVar9;
          if (*(int *)(lVar6 + 0x128) == 4) {
            if ((int)uVar10 == 0) {
              FUN_00dc1c28();
              lVar6 = *plVar9;
            }
            lVar7 = *(long *)(*(long *)(lVar6 + 0x130) + 0x30);
            bVar4 = *(char *)(lVar7 + 0x1e0) != '\0';
            bVar5 = *(char *)(lVar7 + 0x1b0) != '\0';
            cVar12 = -0x7e;
            if (bVar5) {
              cVar12 = '\0';
            }
            cVar11 = -0x7e;
            if (bVar5) {
              cVar11 = '\0';
            }
            if ((*(char *)(lVar6 + 0x58) != cVar12) || (*(char *)(lVar6 + 0x59) != cVar11)) {
              plVar8 = (long *)(lVar6 + 0x38);
              uVar3 = *(undefined2 *)(lVar6 + 0x58);
              *(char *)(lVar6 + 0x58) = cVar11;
              *(char *)(lVar6 + 0x59) = cVar11;
              if (*(long *)(lVar6 + 0x48) != 0) {
                FUN_00c6a584(*(long *)(lVar6 + 0x48),plVar8);
              }
              (**(code **)(*plVar8 + 0x20))(plVar8,uVar3);
            }
          }
          else {
            bVar4 = false;
          }
          lVar7 = *(long *)(*(long *)(param_1 + 0x170) + uVar10 * 8);
          lVar6 = *(long *)(lVar7 + 0x120);
          if (lVar6 != 0) {
            *(char *)(lVar6 + 0x211) = bVar4 & *(char *)(lVar7 + 0x332) != '\0';
          }
          plVar8 = *(long **)(*(long *)(param_1 + 0x138) + uVar10 * 8);
          if (bVar4) {
            if ((char)plVar8[0x86] == '\0') {
              plVar8[0x87] = plVar8[0x87] | 8;
              *(undefined1 *)(plVar8 + 0x86) = 1;
              FUN_00d37964(plVar8,2,1);
              (**(code **)(*plVar8 + 0x108))(plVar8);
              FUN_00cf6de0(plVar8 + 0x21,auStack_68);
            }
          }
          else if ((char)plVar8[0x86] != '\0') {
            uVar1 = plVar8[0x87] & 0xfffffff7;
            plVar8[0x87] = plVar8[0x87] & 0xfffffffffffffff7;
            *(bool *)(plVar8 + 0x86) = uVar1 != 0;
            if (uVar1 == 0) {
              FUN_00d37964(plVar8,2,0);
              FUN_00d37964(plVar8,0,0);
              (**(code **)(*plVar8 + 0x110))(plVar8);
              FUN_00d38190(plVar8 + 0x21,auStack_70);
            }
          }
          plVar9 = plVar9 + 1;
          uVar10 = (ulong)((int)uVar10 + 1);
        } while (plVar2 != plVar9);
      }
      else {
        uVar10 = 0;
        do {
          lVar6 = *plVar9;
          if (*(int *)(lVar6 + 0x128) == 4) {
            if ((int)uVar10 == 0) {
              FUN_00dc1c28();
              lVar6 = *plVar9;
            }
            lVar7 = *(long *)(*(long *)(lVar6 + 0x130) + 0x30);
            bVar4 = *(char *)(lVar7 + 0x1e0) != '\0';
            bVar5 = *(char *)(lVar7 + 0x1b0) != '\0';
            cVar12 = -0x7e;
            if (bVar5) {
              cVar12 = '\0';
            }
            cVar11 = -0x7e;
            if (bVar5) {
              cVar11 = '\0';
            }
            if ((*(char *)(lVar6 + 0x58) != cVar12) || (*(char *)(lVar6 + 0x59) != cVar11)) {
              plVar8 = (long *)(lVar6 + 0x38);
              uVar3 = *(undefined2 *)(lVar6 + 0x58);
              *(char *)(lVar6 + 0x58) = cVar11;
              *(char *)(lVar6 + 0x59) = cVar11;
              if (*(long *)(lVar6 + 0x48) != 0) {
                FUN_00c6a584(*(long *)(lVar6 + 0x48),plVar8);
              }
              (**(code **)(*plVar8 + 0x20))(plVar8,uVar3);
            }
          }
          else {
            bVar4 = false;
          }
          lVar7 = *(long *)(*(long *)(param_1 + 0x170) + uVar10 * 8);
          lVar6 = *(long *)(lVar7 + 0x120);
          if (lVar6 != 0) {
            *(char *)(lVar6 + 0x211) = bVar4 & *(char *)(lVar7 + 0x332) != '\0';
          }
          plVar8 = *(long **)(*(long *)(param_1 + 0x138) + uVar10 * 8);
          if ((char)plVar8[0x86] == '\0') {
            *(undefined1 *)(plVar8 + 0x86) = 1;
            plVar8[0x87] = plVar8[0x87] | 8;
            FUN_00d37964(plVar8,2,1);
            (**(code **)(*plVar8 + 0x108))(plVar8);
            FUN_00cf6de0(plVar8 + 0x21,auStack_68);
          }
          plVar9 = plVar9 + 1;
          uVar10 = (ulong)((int)uVar10 + 1);
        } while (plVar2 != plVar9);
      }
    }
  }
  return;
}


