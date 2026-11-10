/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01a8a044; name: FUN_01a8a044
 */


void FUN_01a8a044(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 local_28;
  
  puVar3 = *(undefined8 **)(param_1 + 0xf0);
  if ((ulong)((long)puVar3 - *(long *)(param_1 + 0xe8) >> 3) < 2) {
    local_28 = param_2;
    if (puVar3 < *(undefined8 **)(param_1 + 0xf8)) {
      uVar4 = *(undefined8 *)(param_1 + 0x100);
      if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar2 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar2 == 0) {
        *puVar3 = param_2;
      }
      else {
        if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = uVar4;
        *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
        *puVar3 = local_28;
        *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
      }
      *(undefined8 **)(param_1 + 0xf0) = puVar3 + 1;
    }
    else {
      FUN_01a8a160((long *)(param_1 + 0xe8),&local_28);
    }
  }
  return;
}


