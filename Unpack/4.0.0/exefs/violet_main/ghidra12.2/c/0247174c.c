/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0247174c; name: FUN_0247174c
 */


void FUN_0247174c(undefined8 param_1,double param_2,byte *param_3,undefined4 param_4,
                 undefined4 param_5,byte *param_6)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if ((((1 < *param_3) ||
       (puVar2 = *(undefined8 **)(param_3 + 8), *(undefined8 **)(param_3 + 8) == (undefined8 *)0x0))
      && (puVar2 = (undefined8 *)PTR_DAT_047d3c20, (*PTR_DAT_047d3c18 & 1) == 0)) &&
     (iVar1 = __cxa_guard_acquire(PTR_DAT_047d3c18), puVar2 = (undefined8 *)PTR_DAT_047d3c20,
     iVar1 != 0)) {
    *(undefined8 *)PTR_DAT_047d3c20 = 0;
    *(undefined8 *)((long)puVar2 + 8) = 0;
    __cxa_guard_release(PTR_DAT_047d3c18);
  }
  uVar3 = *puVar2;
  if (((1 < *param_6) ||
      (puVar2 = *(undefined8 **)(param_6 + 8), *(undefined8 **)(param_6 + 8) == (undefined8 *)0x0))
     && ((puVar2 = (undefined8 *)PTR_DAT_047d5150, (*PTR_DAT_047d5148 & 1) == 0 &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_047d5148), puVar2 = (undefined8 *)PTR_DAT_047d5150,
         iVar1 != 0)))) {
    *(undefined8 *)(PTR_DAT_047d5150 + 0x30) = 0;
    *(undefined8 *)((long)puVar2 + 0x38) = 0;
    *(undefined8 *)((long)puVar2 + 0x20) = 0;
    *(undefined8 *)((long)puVar2 + 0x28) = 0;
    *(undefined8 *)((long)puVar2 + 0x10) = 0;
    *(undefined8 *)((long)puVar2 + 0x18) = 0;
    *puVar2 = 0;
    *(undefined8 *)((long)puVar2 + 8) = 0;
    __cxa_guard_release(PTR_DAT_047d5148);
  }
  FUN_01f9adc0(param_1,(float)param_2,uVar3,*puVar2,puVar2[2],puVar2[4],puVar2[6],param_4,param_5);
  return;
}


