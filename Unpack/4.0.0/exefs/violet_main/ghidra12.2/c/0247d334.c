/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0247d334; name: FUN_0247d334
 */


void FUN_0247d334(undefined8 param_1,byte *param_2)

{
  undefined8 uVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 local_30;
  undefined8 uStack_28;
  
  uVar3 = DAT_0484c1e0;
  cVar2 = DAT_0484c1d8;
  if ((((1 < *param_2) ||
       (puVar5 = *(undefined8 **)(param_2 + 8), *(undefined8 **)(param_2 + 8) == (undefined8 *)0x0))
      && (puVar5 = (undefined8 *)PTR_DAT_047d3c20, (*PTR_DAT_047d3c18 & 1) == 0)) &&
     (iVar4 = __cxa_guard_acquire(PTR_DAT_047d3c18), puVar5 = (undefined8 *)PTR_DAT_047d3c20,
     iVar4 != 0)) {
    *(undefined8 *)PTR_DAT_047d3c20 = 0;
    *(undefined8 *)((long)puVar5 + 8) = 0;
    __cxa_guard_release(PTR_DAT_047d3c18);
  }
  uStack_28 = puVar5[1];
  local_30 = *puVar5;
  uVar1 = 0xa0;
  if (cVar2 == '\0') {
    uVar1 = 0;
  }
  FUN_0247e508(param_1,uVar1,uVar3,&local_30);
  return;
}


