/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c3e41c; name: FUN_00c3e41c
 */


undefined8 FUN_00c3e41c(long param_1,undefined8 param_2,long *param_3,ulong param_4)

{
  int iVar1;
  undefined8 *puVar2;
  void *__dest;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  void *__src;
  undefined8 *puVar13;
  size_t __n;
  long lVar14;
  string local_a8 [16];
  long local_98;
  string local_90 [16];
  long local_80;
  ulong local_78;
  undefined8 local_70;
  long local_68;
  
  lVar14 = *(long *)(param_1 + 0x10);
  plVar11 = param_3;
  if (lVar14 != 0) {
    lVar5 = tpidr_el0;
    plVar7 = *(long **)(lVar5 + 0x30);
    lVar6 = lVar5;
    if (plVar7 == (long *)0x0) {
      if ((DAT_04859438 & 1) == 0) goto LAB_00c3ea04;
      goto LAB_00c3e8dc;
    }
    do {
      puVar2 = (undefined8 *)(**(code **)(*plVar7 + 0x10))(plVar7,0x30,8);
      puVar2[1] = 0;
      *puVar2 = puVar2 + 1;
      puVar2[5] = 0;
      puVar2[4] = 0;
      puVar2[2] = 0;
      puVar2[3] = puVar2 + 4;
      puVar12 = (undefined8 *)(lVar14 + 0x20);
      puVar13 = (undefined8 *)*puVar12;
      if (puVar13 != (undefined8 *)0x0) {
        puVar12 = (undefined8 *)(lVar14 + 0x20);
        do {
          uVar8 = puVar13[4];
          if (param_4 <= uVar8 && uVar8 != param_4) {
            puVar9 = (undefined8 *)*puVar13;
            puVar12 = puVar13;
            if (puVar9 == (undefined8 *)0x0) {
              goto LAB_00c3e4f8;
            }
          }
          else {
            if (param_4 <= uVar8) goto LAB_00c3e4f8;
            puVar12 = puVar13 + 1;
            puVar9 = (undefined8 *)*puVar12;
            if (puVar9 == (undefined8 *)0x0) goto LAB_00c3e4f8;
          }
          puVar13 = puVar9;
        } while( true );
      }
      puVar13 = puVar12;
LAB_00c3e4f8:
      puVar9 = (undefined8 *)*puVar12;
      if (puVar9 == (undefined8 *)0x0) {
        plVar7 = *(long **)(lVar6 + 0x30);
        if (plVar7 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar7 = DAT_04859430;
          *(long **)(lVar6 + 0x30) = DAT_04859430;
        }
        puVar9 = (undefined8 *)(**(code **)(*plVar7 + 0x10))(plVar7,0x40,8);
        puVar9[4] = param_4;
        puVar9[5] = 0;
        puVar9[2] = puVar13;
        puVar9[6] = 0;
        puVar9[7] = 0;
        *puVar9 = 0;
        puVar9[1] = 0;
        *puVar12 = puVar9;
        if (**(long **)(lVar14 + 0x18) == 0) {
          puVar12 = puVar9;
        }
        else {
          *(long *)(lVar14 + 0x18) = **(long **)(lVar14 + 0x18);
          puVar12 = (undefined8 *)*puVar12;
        }
        FUN_010108e0(*(undefined8 *)(lVar14 + 0x20),puVar12);
        *(long *)(lVar14 + 0x28) = *(long *)(lVar14 + 0x28) + 1;
      }
      puVar12 = (undefined8 *)puVar9[6];
      if (puVar12 != (undefined8 *)puVar9[7]) {
        *puVar12 = puVar2;
        puVar9[6] = puVar12 + 1;
        goto LAB_00c3e6a4;
      }
      __src = (void *)puVar9[5];
      __n = (long)puVar12 - (long)__src;
      lVar5 = (long)__n >> 3;
      param_3 = (long *)(lVar5 + 1);
      if ((ulong)param_3 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar10 = (long)puVar9[7] - (long)__src;
      plVar7 = (long *)(lVar10 >> 2);
      if (param_3 <= plVar7) {
        param_3 = plVar7;
      }
      if (0xffffffffffffffe < (ulong)(lVar10 >> 3)) {
        param_3 = (long *)&DAT_1fffffffffffffff;
      }
      if (param_3 == (long *)0x0) {
        __dest = (void *)0x0;
        goto LAB_00c3e624;
      }
      if ((ulong)param_3 >> 0x3d == 0) goto code_r0x00c3e5e0;
      FUN_00c40590();
LAB_00c3ea04:
      iVar1 = __cxa_guard_acquire(&DAT_04859438);
      if (iVar1 != 0) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
LAB_00c3e8dc:
      plVar7 = DAT_04859430;
      *(long **)(lVar5 + 0x30) = DAT_04859430;
      plVar11 = param_3;
      lVar6 = lVar5;
    } while( true );
  }
LAB_00c3e6a8:
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  uVar8 = FUN_00c4059c(param_1,&local_78);
  if ((uVar8 & 1) != 0) {
    if (*(int *)(param_4 + 0x40) == 3) {
      uVar3 = (**(code **)(*plVar11 + 600))(plVar11,param_2,param_4,0);
      std::string::string(local_90,(string *)&local_78);
      uVar8 = FUN_00c40774(param_1,uVar3,local_90);
      lVar5 = local_80;
      local_a8[0] = local_90[0];
    }
    else {
      uVar3 = (**(code **)(*plVar11 + 0x138))(plVar11,param_2,param_4,0);
      std::string::string(local_a8,(string *)&local_78);
      uVar8 = FUN_00c40774(param_1,uVar3,local_a8);
      lVar5 = local_98;
    }
    if ((((byte)local_a8[0] & 1) != 0) && (lVar5 != 0)) {
      lVar6 = tpidr_el0;
      plVar11 = *(long **)(lVar6 + 0x30);
      if (plVar11 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar11 = DAT_04859430;
        *(long **)(lVar6 + 0x30) = DAT_04859430;
      }
      uVar4 = (**(code **)(*plVar11 + 0xf8))(plVar11);
      if (((uVar4 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
        (**(code **)(*plVar11 + 0x18))(plVar11,lVar5,0,8);
      }
      else {
        FUN_00c48fe8(plVar11,lVar5,0,8);
      }
    }
    if ((uVar8 & 1) != 0) {
      *(long *)(param_1 + 0x10) = lVar14;
      uVar3 = 1;
      goto LAB_00c3e778;
    }
  }
  uVar3 = 0;
LAB_00c3e778:
  lVar14 = local_68;
  if (((local_78 & 1) != 0) && (local_68 != 0)) {
    lVar5 = tpidr_el0;
    plVar11 = *(long **)(lVar5 + 0x30);
    if (plVar11 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar11 = DAT_04859430;
      *(long **)(lVar5 + 0x30) = DAT_04859430;
    }
    uVar8 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar8 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,lVar14,0,8);
    }
    else {
      FUN_00c48fe8(plVar11,lVar14,0,8);
    }
  }
  return uVar3;
code_r0x00c3e5e0:
  plVar7 = *(long **)(lVar6 + 0x30);
  if (plVar7 == (long *)0x0) {
    if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    plVar7 = DAT_04859430;
    *(long **)(lVar6 + 0x30) = DAT_04859430;
  }
  __dest = (void *)(**(code **)(*plVar7 + 0x10))(plVar7,(long)param_3 << 3,8);
LAB_00c3e624:
  puVar12 = (undefined8 *)((long)__dest + lVar5 * 8);
  *puVar12 = puVar2;
  if (0 < (long)__n) {
    memcpy(__dest,__src,__n);
  }
  puVar9[5] = __dest;
  puVar9[6] = puVar12 + 1;
  puVar9[7] = (void *)((long)__dest + (long)param_3 * 8);
  if (__src != (void *)0x0) {
    plVar7 = *(long **)(lVar6 + 0x30);
    if (plVar7 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar7 = DAT_04859430;
      *(long **)(lVar6 + 0x30) = DAT_04859430;
    }
    uVar8 = (**(code **)(*plVar7 + 0xf8))(plVar7);
    if (((uVar8 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
      (**(code **)(*plVar7 + 0x18))(plVar7,__src,0,8);
    }
    else {
      FUN_00c48fe8(plVar7,__src,0,8);
    }
  }
LAB_00c3e6a4:
  *(undefined8 **)(param_1 + 0x10) = puVar2;
  goto LAB_00c3e6a8;
}


