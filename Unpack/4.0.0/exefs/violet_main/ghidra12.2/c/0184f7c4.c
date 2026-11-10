/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0184f7c4; name: FUN_0184f7c4
 */


void FUN_0184f7c4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  void *__src;
  undefined1 auStack_738 [1800];
  
  uVar1 = 0x50;
  if (DAT_0481b808 == '\0') {
    uVar1 = 0xffffffffffffffff;
  }
  __src = (void *)FUN_0184f9a0(param_2);
  memcpy(auStack_738,__src,0x708);
  FUN_0184f82c(param_1,uVar1,auStack_738);
  return;
}


