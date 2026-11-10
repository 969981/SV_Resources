/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d92a80; name: FUN_00d92a80
 */


void FUN_00d92a80(long param_1,char *param_2,byte param_3)

{
  char cVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long *local_38;
  undefined8 local_30;
  char local_28;
  char local_27;
  
  if ((ulong)*(uint *)(param_2 + 4) <
      (ulong)((*(long *)(param_1 + 0xf8) - *(long *)(param_1 + 0xf0) >> 4) * -0x5555555555555555)) {
    lVar4 = *(long *)(param_1 + 0xf0) + (ulong)*(uint *)(param_2 + 4) * 0x30;
    cVar1 = *(char *)(lVar4 + 0x28);
    *(byte *)(lVar4 + 0x28) = param_3 & 1;
    uVar5 = (ulong)*(uint *)(param_2 + 4);
    lVar4 = *(long *)(param_1 + 0xf0);
    if (uVar5 < (ulong)((*(long *)(param_1 + 0xf8) - lVar4 >> 4) * -0x5555555555555555)) {
      cVar2 = *(char *)(lVar4 + uVar5 * 0x30 + 0x28);
      if ((*(long *)(param_1 + 0x2b8) != 0) && ((cVar1 != '\0') != (cVar2 != '\0'))) {
        if (*param_2 == '\0') {
          if (((*PTR_DAT_047d3e28 & 1) == 0) &&
             (iVar3 = __cxa_guard_acquire(PTR_DAT_047d3e28), puVar6 = (undefined8 *)PTR_DAT_047d3e30
             , iVar3 != 0)) {
            FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3e28);
          }
          else {
            puVar6 = (undefined8 *)PTR_DAT_047d3e30;
          }
        }
        else {
          puVar6 = (undefined8 *)(lVar4 + uVar5 * 0x30 + 8);
        }
        uVar8 = *(undefined8 *)param_2;
        local_50 = *puVar6;
        uStack_48 = puVar6[1];
        local_40 = puVar6[2];
        plVar7 = (long *)puVar6[3];
        local_38 = plVar7;
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 0x18))(plVar7);
        }
        plVar9 = *(long **)(param_1 + 0x290);
        local_30 = uVar8;
        local_28 = cVar1;
        local_27 = cVar2;
        if (plVar9 != (long *)0x0) {
          do {
            (*(code *)plVar9[6])(plVar9 + 10,&local_50);
            plVar9 = (long *)*plVar9;
          } while (plVar9 != (long *)0x0);
          plVar7 = local_38;
        }
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 0x20))(plVar7);
        }
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__vector_base_common<true>::__throw_out_of_range();
}


