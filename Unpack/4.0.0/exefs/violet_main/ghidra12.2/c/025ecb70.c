/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 025ecb70; name: FUN_025ecb70
 */


undefined8 FUN_025ecb70(undefined8 param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  double dVar4;
  float local_24;
  
  uVar3 = FUN_01dab6d0(param_1,1);
  dVar4 = (double)FUN_00c41790(param_1,2,0);
  if ((DAT_04853dd0 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_04853dd0);
    if (iVar2 != 0) {
      DAT_04853e90 = '\x01';
      __cxa_guard_release(&DAT_04853dd0);
    }
  }
  local_24 = (float)dVar4;
  puVar1 = PTR_LAB_047d85e0;
  if (DAT_04853e90 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  FUN_025ecc28(uVar3,puVar1,0,&local_24);
  return 0;
}


