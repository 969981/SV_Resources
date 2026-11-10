/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 025151f0; name: FUN_025151f0
 */


void FUN_025151f0(undefined1 *param_1,byte *param_2,byte *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 local_30 [16];
  
  if ((((1 < *param_2) ||
       (puVar2 = *(undefined8 **)(param_2 + 8), *(undefined8 **)(param_2 + 8) == (undefined8 *)0x0))
      && (puVar2 = (undefined8 *)PTR_DAT_047d3c20, (*PTR_DAT_047d3c18 & 1) == 0)) &&
     (iVar1 = __cxa_guard_acquire(PTR_DAT_047d3c18), puVar2 = (undefined8 *)PTR_DAT_047d3c20,
     iVar1 != 0)) {
    *(undefined8 *)PTR_DAT_047d3c20 = 0;
    *(undefined8 *)((long)puVar2 + 8) = 0;
    __cxa_guard_release(PTR_DAT_047d3c18);
  }
  uVar3 = *puVar2;
  if (((1 < *param_3) ||
      (puVar2 = *(undefined8 **)(param_3 + 8), *(undefined8 **)(param_3 + 8) == (undefined8 *)0x0))
     && ((puVar2 = (undefined8 *)PTR_DAT_047d3c20, (*PTR_DAT_047d3c18 & 1) == 0 &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_047d3c18), puVar2 = (undefined8 *)PTR_DAT_047d3c20,
         iVar1 != 0)))) {
    *(undefined8 *)PTR_DAT_047d3c20 = 0;
    *(undefined8 *)((long)puVar2 + 8) = 0;
    __cxa_guard_release(PTR_DAT_047d3c18);
  }
  local_30 = FUN_02517f18(uVar3,*puVar2);
  *param_1 = 1;
  FUN_00d200a4(param_1 + 8,local_30);
  return;
}


