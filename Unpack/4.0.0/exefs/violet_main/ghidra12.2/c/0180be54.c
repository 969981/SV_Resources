/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0180be54; name: FUN_0180be54
 */


undefined8 FUN_0180be54(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar4 = *(undefined8 **)(param_1 + 8);
  if (puVar4 != (undefined8 *)0x0) {
    puVar5 = (undefined8 *)PTR_DAT_047dd090;
    if (((*PTR_DAT_047dd088 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_047dd088), puVar1 = PTR_DAT_047d9018,
       puVar5 = (undefined8 *)PTR_DAT_047dd090, iVar2 != 0)) {
      if (((*PTR_DAT_047d9010 & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(PTR_DAT_047d9010), iVar2 != 0)) {
        uVar3 = FUN_00ea2d24();
        *(undefined8 *)puVar1 = uVar3;
        __cxa_guard_release(PTR_DAT_047d9010);
      }
      puVar5 = (undefined8 *)PTR_DAT_047dd090;
      *(undefined **)PTR_DAT_047dd090 = puVar1;
      __cxa_guard_release(PTR_DAT_047dd088);
    }
    do {
      if (puVar4 == puVar5) {
        return 1;
      }
      puVar4 = (undefined8 *)*puVar4;
    } while (puVar4 != (undefined8 *)0x0);
  }
  return 0;
}


