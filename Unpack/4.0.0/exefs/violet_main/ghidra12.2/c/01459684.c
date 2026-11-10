/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01459684; name: FUN_01459684
 */


void FUN_01459684(long param_1,long *param_2,undefined4 param_3)

{
  byte bVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  void *__s;
  long *plVar8;
  long lVar9;
  void *local_98;
  void *local_88;
  uint uStack_64;
  
  plVar8 = *(long **)(param_1 + 0x440);
  plVar6 = *(long **)(param_1 + 0x448);
  if (plVar8 != plVar6) {
    do {
      if (*(char *)plVar8[8] == '\0') goto LAB_014596d8;
      plVar8 = plVar8 + 0xe;
    } while (plVar6 != plVar8);
    plVar8 = plVar6;
  }
LAB_014596d8:
  plVar6 = *(long **)(param_1 + 8);
  local_98 = (void *)0x0;
  local_88 = (void *)0x0;
  lVar7 = *(long *)(DAT_0485a0f0 + 0x38) - *(long *)(DAT_0485a0f0 + 0x30);
  if (lVar7 != 0) {
    lVar7 = lVar7 >> 4;
    if (0xcccccccccccccc < (ulong)(lVar7 * -0x5555555555555555)) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar9 = lVar7 * 0x55555555555555c0;
    local_98 = (void *)(**(code **)(*plVar6 + 0x10))(plVar6,lVar9,4);
    if (local_98 == (void *)0x0) {
      (**(code **)(*plVar6 + 0xe8))(plVar6);
    }
    local_88 = (void *)((long)local_98 + lVar7 * 0x55555555555555c0);
    __s = local_98;
    while( true ) {
      lVar9 = lVar9 + -0x140;
      if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar7 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar7 == 0) {
        memset(__s,0,0x140);
      }
      else {
        if (0xf < *(ulong *)(lVar7 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = plVar6;
        *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
        memset(__s,0,0x140);
        *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
      }
      if (lVar9 == 0) break;
      __s = (void *)((long)__s + 0x140);
    }
  }
  lVar7 = *plVar8;
  if (lVar7 != 0) {
    lVar9 = plVar8[2];
    plVar3 = (long *)plVar8[3];
    plVar8[1] = lVar7;
    uVar4 = (**(code **)(*plVar3 + 0xf8))(plVar3);
    if (((uVar4 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
      (**(code **)(*plVar3 + 0x18))(plVar3,lVar7,lVar9 - lVar7,4);
    }
    else {
      FUN_00c48fe8(plVar3,lVar7,lVar9 - lVar7,4);
    }
    plVar8[1] = 0;
    plVar8[2] = 0;
    *plVar8 = 0;
  }
  plVar8[5] = 0;
  plVar8[6] = (ulong)uStack_64 << 0x20;
  plVar8[3] = (long)plVar6;
  plVar8[4] = 0xcccccccccccccc;
  *plVar8 = (long)local_98;
  plVar8[1] = (long)local_88;
  plVar8[2] = (long)local_88;
  plVar8[7] = *param_2;
  plVar8[8] = param_2[1];
  plVar8[9] = param_2[2];
  plVar6 = (long *)param_2[3];
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  plVar3 = (long *)plVar8[10];
  plVar8[10] = (long)plVar6;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x20))();
  }
  *(undefined4 *)(plVar8 + 0xb) = param_3;
  (**(code **)(*(long *)plVar8[0xc] + 0x70))((long *)plVar8[0xc],0);
  bVar1 = (**(code **)(*DAT_0485a020 + 0x48))(DAT_0485a020,param_3);
  *(byte *)((long)plVar8 + 0x6c) = bVar1 & 1;
  return;
}


