/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01091414; name: FUN_01091414
 */


void FUN_01091414(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5)

{
  char *__s;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  size_t sVar6;
  void *__dest;
  long lVar7;
  ulong uVar8;
  undefined1 *__src;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_1060 [32];
  float afStack_1040 [2];
  undefined8 local_1038;
  undefined8 local_ff8;
  undefined8 auStack_fb8 [235];
  undefined1 auStack_860 [32];
  float afStack_840 [2];
  undefined8 local_838;
  undefined8 local_7f8;
  undefined8 auStack_7b8 [235];
  
  if (((*PTR_DAT_047d8c00 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d8c00), iVar4 != 0))
  {
    FUN_00100190(PTR_LAB_047d8d08,PTR_DAT_047d8c08,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8c00);
  }
  lVar7 = *(long *)PTR_DAT_047d8c08;
  *(long *)PTR_DAT_047d8c10 = lVar7;
  lVar7 = *(long *)(lVar7 + 0x70);
  if (lVar7 == 0) {
    *param_1 = 0;
    return;
  }
  memset(auStack_860,0,0x800);
  memset(auStack_1060,0,0x800);
  uVar1 = FUN_01091754(param_2,param_3,lVar7,param_5,auStack_860,0x20,0,&DAT_03d5ef8e);
  uVar10 = (ulong)uVar1;
  uVar2 = FUN_01091754(param_2,param_3,lVar7,param_5,auStack_1060,0x20,0,&DAT_03d5ef91);
  uVar9 = (ulong)uVar2;
  uVar8 = uVar10;
  if (0x1f < uVar1) {
    uVar8 = 0x20;
  }
  if (uVar8 == 0) {
    if (0x1f < uVar2) {
      uVar9 = 0x20;
    }
    if (uVar9 != 0) {
      uVar1 = 0;
      goto LAB_010915d8;
    }
  }
  else {
    uVar1 = FUN_00daa390(param_4,local_838);
    uVar1 = ~uVar1 & 1;
    if (uVar8 == 1) {
      uVar10 = 0;
    }
    else {
      uVar3 = FUN_00daa390(param_4,local_7f8);
      if ((uVar3 & 1) == 0) {
        uVar1 = 1;
      }
      uVar10 = (ulong)~uVar3 & 1;
      if (uVar8 != 2) {
        uVar12 = 2;
        puVar11 = auStack_7b8;
        do {
          uVar5 = FUN_00daa390(param_4,*puVar11);
          if ((uVar5 & 1) == 0) {
            uVar1 = 1;
            uVar10 = uVar12;
          }
          uVar12 = uVar12 + 1;
          puVar11 = puVar11 + 8;
        } while (uVar8 != uVar12);
      }
    }
    if (0x1f < uVar2) {
      uVar9 = 0x20;
    }
    if (uVar9 != 0) {
LAB_010915d8:
      uVar2 = FUN_00daa390(param_4,local_1038);
      uVar2 = ~uVar2 & 1;
      if (uVar9 == 1) {
        uVar8 = 0;
      }
      else {
        uVar3 = FUN_00daa390(param_4,local_ff8);
        if ((uVar3 & 1) == 0) {
          uVar2 = 1;
        }
        uVar8 = (ulong)~uVar3 & 1;
        if (uVar9 != 2) {
          uVar12 = 2;
          puVar11 = auStack_fb8;
          do {
            uVar5 = FUN_00daa390(param_4,*puVar11);
            if ((uVar5 & 1) == 0) {
              uVar2 = 1;
              uVar8 = uVar12;
            }
            uVar12 = uVar12 + 1;
            puVar11 = puVar11 + 8;
          } while (uVar9 != uVar12);
        }
      }
      if (uVar1 == 0) {
        if (uVar2 == 0) goto LAB_010915a0;
        __src = auStack_1060 + uVar8 * 0x40;
        *param_1 = 0;
      }
      else {
        if (uVar2 == 0) goto LAB_010915a0;
        fVar13 = afStack_840[uVar10 * 0x10];
        __src = auStack_1060 + uVar8 * 0x40;
        fVar14 = afStack_1040[uVar8 * 0x10];
        *param_1 = 0;
        if (fVar13 <= fVar14) goto LAB_010915a4;
      }
      memcpy(param_1 + 0x10,__src,0x34);
      __s = (char *)(*(ulong *)(__src + 0x38) & 0xfffffffffffffffe);
      *(undefined8 *)(param_1 + 0x48) = 0;
      if (__s != (char *)0x0) {
        sVar6 = strlen(__s);
        sVar6 = (size_t)((int)sVar6 + 1);
        __dest = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,sVar6);
        memcpy(__dest,__s,sVar6);
        *(ulong *)(param_1 + 0x48) = (ulong)__dest | 1;
      }
      *param_1 = 1;
      goto LAB_010915a4;
    }
  }
LAB_010915a0:
  *param_1 = 0;
LAB_010915a4:
  FUN_01091980(auStack_1060);
  FUN_01091980(auStack_860);
  return;
}


