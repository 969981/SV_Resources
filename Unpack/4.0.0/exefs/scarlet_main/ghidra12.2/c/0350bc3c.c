/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0350bc3c; name: FUN_0350bc3c
 */


void FUN_0350bc3c(long param_1)

{
  uint *puVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  size_t __n;
  char *__dest;
  size_t sVar5;
  long lVar6;
  undefined8 *puVar7;
  char *__s;
  long lVar8;
  
  lVar8 = *(long *)(param_1 + 0x128);
  if (lVar8 == 0) {
    plVar4 = *(long **)(param_1 + 0xe0);
    if ((((plVar4 == (long *)0x0) && (plVar4 = *(long **)(param_1 + 0xe8), plVar4 == (long *)0x0))
        && (plVar4 = *(long **)(param_1 + 0xf0), plVar4 == (long *)0x0)) &&
       (plVar4 = *(long **)(param_1 + 0xf8), plVar4 == (long *)0x0)) {
      *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_1 + 0x120);
    }
    else {
      (**(code **)(*plVar4 + 0x58))(plVar4,*(undefined8 *)(param_1 + 0x120));
    }
  }
  else {
    plVar4 = *(long **)(param_1 + 0x120);
    *(long **)(lVar8 + 8) = plVar4;
    lVar6 = plVar4[3];
    *(long *)(lVar8 + 0xe8) = lVar6;
    (**(code **)(*plVar4 + 0x40))();
    FUN_034f5ca4(lVar8 + 0x10,lVar6 + 600,lVar8 + 0xb0,*(undefined4 *)PTR_DAT_047e6fa0);
    *(undefined1 *)(lVar8 + 0xf0) = 0;
  }
  puVar3 = PTR_DAT_047e2fd0;
  if (0 < *(int *)(param_1 + 0x140)) {
    lVar6 = 0;
    lVar8 = 0;
    do {
      lVar2 = *(long *)(param_1 + 0x138) + lVar6;
      __s = *(char **)(lVar2 + 8);
      if ((__s != (char *)0x0) && (*(char *)(lVar2 + 0x18) == '\0')) {
        __n = strlen(__s);
        __dest = (char *)(**(code **)(puVar3 + 0x10))(5,__n + 1);
        *(char **)(lVar2 + 8) = __dest;
        if (__dest != (char *)0x0) {
          sVar5 = strlen(__s);
          if (sVar5 + 1 <= __n) {
            __n = sVar5 + 1;
          }
          strncpy(__dest,__s,__n);
          __dest[__n] = '\0';
          *(undefined1 *)(*(long *)(param_1 + 0x138) + lVar6 + 0x18) = 1;
        }
      }
      lVar8 = lVar8 + 1;
      lVar6 = lVar6 + 0x20;
    } while (lVar8 < *(int *)(param_1 + 0x140));
  }
  (**(code **)(**(long **)(param_1 + 0x118) + 0x60))(*(long **)(param_1 + 0x118),0);
  puVar7 = *(undefined8 **)(param_1 + 0x118);
  if (puVar7 != (undefined8 *)0x0) {
    (**(code **)*puVar7)(puVar7);
    (**(code **)(puVar3 + 0x30))(5,puVar7);
  }
  *(long *)(param_1 + 0x118) = *(long *)(param_1 + 0x120);
  lVar6 = *(long *)(*(long *)(param_1 + 0x120) + 0x18);
  *(undefined8 *)(param_1 + 0x120) = 0;
  lVar8 = 0;
  if (lVar6 != 0) {
    lVar8 = lVar6 + 0x18;
  }
  *(long *)(param_1 + 8) = lVar8;
  FUN_0350f720();
  *(undefined8 *)(param_1 + 0x110) = *(undefined8 *)(*(long *)(param_1 + 0x118) + 0x18);
  puVar1 = (uint *)(*(long *)(*(long *)(param_1 + 0x118) + 0x18) + 699);
  *puVar1 = *puVar1 & 0xfdffffff;
  return;
}


