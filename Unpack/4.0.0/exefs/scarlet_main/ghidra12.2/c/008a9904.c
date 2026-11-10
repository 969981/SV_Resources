/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008a9904; name: FUN_008a9904
 */


void FUN_008a9904(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  undefined8 *__s;
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  undefined8 *puVar13;
  byte local_68 [4];
  undefined4 local_64;
  
  puVar13 = param_1 + 2;
  __s = param_1 + 1;
  *param_1 = param_3;
  FUN_008afcd0(puVar13);
  FUN_008afcd0(param_1 + 4);
  FUN_008afcd0(param_1 + 0xc);
  *(undefined1 *)(param_1 + 0x45) = 0;
  param_1[0x44] = 0;
  param_1[0x43] = 0;
  bVar1 = *(byte *)(param_2 + 0x228) & 4;
  *(byte *)(param_1 + 0x45) = bVar1;
  bVar1 = *(byte *)(param_2 + 0x228) & 8 | bVar1;
  *(byte *)(param_1 + 0x45) = bVar1;
  *(byte *)(param_1 + 0x45) = *(byte *)(param_2 + 0x228) & 2 | bVar1;
  memset(__s,0,0x210);
  lVar7 = FUN_008a6694(*param_1,3);
  lVar8 = FUN_008a6694(*param_1,4);
  uVar9 = FUN_008983b0(param_6);
  if (lVar7 == 0) {
    if (lVar8 != 0) goto LAB_008a9bd0;
    iVar5 = *(int *)(param_1 + 0x44);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x10);
    *__s = *(undefined8 *)(param_2 + 8);
    param_1[2] = uVar2;
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    uVar3 = *(undefined8 *)(param_2 + 0x20);
    uVar4 = *(undefined8 *)(param_2 + 0x30);
    param_1[5] = *(undefined8 *)(param_2 + 0x28);
    param_1[6] = uVar4;
    param_1[3] = uVar2;
    param_1[4] = uVar3;
    uVar2 = *(undefined8 *)(param_2 + 0x38);
    uVar3 = *(undefined8 *)(param_2 + 0x40);
    uVar4 = *(undefined8 *)(param_2 + 0x50);
    param_1[9] = *(undefined8 *)(param_2 + 0x48);
    param_1[10] = uVar4;
    param_1[7] = uVar2;
    param_1[8] = uVar3;
    if ((*(byte *)(lVar7 + 0x14) & 1) != 0) {
      puVar10 = (undefined8 *)(**(code **)(**(long **)(param_2 + 0x28) + 0x48))();
      if (((*PTR_DAT_047d2240 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_047d2240), iVar5 != 0)) {
        if (((*PTR_DAT_047d2108 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_047d2108), iVar5 != 0)) {
          *(undefined8 *)PTR_DAT_047d2110 = 0;
          __cxa_guard_release(PTR_DAT_047d2108);
        }
        *(undefined **)PTR_DAT_047d2248 = PTR_DAT_047d2110;
        __cxa_guard_release(PTR_DAT_047d2240);
      }
      if (puVar10 != (undefined8 *)0x0) {
        for (plVar11 = (long *)(**(code **)*puVar10)(puVar10); plVar11 != (long *)0x0;
            plVar11 = (long *)*plVar11) {
          if (plVar11 == (long *)PTR_DAT_047d2248) goto LAB_008a9a68;
        }
        puVar10 = (undefined8 *)0x0;
      }
LAB_008a9a68:
      lVar12 = FUN_0089a180(uVar9,0,puVar10);
      FUN_008afd24(param_1 + 4,*(undefined8 *)(lVar12 + 8));
    }
    if ((*(uint *)(lVar7 + 0xc) & 1) == 0) {
      if ((*(uint *)(lVar7 + 0xc) >> 1 & 1) != 0) {
        puVar10 = (undefined8 *)(**(code **)(**(long **)(param_2 + 0x18) + 0x48))();
        if (((*PTR_DAT_047d2350 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_047d2350), iVar5 != 0)) {
          if (((*PTR_DAT_047d2108 & 1) == 0) &&
             (iVar5 = __cxa_guard_acquire(PTR_DAT_047d2108), iVar5 != 0)) {
            *(undefined8 *)PTR_DAT_047d2110 = 0;
            __cxa_guard_release(PTR_DAT_047d2108);
          }
          *(undefined **)PTR_DAT_047d2358 = PTR_DAT_047d2110;
          __cxa_guard_release(PTR_DAT_047d2350);
        }
        if (puVar10 != (undefined8 *)0x0) {
          for (plVar11 = (long *)(**(code **)*puVar10)(puVar10); plVar11 != (long *)0x0;
              plVar11 = (long *)*plVar11) {
            if (plVar11 == (long *)PTR_DAT_047d2358) goto LAB_008a9aec;
          }
          puVar10 = (undefined8 *)0x0;
        }
LAB_008a9aec:
        lVar12 = FUN_0089a314(uVar9,param_4,param_5,puVar10);
        FUN_008afd24(puVar13,*(undefined8 *)(lVar12 + 8));
        *(byte *)(param_1 + 0x45) = *(byte *)(param_1 + 0x45) | 1;
      }
      param_1[9] = 0;
      *(undefined1 *)((long)param_1 + 0x54) = 0;
    }
    else {
      local_68[0] = 0;
      puVar10 = (undefined8 *)(**(code **)(**(long **)(param_2 + 0x18) + 0x48))();
      if (((*PTR_DAT_047d2240 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_047d2240), iVar5 != 0)) {
        if (((*PTR_DAT_047d2108 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_047d2108), iVar5 != 0)) {
          *(undefined8 *)PTR_DAT_047d2110 = 0;
          __cxa_guard_release(PTR_DAT_047d2108);
        }
        *(undefined **)PTR_DAT_047d2248 = PTR_DAT_047d2110;
        __cxa_guard_release(PTR_DAT_047d2240);
      }
      if (puVar10 != (undefined8 *)0x0) {
        for (plVar11 = (long *)(**(code **)*puVar10)(puVar10); plVar11 != (long *)0x0;
            plVar11 = (long *)*plVar11) {
          if (plVar11 == (long *)PTR_DAT_047d2248) goto LAB_008a9b94;
        }
        puVar10 = (undefined8 *)0x0;
      }
LAB_008a9b94:
      lVar12 = FUN_0089a180(uVar9,local_68,puVar10);
      *(byte *)(param_1 + 0x45) = *(byte *)(param_1 + 0x45) & 0xfe | local_68[0];
      FUN_008afd24(puVar13,*(undefined8 *)(lVar12 + 8));
      param_1[9] = 0;
      *(undefined1 *)((long)param_1 + 0x54) = 0;
    }
    if (lVar8 != 0) {
LAB_008a9bd0:
      memcpy(param_1 + 0xb,(void *)(param_2 + 0x58),0x1c0);
      puVar13 = (undefined8 *)(**(code **)(**(long **)(param_2 + 0x68) + 0x48))();
      if (((*PTR_DAT_047d2240 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_047d2240), iVar5 != 0)) {
        if (((*PTR_DAT_047d2108 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_047d2108), iVar5 != 0)) {
          *(undefined8 *)PTR_DAT_047d2110 = 0;
          __cxa_guard_release(PTR_DAT_047d2108);
        }
        *(undefined **)PTR_DAT_047d2248 = PTR_DAT_047d2110;
        __cxa_guard_release(PTR_DAT_047d2240);
      }
      if (puVar13 != (undefined8 *)0x0) {
        for (plVar11 = (long *)(**(code **)*puVar13)(puVar13); plVar11 != (long *)0x0;
            plVar11 = (long *)*plVar11) {
          if (plVar11 == (long *)PTR_DAT_047d2248) goto LAB_008a9c38;
        }
        puVar13 = (undefined8 *)0x0;
      }
LAB_008a9c38:
      lVar12 = FUN_0089a180(uVar9,0,puVar13);
      FUN_008afd24(param_1 + 0xc,*(undefined8 *)(lVar12 + 8));
      param_1[0xe] = *(undefined8 *)(lVar12 + 0x20);
      param_1[0xf] = 0;
      param_1[0x10] = 0;
      param_1[0x11] = 0;
      param_1[0x12] = 0;
      *(undefined1 *)(param_1 + 0x13) = 0;
      FUN_008a9840(param_1,param_4,param_5,lVar7,lVar8);
      goto LAB_008a9ce0;
    }
    local_64 = 1;
    lVar7 = FUN_00899bd0(param_5,param_4,0x4b53414d,1,&local_64);
    param_1[0x43] = lVar7;
    iVar5 = FUN_008b4430(*(undefined8 *)(lVar7 + 0x38),0x4b53414d,1,&local_64);
    *(int *)(param_1 + 0x44) = iVar5;
  }
  lVar7 = *(long *)(param_1[0x43] + 0x30);
  iVar6 = FUN_008947b8();
  *(undefined4 *)((long)param_1 + 0x224) = *(undefined4 *)(lVar7 + (long)(iVar6 * iVar5) * 4);
LAB_008a9ce0:
  *__s = 0;
  param_1[0xb] = 0;
  return;
}


