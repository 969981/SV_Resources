/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02661e4c; name: FUN_02661e4c
 */


void FUN_02661e4c(undefined8 param_1,byte *param_2)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  undefined *puVar4;
  
  cVar2 = DAT_048559d0;
  if ((((1 < *param_2) ||
       (puVar4 = *(undefined **)(param_2 + 8), *(undefined **)(param_2 + 8) == (undefined *)0x0)) &&
      (puVar4 = PTR_DAT_047d3c20, (*PTR_DAT_047d3c18 & 1) == 0)) &&
     (iVar3 = __cxa_guard_acquire(PTR_DAT_047d3c18), puVar4 = PTR_DAT_047d3c20, iVar3 != 0)) {
    *(undefined8 *)PTR_DAT_047d3c20 = 0;
    *(undefined8 *)(puVar4 + 8) = 0;
    __cxa_guard_release(PTR_DAT_047d3c18);
  }
  puVar1 = PTR_FUN_047e0530;
  if (cVar2 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  FUN_026646e8(param_1,puVar1,0,puVar4);
  return;
}


