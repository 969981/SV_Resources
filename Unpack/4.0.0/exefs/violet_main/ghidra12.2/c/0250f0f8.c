/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0250f0f8; name: FUN_0250f0f8
 */


undefined1  [16] FUN_0250f0f8(undefined8 param_1,byte *param_2)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  float fVar5;
  undefined1 auVar6 [16];
  undefined8 local_30;
  undefined8 uStack_28;
  
  cVar2 = DAT_0484f250;
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
  puVar1 = &LAB_02b9ecd0;
  if (cVar2 == '\0') {
    puVar1 = (undefined1 *)0x0;
  }
  fVar5 = (float)FUN_02517ab4(param_1,puVar1,0,&local_30);
  auVar6._0_8_ = (double)fVar5;
  auVar6._8_8_ = 0;
  return auVar6;
}


