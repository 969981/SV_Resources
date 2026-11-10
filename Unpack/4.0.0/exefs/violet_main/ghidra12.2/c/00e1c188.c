/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e1c188; name: FUN_00e1c188
 */


void FUN_00e1c188(long param_1,long param_2)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  
  plVar5 = *(long **)(param_1 + 8);
  plVar6 = plVar5;
  if (param_2 != 0) {
    plVar6 = plVar5 + param_2 * 0xe;
    puVar1 = PTR_DAT_047e31e0 + 0x10;
    do {
      uVar4 = *(undefined8 *)(param_1 + 0x18);
      if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar3 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar3 != 0) {
        if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = uVar4;
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
      }
      *plVar5 = (long)puVar1;
      plVar5[1] = 0;
      plVar5[2] = 0;
      plVar5[3] = (long)&DAT_cbf29ce484222645;
      *(undefined4 *)(plVar5 + 2) = 0;
      plVar5[4] = (long)&DAT_03c886bc;
      plVar5[5] = 0;
      plVar5[6] = 0;
      plVar5[7] = (long)&DAT_cbf29ce484222645;
      plVar5[8] = (long)&DAT_03c886bc;
      plVar5[9] = 0;
      plVar5[10] = 0;
      plVar5[0xb] = 0;
      plVar5[0xc] = 0;
      plVar5[0xd] = 0;
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
      }
      plVar5 = plVar5 + 0xe;
    } while (plVar5 != plVar6);
  }
  *(long **)(param_1 + 8) = plVar6;
  return;
}


