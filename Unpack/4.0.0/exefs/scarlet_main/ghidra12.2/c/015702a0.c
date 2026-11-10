/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015702a0; name: FUN_015702a0
 */


void FUN_015702a0(undefined8 *param_1,long param_2,long param_3,long param_4)

{
  byte bVar1;
  void *__src;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  void *__dest;
  long lVar5;
  byte *pbVar6;
  void *pvVar7;
  long *plVar8;
  ulong uVar9;
  long local_b0;
  ulong local_a8;
  long *local_a0;
  char local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  void *local_78;
  void *local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined2 local_50;
  long local_48;
  
  if (*(long *)(param_2 + 0x10) == 0) {
    *param_1 = 0;
    return;
  }
  local_a0 = (long *)0x0;
  local_90 = 0x400;
  uStack_88 = 8;
  local_98 = '\0';
  local_48 = 0;
  local_50 = 0x101;
  local_b0 = 0;
  local_a8 = (local_a8 >> 0x10 & 0xffff) << 0x10;
  local_80 = 0;
  local_78 = (void *)0x0;
  local_70 = (void *)0x0;
  uStack_68 = 0;
  local_60 = 0;
  uStack_58 = 1;
  if (param_3 != 0) {
    pbVar6 = (byte *)(param_3 + param_4 + -2);
    bVar1 = *pbVar6;
    uVar9 = (ulong)*(byte *)(param_3 + param_4 + -1);
    local_b0 = (long)pbVar6 - uVar9;
    local_a8 = (ulong)(bVar1 >> 2) << 0x20 |
               uVar9 | ((ulong)(uint)(1 << ((ulong)bVar1 & 3)) & 0xff) << 8;
  }
  uVar4 = FUN_015704e0(&local_a0,*(long *)(param_2 + 0x10),&local_b0);
  FUN_01692868(&local_a0,uVar4,0,0);
  __src = local_70;
  pvVar7 = local_78;
  uVar9 = (ulong)(uint)(((int)local_80 - (int)local_70) + (int)local_78);
  __dest = operator_new__(uVar9);
  memcpy(__dest,__src,uVar9);
  lVar2 = local_48;
  *param_1 = __dest;
  if (local_48 != 0) {
    FUN_01f2d540(local_48,*(undefined8 *)(local_48 + 8));
    lVar5 = tpidr_el0;
    plVar8 = *(long **)(lVar5 + 0x30);
    if (plVar8 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar8 = DAT_04859430;
      *(long **)(lVar5 + 0x30) = DAT_04859430;
    }
    uVar9 = (**(code **)(*plVar8 + 0xf8))(plVar8);
    if (((uVar9 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
      (**(code **)(*plVar8 + 0x18))(plVar8,lVar2,0,8);
    }
    else {
      FUN_00c48fe8(plVar8,lVar2,0,8);
    }
    pvVar7 = local_78;
  }
  if (pvVar7 != (void *)0x0) {
    if (local_a0 == (long *)0x0) {
      operator_delete__(pvVar7);
    }
    else {
      (**(code **)(*local_a0 + 0x18))(local_a0,pvVar7,local_80);
    }
  }
  local_78 = (void *)0x0;
  if ((local_98 != '\0') && (local_a0 != (long *)0x0)) {
    (**(code **)(*local_a0 + 8))();
  }
  return;
}


