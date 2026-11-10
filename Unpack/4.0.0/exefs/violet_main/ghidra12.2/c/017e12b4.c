/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017e12b4; name: FUN_017e12b4
 */


undefined8 FUN_017e12b4(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_c0 [144];
  
  lVar1 = FUN_017e15e0(param_1 + 0x488);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    memcpy(auStack_c0,(void *)(lVar1 + 0x20),0x90);
    *(undefined8 *)(param_1 + 0x480) = *param_2;
    if (*(long *)(param_1 + 0x4f0) != 0) {
      FUN_017e134c(*(long *)(param_1 + 0x4f0),param_2);
    }
    FUN_017e1388(param_1,auStack_c0);
    uVar2 = 1;
  }
  return uVar2;
}


