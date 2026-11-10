/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0228dc3c; name: FUN_0228dc3c
 */


undefined1  [16] FUN_0228dc3c(undefined8 param_1,byte *param_2)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined *puVar4;
  float fVar5;
  undefined1 auVar6 [16];
  
  cVar2 = DAT_04843b68;
  if ((((1 < *param_2) ||
       (puVar4 = *(undefined **)(param_2 + 8), *(undefined **)(param_2 + 8) == (undefined *)0x0)) &&
      (puVar4 = PTR_DAT_047d3ba0, (*PTR_DAT_047d3b98 & 1) == 0)) &&
     (iVar3 = __cxa_guard_acquire(PTR_DAT_047d3b98), puVar4 = PTR_DAT_047d3ba0, iVar3 != 0)) {
    *(undefined8 *)PTR_DAT_047d3ba0 = 0;
    __cxa_guard_release(PTR_DAT_047d3b98);
  }
  puVar1 = &LAB_0228e490;
  if (cVar2 == '\0') {
    puVar1 = (undefined1 *)0x0;
  }
  fVar5 = (float)FUN_0228e498(param_1,puVar1,0,puVar4);
  auVar6._0_8_ = (double)fVar5;
  auVar6._8_8_ = 0;
  return auVar6;
}


