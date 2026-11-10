/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01321f1c; name: FUN_01321f1c
 */


void FUN_01321f1c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined8 param_5
                 ,long param_6)

{
  char *__s;
  uint *puVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  byte *pbVar7;
  long *plVar8;
  int *piVar9;
  int *piVar10;
  uint uVar11;
  long lVar12;
  long *plVar13;
  uint *puVar14;
  undefined8 uVar15;
  int *local_98;
  int *local_90;
  int *local_88;
  int *local_80;
  long *local_78;
  long local_70;
  long local_68;
  
  lVar4 = *(long *)(param_3 + 0x88);
  if (lVar4 == 0) {
    if ((*(long *)(param_3 + 0x50) != 0) &&
       ((*(byte *)(*(long *)(param_3 + 0x50) + 0x1e8) & 1) != 0)) {
      piVar9 = (int *)FUN_029dae08(*(undefined8 *)(param_3 + 0x50));
      goto LAB_01321f64;
    }
  }
  else if ((((*(long *)(lVar4 + 0x88) != 0) &&
            ((*(byte *)(*(long *)(lVar4 + 0x88) + 0x1e8) & 1) != 0)) &&
           (*(long *)(lVar4 + 0x88) != 0)) &&
          ((*(byte *)(*(long *)(lVar4 + 0x88) + 0x1e8) & 1) != 0)) {
    puVar14 = (uint *)(**(code **)(**(long **)(lVar4 + 0x88) + 0x70))();
    piVar9 = (int *)((long)puVar14 + (ulong)*puVar14);
    goto LAB_01321f64;
  }
  piVar9 = (int *)0x0;
LAB_01321f64:
  plVar8 = (long *)(param_1 + 0x20);
  lVar4 = *plVar8;
  lVar12 = *(long *)(param_1 + 0x28);
  if (lVar12 != lVar4) {
    if (*(long **)(lVar12 + -0x18) != (long *)0x0) {
      (**(code **)(**(long **)(lVar12 + -0x18) + 0x20))();
    }
    if (lVar12 + -0x38 != lVar4) {
      do {
        if (*(long **)(lVar12 + -0x50) != (long *)0x0) {
          (**(code **)(**(long **)(lVar12 + -0x50) + 0x20))();
        }
        lVar12 = lVar12 + -0x38;
      } while (lVar4 + 0x38 != lVar12);
    }
  }
  *(long *)(param_1 + 0x28) = lVar4;
  if (piVar9 != (int *)0x0) {
    if ((*(ushort *)((long)piVar9 - (long)*piVar9) < 5) ||
       (uVar5 = (ulong)((ushort *)((long)piVar9 - (long)*piVar9))[2], uVar5 == 0)) {
      puVar14 = (uint *)0x0;
    }
    else {
      puVar14 = (uint *)((long)piVar9 + uVar5);
      puVar14 = (uint *)((long)puVar14 + (ulong)*puVar14);
    }
    lVar12 = *(long *)(param_1 + 0x20);
    uVar11 = *puVar14;
    uVar5 = (ulong)uVar11;
    if ((ulong)((*(long *)(param_1 + 0x30) - lVar12 >> 3) * 0x6db6db6db6db6db7) < uVar5) {
      local_80 = (int *)0x0;
      local_78 = (undefined8 *)(param_1 + 0x38);
      local_98 = (int *)(**(code **)(**(long **)(param_1 + 0x38) + 0x10))
                                  (*(long **)(param_1 + 0x38),uVar5 * 0x38,8);
      if (local_98 == (int *)0x0) {
        (**(code **)(**(long **)(param_1 + 0x38) + 0xe8))();
      }
      local_90 = local_98 + (lVar4 - lVar12 >> 3) * 2;
      local_80 = local_98 + uVar5 * 0xe;
      local_88 = local_90;
      FUN_013223fc(plVar8,&local_98);
      piVar9 = local_90;
      if (local_88 != local_90) {
        piVar10 = local_88 + -0xe;
        plVar13 = (long *)(local_88 + -6);
        local_88 = piVar10;
        if ((long *)*plVar13 != (long *)0x0) {
          (**(code **)(*(long *)*plVar13 + 0x20))();
        }
        while (piVar10 != piVar9) {
          local_88 = piVar10 + -0xe;
          plVar13 = (long *)(piVar10 + -6);
          piVar10 = local_88;
          if ((long *)*plVar13 != (long *)0x0) {
            (**(code **)(*(long *)*plVar13 + 0x20))();
          }
        }
      }
      piVar9 = local_98;
      if (local_98 != (int *)0x0) {
        lVar4 = (long)local_80 - (long)local_98;
        plVar13 = (long *)*local_78;
        uVar5 = (**(code **)(*plVar13 + 0xf8))(plVar13);
        if (((uVar5 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
          (**(code **)(*plVar13 + 0x18))(plVar13,piVar9,lVar4,8);
        }
        else {
          FUN_00c48fe8(plVar13,piVar9,lVar4,8);
        }
      }
      uVar11 = *puVar14;
    }
    if (uVar11 != 0) {
      uVar5 = 0;
      do {
        local_98 = (int *)((long)(puVar14 + uVar5 + 1) + (ulong)puVar14[uVar5 + 1]);
        local_90 = (int *)&DAT_cbf29ce484222645;
        local_88 = (int *)&DAT_03c886bc;
        local_78 = (long *)0x0;
        local_70 = 0;
        local_80 = (int *)0x0;
        if ((*(ushort *)((long)local_98 - (long)*local_98) < 7) ||
           (uVar6 = (ulong)((ushort *)((long)local_98 - (long)*local_98))[3], uVar6 == 0)) {
          lVar4 = 0;
        }
        else {
          puVar1 = (uint *)((long)local_98 + uVar6);
          lVar4 = (long)puVar1 + (ulong)*puVar1;
        }
        __s = (char *)(lVar4 + 4);
        local_68 = param_6;
        local_80 = (int *)strlen(__s);
        bVar2 = *(byte *)(lVar4 + 4);
        local_90 = (int *)&DAT_cbf29ce484222645;
        if (bVar2 != 0) {
          local_90 = (int *)&DAT_cbf29ce484222645;
          pbVar7 = (byte *)(lVar4 + 5);
          do {
            local_90 = (int *)(((ulong)local_90 ^ (ulong)bVar2) * 0x100000001b3);
            bVar2 = *pbVar7;
            pbVar7 = pbVar7 + 1;
          } while (bVar2 != 0);
        }
        local_78 = (long *)0x0;
        plVar13 = *(long **)(param_1 + 0x28);
        local_88 = (int *)__s;
        if (plVar13 < *(long **)(param_1 + 0x30)) {
          uVar15 = *(undefined8 *)(param_1 + 0x38);
          if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar4 = nn::os::GetTlsValue(DAT_04865a30);
          if (lVar4 != 0) {
            if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            *(undefined8 *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = uVar15;
            *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
          }
          *plVar13 = (long)local_98;
          plVar13[1] = (long)local_90;
          plVar13[2] = (long)local_88;
          plVar13[3] = (long)local_80;
          plVar13[4] = (long)local_78;
          plVar13[5] = local_70;
          plVar13[6] = local_68;
          if (lVar4 != 0) {
            *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
          }
          *(long **)(param_1 + 0x28) = plVar13 + 7;
        }
        else {
          FUN_0132257c(plVar8,&local_98);
          if (local_78 != (long *)0x0) {
            (**(code **)(*local_78 + 0x20))();
          }
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < *puVar14);
    }
    *(undefined4 *)(param_1 + 0x58) = 0xbf800000;
    *(undefined1 *)(param_1 + 0x5c) = 0;
  }
  return;
}


