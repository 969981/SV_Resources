/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00da6108; name: FUN_00da6108
 */


void FUN_00da6108(undefined1 *param_1,undefined8 param_2,undefined4 param_3,long param_4,
                 undefined4 param_5)

{
  char *__s;
  undefined4 uVar1;
  undefined *puVar2;
  int iVar3;
  size_t sVar4;
  void *pvVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  undefined8 uVar11;
  ulong local_a8;
  undefined1 auStack_a0 [40];
  long local_78;
  int local_70;
  uint local_6c;
  uint local_68;
  
  if (((*PTR_DAT_047d8c00 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_047d8c00), iVar3 != 0))
  {
    FUN_00100190(param_2,param_3,PTR_LAB_047d8d08,PTR_DAT_047d8c08,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8c00);
  }
  lVar7 = *(long *)PTR_DAT_047d8c08;
  *(long *)PTR_DAT_047d8c10 = lVar7;
  lVar7 = *(long *)(lVar7 + 0x70);
  if (lVar7 == 0) {
    *param_1 = 0;
  }
  else {
    FUN_00da6378(&local_78,param_2,param_3,lVar7,param_4 + 0x20,param_5,0x20,0);
    puVar2 = PTR_PTR_047d1a50;
    if ((local_70 != 0) && (local_68 != 0)) {
      local_a8 = 0;
      lVar7 = 0;
      do {
        pvVar5 = (void *)(local_78 + lVar7);
        memcpy(auStack_a0,pvVar5,0x28);
        uVar11 = *(undefined8 *)((long)pvVar5 + 0x28);
        uVar1 = *(undefined4 *)((long)pvVar5 + 0x30);
        __s = (char *)(*(ulong *)((long)pvVar5 + 0x38) & 0xfffffffffffffffe);
        uVar8 = 0;
        if (__s != (char *)0x0) {
          sVar4 = strlen(__s);
          sVar4 = (size_t)((int)sVar4 + 1);
          pvVar5 = (void *)(**(code **)(*(long *)puVar2 + 0x18))(puVar2,sVar4);
          memcpy(pvVar5,__s,sVar4);
          uVar8 = (ulong)pvVar5 | 1;
        }
        uVar6 = FUN_00daa390(param_4,uVar11);
        if ((uVar6 & 1) == 0) {
          memcpy(param_1 + 0x10,auStack_a0,0x28);
          *(undefined8 *)(param_1 + 0x38) = uVar11;
          *(undefined4 *)(param_1 + 0x40) = uVar1;
          *(ulong *)(param_1 + 0x48) = uVar8;
          *param_1 = 1;
          goto LAB_00da6188;
        }
        if ((uVar8 & 1) != 0) {
          (**(code **)(PTR_DAT_047d1a08 + 8))(0,uVar8 - 1,0);
        }
        local_a8 = local_a8 + 1;
        uVar9 = local_68;
        if (0x1f < local_68) {
          uVar9 = 0x20;
        }
        lVar7 = lVar7 + 0x40;
      } while (local_a8 < uVar9);
    }
    *param_1 = 0;
LAB_00da6188:
    puVar2 = PTR_DAT_047d1a08;
    if (local_70 != 0) {
      lVar7 = (long)local_70 << 6;
      lVar10 = local_78 + -8;
      do {
        uVar8 = *(ulong *)(lVar10 + lVar7);
        if ((uVar8 & 1) != 0) {
          (**(code **)(puVar2 + 8))(0,uVar8 - 1,0);
        }
        lVar7 = lVar7 + -0x40;
      } while (lVar7 != 0);
    }
    local_70 = 0;
    if ((-1 < (int)local_6c) && (local_78 != 0)) {
      (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
                (PTR_PTR_047d1a50,local_78,(ulong)local_6c << 6);
    }
  }
  return;
}


