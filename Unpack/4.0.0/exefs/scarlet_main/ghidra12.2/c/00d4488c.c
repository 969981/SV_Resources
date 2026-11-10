/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d4488c; name: FUN_00d4488c
 */


undefined8 * FUN_00d4488c(int *param_1)

{
  uint *puVar1;
  uint uVar2;
  ushort uVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined4 uVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  void *pvVar12;
  ulong local_68;
  ulong local_60;
  void *local_58;
  undefined8 local_38;
  
  lVar6 = tpidr_el0;
  plVar8 = *(long **)(lVar6 + 0x30);
  if (plVar8 == (long *)0x0) {
    if (((DAT_04859438 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    plVar8 = DAT_04859430;
    *(long **)(lVar6 + 0x30) = DAT_04859430;
  }
  puVar5 = (undefined8 *)(**(code **)(*plVar8 + 0x10))(plVar8,0x18,8);
  *(undefined4 *)(puVar5 + 2) = 0;
  *puVar5 = &PTR_LAB_045a0398;
  puVar5[1] = 0;
  lVar9 = (long)*param_1;
  uVar3 = *(ushort *)((long)param_1 - lVar9);
  if (4 < uVar3) {
    uVar10 = (ulong)((ushort *)((long)param_1 - lVar9))[2];
    if (uVar10 != 0) {
      puVar1 = (uint *)((long)param_1 + uVar10);
      puVar1 = (uint *)((long)puVar1 + (ulong)*puVar1);
      uVar2 = *puVar1;
      uVar10 = (ulong)uVar2;
      if (uVar2 < 0x17) {
        local_68 = CONCAT71(local_68._1_7_,(char)(uVar2 << 1));
        pvVar12 = (void *)((ulong)&local_68 | 1);
        if (uVar2 != 0) goto LAB_00d4493c;
      }
      else {
        uVar11 = uVar10 + 0x10 & 0x1fffffff0;
        plVar8 = *(long **)(lVar6 + 0x30);
        if (plVar8 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar8 = DAT_04859430;
          *(long **)(lVar6 + 0x30) = DAT_04859430;
        }
        pvVar12 = (void *)(**(code **)(*plVar8 + 0x10))(plVar8,uVar11,8);
        local_68 = uVar11 | 1;
        local_60 = uVar10;
        local_58 = pvVar12;
LAB_00d4493c:
        memcpy(pvVar12,puVar1 + 1,uVar10);
      }
      *(undefined1 *)((long)pvVar12 + uVar10) = 0;
      FUN_00d44104(&local_38,&local_68);
      plVar8 = (long *)puVar5[1];
      puVar5[1] = 0;
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x20))();
      }
      pvVar12 = local_58;
      puVar5[1] = local_38;
      if (((local_68 & 1) != 0) && (local_58 != (void *)0x0)) {
        plVar8 = *(long **)(lVar6 + 0x30);
        if (plVar8 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar8 = DAT_04859430;
          *(long **)(lVar6 + 0x30) = DAT_04859430;
        }
        uVar10 = (**(code **)(*plVar8 + 0xf8))(plVar8);
        if (((uVar10 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
          (**(code **)(*plVar8 + 0x18))(plVar8,pvVar12,0,8);
        }
        else {
          FUN_00c48fe8(plVar8,pvVar12,0,8);
        }
      }
      lVar9 = (long)*param_1;
      uVar3 = *(ushort *)((long)param_1 - lVar9);
    }
    if (6 < uVar3) {
      uVar10 = (ulong)*(ushort *)((long)param_1 + (6 - lVar9));
      uVar7 = 0;
      if (uVar10 != 0) {
        uVar7 = *(undefined4 *)((long)param_1 + uVar10);
      }
      goto LAB_00d449a0;
    }
  }
  uVar7 = 0;
LAB_00d449a0:
  *(undefined4 *)(puVar5 + 2) = uVar7;
  return puVar5;
}


