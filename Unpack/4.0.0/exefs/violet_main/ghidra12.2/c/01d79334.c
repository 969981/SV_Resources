/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01d79334; name: FUN_01d79334
 */


void FUN_01d79334(undefined8 param_1,undefined8 param_2,byte *param_3)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30 [2];
  
  cVar2 = DAT_04832200;
  local_30[0] = param_1;
  if ((((1 < *param_3) ||
       (puVar4 = *(undefined8 **)(param_3 + 8), *(undefined8 **)(param_3 + 8) == (undefined8 *)0x0))
      && (puVar4 = (undefined8 *)PTR_DAT_047d3c20, (*PTR_DAT_047d3c18 & 1) == 0)) &&
     (iVar3 = __cxa_guard_acquire(PTR_DAT_047d3c18), puVar4 = (undefined8 *)PTR_DAT_047d3c20,
     iVar3 != 0)) {
    *(undefined8 *)PTR_DAT_047d3c20 = 0;
    *(undefined8 *)((long)puVar4 + 8) = 0;
    __cxa_guard_release(PTR_DAT_047d3c18);
  }
  uStack_38 = puVar4[1];
  local_40 = *puVar4;
  puVar1 = PTR_FUN_047d7f80;
  if (cVar2 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  FUN_01d7af44(param_2,puVar1,0,local_30,&local_40);
  return;
}


