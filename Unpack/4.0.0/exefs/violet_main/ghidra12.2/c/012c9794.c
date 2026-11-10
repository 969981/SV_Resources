/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012c9794; name: FUN_012c9794
 */


/* WARNING: Removing unreachable block (ram,0x012c9a3c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_012c9794(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long *local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  PTR_FUN_045e9268 = &LAB_02c80ca0;
  iVar3 = (**(code **)(*param_2 + 0x18))(param_2);
  *(long *)(param_1 + 0x30) = (long)iVar3;
  puVar1 = PTR_DAT_047e24c8 + 0x10;
  lVar12 = 0;
  do {
    local_78 = *(long **)(param_1 + 8);
    iVar3 = (**(code **)(*param_2 + 0x18))();
    plVar11 = *(long **)(param_1 + 8);
    plVar5 = (long *)(**(code **)(*local_78 + 0x10))(local_78,0x40,8);
    if (plVar5 == (long *)0x0) {
      local_70 = 0;
      local_68 = 0;
      local_78 = (long *)0x0;
    }
    else {
      if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar6 = nn::os::GetTlsValue(DAT_04865a30);
      if (0xf < *(ulong *)(lVar6 + 0x80)) {
LAB_012c9ae0:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = local_78;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
      *plVar5 = (long)puVar1;
      plVar5[1] = 0;
      plVar5[2] = 0;
      plVar5[3] = 0;
      plVar5[6] = 0;
      *(undefined4 *)(plVar5 + 7) = 0;
      plVar5[4] = (long)plVar11;
      plVar5[5] = 0xfffffffffffffff;
      if (iVar3 != 0) {
        if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar10 = (long)iVar3 << 4;
        puVar7 = (undefined8 *)(**(code **)(*plVar11 + 0x10))(plVar11,lVar10,8);
        if (puVar7 == (undefined8 *)0x0) {
          (**(code **)(*(long *)plVar5[4] + 0xe8))();
        }
        puVar2 = puVar7 + (long)iVar3 * 2;
        plVar5[1] = (long)puVar7;
        plVar5[2] = (long)puVar7;
        plVar5[3] = (long)puVar2;
        do {
          lVar9 = plVar5[4];
          if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar8 = nn::os::GetTlsValue(DAT_04865a30);
          if (lVar8 == 0) {
            *puVar7 = 0;
            puVar7[1] = 0;
          }
          else {
            if (0xf < *(ulong *)(lVar8 + 0x80)) goto LAB_012c9ae0;
            *(long *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = lVar9;
            *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
            *puVar7 = 0;
            puVar7[1] = 0;
            *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
          }
          puVar7 = puVar7 + 2;
          lVar10 = lVar10 + -0x10;
        } while (lVar10 != 0);
        plVar5[2] = (long)puVar2;
      }
      local_70 = 0x40;
      local_68 = 8;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    }
    lVar6 = param_1 + lVar12 * 0x20;
    plVar11 = (long *)(lVar6 + 0x70);
    lVar10 = *plVar11;
    puVar7 = (undefined8 *)(lVar6 + 0x78);
    *plVar11 = (long)plVar5;
    if (lVar10 == 0) {
      *(undefined8 *)(lVar6 + 0x80) = local_70;
      *(undefined8 *)(lVar6 + 0x88) = local_68;
      *puVar7 = local_78;
    }
    else {
      FUN_028b1624(puVar7);
      *(undefined8 *)(lVar6 + 0x80) = local_70;
      *(undefined8 *)(lVar6 + 0x88) = local_68;
      *puVar7 = local_78;
    }
    lVar6 = lVar12 + 1;
    (&DAT_04865a50)[lVar12 * 2] = *plVar11;
    (&DAT_04865a58)[lVar12 * 2] = 0;
    lVar12 = lVar6;
    if (lVar6 == 0x3c) {
      iVar3 = (**(code **)(*param_2 + 0x18))();
      FUN_012c9ae8(param_1 + 0x38,(long)iVar3 * 0x3d);
      memset(*(void **)(param_1 + 0x38),0,
             *(long *)(param_1 + 0x40) - (long)*(void **)(param_1 + 0x38));
      return;
    }
  } while( true );
}


