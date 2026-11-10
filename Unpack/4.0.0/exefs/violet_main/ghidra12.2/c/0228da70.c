/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0228da70; name: FUN_0228da70
 */


long FUN_0228da70(undefined8 param_1,byte *param_2)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined *puVar4;
  
  cVar2 = DAT_04843b60;
  if ((((1 < *param_2) ||
       (puVar4 = *(undefined **)(param_2 + 8), *(undefined **)(param_2 + 8) == (undefined *)0x0)) &&
      (puVar4 = PTR_DAT_047d3ba0, (*PTR_DAT_047d3b98 & 1) == 0)) &&
     (iVar3 = __cxa_guard_acquire(PTR_DAT_047d3b98), puVar4 = PTR_DAT_047d3ba0, iVar3 != 0)) {
    *(undefined8 *)PTR_DAT_047d3ba0 = 0;
    __cxa_guard_release(PTR_DAT_047d3b98);
  }
  puVar1 = &LAB_0228e44c;
  if (cVar2 == '\0') {
    puVar1 = (undefined1 *)0x0;
  }
  iVar3 = FUN_0228e454(param_1,puVar1,0,puVar4);
  return (long)iVar3;
}


