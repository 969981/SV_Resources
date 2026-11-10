/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 022fb554; name: FUN_022fb554
 */


undefined8 FUN_022fb554(long *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if ((*param_1 != 0) && (puVar3 = *(undefined8 **)(*param_1 + 8), puVar3 != (undefined8 *)0x0)) {
    puVar4 = (undefined8 *)PTR_DAT_047d9278;
    if (((*PTR_DAT_047d9270 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_047d9270), puVar4 = (undefined8 *)PTR_DAT_047d9278,
       iVar1 != 0)) {
      uVar2 = FUN_01e19d1c();
      *(undefined8 *)PTR_DAT_047d9278 = uVar2;
      __cxa_guard_release(PTR_DAT_047d9270);
      puVar4 = (undefined8 *)PTR_DAT_047d9278;
    }
    do {
      if (puVar3 == puVar4) {
        return 1;
      }
      puVar3 = (undefined8 *)*puVar3;
    } while (puVar3 != (undefined8 *)0x0);
  }
  return 0;
}


