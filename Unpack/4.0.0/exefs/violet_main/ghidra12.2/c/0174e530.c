/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0174e530; name: FUN_0174e530
 */


void FUN_0174e530(undefined8 *param_1,long *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  
  puVar2 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x110,0x10);
  if (puVar2 == (undefined8 *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar3 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_2;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
    *puVar2 = &PTR_LAB_04599178;
    *(undefined1 *)(puVar2 + 1) = 0;
    puVar2[2] = 0;
    puVar2[3] = &DAT_cbf29ce484222645;
    puVar2[0x18] = 0;
    puVar2[6] = 0;
    puVar2[7] = &DAT_cbf29ce484222645;
    *(undefined1 *)(puVar2 + 0x19) = 0;
    puVar2[10] = 0;
    puVar2[0xb] = &DAT_cbf29ce484222645;
    puVar2[4] = &DAT_03c886bc;
    puVar2[5] = 0;
    puVar2[8] = &DAT_03c886bc;
    puVar2[9] = 0;
    puVar2[0xc] = &DAT_03c886bc;
    puVar2[0xd] = 0;
    puVar2[0x10] = &DAT_03c886bc;
    puVar2[0x11] = 0;
    puVar2[0x14] = &DAT_03c886bc;
    puVar2[0x15] = 0;
    *(undefined1 *)((long)puVar2 + 0x104) = 1;
    puVar2[0xe] = 0;
    puVar2[0xf] = &DAT_cbf29ce484222645;
    puVar2[0x12] = 0;
    puVar2[0x13] = &DAT_cbf29ce484222645;
    puVar2[0x16] = 0;
    puVar2[0x17] = 0;
    *param_1 = puVar2;
    param_1[1] = param_2;
    param_1[2] = 0x110;
    param_1[3] = 0x10;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  }
  return;
}


