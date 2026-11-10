/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0251780c; name: FUN_0251780c
 */


undefined1  [16] FUN_0251780c(byte *param_1,byte *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  float fVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  if ((((1 < *param_1) ||
       (puVar2 = *(undefined8 **)(param_1 + 8), *(undefined8 **)(param_1 + 8) == (undefined8 *)0x0))
      && (puVar2 = (undefined8 *)PTR_DAT_047d3c20, (*PTR_DAT_047d3c18 & 1) == 0)) &&
     (iVar1 = __cxa_guard_acquire(PTR_DAT_047d3c18), puVar2 = (undefined8 *)PTR_DAT_047d3c20,
     iVar1 != 0)) {
    *(undefined8 *)PTR_DAT_047d3c20 = 0;
    *(undefined8 *)((long)puVar2 + 8) = 0;
    __cxa_guard_release(PTR_DAT_047d3c18);
  }
  uVar4 = *puVar2;
  if (((1 < *param_2) ||
      (puVar2 = *(undefined8 **)(param_2 + 8), *(undefined8 **)(param_2 + 8) == (undefined8 *)0x0))
     && ((puVar2 = (undefined8 *)PTR_DAT_047d3c20, (*PTR_DAT_047d3c18 & 1) == 0 &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_047d3c18), puVar2 = (undefined8 *)PTR_DAT_047d3c20,
         iVar1 != 0)))) {
    *(undefined8 *)PTR_DAT_047d3c20 = 0;
    *(undefined8 *)((long)puVar2 + 8) = 0;
    __cxa_guard_release(PTR_DAT_047d3c18);
  }
  fVar3 = (float)FUN_02517fe0(uVar4,*puVar2);
  auVar5._0_8_ = (double)fVar3;
  auVar5._8_8_ = 0;
  return auVar5;
}


