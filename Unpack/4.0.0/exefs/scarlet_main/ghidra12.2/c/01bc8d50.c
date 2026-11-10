/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01bc8d50; name: FUN_01bc8d50
 */


undefined8 * FUN_01bc8d50(byte *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  if ((1 < *param_1) || (puVar2 = *(undefined8 **)(param_1 + 8), puVar2 == (undefined8 *)0x0)) {
    if ((DAT_0480da20 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_0480da20);
      if (iVar1 == 0) {
        puVar2 = &DAT_0480d9c8;
      }
      else {
        DAT_0480d9d0 = 0;
        DAT_0480d9d8 = 0x200000001;
        DAT_0480d9e0 = 0x3d23d70a3e23d70a;
        DAT_0480d9c8 = 0x101010101010101;
        DAT_0480d9e8 = 0x3c23d70a;
        DAT_0480d9ec = FUN_01728cf0(1,6);
        DAT_0480d9f0 = 0x8a442895aff72141;
        DAT_0480d9f8 = "CameraInfluence";
        DAT_0480da00 = 0xf;
        DAT_0480da08 = 0x9f708d66d453f25;
        DAT_0480da10 = "IgnoreCollision";
        DAT_0480da18 = 0xf;
        __cxa_guard_release(&DAT_0480da20);
        puVar2 = &DAT_0480d9c8;
      }
    }
    else {
      puVar2 = &DAT_0480d9c8;
    }
  }
  return puVar2;
}


