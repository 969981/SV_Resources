/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0236107c; name: FUN_0236107c
 */


void FUN_0236107c(undefined8 param_1,byte *param_2)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 local_30;
  undefined8 uStack_28;
  
  cVar2 = DAT_04849168;
  if ((((1 < *param_2) ||
       (puVar4 = *(undefined8 **)(param_2 + 8), *(undefined8 **)(param_2 + 8) == (undefined8 *)0x0))
      && (puVar4 = (undefined8 *)PTR_DAT_047d3c20, (*PTR_DAT_047d3c18 & 1) == 0)) &&
     (iVar3 = __cxa_guard_acquire(PTR_DAT_047d3c18), puVar4 = (undefined8 *)PTR_DAT_047d3c20,
     iVar3 != 0)) {
    *(undefined8 *)PTR_DAT_047d3c20 = 0;
    *(undefined8 *)((long)puVar4 + 8) = 0;
    __cxa_guard_release(PTR_DAT_047d3c18);
  }
  uStack_28 = puVar4[1];
  local_30 = *puVar4;
  puVar1 = PTR_FUN_047de9d8;
  if (cVar2 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  FUN_0236393c(param_1,puVar1,0,&local_30);
  return;
}


