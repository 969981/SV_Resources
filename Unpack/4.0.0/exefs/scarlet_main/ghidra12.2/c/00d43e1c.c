/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d43e1c; name: FUN_00d43e1c
 */


void FUN_00d43e1c(int *param_1,long param_2,undefined8 param_3)

{
  uint *puVar1;
  uint uVar2;
  ushort uVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  ushort *puVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  void *pvVar12;
  ulong local_70;
  ulong local_68;
  void *local_60;
  undefined8 local_58;
  
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
        local_70 = CONCAT71(local_70._1_7_,(char)(uVar2 << 1));
        pvVar12 = (void *)((ulong)&local_70 | 1);
        if (uVar2 != 0) goto LAB_00d43e8c;
      }
      else {
        uVar11 = uVar10 + 0x10 & 0x1fffffff0;
        lVar9 = tpidr_el0;
        plVar5 = *(long **)(lVar9 + 0x30);
        if (plVar5 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar5 = DAT_04859430;
          *(long **)(lVar9 + 0x30) = DAT_04859430;
        }
        pvVar12 = (void *)(**(code **)(*plVar5 + 0x10))(plVar5,uVar11,8);
        local_70 = uVar11 | 1;
        local_68 = uVar10;
        local_60 = pvVar12;
LAB_00d43e8c:
        memcpy(pvVar12,puVar1 + 1,uVar10);
      }
      *(undefined1 *)((long)pvVar12 + uVar10) = 0;
      FUN_00d44104(&local_58,&local_70);
      plVar5 = *(long **)(param_2 + 8);
      *(undefined8 *)(param_2 + 8) = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x20))();
      }
      pvVar12 = local_60;
      *(undefined8 *)(param_2 + 8) = local_58;
      if (((local_70 & 1) != 0) && (local_60 != (void *)0x0)) {
        lVar9 = tpidr_el0;
        plVar5 = *(long **)(lVar9 + 0x30);
        if (plVar5 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar5 = DAT_04859430;
          *(long **)(lVar9 + 0x30) = DAT_04859430;
        }
        uVar10 = (**(code **)(*plVar5 + 0xf8))(plVar5);
        if (((uVar10 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
          (**(code **)(*plVar5 + 0x18))(plVar5,pvVar12,0,8);
        }
        else {
          FUN_00c48fe8(plVar5,pvVar12,0,8);
        }
      }
      lVar9 = (long)*param_1;
      uVar3 = *(ushort *)((long)param_1 - lVar9);
    }
    if (6 < uVar3) {
      uVar10 = (ulong)*(ushort *)((long)param_1 + (6 - lVar9));
      uVar7 = 0;
      if (uVar10 != 0) {
        uVar7 = *(undefined1 *)((long)param_1 + uVar10);
      }
      goto LAB_00d43ef0;
    }
  }
  uVar7 = 0;
LAB_00d43ef0:
  *(undefined1 *)(param_2 + 0x10) = uVar7;
  puVar8 = (ushort *)((long)param_1 - (long)*param_1);
  if ((8 < *puVar8) && ((ulong)puVar8[4] != 0)) {
    puVar1 = (uint *)((long)param_1 + (ulong)puVar8[4]);
    if ((ulong)puVar8[3] == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined1 *)((long)param_1 + (ulong)puVar8[3]);
    }
    uVar6 = FUN_00d4324c((long)puVar1 + (ulong)*puVar1,uVar7,param_3);
    *(undefined8 *)(param_2 + 0x18) = uVar6;
  }
  return;
}


