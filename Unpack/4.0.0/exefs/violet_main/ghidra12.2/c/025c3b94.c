/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 025c3b94; name: FUN_025c3b94
 */


uint FUN_025c3b94(double param_1,undefined8 param_2,byte *param_3)

{
  undefined1 *puVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  float local_4;
  
  cVar2 = DAT_04853798;
  if ((((1 < *param_3) ||
       (puVar5 = *(undefined8 **)(param_3 + 8), *(undefined8 **)(param_3 + 8) == (undefined8 *)0x0))
      && (puVar5 = (undefined8 *)PTR_DAT_047d5150, (*PTR_DAT_047d5148 & 1) == 0)) &&
     (iVar4 = __cxa_guard_acquire(PTR_DAT_047d5148), puVar5 = (undefined8 *)PTR_DAT_047d5150,
     iVar4 != 0)) {
    *(undefined8 *)(PTR_DAT_047d5150 + 0x30) = 0;
    *(undefined8 *)((long)puVar5 + 0x38) = 0;
    *(undefined8 *)((long)puVar5 + 0x20) = 0;
    *(undefined8 *)((long)puVar5 + 0x28) = 0;
    *(undefined8 *)((long)puVar5 + 0x10) = 0;
    *(undefined8 *)((long)puVar5 + 0x18) = 0;
    *puVar5 = 0;
    *(undefined8 *)((long)puVar5 + 8) = 0;
    __cxa_guard_release(PTR_DAT_047d5148);
  }
  uStack_58 = puVar5[1];
  local_60 = *puVar5;
  uStack_48 = puVar5[3];
  uStack_50 = puVar5[2];
  local_4 = (float)param_1;
  uStack_38 = puVar5[5];
  local_40 = puVar5[4];
  uStack_28 = puVar5[7];
  uStack_30 = puVar5[6];
  puVar1 = &LAB_025cd418;
  if (cVar2 == '\0') {
    puVar1 = (undefined1 *)0x0;
  }
  uVar3 = FUN_025cd5e0(param_2,puVar1,0,&local_60,&local_4);
  return uVar3 & 1;
}


