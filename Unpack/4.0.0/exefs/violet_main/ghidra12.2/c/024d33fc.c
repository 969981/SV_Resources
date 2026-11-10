/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 024d33fc; name: FUN_024d33fc
 */


uint FUN_024d33fc(undefined8 param_1,undefined8 param_2,byte *param_3,byte param_4)

{
  undefined *puVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 local_50 [2];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  byte local_4 [4];
  
  cVar2 = DAT_0484f058;
  if ((1 < *param_3) ||
     (puVar5 = *(undefined8 **)(param_3 + 8), *(undefined8 **)(param_3 + 8) == (undefined8 *)0x0)) {
    if ((*PTR_DAT_047d7bc0 & 1) == 0) {
      iVar4 = __cxa_guard_acquire(PTR_DAT_047d7bc0);
      puVar5 = (undefined8 *)PTR_DAT_047d7bc8;
      if (iVar4 != 0) {
        *(undefined8 *)(PTR_DAT_047d7bc8 + 0x10) = 0;
        *(undefined8 *)((long)puVar5 + 0x18) = 0;
        *puVar5 = 0;
        *(undefined8 *)((long)puVar5 + 8) = 0;
        __cxa_guard_release(PTR_DAT_047d7bc0);
      }
    }
    else {
      puVar5 = (undefined8 *)PTR_DAT_047d7bc8;
    }
  }
  local_28 = puVar5[3];
  local_4[0] = param_4 & 1;
  local_38 = puVar5[1];
  local_40 = *puVar5;
  local_30 = puVar5[2];
  puVar1 = PTR_LAB_047def88;
  if (cVar2 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  local_50[0] = param_1;
  uVar3 = FUN_024d9d04(param_2,puVar1,0,&local_40,local_50,local_4);
  return uVar3 & 1;
}


