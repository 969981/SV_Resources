/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f74f1c; name: FUN_00f74f1c
 */


void FUN_00f74f1c(undefined1 *param_1,double param_2,undefined8 *param_3,byte *param_4,byte *param_5
                 )

{
  int iVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 local_30 [16];
  
  pcVar2 = (code *)*param_3;
  if ((((1 < *param_4) ||
       (puVar3 = *(undefined8 **)(param_4 + 8), *(undefined8 **)(param_4 + 8) == (undefined8 *)0x0))
      && (puVar3 = (undefined8 *)PTR_DAT_047d3c20, (*PTR_DAT_047d3c18 & 1) == 0)) &&
     (iVar1 = __cxa_guard_acquire(PTR_DAT_047d3c18), puVar3 = (undefined8 *)PTR_DAT_047d3c20,
     iVar1 != 0)) {
    *(undefined8 *)PTR_DAT_047d3c20 = 0;
    *(undefined8 *)((long)puVar3 + 8) = 0;
    __cxa_guard_release(PTR_DAT_047d3c18);
  }
  uVar4 = *puVar3;
  if (((1 < *param_5) ||
      (puVar3 = *(undefined8 **)(param_5 + 8), *(undefined8 **)(param_5 + 8) == (undefined8 *)0x0))
     && ((puVar3 = (undefined8 *)PTR_DAT_047d3c20, (*PTR_DAT_047d3c18 & 1) == 0 &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_047d3c18), puVar3 = (undefined8 *)PTR_DAT_047d3c20,
         iVar1 != 0)))) {
    *(undefined8 *)PTR_DAT_047d3c20 = 0;
    *(undefined8 *)((long)puVar3 + 8) = 0;
    __cxa_guard_release(PTR_DAT_047d3c18);
  }
  local_30 = (*pcVar2)(uVar4,*puVar3,(float)param_2);
  *param_1 = 1;
  FUN_00d200a4(param_1 + 8,local_30);
  return;
}


