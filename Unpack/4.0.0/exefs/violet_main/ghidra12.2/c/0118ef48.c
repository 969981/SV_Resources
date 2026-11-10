/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0118ef48; name: FUN_0118ef48
 */


void FUN_0118ef48(long param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined1 local_80 [8];
  undefined8 *local_78;
  long *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 auStack_58 [24];
  
  local_80[0] = 1;
  puVar5 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x10,8);
  if (puVar5 == (undefined8 *)0x0) {
    local_60 = 0;
    local_68 = 0;
    param_2 = (long *)0x0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar6 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    *puVar5 = &PTR_FUN_04607348;
    FUN_00daf940(puVar5 + 1,param_3);
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    local_68 = 0x10;
    local_60 = 8;
  }
  local_78 = puVar5;
  local_70 = param_2;
  FUN_0118f120(param_1 + 8,local_80);
  puVar5 = local_78;
  local_78 = (undefined8 *)0x0;
  if (puVar5 == (undefined8 *)0x0) {
    return;
  }
  FUN_00c4e5a0(auStack_58,0);
  (**(code **)*puVar5)(puVar5);
  uVar3 = local_60;
  uVar2 = local_68;
  plVar1 = local_70;
  uVar7 = (**(code **)(*local_70 + 0xf8))(local_70);
  if (((uVar7 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
    (**(code **)(*plVar1 + 0x18))(plVar1,puVar5,uVar2,uVar3);
  }
  else {
    FUN_00c48fe8(plVar1,puVar5,uVar2,uVar3);
  }
  FUN_00c4e70c(auStack_58);
  return;
}


