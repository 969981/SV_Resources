/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01aa6d58; name: FUN_01aa6d58
 */


void FUN_01aa6d58(long param_1,long param_2)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar5 = *(long *)(param_1 + 8);
  lVar7 = lVar5;
  if (param_2 != 0) {
    lVar7 = lVar5 + param_2 * 0xc0;
    lVar6 = 0;
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
      puVar1 = (undefined8 *)(lVar5 + lVar6);
      puVar1[0x16] = 0;
      puVar1[0x17] = 0;
      puVar1[0x14] = 0;
      puVar1[0x15] = 0;
      *puVar1 = &DAT_cbf29ce484222645;
      puVar1[1] = &DAT_03c886bc;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = &DAT_cbf29ce484222645;
      puVar1[5] = &DAT_03c886bc;
      puVar1[6] = 0;
      puVar1[7] = 0;
      puVar1[8] = &DAT_cbf29ce484222645;
      puVar1[9] = &DAT_03c886bc;
      puVar1[10] = 0;
      puVar1[0xb] = 0;
      puVar1[0xc] = &DAT_cbf29ce484222645;
      puVar1[0xd] = &DAT_03c886bc;
      puVar1[0xe] = 0;
      puVar1[0xf] = 0;
      puVar1[0x10] = &DAT_cbf29ce484222645;
      puVar1[0x11] = &DAT_03c886bc;
      puVar1[0x12] = 0;
      puVar1[0x13] = 0;
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
      }
      lVar6 = lVar6 + 0xc0;
    } while (param_2 * 0xc0 != lVar6);
  }
  *(long *)(param_1 + 8) = lVar7;
  return;
}


