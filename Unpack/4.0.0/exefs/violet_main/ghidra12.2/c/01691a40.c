/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01691a40; name: FUN_01691a40
 */


void FUN_01691a40(undefined8 *param_1,long *param_2,undefined1 *param_3)

{
  int iVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar2 = (undefined1 *)(**(code **)(*param_2 + 0x10))(param_2,0x40,0x10);
  if (puVar2 == (undefined1 *)0x0) {
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
    *puVar2 = *param_3;
    *(undefined8 *)(puVar2 + 8) = *(undefined8 *)(param_3 + 8);
    *(undefined8 *)(puVar2 + 0x10) = *(undefined8 *)(param_3 + 0x10);
    *(undefined8 *)(puVar2 + 0x18) = *(undefined8 *)(param_3 + 0x18);
    uVar4 = *(undefined8 *)(param_3 + 0x20);
    *(undefined8 *)(param_3 + 0x20) = 0;
    *(undefined8 *)(puVar2 + 0x20) = uVar4;
    *(undefined8 *)(puVar2 + 0x38) = *(undefined8 *)(param_3 + 0x38);
    *(undefined8 *)(puVar2 + 0x30) = *(undefined8 *)(param_3 + 0x30);
    *param_1 = puVar2;
    param_1[1] = param_2;
    param_1[2] = 0x40;
    param_1[3] = 0x10;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  }
  return;
}


