/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 023366c0; name: FUN_023366c0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_023366c0(undefined8 param_1,byte *param_2,byte *param_3,byte *param_4,undefined4 param_5)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_30 [16];
  
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
  uVar4 = *puVar2;
  if ((1 < *param_4) || (puVar2 = *(undefined8 **)(param_4 + 8), puVar2 == (undefined8 *)0x0)) {
    if ((DAT_04847a10 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_04847a10);
      if (iVar1 != 0) {
        DAT_04847a00 = uRam0000000000000001;
        DAT_04847a08 = _DAT_00000009;
        __cxa_guard_release(&DAT_04847a10);
      }
      puVar2 = &DAT_04847a00;
    }
    else {
      puVar2 = &DAT_04847a00;
    }
  }
  FUN_023390e8(auStack_30,uVar3,uVar4,*puVar2,puVar2[1],param_5);
  FUN_023393b0(param_1,auStack_30);
  FUN_0199ade8(auStack_30);
  return;
}


