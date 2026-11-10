/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 005021d4; name: thunk_FUN_005021d8
 */


undefined8 * thunk_FUN_005021d8(void)

{
  int iVar1;
  undefined8 *puVar2;
  
  if (((DAT_047f50d8 & 1) != 0) || (iVar1 = __cxa_guard_acquire(&DAT_047f50d8), iVar1 == 0)) {
    return DAT_047f50d0;
  }
  puVar2 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x78);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[1] = 0;
    *puVar2 = 0;
    puVar2[3] = 0;
    puVar2[2] = 0;
    *puVar2 = &PTR_FUN_044c64e8;
    puVar2[0xe] = 0;
    *(undefined4 *)(puVar2 + 0xe) = 0x3f800000;
    puVar2[2] = 0;
    puVar2[1] = 0;
    puVar2[9] = 0;
    puVar2[8] = 0;
    puVar2[5] = 0;
    puVar2[4] = 0;
    puVar2[7] = 0;
    puVar2[6] = 0;
    *(undefined4 *)(puVar2 + 5) = 0x3f800000;
    *(undefined2 *)(puVar2 + 6) = 1;
    *(undefined1 *)((long)puVar2 + 0x32) = 0;
    puVar2[4] = 0;
    puVar2[3] = 0;
    puVar2[0xb] = 0;
    puVar2[10] = 0;
    puVar2[0xd] = 0;
    puVar2[0xc] = 0;
  }
  FUN_0052d820(FUN_0050263c,puVar2);
  DAT_047f50d0 = puVar2;
  __cxa_guard_release(&DAT_047f50d8);
  return DAT_047f50d0;
}


