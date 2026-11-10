/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ac6148; name: FUN_01ac6148
 */


void FUN_01ac6148(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  
  lVar2 = *(long *)(param_1 + 8);
  lVar4 = lVar2;
  if (param_2 != 0) {
    lVar4 = lVar2 + param_2 * 0x38;
    param_2 = param_2 * 0x38;
    puVar5 = (undefined8 *)(lVar2 + 0x10);
    do {
      uVar3 = *(undefined8 *)(param_1 + 0x18);
      if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar2 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar2 == 0) {
        puVar5[3] = 0;
        puVar5[4] = 0;
        puVar5[2] = 0;
        puVar5[-2] = 0;
        puVar5[-1] = &DAT_cbf29ce484222645;
        *puVar5 = &DAT_03c886bc;
        puVar5[1] = 0;
      }
      else {
        if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = uVar3;
        *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
        puVar5[2] = 0;
        puVar5[3] = 0;
        puVar5[4] = 0;
        puVar5[-2] = 0;
        puVar5[-1] = &DAT_cbf29ce484222645;
        *puVar5 = &DAT_03c886bc;
        puVar5[1] = 0;
        *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
      }
      param_2 = param_2 + -0x38;
      puVar5 = puVar5 + 7;
    } while (param_2 != 0);
  }
  *(long *)(param_1 + 8) = lVar4;
  return;
}


