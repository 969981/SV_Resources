/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01bd6500; name: FUN_01bd6500
 */


undefined8 FUN_01bd6500(long *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if ((*param_1 != 0) && (puVar3 = *(undefined8 **)(*param_1 + 8), puVar3 != (undefined8 *)0x0)) {
    puVar4 = (undefined8 *)PTR_DAT_047d5648;
    if (((*PTR_DAT_047d5640 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_047d5640), puVar4 = (undefined8 *)PTR_DAT_047d5648,
       iVar1 != 0)) {
      uVar2 = FUN_01bd65a8();
      *(undefined8 *)PTR_DAT_047d5648 = uVar2;
      __cxa_guard_release(PTR_DAT_047d5640);
      puVar4 = (undefined8 *)PTR_DAT_047d5648;
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


