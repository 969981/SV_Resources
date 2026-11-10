/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e3eef4; name: FUN_01e3eef4
 */


uint FUN_01e3eef4(long *param_1,uint param_2)

{
  bool bVar1;
  int iVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 *puVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  undefined1 *puVar9;
  void *__src;
  ulong uVar10;
  
  if (param_2 == 0xffffffff) {
    return 0;
  }
  puVar5 = (undefined1 *)param_1[6];
  if (puVar5 == (undefined1 *)0x0) {
    if ((*(byte *)((long)param_1 + 0x4c) >> 4 & 1) == 0) {
      return 0xffffffff;
    }
    __src = (void *)param_1[2];
    uVar10 = 0;
  }
  else {
    if (puVar5 < (undefined1 *)param_1[7]) {
      param_1[6] = (long)(puVar5 + 1);
      *puVar5 = (char)param_2;
      return param_2;
    }
    if ((*(byte *)((long)param_1 + 0x4c) >> 4 & 1) == 0) {
      return 0xffffffff;
    }
    __src = (void *)param_1[2];
    uVar10 = param_1[7] - (long)__src;
  }
  uVar6 = uVar10 >> 1;
  if (uVar6 < 0x101) {
    uVar6 = 0x100;
  }
  do {
    if (!CARRY8(uVar6,uVar10)) {
      uVar6 = uVar6 + uVar10;
      lVar4 = tpidr_el0;
      plVar7 = *(long **)(lVar4 + 0x30);
      if (plVar7 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar7 = DAT_04859430;
        *(long **)(lVar4 + 0x30) = DAT_04859430;
      }
      puVar5 = (undefined1 *)(**(code **)(*plVar7 + 0x10))(plVar7,uVar6,8);
      if (uVar10 == 0) {
        bVar1 = true;
        goto LAB_01e3ef8c;
      }
      goto LAB_01e3f130;
    }
    uVar6 = uVar6 >> 1;
  } while (uVar6 != 0);
  puVar5 = (undefined1 *)0x0;
  uVar6 = uVar10;
LAB_01e3f130:
  memcpy(puVar5,__src,uVar10);
  bVar1 = false;
LAB_01e3ef8c:
  if ((__src != (void *)0x0) && ((char)param_1[9] != '\0')) {
    lVar4 = tpidr_el0;
    plVar7 = *(long **)(lVar4 + 0x30);
    if (plVar7 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar7 = DAT_04859430;
      *(long **)(lVar4 + 0x30) = DAT_04859430;
    }
    uVar10 = (**(code **)(*plVar7 + 0xf8))(plVar7);
    if (((uVar10 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar7 + 0x18))(plVar7,__src,0,8);
    }
    else {
      FUN_00c48fe8(plVar7,__src,0,8);
    }
  }
  *(undefined1 *)(param_1 + 9) = 1;
  puVar9 = puVar5;
  if (bVar1) {
    param_1[5] = (long)puVar5;
    param_1[6] = (long)puVar5;
    param_1[7] = (long)(puVar5 + uVar6);
    param_1[8] = (long)puVar5;
    puVar3 = puVar5;
    if ((*(byte *)((long)param_1 + 0x4c) >> 3 & 1) == 0) {
      param_1[2] = (long)puVar5;
      param_1[3] = 0;
    }
    else {
      param_1[2] = (long)puVar5;
      param_1[3] = (long)puVar5;
      puVar9 = puVar5 + 1;
    }
  }
  else {
    lVar8 = param_1[5];
    lVar4 = param_1[2];
    param_1[5] = (long)(puVar5 + (lVar8 - (long)__src));
    puVar3 = puVar5 + (lVar8 - (long)__src) + ((int)param_1[6] - (int)lVar8);
    param_1[8] = (long)(puVar5 + (param_1[8] - (long)__src));
    param_1[6] = (long)puVar3;
    param_1[7] = (long)(puVar5 + uVar6);
    if ((*(byte *)((long)param_1 + 0x4c) >> 3 & 1) == 0) {
      param_1[2] = (long)puVar5;
      param_1[3] = 0;
    }
    else {
      puVar9 = puVar3 + 1;
      param_1[2] = (long)puVar5;
      param_1[3] = (long)(puVar5 + ((int)param_1[3] - (int)lVar4));
    }
  }
  param_1[4] = (long)puVar9;
  if (puVar3 == puVar5 + uVar6) {
    (**(code **)(*param_1 + 0x68))(param_1,param_2 & 0xff);
  }
  else {
    param_1[6] = (long)(puVar3 + 1);
    *puVar3 = (char)param_2;
  }
  return param_2;
}


