/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 024d2dfc; name: FUN_024d2dfc
 */


uint FUN_024d2dfc(undefined8 param_1,byte *param_2,byte param_3)

{
  undefined *puVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  byte local_4 [4];
  
  cVar2 = DAT_0484f040;
  if ((1 < *param_2) ||
     (puVar5 = *(undefined8 **)(param_2 + 8), *(undefined8 **)(param_2 + 8) == (undefined8 *)0x0)) {
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
  puVar1 = PTR_FUN_047def70;
  if (cVar2 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  local_38 = puVar5[1];
  local_40 = *puVar5;
  uStack_30 = puVar5[2];
  local_4[0] = param_3 & 1;
  uVar3 = FUN_024d9b48(param_1,puVar1,0,&local_40,local_4);
  return uVar3 & 1;
}


