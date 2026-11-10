/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c4dda0; name: FUN_01c4dda0
 */


void FUN_01c4dda0(undefined8 *param_1,long *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  
  puVar2 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x140,4);
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
    *(undefined4 *)(puVar2 + 3) = 0x3f800000;
    *(undefined4 *)(puVar2 + 0xb) = 0x3f800000;
    *(undefined4 *)(puVar2 + 0xf) = 0x3f800000;
    *(undefined4 *)(puVar2 + 0x13) = 0x3f800000;
    *(undefined4 *)(puVar2 + 0x17) = 0x3f800000;
    *(undefined4 *)(puVar2 + 0x1b) = 0x3f800000;
    *(undefined4 *)(puVar2 + 0x1f) = 0x3f800000;
    *(undefined4 *)(puVar2 + 0x23) = 0x3f800000;
    *(undefined4 *)(puVar2 + 0x27) = 0x3f800000;
    *(undefined2 *)((long)puVar2 + 0x1c) = 0x100;
    *(undefined2 *)((long)puVar2 + 0x3c) = 0x100;
    *(undefined4 *)(puVar2 + 7) = 0x3f800000;
    *(undefined2 *)((long)puVar2 + 0x5c) = 0x100;
    *(undefined2 *)((long)puVar2 + 0x7c) = 0x100;
    *(undefined2 *)((long)puVar2 + 0x9c) = 0x100;
    *(undefined2 *)((long)puVar2 + 0xbc) = 0x100;
    *(undefined2 *)((long)puVar2 + 0xdc) = 0x100;
    *(undefined2 *)((long)puVar2 + 0xfc) = 0x100;
    *(undefined2 *)((long)puVar2 + 0x11c) = 0x100;
    *(undefined2 *)((long)puVar2 + 0x13c) = 0x100;
    *(undefined1 *)((long)puVar2 + 0x1e) = 0;
    puVar2[2] = 0;
    *(undefined1 *)((long)puVar2 + 0x3e) = 0;
    puVar2[6] = 0;
    *(undefined1 *)((long)puVar2 + 0x5e) = 0;
    puVar2[10] = 0;
    *(undefined1 *)((long)puVar2 + 0x7e) = 0;
    puVar2[0xc] = 0;
    *(undefined1 *)((long)puVar2 + 0x9e) = 0;
    puVar2[0x12] = 0;
    *(undefined1 *)((long)puVar2 + 0xbe) = 0;
    puVar2[0x16] = 0;
    *(undefined1 *)((long)puVar2 + 0xde) = 0;
    puVar2[0x18] = 0;
    *(undefined1 *)((long)puVar2 + 0xfe) = 0;
    puVar2[0x1c] = 0;
    *(undefined1 *)((long)puVar2 + 0x11e) = 0;
    puVar2[0x20] = 0;
    *(undefined1 *)((long)puVar2 + 0x13e) = 0;
    puVar2[0x24] = 0;
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2[0xd] = 0;
    puVar2[0xe] = 0;
    puVar2[0x10] = 0;
    puVar2[0x11] = 0;
    puVar2[0x14] = 0;
    puVar2[0x15] = 0;
    puVar2[0x19] = 0;
    puVar2[0x1a] = 0;
    puVar2[0x1d] = 0;
    puVar2[0x1e] = 0;
    puVar2[0x21] = 0;
    puVar2[0x22] = 0;
    puVar2[0x25] = 0;
    puVar2[0x26] = 0;
    *param_1 = puVar2;
    param_1[1] = param_2;
    param_1[2] = 0x140;
    param_1[3] = 4;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  }
  return;
}


