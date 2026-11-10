/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 024d72c4; name: FUN_024d72c4
 */


void FUN_024d72c4(undefined8 param_1,byte *param_2)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  cVar2 = DAT_0484f068;
  if ((1 < *param_2) ||
     (puVar4 = *(undefined8 **)(param_2 + 8), *(undefined8 **)(param_2 + 8) == (undefined8 *)0x0)) {
    if ((*PTR_DAT_047d7bc0 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(PTR_DAT_047d7bc0);
      puVar4 = (undefined8 *)PTR_DAT_047d7bc8;
      if (iVar3 != 0) {
        *(undefined8 *)(PTR_DAT_047d7bc8 + 0x10) = 0;
        *(undefined8 *)((long)puVar4 + 0x18) = 0;
        *puVar4 = 0;
        *(undefined8 *)((long)puVar4 + 8) = 0;
        __cxa_guard_release(PTR_DAT_047d7bc0);
      }
    }
    else {
      puVar4 = (undefined8 *)PTR_DAT_047d7bc8;
    }
  }
  local_28 = puVar4[3];
  puVar1 = PTR_FUN_047def98;
  if (cVar2 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  local_38 = puVar4[1];
  local_40 = *puVar4;
  uStack_30 = puVar4[2];
  FUN_024da5dc(param_1,puVar1,0,&local_40);
  return;
}


