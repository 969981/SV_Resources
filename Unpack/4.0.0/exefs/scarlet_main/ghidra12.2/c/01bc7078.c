/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01bc7078; name: FUN_01bc7078
 */


undefined8 * FUN_01bc7078(byte *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  if ((1 < *param_1) || (puVar2 = *(undefined8 **)(param_1 + 8), puVar2 == (undefined8 *)0x0)) {
    if ((DAT_0480d950 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_0480d950);
      if (iVar1 == 0) {
        puVar2 = &DAT_0480d908;
      }
      else {
        DAT_0480d908 = 0x200000001;
        DAT_0480d910 = 0x3d23d70a3e23d70a;
        DAT_0480d918 = 0x3c23d70a;
        DAT_0480d91c = FUN_01728cf0(1,6);
        DAT_0480d920 = 0x8a442895aff72141;
        DAT_0480d928 = "CameraInfluence";
        DAT_0480d930 = 0xf;
        DAT_0480d938 = 0x9f708d66d453f25;
        DAT_0480d940 = "IgnoreCollision";
        DAT_0480d948 = 0xf;
        __cxa_guard_release(&DAT_0480d950);
        puVar2 = &DAT_0480d908;
      }
    }
    else {
      puVar2 = &DAT_0480d908;
    }
  }
  return puVar2;
}


