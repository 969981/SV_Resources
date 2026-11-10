/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0289a338; name: FUN_0289a338
 */


void FUN_0289a338(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,void *param_4,
                 long param_5,undefined8 *param_6)

{
  size_t __n;
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  void *__src;
  long *plVar6;
  undefined8 uVar7;
  undefined8 *local_78;
  undefined8 *puStack_70;
  undefined8 local_68;
  
  __src = (void *)param_1[4];
  puVar5 = param_2;
  local_78 = param_2;
  puStack_70 = param_1;
  local_68 = param_3;
  if (__src != (void *)0x0 && __src != param_4) {
    memmove(param_2,__src,(long)param_4 - (long)__src);
    puVar5 = (undefined8 *)((long)param_2 + ((long)param_4 - (long)__src));
  }
  uVar7 = *param_1;
  if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar2 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar2 == 0) {
    *puVar5 = *param_6;
  }
  else {
    if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = uVar7;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
    *puVar5 = *param_6;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  }
  puVar5 = puVar5 + param_5;
  if (__src != (void *)0x0) {
    __n = (long)__src + (param_1[5] * 8 - (long)param_4);
    if (__n != 0) {
      memmove(puVar5,param_4,__n);
      puVar5 = (undefined8 *)((long)puVar5 + __n);
    }
    lVar2 = param_1[6];
    plVar6 = (long *)*param_1;
    uVar7 = param_1[4];
    uVar3 = (**(code **)(*plVar6 + 0xf8))(plVar6);
    if (((uVar3 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar6 + 0x18))(plVar6,uVar7,lVar2 << 3,8);
    }
    else {
      FUN_00c48fe8(plVar6,uVar7,lVar2 << 3,8);
    }
  }
  param_1[4] = param_2;
  param_1[5] = (long)puVar5 - (long)param_2 >> 3;
  param_1[6] = param_3;
  local_78 = (undefined8 *)0x0;
  FUN_0175a8f8(&local_78);
  return;
}


