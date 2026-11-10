/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f78efc; name: FUN_01f78efc
 */


void FUN_01f78efc(long param_1)

{
  long *plVar1;
  ulong uVar2;
  uint local_260 [2];
  byte local_258;
  undefined7 uStack_257;
  undefined8 local_248;
  long *plStack_240;
  char local_238;
  undefined1 auStack_230 [8];
  undefined8 local_228;
  undefined1 auStack_210 [480];
  
  plVar1 = *(long **)(param_1 + 0x50);
  if ((plVar1 != (long *)0x0) && (uVar2 = (**(code **)(*plVar1 + 0x20))(), (uVar2 & 1) != 0)) {
    FUN_01f78fd4(local_260,(long *)(param_1 + 0x50));
    uVar2 = FUN_01f79040(local_260);
    if (*(char *)(param_1 + 0x40) == '\0') {
      uVar2 = uVar2 & 0xffffffff | (ulong)local_260[0] << 0x20;
      *(undefined1 *)(param_1 + 0x40) = 1;
    }
    else {
      uVar2 = uVar2 & 0xffffffff | (ulong)local_260[0] << 0x20;
    }
    *(ulong *)(param_1 + 0x44) = uVar2;
    if (local_260[0] == 0) {
      FUN_01f7908c(param_1 + 0x60,auStack_210);
    }
    FUN_01cfa274(auStack_210);
    if (local_238 != '\0') {
      FUN_01cfa44c(auStack_230,local_228);
    }
    if ((local_258 & 1) != 0) {
      (**(code **)(*plStack_240 + 0x18))
                (plStack_240,local_248,CONCAT71(uStack_257,local_258) & 0xfffffffffffffffe,1);
    }
  }
  return;
}


