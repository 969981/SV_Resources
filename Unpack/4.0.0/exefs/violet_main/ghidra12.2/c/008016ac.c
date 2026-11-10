/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008016ac; name: FUN_008016ac
 */


void FUN_008016ac(long param_1)

{
  long lVar1;
  long lVar2;
  
  FUN_0079841c();
  lVar1 = 0;
  *(undefined1 *)(param_1 + 0xe0) = 0;
  lVar2 = param_1;
  do {
    *(undefined2 *)(lVar2 + 0xe1) = 0;
    lVar1 = lVar1 + 4;
    *(undefined1 *)(lVar2 + 0xe3) = 0;
    lVar2 = param_1 + lVar1;
    *(undefined1 *)(lVar2 + 0xe0) = 0;
  } while (lVar1 != 0x100);
  *(undefined8 *)(param_1 + 0xcc) = 0;
  memset((void *)(param_1 + 0x1e8),0,0x200);
  *(undefined4 *)(param_1 + 0x28) = 0;
  return;
}


