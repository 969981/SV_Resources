/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 025ecc80; name: FUN_025ecc80
 */


undefined8 FUN_025ecc80(undefined8 param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  float fVar4;
  
  uVar3 = FUN_01dab6d0(param_1,1);
  if ((DAT_04853dd8 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_04853dd8);
    if (iVar2 != 0) {
      DAT_04853e98 = '\x01';
      __cxa_guard_release(&DAT_04853dd8);
    }
  }
  puVar1 = PTR_LAB_047d85e8;
  if (DAT_04853e98 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  fVar4 = (float)FUN_025ecd28(uVar3,puVar1,0);
  FUN_00c46da0((double)fVar4,param_1);
  return 1;
}


