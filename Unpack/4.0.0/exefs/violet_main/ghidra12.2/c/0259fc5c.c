/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0259fc5c; name: FUN_0259fc5c
 */


void FUN_0259fc5c(undefined8 param_1,byte *param_2)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  cVar2 = DAT_048520a0;
  if ((((1 < *param_2) ||
       (puVar4 = *(undefined8 **)(param_2 + 8), *(undefined8 **)(param_2 + 8) == (undefined8 *)0x0))
      && (puVar4 = (undefined8 *)PTR_DAT_047d5150, (*PTR_DAT_047d5148 & 1) == 0)) &&
     (iVar3 = __cxa_guard_acquire(PTR_DAT_047d5148), puVar4 = (undefined8 *)PTR_DAT_047d5150,
     iVar3 != 0)) {
    *(undefined8 *)(PTR_DAT_047d5150 + 0x30) = 0;
    *(undefined8 *)((long)puVar4 + 0x38) = 0;
    *(undefined8 *)((long)puVar4 + 0x20) = 0;
    *(undefined8 *)((long)puVar4 + 0x28) = 0;
    *(undefined8 *)((long)puVar4 + 0x10) = 0;
    *(undefined8 *)((long)puVar4 + 0x18) = 0;
    *puVar4 = 0;
    *(undefined8 *)((long)puVar4 + 8) = 0;
    __cxa_guard_release(PTR_DAT_047d5148);
  }
  uStack_58 = puVar4[1];
  local_60 = *puVar4;
  uStack_48 = puVar4[3];
  uStack_50 = puVar4[2];
  uStack_38 = puVar4[5];
  local_40 = puVar4[4];
  uStack_28 = puVar4[7];
  uStack_30 = puVar4[6];
  puVar1 = PTR_LAB_047de9c8;
  if (cVar2 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  FUN_025a2f00(param_1,puVar1,0,&local_60);
  return;
}


